from sense_hat import SenseHat

sense = SenseHat()

for i in range(8):
    for j in range(8):
        sense.set_pixel(i,j,(255,0,0))
        
        
        