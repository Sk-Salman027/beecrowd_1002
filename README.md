# Area of circle

## Problem statement
<p>The formula to calculate the area of a circumference is defined as A = π . R<sup>2</sup>. Considering to this problem that π = 3.14159:

Calculate the area using the formula given in the problem description.</p>

### input
<p>Read a floating point number (double precision)</p>

```c
double R, A;
scanf("%lf", &R);
```
### Calculate the area of circle

```c
A = π * R * R;
```
### Output
```c
printf("A=%.4lf\n", A);
```