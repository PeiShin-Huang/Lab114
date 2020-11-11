# IEEE754 Float

## Q1：在float能表示的最大/最小的數值?
最大：2<sup>128</sup> - 2<sup>104</sup>
<br>
<img width="450" height="400" src="https://github.com/PeiShin-Huang/Lab114/blob/main/Biggest_IEEE754.png">
<br>
最小：-2<sup>128</sup> + 2<sup>104</sup>
<br>
<img width="700" height="400" src="https://github.com/PeiShin-Huang/Lab114/blob/main/Smallest_IEEE754.png">

## Q2：在float能表示的最接近0的數值?
0<sup>+</sup>：2<sup>-149</sup>
<br>
0<sup>-</sup>：-2<sup>-149</sup>
<br>
<img width="1100" height="250" src="https://github.com/PeiShin-Huang/Lab114/blob/main/ClosestZero_IEEE754.png">

## Q3：在float能表示的最接近1的數值?
在1<sup>-</sup>那裏：1-2<sup>-24</sup>
<br>
<img width="500" height="150" src="https://github.com/PeiShin-Huang/Lab114/blob/main/CloseOne_IEEE754.png">
## Q4：程式碼驗證
float a = 16777216, b = 1 <br>
a + b = 16777216 <br>
a - b = 16777215 <br>
<img width="150" height="50" src="https://github.com/PeiShin-Huang/Lab114/blob/main/AddSub1_IEEE754.png">
## Q5：32位元能表示的實數範圍? 正實數範圍?
實數範圍：就是最大的數值到最小的數值，也就是Q1的答案。2<sup>128</sup>-2<sup>104</sup> ~ -2<sup>128</sup>+2<sup>104</sup>
<br>
正實數範圍：最大的數值到最接近0的正數。2<sup>128</sup>-2<sup>104</sup> ~ 2<sup>-149</sup>
## Q6：在所有的float中最接近的兩個幅點數的距離?共有多少數字，它與相鄰的鄰居差都是上述的距離?
Minimum Interval = 2<sup>-149</sup>  <br>
Number = 33554431
<br>
<img width="1100" height="100" src="https://github.com/PeiShin-Huang/Lab114/blob/main/MinInterval_IEEE754.png">
## Q7：兩個相鄰的福點數之間差距最大的距離為? 共有多少個數，它與最接近的數字都是這個距離?
Maximum Interval = 2<sup>104</sup>  <br>
Number = 16777214
<br>
<img width="600" height="140" src="https://github.com/PeiShin-Huang/Lab114/blob/main/MaxInterval_IEEE754.png">
