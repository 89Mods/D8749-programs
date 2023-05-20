# Programs

The "meat" of this repository - all the programs I wrote for the D8749 (most even fit on the D8748).

<table>
<tr>
<th>Name</th>
<th>Description</th>
</tr>
<tr>
<td><code>blink.asm</code></td>
<td>Simple test program to blink some LEDs. First thing I programmed.</td>
</tr>
<tr>
<td><code>timertest.asm</code>, <code>int_test.asm</code></td>
<td>Timer and timer interrupt test program. Latter, periodically prints "test".</td>
</tr>
<tr>
<td><code>ledtest.asm</code></td>
<td>Tests the 7-segment display on the perfboard.</td>
</tr>
<tr>
<td><code>uarttest.asm</code>, <code>better_hellorld.asm</code></td>
<td>Tests the UART module.</td>
</tr>
<tr>
<td><code>multest.asm</code>, <code>multest_32.asm</code></td>
<td>Various multiplication subroutines, including one for 8.24 fixed-point multiplication. But the code for fixed-point in these is broken. Copy-paste the one from mandel.asm if you need it.</td>
</tr>
<tr>
<td><code>mandel.asm</code></td>
<td>Mandelbrot set renderer using fixed-point numbers.</td>
</tr>
<tr>
<td><code>emiss.asm</code></td>
<td>Port of the "EmissionsController" project from [here](https://github.com/89Mods/S2650-tools/tree/main/Software). Includes implementation of Xorshift RNG.</td>
</tr>
</table>
