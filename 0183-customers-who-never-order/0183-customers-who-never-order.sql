# Write your MySQL query statement below
SELECT c.name As Customers
FROM Customers c  LEFT JOIN Orders o ON c.id = o.customerId
WHERE o.id is NULL;