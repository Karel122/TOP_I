import serial
import time

ser = serial.Serial('COM3', 9600)
time.sleep(2)  

def set_servo_angle(angle):
    if 0 <= angle <= 180:
        ser.write(f"{angle}\n".encode())

set_servo_angle(90)
time.sleep(1)
set_servo_angle(0)
time.sleep(1)
set_servo_angle(180)

ser.close()
