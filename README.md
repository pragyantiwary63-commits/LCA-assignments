# PPS Assignments

Beginner-friendly solutions for the three PPS assignments shown in the notebook.

## Files

- `assignment1_gmail_login.c` — simulated Gmail login program in C.

- `assignment1_gmail_login_algorithm.txt` — step-by-step Gmail login algorithm and flowchart outline.
- `assignment2_largest_of_three.c` — C program to find the largest of three numbers.
- `assignment3_menu_driven_calculator.c` — menu-driven calculator using `switch`.

## Compile and run

```bash
gcc assignment1_gmail_login.c -o gmail_login
./gmail_login
```

Sample practice credentials: `student@gmail.com` / `12345`. This is a local simulation only, not real Google authentication.


Using GCC:

```bash
gcc assignment2_largest_of_three.c -o largest
./largest

gcc assignment3_menu_driven_calculator.c -o calculator
./calculator
```

On Windows, run the generated `.exe` files instead.

## Note

Assignment 1 asks for an algorithm and flowchart, not a C program. The file describes the normal user-facing login process; it does not collect or store Gmail passwords.
