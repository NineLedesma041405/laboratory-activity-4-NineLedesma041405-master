[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-7f7980b617ed060a017424585567c406b6ee15c891e84e1186181d67ecf80aa0.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=13742823)

<style type="text/css">
    ol { list-style-type: lower-alpha; }
</style>
# Laboratory Activity 4 - Looping Statements


## Exercise 1: Your first menu (lab4_ex1.c)

Create a program that asks for the length and width of a rectangle:

Afterwards, display a "menu" showing the ff:  
1. perimeter  
2. area  
3. diagonal  
4. exit  


The user would be able to select a letter he desire.
- If the user enters ‘d’, It should display 'Have a nice day' and exits the prompt  
- If the user selects 'a', 'b', or 'c',  it should be able to calculate and display the corresponding parameter.  
- Otherwise, it should keep on repeating to select a letter  
- As long as the user had not selected 'd', it should keep on asking to select a letter


Note: If the user has entered accumulated amount of 10 invalid input, it should also automatically exit the prompt

| Test Input | Expected Console Output |
| ----------------- | ---------------------------------------- |
|3.5<br>7.5<br>a<br>d | Enter the length: 3.5<br>Enter the width: 7.5<br><br>Menu:<br>a. perimeter<br>b. area<br>c. diagonal<br>d. exit<br><br>Choose your letter: a<br>The perimeter is: 22.000<br>Choose your letter: d<br>Have a nice day! |
|3.5<br>7.5<br>b<br>d | Enter the length: 3.5<br>Enter the width: 7.5<br><br>Menu:<br>a. perimeter<br>b. area<br>c. diagonal<br>d. exit<br><br>Choose your letter: b<br>The area is: 26.250<br>Choose your letter: d<br>Have a nice day! |
|3.5<br>7.5<br>c<br>d | Enter the length: 3.5<br>Enter the width: 7.5<br><br>Menu:<br>a. perimeter<br>b. area<br>c. diagonal<br>d. exit<br><br>Choose your letter: c<br>The length of the diagonal is: 8.276<br>Choose your letter: d<br>Have a nice day! |
|3.5<br>7.5<br>d | Enter the length: 3.5<br>Enter the width: 7.5<br><br>Menu:<br>a. perimeter<br>b. area<br>c. diagonal<br>d. exit<br><br>Choose your letter: d<br>Have a nice day! |
|3.5<br>7.5<br>e<br>d| Enter the length: 3.5<br>Enter the width: 7.5<br><br>Menu:<br>a. perimeter<br>b. area<br>c. diagonal<br>d. exit<br><br>Choose your letter: e<br>Choose your letter: d<br>Have a nice day! |
|3.5<br>7.5<br>A<br>a<br>d | Enter the length: 3.5<br>Enter the width: 7.5<br><br>Menu:<br>a. perimeter<br>b. area<br>c. diagonal<br>d. exit<br><br>Choose your letter: A<br>Choose your letter: a<br>The perimeter is: 22.000<br>Choose your letter: d<br>Have a nice day! |
|3.5<br>7.5<br>B<br>b<br>d | Enter the length: 3.5<br>Enter the width: 7.5<br><br>Menu:<br>a. perimeter<br>b. area<br>c. diagonal<br>d. exit<br><br>Choose your letter: B<br>Choose your letter: b<br>The area is: 26.250<br>Choose your letter: d<br>Have a nice day! |
|3.5<br>7.5<br>C<br>c<br>d | Enter the length: 3.5<br>Enter the width: 7.5<br><br>Menu:<br>a. perimeter<br>b. area<br>c. diagonal<br>d. exit<br><br>Choose your letter: C<br>Choose your letter: c<br>The length of the diagonal is: 8.276<br>Choose your letter: d<br>Have a nice day! |
|3.5<br>7.5<br>D<br>d | Enter the length: 3.5<br>Enter the width: 7.5<br><br>Menu:<br>a. perimeter<br>b. area<br>c. diagonal<br>d. exit<br><br>Choose your letter: D<br>Choose your letter: d<br>Have a nice day! |
|3.5<br>7.5<br>1<br>d | Enter the length: 3.5<br>Enter the width: 7.5<br><br>Menu:<br>a. perimeter<br>b. area<br>c. diagonal<br>d. exit<br><br>Choose your letter: 1<br>Choose your letter: d<br>Have a nice day! |
|3.5<br>7.5<br>&<br>d | Enter the length: 3.5<br>Enter the width: 7.5<br><br>Menu:<br>a. perimeter<br>b. area<br>c. diagonal<br>d. exit<br><br>Choose your letter: &<br>Choose your letter: d<br>Have a nice day! |
|3.5<br>7.5<br>&<br>H<br>J<br>2<br>o<br>(<br>7<br>)<br>m<br>5 | Enter the length: 3.5<br>Enter the width: 7.5<br><br>Menu:<br>a. perimeter<br>b. area<br>c. diagonal<br>d. exit<br><br>Choose your letter: &<br>Choose your letter: H<br>Choose your letter: J<br>Choose your letter: 2<br>Choose your letter: o<br>Choose your letter: (<br>Choose your letter: 7<br>Choose your letter: )<br>Choose your letter: m<br>Choose your letter: 5<br>You have exceeded the maximum number of invalid inputs.<br>Have a nice day! |
<br><br><br><br><br>

## Exercise 2: !! (lab4_ex2.c)
Create a program  that computes the value of the function, `n!!`. The variable `n` should be asked from the user. This function is defined as:

<img src="https://github.com/dlsuece-programming-fundamentals/lab4_exercises/blob/master/assets/double_factorial_formula.png">


| Test Input | Expected Console Output |
| ----------------- | ---------------------------------------- |
| 2 | Enter n: 2<br>n!! = 2 = 2 |
| 1 | Enter n: 1<br>n!! = 1 = 1 |
| 9 | Enter n: 9<br>n!! = 9\*7\*5\*3\*1 = 945 |
| 10 | Enter n: 10<br>n!! = 10\*8\*6\*4\*2 = 3840 |
| -1 | Enter n: -1<br>n!! = 1 = 1 |
| 0 | Enter n: 0<br>n!! = 1 = 1 |
| 1.9 | Enter n: 1.9<br>Invalid Input |


<br><br><br><br><br>

## Exercise 3: Alphanumerics (lab4_ex3.c)
Create a program that asks for an alphanumeric character from the user. Afterwards, the program should do the following:

- If it’s a lowercase letter, it should increment-by-2 from that letter until y or z
- If it’s an uppercase letter , it should display the alphabets starting from Z up until the input letter (i.e. in a decreasing fashion).
- If it’s a number, it should display the numbers starting from 0 up until the input number.

| Test Input | Expected Console Output |
| ----------------- | ---------------------------------------- |
| b | Enter a character: b<br>b d f h j l n p r t v x z |
| e | Enter a character: e<br>e g i k m o q s u w y |
| H | Enter a character: H<br>Z Y X W V U T S R Q P O N M L K J I H |
| 7 | Enter a character: 7<br>0 1 2 3 4 5 6 7 |
| & | Enter a character: &<br>Invalid Input|


<br><br><br><br><br>

