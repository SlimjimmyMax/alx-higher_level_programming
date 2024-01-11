# Learning Python and MySQL 

This repo provides examples of using Python with MySQL.

## Contents

- [Why Python is awesome](#why-python-is-awesome)
- [Connecting to MySQL](#connecting-to-mysql)
- [SELECT queries](#select-queries) 
- [INSERT queries](#insert-queries)
- [What is ORM?](#what-is-orm)
- [Mapping classes to tables with SQLAlchemy](#mapping-classes-to-tables-with-sqlalchemy)
- [Creating a virtual environment](#creating-a-virtual-environment)

## Why Python is awesome

Python is a great general purpose language that is easy to learn and use for many applications. 

## Connecting to MySQL

Use `mysql-connector-python` to connect:

```python
import mysql.connector

mydb = mysql.connector.connect(
  host="localhost",
  user="yourusername", 
  password="yourpassword",
  database="mydatabase"  
)
SELECT queries 
mycursor.execute("SELECT * FROM customers")
result = mycursor.fetchall()

INSERT queries
sql = "INSERT INTO customers VALUES (%s, %s)" 
mycursor.execute(sql, ("John", "Highway 21"))
mydb.commit()

What is ORM?
ORM (Object Relational Mapping) allows interacting with a database using classes and objects instead of SQL. Popular Python ORM frameworks include SQLAlchemy, Django ORM, and Peewee.
Mapping classes to tables with SQLAlchemy
from sqlalchemy import Column, Integer, String
from sqlalchemy.ext.declarative import declarative_base

class User(Base):
  __tablename__ = 'users'
  id = Column(Integer, primary_key=True)
  name = Column(String) 

Creating a virtual environment
python3 -m venv myenv 
source myenv/bin/activate

