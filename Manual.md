Instruction for use: Marsian Decoder
=====================================
1. Input:

|#|Key Name|Functionality|
|----|----|---
1| Button 1(Yellow) | Option switch
2| Button 2(Green) | Select key

#|Option Name|INPUT | OUTPUT
---|---|---|---
1| ENGLISH TO BINARY | ENGLISH | BINARY ON 2 LIGHTBULBS(8 digits)
2 | ENGLISH TO MORSE | ENGLISH | MORSE ON 1 LIGHTBULB
3| BINARY TO MORSE | 1 OR 0 | MORSE ON 1 LIGHTBULB
4| MORSE TO BINARY | 1 OR 0 | BINARY ON 2 LIGHTBULBS 


2. Order of use

#|Steps of use| Button use
---|---|---
1| Enter the number/letters | Yellow
2| Input the number/letters to LCD | Green
3| Choose conversion | Yellow
4| Send to LED or LCD depending on the mode chosen | Green
5| Conversion Completed | ----

3. HOW TO READ BINARY 
The binary translator follows the ASCII rules as follows:

Letter|ASCII Code|Binary|Letter|ASCII Code|Binary
---|---|---|---|---|---
a|097|01100001|A|065|01000001
b|098|01100010|B|066|01000010
c|099|01100011|C|067|01000011
d|100|01100100|D|068|01000100
e|101|01100101|E|069|01000101
f|102|01100110|F|070|01000110
g|103|01100111|G|071|01000111
h|	104|	01101000	|H|	072|	01001000
i	|105|	01101001|	I|	073	|01001001
j	|106|	01101010|	J|	074|	01001010
k	|107	|01101011|	K|	075	|01001011
l	|108|	01101100|	L|	076|	01001100
m	|109|	01101101|	M	|077|	01001101
n	|110|	01101110|	N|	078|	01001110
o	|111	|01101111|	O	|079|	01001111
p|	112	|01110000	|P|	080|	01010000
q	|113|	01110001|	Q|	081|	01010001
r	|114	|01110010	|R|	082|	01010010
s|	115|	01110011|	S|	083|	01010011
t|	116|	01110100|	T|	084|	01010100
u|	117|	01110101|	U|	085|	01010101
v|	118|	01110110|	V	|086|	01010110
w	|119|	01110111|	W|	087|	01010111
x|	120|	01111000|	X|	088	|01011000
y|	121|	01111001|	Y	|089|	01011001
z	|122|	01111010|	Z	|090|	01011010

-|Light 1|Light 2| Binary NUmber
1| ON|ON|1
2| OFF|ON|0
3 |OFF|OFF|Space

4. HOW TO READ MORSE
To read the morse code, the user needs to follow the protocol crrated by the developers.

String Keyboard | String morse
---|----
1|0
2|12
3|2111
4|2121
5|211
6|1
7|1121
8|221
9|1111
0|11
a|1222
b|212
c|1211
d|22
e|21
f|222
g|1221
h|2212
i|121
j|111
k|2
l|112
m|1112
n|122
o|2112
p|2122
q|2211
r|12222
s|11222
t|11122
u|11112
v|11111
w|21111
x|22111
y|22211
z|22221
DEL|22222

number in the protocol|Light State
--|--
1|OFF
2|ON
3| Space
