SELECT euni.unique_id, emp.name 
FROM employees emp 
LEFT JOIN employeeuni euni ON euni.id = emp.id;