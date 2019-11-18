# CIS_project
<img src="./logo.png" width="20%" height="20%"></br>
===
This project is making a equipment to collect microscope image for super resolution neural network.</br>
Repository has source codes to control experiment tool by embedded system(rpi, arduino and some shield).</br>

## How to use
First, download and upload GRBL on arduino.</br>
~~~
https://github.com/grbl/grbl
~~~
<br>

Then, upload main arduino code on another arduino.</br>
File path is </br>
~~~
CIS_project/main_arduino/main_arduino.ino
~~~
<br>

Next step, ready a raspberry pi.</br>
Our test raspberry pi environment is</br>
+ raspberry pi 4 model B
+ raspbian(version : september 2019)
<br>

Now, download this repository and execute Arducam_Py_Demo.py</br>
The path is
~~~
CIS_project/main_rpi/ArduCam_Py_Demo.py
~~~
<br>

File upload step is finished.</br>
Next step is wire connection step.</br>
<br>
Wire connection schematic url is below.</br>
~~~
https://docs.google.com/drawings/d/1WqcHj6S4HBoOiocuN7mQh45zHFYfe40FQ51j9Z0WwFs/edit?usp=sharing
~~~
<br>
Wire connection step is finished. Next step is execute firmware.</br>

+ supply 5~7V(USB port) power to two arduinos.
+ supply 12V power to CNC shield.
+ supply power to RPi.
+ execute Arducam_Py_Demo.py on RPi.
<br>
Now, System would be works well.
