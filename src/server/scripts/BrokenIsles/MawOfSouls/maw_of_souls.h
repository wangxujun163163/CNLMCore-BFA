/ * 
 *   C o p y r i g h t   ( C )   2 0 1 7 - 2 0 1 8   A s h a m a n e P r o j e c t   < h t t p s : / / g i t h u b . c o m / A s h a m a n e P r o j e c t > 
 *   C o p y r i g h t   ( C )   2 0 0 8 - 2 0 1 7   T r i n i t y C o r e   < h t t p : / / w w w . t r i n i t y c o r e . o r g / > 
 * 
 *   T h i s   p r o g r a m   i s   f r e e   s o f t w a r e ;   y o u   c a n   r e d i s t r i b u t e   i t   a n d / o r   m o d i f y   i t 
 *   u n d e r   t h e   t e r m s   o f   t h e   G N U   G e n e r a l   P u b l i c   L i c e n s e   a s   p u b l i s h e d   b y   t h e 
 *   F r e e   S o f t w a r e   F o u n d a t i o n ;   e i t h e r   v e r s i o n   2   o f   t h e   L i c e n s e ,   o r   ( a t   y o u r 
 *   o p t i o n )   a n y   l a t e r   v e r s i o n . 
 * 
 *   T h i s   p r o g r a m   i s   d i s t r i b u t e d   i n   t h e   h o p e   t h a t   i t   w i l l   b e   u s e f u l ,   b u t   W I T H O U T 
 *   A N Y   W A R R A N T Y ;   w i t h o u t   e v e n   t h e   i m p l i e d   w a r r a n t y   o f   M E R C H A N T A B I L I T Y   o r 
 *   F I T N E S S   F O R   A   P A R T I C U L A R   P U R P O S E .   S e e   t h e   G N U   G e n e r a l   P u b l i c   L i c e n s e   f o r 
 *   m o r e   d e t a i l s . 
 * 
 *   Y o u   s h o u l d   h a v e   r e c e i v e d   a   c o p y   o f   t h e   G N U   G e n e r a l   P u b l i c   L i c e n s e   a l o n g 
 *   w i t h   t h i s   p r o g r a m .   I f   n o t ,   s e e   < h t t p : / / w w w . g n u . o r g / l i c e n s e s / > . 
 * / 
 
 # i f n d e f   M A W _ O F _ S O U L S _ H _ 
 # d e f i n e   M A W _ O F _ S O U L S _ H _ 
 
 # d e f i n e   M a w O f S o u l s S c r i p t N a m e   " i n s t a n c e _ m a w _ o f _ s o u l s " 
 # d e f i n e   D a t a H e a d e r   " M O S " 
 
 u i n t 3 2   c o n s t   E n c o u n t e r C o u n t   =   3 ; 
 
 e n u m   M O S D a t a T y p e s 
 { 
         / /   E n c o u n t e r   S t a t e s / B o s s   G U I D s 
         D A T A _ Y M I R O N _ M A W           =   0 , 
         D A T A _ H A R B A R O N _ M A W       =   1 , 
         D A T A _ H E L Y A _ M A W             =   2 , 
 } ; 
 
 e n u m   M O S C r e a t u r e I d s 
 { 
         / /   N P C s 
         N P C _ Y M I R O N _ M A W             =   9 6 7 5 6 , 
         N P C _ H A R B A R O N _ M A W         =   9 6 7 5 4 , 
         N P C _ S K J A L _ M A W               =   9 9 3 0 7 , 
         N P C _ H E L Y A _ M A W               =   9 6 7 5 9 , 
 
         / /   T r i g g e r s 
 } ; 
 e n u m   G a m e O b j e c t s 
 { 
         G O B _ D O O R _ H A R B A R O N _ D O O R   =   2 4 6 8 8 8 , 
         G O B _ D O O R _ H A R B A R O N _ W A L L _ S O U L _ 1   =   2 4 6 9 4 7 , / / 
         G O B _ D O O R _ H A R B A R O N _ W A L L _ S O U L _ 2   =   2 4 6 9 4 7 , 
         G O B _ D O O R _ H A R B A R O N _ C O L L I S O N _ 1   =   2 4 3 4 0 3 , 
         G O B _ D O O R _ H A R B A R O N _ C O L L I S O N _ 2   =   2 4 3 4 0 3 , 
 
         G O B _ D O O R _ S K J A L _ W A L L _ 1   =   2 6 5 4 7 6 , 
         G O B _ D O O R _ S K J A L _ W A L L _ 2   =   2 6 5 4 7 6 , / / 
 
         G O B _ E C H O I N G _ H O R N _ O F _ T H E _ D A M N E D   =   2 4 7 0 4 1 ,   / / � � � � � � � � 
 } ; 
 
 t e m p l a t e < c l a s s   A I > 
 A I *   G e t M a w O f S o u l s A I ( C r e a t u r e *   c r e a t u r e ) 
 { 
         r e t u r n   G e t I n s t a n c e A I < A I > ( c r e a t u r e ,   M a w O f S o u l s S c r i p t N a m e ) ; 
 } 
 
 # e n d i f   / /   M A W _ O F _ S O U L S _ H _ 
 