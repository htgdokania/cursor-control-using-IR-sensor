import pyautogui
import serial                                 # add Serial library for Serial communication
speed=6
error=0
Arduino_Serial = serial.Serial('com5',9600)  #Create Serial port object called arduinoSerialData
while 1:
    sen1=int(Arduino_Serial.readline())- error
    sen2=int(Arduino_Serial.readline())- error
    sen3=int(Arduino_Serial.readline())- error
    sen4=int(Arduino_Serial.readline())- error
    sen5=int(Arduino_Serial.readline())- error
    sen6=int(Arduino_Serial.readline())- error
    sen7= 350# height 
#    print(sen1,",",sen2,",",sen3,",",sen4,",",sen5,",",sen6)

    if(sen1>sen2 and sen1>sen3 and sen1>sen4 and sen1>sen5 and sen1>sen6):
        pyautogui.dragTo(100, sen7, button='left')
    elif(sen2>sen1 and sen2>sen3 and sen2>sen4 and sen2>sen5 and sen2>sen6):
        pyautogui.dragTo(300, sen7, button='left')
    elif(sen3>sen1 and sen3>sen2 and sen3>sen4 and sen3>sen5 and sen3>sen6):
        pyautogui.dragTo(600, sen7, button='left')
    elif(sen4>sen1 and sen4>sen2 and sen4>sen3 and sen4>sen5 and sen4>sen6):
        pyautogui.dragTo(900, sen7, button='left')
    elif(sen5>sen1 and sen5>sen2 and sen5>sen3 and sen5>sen4 and sen5>sen6):
        pyautogui.dragTo(1100, sen7, button='left')
    elif(sen6>sen1 and sen6>sen2 and sen6>sen3 and sen6>sen4 and sen6>sen5):
        pyautogui.dragTo(1300, sen7, button='left')

"""
few commands to use
#        pyautogui.moveTo(1000,sen1)
#        pyautogui.click(button='left')
#        pyautogui.dragTo(300, sen1, button='left')
#        pyautogui.moveTo(800,sen2)
#        pyautogui.click(button='left')
#        pyautogui.dragTo(800, sen2, button='left')
"""    
