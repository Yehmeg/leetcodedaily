# Write your MySQL query statement below
SELECT Customers.name As Customers
FROM Customers 
LEFT JOIN Orders
ON Customers.id = Orders.customerId
WHERE Orders.id is NULL;