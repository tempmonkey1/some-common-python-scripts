import cv2
import os

if __name__ == '__main__':

    curDir = os.curdir  # 获取当前执行python文件的文件夹
    sourceDir = os.path.join(curDir, 'XXXXX')#图片所在路径
    resultDir = os.path.join(curDir, 'XXXXX')#保存路径

    img_list = os.listdir(sourceDir)

    for i in img_list:
        pic = cv2.imread(os.path.join(sourceDir, i), cv2.IMREAD_COLOR)
        pic_n = cv2.resize(pic, (640, 480))#修改尺寸
        pic_name = i
        cv2.imwrite(os.path.join(resultDir, i), pic_n)