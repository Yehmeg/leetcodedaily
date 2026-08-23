# Write your MySQL query statement below
SELECT e.name AS Employee
FROM Employee e
WHERE e.salary > (
SELECT Employee.salary 
FROM Employee
WHERE e.managerid = Employee.id 
);

