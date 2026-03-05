# Code Injection Vulnerability Analysis and Prevention

### Aim

    To understand the concept of code injection attacks, analyze how they occur in insecure applications, demonstrate a basic vulnerable implementation, and implement techniques to detect and prevent such attacks.

### Introduction

Code Injection is a security vulnerability that occurs when an attacker is able to insert malicious code into a program and execute it. This typically happens when an application improperly handles user input.

- Many applications take input from users through:
  1. Web forms
  2. URL parameters
  3. File uploads
  4. APIs

- Command line inputs

  If the program does not validate or sanitize the input, attackers may manipulate the input so that the system executes unintended commands.

  Code injection is one of the most dangerous vulnerabilities because it can lead to:
  1. Data theft
  2. Unauthorized access
  3. System compromise
  4. Database manipulation
  5. Remote command execution

  It is closely related to other vulnerabilities such as:
  1. SQL Injection
  2. Command Injection
  3. Cross Site Scripting (XSS)
  4. Remote Code Execution (RCE)

### Types of Code Injection Attacks

1. SQL Injection

   Occurs when attackers insert malicious SQL queries into database input fields.

   Example scenario:
   A login form asks for username and password. If the input is not sanitized, the attacker may manipulate the query.

2. Command Injection

   Occurs when a program executes system commands using user input without validation.

   Example:
   A web application runs system commands like ping, ls, or dir using user input.

3. Script Injection

   Common in web applications where attackers insert malicious JavaScript code.

   Example:
   Injected script runs inside a victim's browser.

4. Template Injection

Occurs when server-side template engines execute injected expressions.

### Why This Is Vulnerable

The issue arises due to lack of input validation.

Problems in the code:

1. Direct concatenation of user input
2. Execution of system commands
3. No filtering of special characters
4. No validation of allowed input

Because of this, the application cannot distinguish between valid input and malicious input.
