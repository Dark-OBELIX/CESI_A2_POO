USE main_db;

INSERT INTO Item (reference, nameproduct, amount, price_excl_taxes, vat, reduction)
VALUES 
('PR_A1', 'Arduino UNO', 1, 25, 5, 0),
('PR_A2', 'Arduino mega', 1, 30, 6, 0),
('PR_A3', 'Arduin nano', 1, 10, 2, 0),
('PR_A4', 'Arduin micro', 1, 15, 3, 0),
('PR_A5', 'Boutons poussoirs', 5, 5, 1, 0),
('PR_A6', 'Leds rouge', 10, 5, 1, 0),
('PR_A7', 'Leds vertes', 10, 5, 1, 0);

INSERT INTO Stock (amount, reorder_threshold, id_item)
VALUES  
(20, 15, 1),
(15, 10, 2),
(20, 10, 3),
(8, 10, 4), 
(30, 20, 5),
(25, 20, 6),
(30, 20, 7);

Insert into Wholesale_price(itemamount, price_excl_taxes, id_item)
Values
(0,0,1),
(3, 12, 6),
(3, 12, 7);

