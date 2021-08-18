//1.可支持操作 基本运算，小数，负数，括号优先。
//2.操作限定 所有运算皆为运算符在两个位数的中间位，如开方运算时，指数在左，底数在右，指数运算时，底数在左，指数在右，log运算时底数在左对数在右
//3.可视化所受限制 由于√和㏒不属于QString类型的编码（latin1）,且settext仅支持QString显示，因此无法编译成功，计算器软件界面无法输出此两种符号，所以拿其他符号进行代替。
#include "mainwindow.h"
#include <QApplication>
#include"solution.h"
#include<QDebug>
#include<vector>
#include<stack>
using namespace std;
void Solution::excute(QString &performlist){
    vector<QString>vstr=change(performlist);
    stack<double>output_list;
    for(QString str:vstr){
        if(str[0].isDigit()){
            output_list.push(str.toDouble());}
        else if(str=="("||str==")"||str==" "){
            performlist="None";
            return;
        }
        else {
            double num1=0;
            num1=output_list.top();
            output_list.pop();
            double num2=0;
            if(!output_list.empty()){
                num2=output_list.top();
                output_list.pop();
            }
            if(str=="+"){
                output_list.push(num2+num1);}
            else if(str=="-"){
                output_list.push(num2-num1);}
            else if(str=="*"){
                output_list.push(num2*num1);}
            else if(str=="/"){
                output_list.push(num2/num1);}
            else if(str=="&"){
                output_list.push(pow(num1,1/num2));}
            else if(str=="^"){
                output_list.push(pow(num2,num1));}
            else if(str=="#"){
                output_list.push(log(num1)/log(num2));}
        }
    }
    performlist=QString::number(output_list.top(),10,4);
}

vector<QString> Solution::change(QString &s){
    vector<QString>orderlist;
    stack<QChar>sign;
    //首位为+、-时则添加0.
    if(s[0]=="-"||s[0]=="+"){
        if(s.size()==1){
            return{" "};
        }
        orderlist.push_back("0");
    }
    for(int i=0;i<s.size();i++){
        if(s[i].isDigit()){
            //若数字前一位为）则不合法。
            if(i>0&&s[i-1]==")"){
                return {" "};
            }
            int local=i;
            while(s[i+1].isDigit()||s[i+1]=="."){
                i++;}
            if(s[i]=="."){
                return {" "};
            }
            orderlist.push_back(s.mid(local,i-local+1));
        }
        else if(s[i]=="+"||s[i]=="-"){
            //若+-符号前一位为运算符号时，则不合法
            if(i>0&&!s[i-1].isDigit()&&s[i-1]!="("&&s[i-1]!=")"){
                return {" "};
            }
            //若+-符号前一位为（，则添加0
            else if(i>0&&s[i-1]=="("){
                orderlist.push_back("0");
            }
            while(!sign.empty()){
                if(sign.top()=="(")break;
                orderlist.push_back(sign.top());
                sign.pop();
            }
            sign.push(s[i]);
        }
        else if(s[i]=="."){
            return {" "};
            }
        else if(s[i]=="*"||s[i]=="/"){
            //若运算符号前一位非数字，则不合法
            if(!s[i-1].isDigit()){
                return {" "};}
            while(!sign.empty()){
                if(sign.top()=="("||sign.top()=="+"||sign.top()=="-")break;
                orderlist.push_back(sign.top());
                sign.pop();
            }
            sign.push(s[i]);
        }
        else if(s[i]=="#"){
            //若运算符号前一位非数字，则不合法
            if(!s[i-1].isDigit()){
                return {" "};
            }
            while(!sign.empty()){
                if(sign.top()=="("||sign.top()=="+"||sign.top()=="-"||sign.top()=="*"||sign.top()=="/")break;
                orderlist.push_back(sign.top());
                sign.pop();
            }
            sign.push(s[i]);
       }
        //&代表开方，^代表指数，#代表log
        else if(s[i]=="&"||s[i]=="^"){
            //若运算符号前一位非数字，则不合法
            if(!s[i-1].isDigit()){
                return {" "};
            }
            while(!sign.empty()){
                if(sign.top()=="("||sign.top()=="+"||sign.top()=="-"||sign.top()=="*"||sign.top()=="/"||sign.top()=="#")break;
                orderlist.push_back(sign.top());
                sign.pop();
            }
            sign.push(s[i]);
       }
        else if(s[i]=="("){
            //若（前一位为数字，则不合法
            if(i>0&&s[i-1].isDigit()){
                return {" "};
            }
            sign.push(s[i]);
        }else if(s[i]==")"){
            //若）前一位非数字，则不合法
            if(!s[i-1].isDigit()&&s[i-1]!=")"){
                return {" "};
            }
            while(!sign.empty()){
                if(sign.top()=="("){
                    sign.pop();
                    break;
                }
                orderlist.push_back(sign.top());
                sign.pop();
            }
        }
    }
    while(!sign.empty()){
        orderlist.push_back(sign.top());
        sign.pop();
    }
    return orderlist;
}
