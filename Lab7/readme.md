# Lab 7
## Serving webpages with the Raspberry Pi

**Customize the code enough that the webpage served up is clearly your own, and include a screenshot and any modified code in the lab folder.**

<img src = "https://github.com/OiBoii/Interactive-Lab-Hub/blob/master/Lab7/My%20Webpage.jpg">

## Set up and Run Interaction Engine
### Flash the HelloYou Sketch onto the Arduino

**Look at the code. How does the Arduino communicate with the Pi when the code is running?**

* Communication between is done through serial monitor. 

**What messages are sent from the Arduino to the Pi?**

* we check for the status of the button in the last portion of the code. Every time we click the button the arduino sends a signal for the LED to turn "light" or "dark".

**What messages are expected from the Pi to the Arduino?**

* an "H" is sent from the Pi when we click the HTML button (unless we click the off button of course!). If the Pi sends an H, the LED is set to "high". Otherwise, it turns off.

**What happens if the Pi sends an unexpected message to the Arduino?**

* an unexpected character will result in the LED turning off. That is, the Pi will write a 0 to the LED.

**How fast does the Arduino communicate with the Pi? What would you change to make it send messages less often?**

*  The baud rate (BR) defines the rate at which information is transferred. In this particular example the BR is set to 9600 which means the serial port is capable of transferring a maximum of 9600 bits per second. We can decrease the BR to 4800 to slow down the transfer speed.

### Run the HelloYou server on the RPi

**Look at the code. What interface does the Pi use to communicate with the Arduino when the code is running?**

* The Pi communicates with the Arduino via the HTML client.
* When an HTML button is clicked, the Pi sends a high signal to the Arduino, turning on the LED - ``ser.write(b'H')``
* The communication is done via the serial port

**What messages are sent from the Pi to the Arduino? **

* H (for HIGH)

**What messages are expected from the Arduino to the Pi?**

"light" or "dark"

**What happens if the Arduino sends an unexpected message to the Pi?**

* Nothing happens. The Arduino does not react to  arduino never reacts to any unexpected values from the Pi.
* The index.html communicates instructions to the LED
* The client.js Collects data from the Arduino data then sends it to the Pi.  

**What part of the code controls what is served when a browser requests a page from the server?**

* index.html 

**What messages are sent to the console? When?**

* Flask server is running
* User connects to the client
* Bbutton is clicked

## Video doorbell

* [Video Feed Code](https://github.com/OiBoii/Interactive-Lab-Hub/blob/master/Lab7/VideoFeed.py)
<img src=https://github.com/OiBoii/Interactive-Lab-Hub/blob/master/Lab7/video_feed.gif>

## Extra Wireless RGB Controller

* [RGB CODE](https://github.com/OiBoii/Interactive-Lab-Hub/blob/master/Lab7/wirelessRGB.ino)
* [Index HTML](https://github.com/OiBoii/Interactive-Lab-Hub/blob/master/Lab7/index.html)

<img src=https://github.com/OiBoii/Interactive-Lab-Hub/blob/master/Lab7/rgb_gif.gif>
