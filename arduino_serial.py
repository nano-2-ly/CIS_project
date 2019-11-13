import serial
import struct
import time

ser = serial.Serial('/dev/ttyACM0', 115200)
s = [0,1]
while True :
    
    for i in range(4):
        ser.write(bytes('G91\n'))       
        ser.write(bytes('G0 X2\n'))
        time.sleep(0.1)
            
    ser.write(bytes('G0 Y3\n'))
    ser.write(bytes('G0 Z10\n'))
    
    for j in range(4):
        ser.write(bytes('G91\n'))    
        ser.write(bytes('G0 X-2\n'))
        time.sleep(0.1)
        
    ser.write(bytes('G0 Y-3\n'))
    ser.write(bytes('G0 Z-10\n'))
    
    
