from imutils import paths #imutils includes opencv functions
import face_recognition
import pickle
import cv2
import os


#get paths of each file in folder named Images
#Images here that contains data(folders of various people)
imagePath = list(paths.list_images('Images'))
kEncodings = []
kNames = []

# loop over the image paths
for (i, ip) in enumerate(imagePath):
# extract the person name from the image path
    name = ip.split(os.path.sep)[-2]
# load the input image and convert it from BGR
image = cv2.imread(ip)
rgb = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)

boxes = face_recognition.face_locations(rgb,model='hog')
# compute the facial embedding for the any face
encodings = face_recognition.face_encodings(rgb, boxes)
# loop over the encodings
for encoding in encodings:
    kEncodings.append(encoding)
    kNames.append(name)

#save emcodings along with their names in dictionary data
data = {"encodings": kEncodings, "names": kNames}
#use pickle to save data into a file for later use
f = open("face_enc", "wb")
f.write(pickle.dumps(data))#to open file in write mode
f.close()#to close file