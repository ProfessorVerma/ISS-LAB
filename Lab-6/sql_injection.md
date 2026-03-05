# SQL Injection Example

# Consider a login system.

import sqlite3

conn = sqlite3.connect("users.db")
cursor = conn.cursor()

username = input("Username: ")
password = input("Password: ")

query = "SELECT \* FROM users WHERE username = '" + username + "' AND password = '" + password + "'"

cursor.execute(query)

result = cursor.fetchone()

if result:
print("Login successful")
else:
print("Login failed")
