import serial
import struct
import time
import sys
import os
import time
import cv2
import threading
import numpy as np
import signal
import json
from ImageConvert import *
import ArducamSDK

ser = serial.Serial('/dev/ttyACM0', 115200)

while True :
    
    command = input()
    
    if (command == "scan"):
        for i in range(4):
        ser.write(bytes('G91\n'))       
        ser.write(bytes('G0 X2\n'))
        time.sleep(0.1)
            
        ser.write(bytes('G0 Y3\n'))
        ser.write(bytes('G0 Z5\n'))
        
        for j in range(4):
        ser.write(bytes('G91\n'))    
        ser.write(bytes('G0 X-2\n'))
        time.sleep(0.1)
        
        ser.write(bytes('G0 Y-3\n'))
        ser.write(bytes('G0 Z-5\n'))
    
    if command == "cam_focus_up":
        ser.write(bytes('cam_focus_up\n')) 
    
    if command == "cam_focus_down":
        ser.write(bytes('cam_focus_down\n')) 
        
    
