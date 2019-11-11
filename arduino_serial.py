import serial
import struct
import time

ser = serial.Serial('/dev/ttyACM0', 115200)
s = [0,1]
while True :
	
        ser.write(bytes('G0 X1\n'))
        time.sleep(1)
        ser.write(bytes('G0 X-1\n'))
        time.sleep(1)
        
        