import cv2
import os

if __name__ == '__main__':

    curDir = os.curdir  # 获取当前执行python文件的文件夹
    sourceDir = os.path.join(curDir, 'E:\SOTS')#需要修改尺寸的图片所在路径
    contDir = os.path.join(curDir, 'E:\gt')#目标尺寸的图片所在路径
    resultDir = os.path.join(curDir, 'E:\SOTS1')#保存图片所在路径

    sourceimg_list = os.listdir(sourceDir)
    contimg_list = os.listdir(contDir)
    for i,j in zip(sourceimg_list,contimg_list):
        pic_s = cv2.imread(os.path.join(sourceDir, i), cv2.IMREAD_COLOR)
        pic_c = cv2.imread(os.path.join(contDir, j), cv2.IMREAD_COLOR)
        size = pic_c.shape
        pic_n = cv2.resize(pic_s, (size[1],size[0]))
        pic_name = i
        cv2.imwrite(os.path.join(resultDir, i), pic_n)