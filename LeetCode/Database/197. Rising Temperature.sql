-- Write your PostgreSQL query statement below
select w.id from Weather as w JOIN Weather as w2 ON w.recordDate =w2.recordDate + INTERVAL '1 day'
where w.temperature > w2.temperature; 