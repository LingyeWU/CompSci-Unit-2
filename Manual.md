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

-|Light 1(Control)|Light 2| Binary Number
---|---|---|---
1| ON|ON|1
2| ON|OFF|0
3 |OFF|OFF|Space

4. HOW TO READ MORSE
To read the morse code, the user needs to follow the protocol crrated by the developers.

String Keyboard | String morse
---|----
1|12222
2|11222
3|11122
4|11112
5|11111
6|21111
7|22111
8|22211
9|22221
0|22222
a|12
b|2111
c|2121
d|211
e|1
f|1121
g|221
h|1111
i|11
j|1222
k|212
l|1211
m|22
n|21
o|222
p|1221
q|2212
r|121
s|111
t|2
u|112
v|1112
w|122
x|2112
y|2122
z|2211

number in the protocol|Light State
--|--
1|OFF
2|ON
0| Space
