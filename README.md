# WaterPump_5V
----

## WARNING:

The waterpump must be used **UNDERWATER ONLY** (and fully submersed), otherwise, it may overheat and burn the motor (the water has a cooling down effect on the motor).

The water level should be higher than the pump.

----

## WATER PUMP MODEL

**Amphibious Horizontal Submersible Pump by DFRobot**

The pump is powered by 3-6V and has the characteristics of low noise, high efficiency, and easy cleaning. With an IP68 waterproof rating, the pump can be immersed into water, but the water level should be higher than the pump. Or you can just connect water pipes to the pump water inlet and outlet to move water from here to there.

See more [here](https://www.dfrobot.com/product-2321.html)

- Power Supply Voltage: DC 3-6V

- Current: 150~370mA

- Pump Lift: 25-45cm

- Flow: 80-100L/H

- Power: 0.4~2W

- Water Inlet and Outlet: 5mm/0.20”

----
# TUTORIAL
----
## HARDWARE

- Arduino UNO

- Water Pump 5V + silicone tube 1m

- 5V (1A or higher) power supply

- 10kΩ resistor

- 220Ω resistor

- logic-level N-channel MOSFET IRLZ44N

- 1N4001 or 1N4007 diode

----
## WIRING

[See MOSFET pinout here](https://github.com/kingston-hackSpace/WaterPump_5V/blob/main/IRLZ34N-Pinout.jpg)

[See wiring diagram here](https://github.com/kingston-hackSpace/WaterPump_5V/blob/main/WaterPump_5V_bb.jpg)

Power supply (+) > Pump (+) 

Power supply (-) > Arduino GND


MOSFET gate   > 220Ω resistor > Arduino pin9

MOSFET gate   > 10kΩ resistor > Arduino GND

MOSFET source > Arduino GND

MOSFET drain  > Pump (-)


Diode (-)  > Pump (+)

Diode (+)  > Pump (-)

----
## Understanding the circuit:

The MOSFET receives an on/off signal from Arduino pin9, signal that allows current to flow through to the pump.

The diode, by allowing current in only one direction, prevents voltage spikes from damaging the MOSFET when powering the pump.

220Ω resistor protects pin 9 from current spikes from the MOSFET. 

10kΩ resistor behaves as a pull-down resistor, holding the gate at 0V so the pump stays off during set-up. 


----
## CODE AND INSTRUCTIONS

*WARNING!* : The waterpump must be used **UNDERWATER ONLY** (and fully submersed), otherwise, it may overheat and burn the motor  

**1. Water pump ON/OFF** : Download [this code](https://github.com/kingston-hackSpace/WaterPump_5V/blob/main/WaterPump_5V.ino) and upload it to your board. 

**2. Water pump speed control** : Download [this code](https://github.com/kingston-hackSpace/WaterPump_5V/blob/main/WaterPump_5V_speedControl.ino) and upload it to your board. 

**3. Water pump via button control** : 

  - add a button to your circuit. See [diagram here]
   
  - Download [this code] and upload it to your board. 

----
## WATER-PROOFING your project

Water and electricity are dangerous together. If you drop water on your electronic equipment, it can trigger a short circuit and damage the equipment.

Waterproofing wire connectors: use [Solder Seal Wire connectors.](https://www.connectormanufacturer.com/solder-seal-wire-connectors/) They resist water exposure and splashing, but are **NOT SUITABLE for submersion**.

Waterproofing Arduino Box: we advise the use of waterproof cases like [this one](https://thepihut.com/products/flanged-weatherproof-enclosure-with-pg-7-cable-glands) to protect your electronics. 

----
## OTHER TUTORIALS

[How To Use A Water Pump with an Arduino](https://www.youtube.com/watch?v=UEL9NR2Z5BY)

[Control a Pump with Arduino](https://www.youtube.com/watch?v=To3DKP99-1U)
