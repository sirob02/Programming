import cv2
import numpy as np

print("Package imported")

faceCascade = cv2.CascadeClassifier("res/haarcascades/haarcascade_frontalface_default.xml")

vid = cv2.VideoCapture("vids/kid_480.mov")

while True:

    success, img = vid.read()
    imgGrey = cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
    faces = faceCascade.detectMultiScale(imgGrey,1.3,5)
    for (x,y,w,h) in faces:
        cv2.rectangle(img,(x,y),(x+w,y+h), (255,0,0),2)

    cv2.imshow("Face Recognition", img)
    k = cv2.waitKey(30) & 0xff
    if k == 27:
        break


