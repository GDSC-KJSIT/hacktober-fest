import cv2

face_cascade = cv2.CascadeClassifier('haarcascade_frontalface_default.xml')
face_detect = cv2.imread('user4.png')
gray = cv2.cvtColor(face_detect, cv2.COLOR_BGR2GRAY)
faces = face_cascade.detectMultiScale(gray, 1.1, 4)
for (u,v,w,x) in faces:
    cv2.rectangle(img, (u, v), (u+ w, v + x), (255, 0, 0), 2)
cv2.imshow('img', face_detect)
cv2.waitKey()
