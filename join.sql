select s.name, c.cust_name ,c.city from salesman s join 
customer c on s.sal_id=c.sal_id where s.city=c.city;


select c.cust_name,c.city,s.name,s.commission from salesman s 
join customer c on s.sal_id=c.sal_id ;

select c.cust_name,c.city,s.name,s.commission from salesman s 
join customer c on s.sal_id=c.sal_id where commission >0.12;

select c.cust_name,c.city,s.name,s.city,s.commission from salesman s 
join customer c on s.sal_id=c.sal_id where s.city!=c.city and s.commission >0.12 ;

select o.order_no,o.purch_amt,c.cust_name,c.city from orders o 
join customer c on o.cus_id=c.cus_id where o.purch_amt between 500 AND 2000 ;

select o.order_no ,o.ord_date,o.purch_amt,c.cust_name,c.grade,s.name,s.commission from orders o join customer c on o.cus_id=c.cus_id 
join salesman s on s.sal_id=c.sal_id;

select * from orders 
Natural join customer 
natural join salesman;

select c.cust_name ,c.city,c.grade ,s.name,s.city from customer c join salesman s
on c.sal_id=s.sal_id order by c.cus_id ;

select c.cust_name ,c.city,c.grade ,s.name,s.city from customer c join salesman s
on c.sal_id=s.sal_id where c.grade<300  order by c.cus_id ;