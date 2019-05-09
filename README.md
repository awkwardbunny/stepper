# stepper
Driving a stepper motor with an arduino and MOSFETs

## Quick story time! (skip to next section if not interested)
Before I had to do my last few assignments as a senior in college,
I was procrastinating and wanted to do a random project.
I had an idea, which involved pulling out the read assembly
that slides back and forth.

So I took some old drives and stripped out a few.

To move the read assembly, the stepper motor needs to be driven.
However, I had no stepper motor driver nor H-bridges ready.
So I built some and wrote this code to drive it.

The motor has four connections and is two-phase bipolar,
meaning two coils and per wires per coil.

## Circuit & Connections
AA, AB, AC, AD goes to the first H-bridge that controls one
coil inside the motor.
BA, BB, BC, BD goes to the second H-bridge that controls the
other coil inside the motor.

AA and AB are the high side, AC and AD are the low.
For example, to set output of the H-bridge one way,
A and D should be on, B and C for the other way.

The circuit just has 4 MOSFETs in the most basic
H-bridge configuration. This is probably not as good though(?)
FET A and B are PMOS FETs (I used IRF9450)  
FET C and D are NMOD FETs (I used IRF450)

One phase of the stepper motor is connected to the two
outputs of the H-bridge.

This was repeated for the other coil/phase of the mototr.

## Code?
The transistors are switched on and off to run the stepper (obviously).  
I drew a similar table:  
A B C D
1 0 0 0
0 0 1 0
0 1 0 0
0 0 0 1

Turning those on at that sequence should turn it one way,
reverse the order and it should turn the other way.

Also, the A B FETs are PMOSs, so the logical trigger level
should be opposite the trigger voltage level.
For example, I want to turn A on, then I should output LOW.
But if I want to turn C on, I should output HIGH.

Ya so that worked.