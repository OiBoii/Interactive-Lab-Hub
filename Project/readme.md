# MIDI CONTROLLER - MUSIC LAUNCHPAD

For the final project I am going to create my own midi controller to create music with.

## WHAT IS A MIDI CONTROLLER?

MIDI (Musical Instrument Digital Interface) is a communication standard that allows digital music gear to speak the same language. A MIDI controller is a device capable of transmitting and recieving these MIDI messages, allowing direct control over mixing programs. Buttons on MIDI controllers are programmable and could be mapped to perform many different functions to optimize workflow or produce different sounds. 

### HOW IT WORKS

It is important to note that MIDI in itself is NOT a soundwave, nor a musical signal of any sort! It is simply a numeric representation of an action - a hardware interrupt. It could be programmed to include a wide spectrum of properties - for example, vibration to emulate a guitar string being strummed on a synthesizer. However, at it's core, it could be a simple push of a button. The sound that is generated is not coming from the MIDI signal, the signal is converted to a MIDI instruction before its transmitted to the software, and that MIDI software is responsible to convert this instruction into sound. The controller is connected to the software via serial communication in this project.

### SIMPLEST FORM
Here is an example of what a simlpe MIDI controller.

<img src="fritz.jpg" width=200PX>

### DIAGRAM 
<img src="diagram.jpg" width=200PX>

## COMPONENTS
<img src="components.jpg" width=500px>


# State 


