==1. What do you understand By Database ?==
ans:-
• DBMS stands for Data Base Management System.
• Data + Management System
• Database is a collection of inter-related data and Management System
  is a set of programs to store and retrieve those data.
• DBMS is a collection of inter-related data and set of programs to store
  & access those data in an easy and effective manner.
• For Example, university database organizes the data about students,
  faculty, and admin staff etc. which helps in efficient retrieval, insertion
  and deletion of data from it.

==2. What is Normalization?==
ans:-
The normalization concept for relational databases, developed by E.F. Codd, the inventor of the relational database model, is from the 1970s. Before Codd, the most common method of storing data was in large, cryptic, and unstructured files, generating plenty of redundancy and lack of consistency. When databases began to emerge, people noticed that stuffing data into them caused many duplications and anomalies to emerge, like insert, delete, and update anomalies.

==3. What is Difference between DBMS and RDBMS ?==
ans:-
==(1)DBMS==
Database systems are basically developed for large amount of data. When dealing
with huge amount of data, there are two things that require optimization: Storage of
data and retrieval of data
Storage:
• According to the principles of database systems, the data is stored in such a way that
it acquires lot less space as the redundant data (duplicate data) has been removed
before storage.
• Fast Retrieval of data: Along with storing the data in an optimized and systematic
manner, it is also important that we retrieve the data quickly when needed. Database
systems ensure that the data is retrieved as quickly as possible.

==(2)RDBMS==
Database systems are basically developed for large amount of data. When dealing
with huge amount of data, there are two things that require optimization: Storage of
data and retrieval of data
Storage:
• According to the principles of database systems, the data is stored in such a way that
it acquires lot less space as the redundant data (duplicate data) has been removed
before storage.
• Fast Retrieval of data: Along with storing the data in an optimized and systematic
manner, it is also important that we retrieve the data quickly when needed. Database
systems ensure that the data is retrieved as quickly as possible.

==4. What is MF Cod Rule of RDBMS Systems?==
ans:-
 Rule 0 of the MF Cod Rules states that the system must qualify as relational, as a database, and as a management system. For a system to qualify as an RDBMS, that system must use its relational facilities exclusively to manage the database.

==5. What do you understand By Data Redundancy?==
ans:-
 This can happen intentionally or accidentally. Redundancy can be useful for data recovery in case of corruption or loss. In computer memory and storage, data redundancy allows for error correction.

 ==6. What is DDL Interpreter?==
ans:-
• **DDL – Data Definition Language**
It processes the DML statements into low level instruction (machine language), so that they can be executed. DDL Interpreter: It processes the DDL statements into a set of table containing meta data (data about data).

==7. What is DML Compiler in SQL?==
ans:-
**DML Compiler:** It processes the DML statements into low level instruction ```(machine language)```, so that they can be executed.

==8. What is SQL Key Constraints writing an Example of SQL Key Constraints==
ans:-
**NOT NULL:** This constraint tells that we cannot store a null value in a column. That is, if a column is specified as NOT NULL then we will not be able to store null in this particular column any more.
**UNIQUE:** This constraint when specified with a column, tells that all the values in the column must be unique. That is, the values in any row of a column must not be repeated.
**PRIMARY KEY:** A primary key is a field which can uniquely identify each row in a table. And this constraint is used to specify a field in a table as primary key.
**FOREIGN KEY:** A Foreign key is a field which can uniquely identify each row in a another table. And this constraint is used to specify a field as Foreign key.
**CHECK:** This constraint helps to validate the values of a column to meet a particular condition. That is, it helps to ensure that the value stored in a column meets a specific condition.
**DEFAULT:** This constraint specifies a default value for the column when no value is specified by the user.

==9. What is save Point? How to create a save Point write a Query?==
ans:-
A save point in SQL is a logical rollback point within a transaction12. It allows you to specify a point in a transaction that you can roll back to without affecting the entire transaction. To create a save point, use the following ==syntax:== ```SAVEPOINT savepoint_name``` You can then perform various SQL operations within the transaction. To roll back to a specific save point, use ```ROLLBACK TO save_point_name```.

==10.What is trigger and how to create a Trigger in SQL?==
ans:-
Trigger is a statement that a system executes automatically when there is any modification to the database. In a trigger, we first specify when the trigger is to be executed and then the action to be performed when the trigger executes. Triggers are used to specify certain integrity constraints and referential constraints that cannot be specified using the constraint mechanism of SQL.

11. ==student table and exam==
ans:-
![alt text](<Screenshot 2024-07-08 103526.png>)
![alt text](<Screenshot 2024-07-08 103701.png>)
![alt text](<Screenshot 2024-07-08 104003.png>)

12. ==Employee and Incentive table==
ans:-

![alt text](<Screenshot 2024-07-10 103158.png>)
![alt text](<Screenshot 2024-07-10 115707.png>)

13.==Get First_Name from employee table using Tom name “Employee Name”==
![alt text](<Screenshot 2024-07-08 104707.png>)
![alt text](<Screenshot 2024-07-08 104716.png>)

14.==Get FIRST_NAME, Joining Date, and Salary from employee table.==
ans:-
![alt text](<Screenshot 2024-07-08 105638.png>)
![alt text](<Screenshot 2024-07-08 105647.png>)

15.==Get all employee details from the employee table order by First_Name
Ascending and Salary descending?==
ans:-
![alt text](<Screenshot 2024-07-10 103140.png>)
![alt text](<Screenshot 2024-07-10 103158-1.png>)

16.==Get employee details from employee table whose first name contains ‘J’.==
ans:-
![alt text](<Screenshot 2024-07-10 104115.png>)
![alt text](<Screenshot 2024-07-10 104128.png>)

17.==Get department wise maximum salary from employee table order by salary
ascending?==
ans:-
![alt text](<Screenshot 2024-07-10 103305.png>)
![alt text](<Screenshot 2024-07-10 103321.png>)

18.==salesmaen and customer==
ans:-
![alt text](<Screenshot 2024-07-21 154001.png>)
![alt text](<Screenshot 2024-07-21 154039.png>)

![alt text](<Screenshot 2024-07-21 155940.png>)
![alt text](<Screenshot 2024-07-21 160201.png>)

![alt text](<Screenshot 2024-07-21 161234.png>)
![alt text](<Screenshot 2024-07-21 161246.png>)

![alt text](<Screenshot 2024-07-21 161505.png>)
![alt text](<Screenshot 2024-07-21 161513.png>)

![alt text](<Screenshot 2024-07-21 161642.png>)
![alt text](<Screenshot 2024-07-21 161704.png>)

