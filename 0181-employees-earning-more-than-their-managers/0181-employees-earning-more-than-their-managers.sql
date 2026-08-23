# Write your MySQL query statement below
SELECT e.name AS Employee
FROM Employee e
WHERE e.salary > (
SELECT m.salary 
FROM Employee as m
WHERE e.managerid = m.id 
);

