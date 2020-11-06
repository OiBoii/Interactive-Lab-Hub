
# GreetingBot

### Try some Python code on the Pi

Cool games. I had some issues running them because of slow performance.

**How do you know what the shell script is doing?**

we can access/modify shellsripts using ``nano`` 

**Adapt the scripts so that they say what you want them to say.**

``['robert california is the lizard king']``

[Code](https://github.com/OiBoii/Interactive-Lab-Hub/blob/master/Lab6/test_words.py)

**How do we use ``vosk`` to recognize words and phrases?**

``vosk`` is used to recognize speech from a soundbite wav file fed into the kaldi recognizer in bins.

**Include the output of vosk recognizing phrases you taught it to look for.**

![](https://github.com/OiBoii/Interactive-Lab-Hub/blob/master/Lab6/vosk.jpg)

**Include the listing for a shell script and model files that you use to get vosk to recognize these phrases.**

``test_words.py``

### Hello Pi, Hello Arduino

**What would you change to make sayHelloPi say something else?**

change the text on the data string inside helloPi.ino

**How could you make it so that the Pi would only say something if the lights came on in the room?**

use a photoresistor to measure the light intensity in the room, and use an if statement that would only respond when the sensor crosses a certain value threshold.

**How could you make it so that the Pi would say different things based on different sensor values read by the Arduino?**

Add an ``else if`` statement contingent upon different value ranges

**Next, try out ``HelloArduino``. First have ``HelloArduino.ino`` listen for messages from ``HelloArduino.py``. Next, use ``morse_code_translator.ino``. What happens differently? **

LED flashes on arduino converting the messages sent from the pi into morse code (LED blinks).

## Your own voice agent 

**Program a simple application that understands different basic greetings (for example, Yo!, Good morning! And Good afternoon!) and responds either visibly, physically or auditorially in kind!**

I decided to have a little fun with it. The program only responds to "sterling archer" - the world's greates secret agent!]

[id_bot.py](https://github.com/OiBoii/Interactive-Lab-Hub/blob/master/Lab6/model/id_bot.py)

**Record someone trying out your design**

if the name is sterling archer - your identity is confirmed by the chatbot.

[Video](https://drive.google.com/file/d/1fro_dOdYBeOKUaxCuDcNCnNw5YZE4Ui9/view?usp=sharing)






