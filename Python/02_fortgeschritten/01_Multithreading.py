import threading
import time

class MyThread(threading.Thread):

    def __init__(self,ID):
        threading.Thread.__init__(self)
        self.Id = ID
    
    def run(self):
        LockMe.acquire()
        print("Starte: " + str(self.Id)) 
        print("Beende: " + str(self.Id))
        LockMe.release()

print("Program start")

LockMe = threading.Lock()

threadList = []
for i in range(10):
    threadList.append(MyThread(i))  

for i in range(10):
    threadList[i].start()

print("Program Ende")