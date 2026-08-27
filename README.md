# WaterPump_5V
----

## WARNING:

The waterpump must be used **UNDERWATER ONLY** (and fully submersed), otherwise, it may overheat and burn the mottor (it is made so the water cools it down).

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

- logic-level N-channel MOSFET (e.g. 2N7000, IRLZ44N, AO3400)

- 1N4001 or 1N4007 diode

----
## WIRING

Power supply (+) > Pump (+) 

Power supply (-) > Arduino GND


MOSFET gate   > 220Ω resistor > Arduino pin9

MOSFET gate   > 10kΩ resistor > Arduino GND

MOSFET source > Arduino GND

MOSFET drain  > Pump (-)

Diode (-)  > Pump (+)

Diode (+)  > Pump (-)


[See wiring diagram here]

See [here] to understand the wiring


----
## CODE AND INSTRUCTIONS

NOTE: This water pump and tubing moves 1 liter per minute

----
## OTHER TUTORIALS

[How To Use A Water Pump with an Arduino](https://www.youtube.com/watch?v=UEL9NR2Z5BY)

[Control a Pump with Arduino](https://www.youtube.com/watch?v=To3DKP99-1U)
