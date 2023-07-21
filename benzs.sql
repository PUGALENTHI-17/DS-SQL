-- CREATE TABLE 

create table Employee(Emp_id int primary key,First_Name varchar(50),Last_Name varchar(50),Job_name varchar(50),DOJ date,Address varchar(50),salary int,Email_id varchar(50));
-- Dealer
create table Dealer(Dealer_id  int primary key,First_Name varchar(50),Last_Name varchar(50),Contact_No bigint,Company_name varchar(50),Address varchar(50),City varchar(50),state varchar(50),Pincode int,status varchar(50));
-- vechile
create table Vehicle(Veh_id int primary key,dealer_id int,veh_name varchar(50),veh_model varchar(50),veh_type varchar(50),veh_cost bigint);
-- sales
create table sales(sales_id int primary key,veh_id int,cust_id int,Emp_id int,cost bigint,ord_date date,del_date date,status varchar(50),constraint fkey foreign key(veh_id) references vehicle(veh_id),foreign key(cust_id) references customer(cust_id),foreign key(emp_id) references employee(emp_id));

-- customer 

CREATE TABLE "customer" (
  "cust_id" integer NOT NULL,
  "first_name" character varying(50) NOT NULL,
  "last_name" character varying(50) NOT NULL,
  "contact_No" bigint NOT NULL,
  "Emailid" character varying(20) NOT NULL,
  "address" character varying(50) NOT NULL,
  "city" character varying(50) NOT NULL,
  "state" character varying(50) NOT NULL,
  "country" character varying(50) NOT NULL,
  "pincode" integer NOT NULL,
  "status" character varying(50) NOT NULL
);

