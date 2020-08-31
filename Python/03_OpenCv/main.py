import cv2

print("package imported")

img = cv2.imread("pics/test.jpg")

cv2.imshow("Output",img)

cv2.waitKey(0)