--  employee Details
INSERT INTO EMPLOYEE  
VALUES(9499, 'TIM', 'ADOLF', 'SALESMAN', '1981-02-20', '711-2880 Nulla St.
Mankato Mississippi ',16000, 'adolf@gmail.com'),    
       (9566, 'KIM', 'JARVIS', 'MANAGER','1981-04-02', 'P.O. Box 283 8562 Fusce Rd.
Frederick Nebraska',35700,'jarvis@gmail.com'),
       (9654, 'SAM', 'MILES', 'SALESMAN', '1981-09-28', '606-3727 Ullamcorper. Street
Roseville NH 11523',12500,'miles@gmail.com'),
       (9782, 'KEVIN', 'HILL', 'MANAGER', '1981-06-09', 'Ap #867-859 Sit Rd.
Azusa New York',29400,'kevin@gmail.com'),
       (9788, 'CONNIE', 'SMITH', 'ANALYST', '1982-12-09', '7292 Dictum Av.
San Antonio MI ',30000,'connie@gmail.com'),
       (9839, 'ALFRED', 'KINSLEY', 'PRESIDENT', '1981-11-17', 'Ap #651-8679 Sodales Av.
Tamuning PA 10855',50000,'kinsley@gmail.com'),
       (9844, 'PAUL', 'TIMOTHY', 'SALESMAN', '1981-09-08', '191-103 Integer Rd.
Corona New Mexico 08219',15000,'pault@gmail.com'),
       (9876, 'JOHN', 'ASGHAR', 'SOFTWARE ENGINEER', '1983-01-12','P.O. Box 887 2508 Dolor. Av.
Muskegon KY ',31000,'asghar@gmail.com'),
       (9900, 'ROSE', 'SUMMERS', 'TECHNICAL LEAD', '1981-12-03', '511-5762 At Rd.
Chelsea MI',29500,'rose@gmail.com'),
       (9902, 'ANDREW', 'FAULKNER', 'ANAYLYST', '1981-12-03', 'P.O. Box 929 4189 Nunc Road
Lebanon KY 69409',30000,'andrew@gmail.com'),
       (9934, 'KAREN', 'MATTHEWS', 'SOFTWARE ENGINEER', '1982-01-23', 'P.O. Box 132 1599 Curabitur Rd.
Bandera South Dakota',33000,'karen@gmail.com'),
       (9591, 'WENDY', 'SHAWN', 'SALESMAN', '1981-02-22', '666-4366 Lacinia Avenue
Idaho Falls Ohio 19253',5000,'wendy@gmail.com'),
       (9698, 'BELLA', 'SWAN', 'MANAGER', '1981-05-01', '557-6308 Lacinia Road
San Bernardino ND 09289',34200,'bella@gmail.com'),
       (9777, 'MADII', 'HIMBURY', 'ANALYST', '1981-05-01', 'Ap #285-7193 Ullamcorper Avenue
Amesbury HI 93373',20000,'hinbury@gmail.com'),
       (9860, 'ATHENA', 'WILSON', 'ANALYST', '1992-06-21', '6351 Fringilla Avenue
Gardena Colorado ',70000,'wilson@gmail.com'),
       (9861, 'JENNIFER', 'HUETTE', 'ANALYST', '1996-07-01', '778-9383 Suspendisse Av.
Weirton IN 93479',50000,'huette@gmail.com'),

-- customer details

insert into customer values(101,'john','elince',8248741751,'john@gmail.com','19 nehru street','coimbatore','tamilnadu','india',641611,'on process'),
(102,'chrisitian','emerson',7149935165,'emerson@gmail.com','9291 Proin Road','agra','Delhi','india',641611,'on process'),
(103,'nevada','wave',7143565111,'wave@gmail.com','737-2580 At Street','cannada','usa','america',641005,'on process'),
(104,'Imani','talley',7607423289,'imani@gmail.com','011 Malesuada Road','new york','usa','america',6425411,'on process'),
(105,'beratha','riggs',9098824592,'riggs@gmail.com','969-1762 Tincidunt Rd.','cannada','usa','america',641005,'on process'),
(106,'wallace','rose',9092411298,'wallace@gmail.com','Tacoma AL 92508','new york','usa','america',6425411,'on process'),
(107,'chester','richard',9097904440,'chester@gmail.com','Ap #784-1887 Lobortis Ave','new york','usa','america',641611,'on process'),
(108,'sonya','jordan',6952474962,'sonya@gmail.com','Williston Nevada 58521','cannada','usa','america',641005,'on process'),
(109,'malcolm','long',746589423,'malcolm@gmail.com','Seattle Utah 81202','agara','Delhi','india',756249,'on process'),
(110,'raymond','levy',956412876,'leavy@gmail.com','Hawthorne Louisiana','new york','usa','america',6425411,'on process'),

--vehicle

 insert into vehicle values(1,101,'A-Class Hatchback','HATCHBACK','PETROL','81,50,000'),
(2,101,'EQS','LIMOUSINE','ELECTRIC','upcoming'),
(3,101,'A-Class','LIMOUSINE','PETROL','42,00,000'),
(4,101,'E-Class LWB','LIMOUSINE','PETROL','67,00,000'),
(5,101,'S-Class','LIMOUSINE','PETROL','1,60,00,000'),
(6,102,'EQC','SUV RANGE','ELECTRIC','99,50,000'),
(7,102,'GLA','SUV RANGE','PETROL','44,90,000'),
(8,102,'GLC','SUV RANGE','PETROL','62,00,000'),
(9,102,'GLC Coupe','SUV RANGE','PETROL','72,50,000'),
(10,105,'V-class','MVP','PETROL','71,10,000'),
(11,105,'Mercedes-AMG GT Coupe','COUPES','PETROL','2,71,40,752'),
(12,105,'Mercedes-AMG GT4-Door Coupe','COUPES','PETROL','2,70,00,000'),
(13,104,'C-Class Carbriolet','Roadster','PETROL','70,66,797'),
(14,103,'G-Class','SUV RANGE','DIESEL','1,72,00,000'),
(15,103,'Mercedes-MayBash GLS','SUV RANGE','DIESEL','2,47,23,270');
