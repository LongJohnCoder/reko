;;; Segment .text (00401000)

fn00401000()
	push	ebp
	mov	ebp,esp
	push	ecx
	fld1	
	fstp	dword ptr [esp]
	push	004020C0
	mov	eax,[ebp+08]
	push	eax
	mov	ecx,[ebp+0C]
	mov	edx,[ecx]
	push	edx
	call	00401030
	add	esp,10
	xor	eax,eax
	pop	ebp
	ret	
00401024             CC CC CC CC CC CC CC CC CC CC CC CC     ............

fn00401030()
	push	ebp
	mov	ebp,esp
	fld	dword ptr [ebp+14]
	sub	esp,08
	fstp	double ptr [esp]
	mov	eax,[ebp+10]
	push	eax
	mov	ecx,[ebp+0C]
	push	ecx
	mov	edx,[ebp+08]
	push	edx
	push	004020C8
	call	dword ptr [0040209C]
	add	esp,18
	pop	ebp
	ret	
00401058                         CC CC CC CC CC CC CC CC         ........

fn00401060()
	push	ebp
	mov	ebp,esp
	push	ecx
	fld	dword ptr [004020E8]
	fstp	dword ptr [esp]
	push	004020D4
	push	02
	push	004020D8
	call	00401030
	add	esp,10
	cmp	dword ptr [ebp+08],00
	jnz	004010A5

l00401087:
	push	ecx
	fld	dword ptr [004020E4]
	fstp	dword ptr [esp]
	push	004020DC
	push	06
	push	004020E0
	call	00401030
	add	esp,10

l004010A5:
	pop	ebp
	ret	
004010A7                      CC CC CC CC CC CC CC CC CC        .........

fn004010B0()
	push	ebp
	mov	ebp,esp
	push	000003E8
	mov	eax,[ebp+08]
	push	eax
	mov	ecx,[ebp+08]
	mov	edx,[ecx]
	mov	eax,[edx+04]
	call	eax
	add	esp,08
	pop	ebp
	ret	
004010CB                                  CC CC CC CC CC            .....

fn004010D0()
	push	ebp
	mov	ebp,esp
	mov	eax,[00403018]
	push	eax
	mov	ecx,[00403018]
	mov	edx,[ecx]
	mov	eax,[edx]
	call	eax
	add	esp,04
	pop	ebp
	ret	
004010EA                               CC CC CC CC CC CC           ......
004010F0 68 79 14 40 00 E8 49 03 00 00 A1 40 30 40 00 C7 hy.@..I....@0@..
00401100 04 24 30 30 40 00 FF 35 3C 30 40 00 A3 30 30 40 .$00@..5<0@..00@
00401110 00 68 20 30 40 00 68 24 30 40 00 68 1C 30 40 00 .h 0@.h$0@.h.0@.
00401120 FF 15 90 20 40 00 83 C4 14 85 C0 A3 2C 30 40 00 ... @.......,0@.
00401130 7D 08 6A 08 E8 65 02 00 00 59 C3 6A 10 68 58 21 }.j..e...Y.j.hX!
00401140 40 00 E8 55 04 00 00 33 DB 89 5D FC 64 A1 18 00 @..U...3..].d...
00401150 00 00 8B 70 04 89 5D E4 BF 7C 33 40 00 53 56 57 ...p..]..|3@.SVW
00401160 FF 15 24 20 40 00 3B C3 74 19 3B C6 75 08 33 F6 ..$ @.;.t.;.u.3.
00401170 46 89 75 E4 EB 10 68 E8 03 00 00 FF 15 28 20 40 F.u...h......( @
00401180 00 EB DA 33 F6 46 A1 78 33 40 00 3B C6 75 0A 6A ...3.F.x3@.;.u.j
00401190 1F E8 08 02 00 00 59 EB 3B A1 78 33 40 00 85 C0 ......Y.;.x3@...
004011A0 75 2C 89 35 78 33 40 00 68 B8 20 40 00 68 B0 20 u,.5x3@.h. @.h. 
004011B0 40 00 E8 DD 03 00 00 59 59 85 C0 74 17 C7 45 FC @......YY..t..E.
004011C0 FE FF FF FF B8 FF 00 00 00 E9 DD 00 00 00 89 35 ...............5
004011D0 38 30 40 00 A1 78 33 40 00 3B C6 75 1B 68 AC 20 80@..x3@.;.u.h. 
004011E0 40 00 68 A4 20 40 00 E8 A2 03 00 00 59 59 C7 05 @.h. @......YY..
004011F0 78 33 40 00 02 00 00 00 39 5D E4 75 08 53 57 FF x3@.....9].u.SW.
00401200 15 2C 20 40 00 39 1D 88 33 40 00 74 19 68 88 33 ., @.9..3@.t.h.3
00401210 40 00 E8 0B 03 00 00 59 85 C0 74 0A 53 6A 02 53 @......Y..t.Sj.S
00401220 FF 15 88 33 40 00 A1 20 30 40 00 8B 0D 7C 20 40 ...3@.. 0@...| @
00401230 00 89 01 FF 35 20 30 40 00 FF 35 24 30 40 00 FF ....5 0@..5$0@..
00401240 35 1C 30 40 00 E8 B6 FD FF FF 83 C4 0C A3 34 30 5.0@..........40
00401250 40 00 39 1D 28 30 40 00 75 37 50 FF 15 80 20 40 @.9.(0@.u7P... @
00401260 00 8B 45 EC 8B 08 8B 09 89 4D E0 50 51 E8 2C 02 ..E......M.PQ.,.
00401270 00 00 59 59 C3 8B 65 E8 8B 45 E0 A3 34 30 40 00 ..YY..e..E..40@.
00401280 33 DB 39 1D 28 30 40 00 75 07 50 FF 15 88 20 40 3.9.(0@.u.P... @
00401290 00 39 1D 38 30 40 00 75 06 FF 15 8C 20 40 00 C7 .9.80@.u.... @..
004012A0 45 FC FE FF FF FF A1 34 30 40 00 E8 31 03 00 00 E......40@..1...
004012B0 C3 66 81 3D 00 00 40 00 4D 5A 74 04 33 C0 EB 51 .f.=..@.MZt.3..Q
004012C0 A1 3C 00 40 00 81 B8 00 00 40 00 50 45 00 00 75 .<.@.....@.PE..u
004012D0 EB 0F B7 88 18 00 40 00 81 F9 0B 01 00 00 74 1B ......@.......t.
004012E0 81 F9 0B 02 00 00 75 D4 83 B8 84 00 40 00 0E 76 ......u.....@..v
004012F0 CB 33 C9 39 88 F8 00 40 00 EB 11 83 B8 74 00 40 .3.9...@.....t.@
00401300 00 0E 76 B8 33 C9 39 88 E8 00 40 00 0F 95 C1 8B ..v.3.9...@.....
00401310 C1 6A 01 A3 28 30 40 00 FF 15 40 20 40 00 6A FF .j..(0@...@ @.j.
00401320 FF 15 3C 20 40 00 59 59 A3 80 33 40 00 A3 84 33 ..< @.YY..3@...3
00401330 40 00 FF 15 38 20 40 00 8B 0D 48 30 40 00 89 08 @...8 @...H0@...
00401340 FF 15 4C 20 40 00 8B 0D 44 30 40 00 89 08 A1 68 ..L @...D0@....h
00401350 20 40 00 8B 00 A3 74 33 40 00 E8 F6 00 00 00 E8  @....t3@.......
00401360 DD 02 00 00 83 3D 0C 30 40 00 00 75 0C 68 41 16 .....=.0@..u.hA.
00401370 40 00 FF 15 6C 20 40 00 59 E8 9A 02 00 00 83 3D @...l @.Y......=
00401380 08 30 40 00 FF 75 09 6A FF FF 15 70 20 40 00 59 .0@..u.j...p @.Y
00401390 33 C0 C3 E8 AC 02 00 00 E9 9E FD FF FF CC FF 25 3..............%
004013A0 94 20 40 00 6A 14 68 78 21 40 00 E8 EC 01 00 00 . @.j.hx!@......
004013B0 FF 35 84 33 40 00 8B 35 54 20 40 00 FF D6 59 89 .5.3@..5T @...Y.
004013C0 45 E4 83 F8 FF 75 0C FF 75 08 FF 15 50 20 40 00 E....u..u...P @.
004013D0 59 EB 61 6A 08 E8 0A 03 00 00 59 83 65 FC 00 FF Y.aj......Y.e...
004013E0 35 84 33 40 00 FF D6 89 45 E4 FF 35 80 33 40 00 5.3@....E..5.3@.
004013F0 FF D6 89 45 E0 8D 45 E0 50 8D 45 E4 50 FF 75 08 ...E..E.P.E.P.u.
00401400 E8 D9 02 00 00 89 45 DC FF 75 E4 8B 35 3C 20 40 ......E..u..5< @
00401410 00 FF D6 A3 84 33 40 00 FF 75 E0 FF D6 83 C4 1C .....3@..u......
00401420 A3 80 33 40 00 C7 45 FC FE FF FF FF E8 09 00 00 ..3@..E.........
00401430 00 8B 45 DC E8 A8 01 00 00 C3 6A 08 E8 97 02 00 ..E.......j.....
00401440 00 59 C3 FF 74 24 04 E8 58 FF FF FF F7 D8 1B C0 .Y..t$..X.......
00401450 F7 D8 59 48 C3 56 57 B8 48 21 40 00 BF 48 21 40 ..YH.VW.H!@..H!@
00401460 00 3B C7 8B F0 73 0F 8B 06 85 C0 74 02 FF D0 83 .;...s.....t....
00401470 C6 04 3B F7 72 F1 5F 5E C3 56 57 B8 50 21 40 00 ..;.r._^.VW.P!@.
00401480 BF 50 21 40 00 3B C7 8B F0 73 0F 8B 06 85 C0 74 .P!@.;...s.....t
00401490 02 FF D0 83 C6 04 3B F7 72 F1 5F 5E C3 CC FF 25 ......;.r._^...%
004014A0 84 20 40 00 CC CC CC CC CC CC CC CC CC CC CC CC . @.............
004014B0 8B 4C 24 04 66 81 39 4D 5A 74 03 33 C0 C3 8B 41 .L$.f.9MZt.3...A
004014C0 3C 03 C1 81 38 50 45 00 00 75 F0 33 C9 66 81 78 <...8PE..u.3.f.x
004014D0 18 0B 01 0F 94 C1 8B C1 C3 CC CC CC CC CC CC CC ................
004014E0 8B 44 24 04 8B 48 3C 03 C8 0F B7 41 14 53 56 0F .D$..H<....A.SV.
004014F0 B7 71 06 33 D2 85 F6 57 8D 44 08 18 76 1E 8B 7C .q.3...W.D..v..|
00401500 24 14 8B 48 0C 3B F9 72 09 8B 58 08 03 D9 3B FB $..H.;.r..X...;.
00401510 72 0C 83 C2 01 83 C0 28 3B D6 72 E6 33 C0 5F 5E r......(;.r.3._^
00401520 5B C3 6A 08 68 98 21 40 00 E8 6E 00 00 00 83 65 [.j.h.!@..n....e
00401530 FC 00 BA 00 00 40 00 52 E8 73 FF FF FF 59 85 C0 .....@.R.s...Y..
00401540 74 3D 8B 45 08 2B C2 50 52 E8 92 FF FF FF 59 59 t=.E.+.PR.....YY
00401550 85 C0 74 2B 8B 40 24 C1 E8 1F F7 D0 83 E0 01 C7 ..t+.@$.........
00401560 45 FC FE FF FF FF EB 20 8B 45 EC 8B 00 8B 00 33 E...... .E.....3
00401570 C9 3D 05 00 00 C0 0F 94 C1 8B C1 C3 8B 65 E8 C7 .=...........e..
00401580 45 FC FE FF FF FF 33 C0 E8 54 00 00 00 C3 FF 25 E.....3..T.....%
00401590 78 20 40 00 FF 25 74 20 40 00 CC CC 68 F5 15 40 x @..%t @...h..@
004015A0 00 64 FF 35 00 00 00 00 8B 44 24 10 89 6C 24 10 .d.5.....D$..l$.
004015B0 8D 6C 24 10 2B E0 53 56 57 A1 10 30 40 00 31 45 .l$.+.SVW..0@.1E
004015C0 FC 33 C5 50 89 65 E8 FF 75 F8 8B 45 FC C7 45 FC .3.P.e..u..E..E.
004015D0 FE FF FF FF 89 45 F8 8D 45 F0 64 A3 00 00 00 00 .....E..E.d.....
004015E0 C3 8B 4D F0 64 89 0D 00 00 00 00 59 5F 5F 5E 5B ..M.d......Y__^[
004015F0 8B E5 5D 51 C3 FF 74 24 10 FF 74 24 10 FF 74 24 ..]Q..t$..t$..t$
00401600 10 FF 74 24 10 68 EA 16 40 00 68 10 30 40 00 E8 ..t$.h..@.h.0@..
00401610 E6 00 00 00 83 C4 18 C3 56 68 00 00 03 00 68 00 ........Vh....h.
00401620 00 01 00 33 F6 56 E8 DB 00 00 00 83 C4 0C 85 C0 ...3.V..........
00401630 74 0D 56 56 56 56 56 E8 C4 00 00 00 83 C4 14 5E t.VVVVV........^
00401640 C3 33 C0 C3 55 8B EC 83 EC 10 A1 10 30 40 00 83 .3..U.......0@..
00401650 65 F8 00 83 65 FC 00 53 57 BF 4E E6 40 BB 3B C7 e...e..SW.N.@.;.
00401660 BB 00 00 FF FF 74 0D 85 C3 74 09 F7 D0 A3 14 30 .....t...t.....0
00401670 40 00 EB 60 56 8D 45 F8 50 FF 15 10 20 40 00 8B @..`V.E.P... @..
00401680 75 FC 33 75 F8 FF 15 14 20 40 00 33 F0 FF 15 18 u.3u.... @.3....
00401690 20 40 00 33 F0 FF 15 1C 20 40 00 33 F0 8D 45 F0  @.3.... @.3..E.
004016A0 50 FF 15 20 20 40 00 8B 45 F4 33 45 F0 33 F0 3B P..  @..E.3E.3.;
004016B0 F7 75 07 BE 4F E6 40 BB EB 0B 85 F3 75 07 8B C6 .u..O.@.....u...
004016C0 C1 E0 10 0B F0 89 35 10 30 40 00 F7 D6 89 35 14 ......5.0@....5.
004016D0 30 40 00 5E 5F 5B C9 C3 FF 25 44 20 40 00 FF 25 0@.^_[...%D @..%
004016E0 48 20 40 00 FF 25 98 20 40 00 3B 0D 10 30 40 00 H @..%. @.;..0@.
004016F0 75 02 F3 C3 E9 13 00 00 00 CC FF 25 58 20 40 00 u..........%X @.
00401700 FF 25 5C 20 40 00 FF 25 60 20 40 00 55 8B EC 81 .%\ @..%` @.U...
00401710 EC 28 03 00 00 A3 58 31 40 00 89 0D 54 31 40 00 .(....X1@...T1@.
00401720 89 15 50 31 40 00 89 1D 4C 31 40 00 89 35 48 31 ..P1@...L1@..5H1
00401730 40 00 89 3D 44 31 40 00 66 8C 15 70 31 40 00 66 @..=D1@.f..p1@.f
00401740 8C 0D 64 31 40 00 66 8C 1D 40 31 40 00 66 8C 05 ..d1@.f..@1@.f..
00401750 3C 31 40 00 66 8C 25 38 31 40 00 66 8C 2D 34 31 <1@.f.%81@.f.-41
00401760 40 00 9C 8F 05 68 31 40 00 8B 45 00 A3 5C 31 40 @....h1@..E..\1@
00401770 00 8B 45 04 A3 60 31 40 00 8D 45 08 A3 6C 31 40 ..E..`1@..E..l1@
00401780 00 8B 85 E0 FC FF FF C7 05 A8 30 40 00 01 00 01 ..........0@....
00401790 00 A1 60 31 40 00 A3 5C 30 40 00 C7 05 50 30 40 ..`1@..\0@...P0@
004017A0 00 09 04 00 C0 C7 05 54 30 40 00 01 00 00 00 A1 .......T0@......
004017B0 10 30 40 00 89 85 D8 FC FF FF A1 14 30 40 00 89 .0@.........0@..
004017C0 85 DC FC FF FF FF 15 30 20 40 00 A3 A0 30 40 00 .......0 @...0@.
004017D0 6A 01 E8 39 00 00 00 59 6A 00 FF 15 00 20 40 00 j..9...Yj.... @.
004017E0 68 EC 20 40 00 FF 15 04 20 40 00 83 3D A0 30 40 h. @.... @..=.0@
004017F0 00 00 75 08 6A 01 E8 15 00 00 00 59 68 09 04 00 ..u.j......Yh...
00401800 C0 FF 15 08 20 40 00 50 FF 15 0C 20 40 00 C9 C3 .... @.P... @...
00401810 FF 25 64 20 40 00                               .%d @.         
;;; Segment .rdata (00402000)
00402000 10 25 00 00                                     .%..           
00402004             F4 24 00 00                             .$..       
00402008                         E0 24 00 00                     .$..   
0040200C                                     CC 24 00 00             .$..
00402010 B2 24 00 00                                     .$..           
00402014             9C 24 00 00                             .$..       
00402018                         86 24 00 00                     .$..   
0040201C                                     76 24 00 00             v$..
00402020 5C 24 00 00                                     \$..           
00402024             3E 24 00 00                             >$..       
00402028                         36 24 00 00                     6$..   
0040202C                                     20 24 00 00              $..
00402030 2E 25 00 00                                     .%..           
00402034             00 00 00 00                             ....       
00402038                         60 23 00 00                     `#..   
0040203C                                     6E 23 00 00             n#..
00402040 80 23 00 00                                     .#..           
00402044             92 23 00 00                             .#..       
00402048                         9C 23 00 00                     .#..   
0040204C                                     50 23 00 00             P#..
00402050 B2 23 00 00                                     .#..           
00402054             BC 23 00 00                             .#..       
00402058                         CE 23 00 00                     .#..   
0040205C                                     E8 23 00 00             .#..
00402060 FA 23 00 00                                     .#..           
00402064             0A 24 00 00                             .$..       
00402068                         40 23 00 00                     @#..   
0040206C                                     2C 23 00 00             ,#..
00402070 16 23 00 00                                     .#..           
00402074             08 23 00 00                             .#..       
00402078                         FC 22 00 00                     ."..   
0040207C                                     F0 22 00 00             ."..
00402080 E8 22 00 00                                     ."..           
00402084             DA 22 00 00                             ."..       
00402088                         D2 22 00 00                     ."..   
0040208C                                     C8 22 00 00             ."..
00402090 B8 22 00 00                                     ."..           
00402094             AA 22 00 00                             ."..       
00402098                         AA 23 00 00                     .#..   
0040209C                                     94 22 00 00             ."..
004020A0 00 00 00 00 00 00 00 00 F0 10 40 00 00 00 00 00 ..........@.....
004020B0 00 00 00 00 B1 12 40 00 00 00 00 00 00 00 00 00 ......@.........
004020C0 74 65 73 74 31 32 33 00 25 73 20 25 64 20 25 73 test123.%s %d %s
004020D0 20 25 66 00 33 00 00 00 31 00 00 00 37 00 00 00  %f.3...1...7...
004020E0 35 00 00 00 6F 12 09 41 9E EF 83 40 50 30 40 00 5...o..A...@P0@.
004020F0 A8 30 40 00 00 00 00 00 48 00 00 00 00 00 00 00 .0@.....H.......
00402100 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00402110 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00402120 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00402130 00 00 00 00 10 30 40 00 40 21 40 00 01 00 00 00 .....0@.@!@.....
00402140 F5 15 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00402150 00 00 00 00 00 00 00 00 FE FF FF FF 00 00 00 00 ................
00402160 D0 FF FF FF 00 00 00 00 FE FF FF FF 61 12 40 00 ............a.@.
00402170 75 12 40 00 00 00 00 00 FE FF FF FF 00 00 00 00 u.@.............
00402180 CC FF FF FF 00 00 00 00 FE FF FF FF 00 00 00 00 ................
00402190 3A 14 40 00 00 00 00 00 FE FF FF FF 00 00 00 00 :.@.............
004021A0 D8 FF FF FF 00 00 00 00 FE FF FF FF 68 15 40 00 ............h.@.
004021B0 7C 15 40 00 28 22 00 00 00 00 00 00 00 00 00 00 |.@.("..........
004021C0 9E 22 00 00 38 20 00 00 F0 21 00 00 00 00 00 00 ."..8 ...!......
004021D0 00 00 00 00 42 25 00 00 00 20 00 00 00 00 00 00 ....B%... ......
004021E0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
004021F0 10 25 00 00                                     .%..           
004021F4             F4 24 00 00                             .$..       
004021F8                         E0 24 00 00                     .$..   
004021FC                                     CC 24 00 00             .$..
00402200 B2 24 00 00                                     .$..           
00402204             9C 24 00 00                             .$..       
00402208                         86 24 00 00                     .$..   
0040220C                                     76 24 00 00             v$..
00402210 5C 24 00 00                                     \$..           
00402214             3E 24 00 00                             >$..       
00402218                         36 24 00 00                     6$..   
0040221C                                     20 24 00 00              $..
00402220 2E 25 00 00                                     .%..           
00402224             00 00 00 00                             ....       
00402228                         60 23 00 00                     `#..   
0040222C                                     6E 23 00 00             n#..
00402230 80 23 00 00                                     .#..           
00402234             92 23 00 00                             .#..       
00402238                         9C 23 00 00                     .#..   
0040223C                                     50 23 00 00             P#..
00402240 B2 23 00 00                                     .#..           
00402244             BC 23 00 00                             .#..       
00402248                         CE 23 00 00                     .#..   
0040224C                                     E8 23 00 00             .#..
00402250 FA 23 00 00                                     .#..           
00402254             0A 24 00 00                             .$..       
00402258                         40 23 00 00                     @#..   
0040225C                                     2C 23 00 00             ,#..
00402260 16 23 00 00                                     .#..           
00402264             08 23 00 00                             .#..       
00402268                         FC 22 00 00                     ."..   
0040226C                                     F0 22 00 00             ."..
00402270 E8 22 00 00                                     ."..           
00402274             DA 22 00 00                             ."..       
00402278                         D2 22 00 00                     ."..   
0040227C                                     C8 22 00 00             ."..
00402280 B8 22 00 00                                     ."..           
00402284             AA 22 00 00                             ."..       
00402288                         AA 23 00 00                     .#..   
0040228C                                     94 22 00 00             ."..
00402290 00 00 00 00 37 05 70 72 69 6E 74 66 00 00 4D 53 ....7.printf..MS
004022A0 56 43 52 38 30 2E 64 6C 6C 00 18 01 5F 61 6D 73 VCR80.dll..._ams
004022B0 67 5F 65 78 69 74 00 00 A0 00 5F 5F 67 65 74 6D g_exit....__getm
004022C0 61 69 6E 61 72 67 73 00 2F 01 5F 63 65 78 69 74 ainargs./._cexit
004022D0 00 00 7F 01 5F 65 78 69 74 00 67 00 5F 58 63 70 ...._exit.g._Xcp
004022E0 74 46 69 6C 74 65 72 00 D6 04 65 78 69 74 00 00 tFilter...exit..
004022F0 A1 00 5F 5F 69 6E 69 74 65 6E 76 00 0A 02 5F 69 ..__initenv..._i
00402300 6E 69 74 74 65 72 6D 00 0B 02 5F 69 6E 69 74 74 nitterm..._initt
00402310 65 72 6D 5F 65 00 3F 01 5F 63 6F 6E 66 69 67 74 erm_e.?._configt
00402320 68 72 65 61 64 6C 6F 63 61 6C 65 00 E9 00 5F 5F hreadlocale...__
00402330 73 65 74 75 73 65 72 6D 61 74 68 65 72 72 00 00 setusermatherr..
00402340 11 01 5F 61 64 6A 75 73 74 5F 66 64 69 76 00 00 .._adjust_fdiv..
00402350 CC 00 5F 5F 70 5F 5F 63 6F 6D 6D 6F 64 65 00 00 ..__p__commode..
00402360 D0 00 5F 5F 70 5F 5F 66 6D 6F 64 65 00 00 6D 01 ..__p__fmode..m.
00402370 5F 65 6E 63 6F 64 65 5F 70 6F 69 6E 74 65 72 00 _encode_pointer.
00402380 E6 00 5F 5F 73 65 74 5F 61 70 70 5F 74 79 70 65 ..__set_app_type
00402390 00 00 ED 03 5F 75 6E 6C 6F 63 6B 00 97 00 5F 5F ...._unlock...__
004023A0 64 6C 6C 6F 6E 65 78 69 74 00 7C 02 5F 6C 6F 63 dllonexit.|._loc
004023B0 6B 00 22 03 5F 6F 6E 65 78 69 74 00 63 01 5F 64 k."._onexit.c._d
004023C0 65 63 6F 64 65 5F 70 6F 69 6E 74 65 72 00 76 01 ecode_pointer.v.
004023D0 5F 65 78 63 65 70 74 5F 68 61 6E 64 6C 65 72 34 _except_handler4
004023E0 5F 63 6F 6D 6D 6F 6E 00 11 02 5F 69 6E 76 6F 6B _common..._invok
004023F0 65 5F 77 61 74 73 6F 6E 00 00 42 01 5F 63 6F 6E e_watson..B._con
00402400 74 72 6F 6C 66 70 5F 73 00 00 4E 01 5F 63 72 74 trolfp_s..N._crt
00402410 5F 64 65 62 75 67 67 65 72 5F 68 6F 6F 6B 00 00 _debugger_hook..
00402420 29 02 49 6E 74 65 72 6C 6F 63 6B 65 64 45 78 63 ).InterlockedExc
00402430 68 61 6E 67 65 00 56 03 53 6C 65 65 70 00 26 02 hange.V.Sleep.&.
00402440 49 6E 74 65 72 6C 6F 63 6B 65 64 43 6F 6D 70 61 InterlockedCompa
00402450 72 65 45 78 63 68 61 6E 67 65 00 00 A3 02 51 75 reExchange....Qu
00402460 65 72 79 50 65 72 66 6F 72 6D 61 6E 63 65 43 6F eryPerformanceCo
00402470 75 6E 74 65 72 00 DF 01 47 65 74 54 69 63 6B 43 unter...GetTickC
00402480 6F 75 6E 74 00 00 46 01 47 65 74 43 75 72 72 65 ount..F.GetCurre
00402490 6E 74 54 68 72 65 61 64 49 64 00 00 43 01 47 65 ntThreadId..C.Ge
004024A0 74 43 75 72 72 65 6E 74 50 72 6F 63 65 73 73 49 tCurrentProcessI
004024B0 64 00 CA 01 47 65 74 53 79 73 74 65 6D 54 69 6D d...GetSystemTim
004024C0 65 41 73 46 69 6C 65 54 69 6D 65 00 5E 03 54 65 eAsFileTime.^.Te
004024D0 72 6D 69 6E 61 74 65 50 72 6F 63 65 73 73 00 00 rminateProcess..
004024E0 42 01 47 65 74 43 75 72 72 65 6E 74 50 72 6F 63 B.GetCurrentProc
004024F0 65 73 73 00 6E 03 55 6E 68 61 6E 64 6C 65 64 45 ess.n.UnhandledE
00402500 78 63 65 70 74 69 6F 6E 46 69 6C 74 65 72 00 00 xceptionFilter..
00402510 4A 03 53 65 74 55 6E 68 61 6E 64 6C 65 64 45 78 J.SetUnhandledEx
00402520 63 65 70 74 69 6F 6E 46 69 6C 74 65 72 00 39 02 ceptionFilter.9.
00402530 49 73 44 65 62 75 67 67 65 72 50 72 65 73 65 6E IsDebuggerPresen
00402540 74 00 4B 45 52 4E 45 4C 33 32 2E 64 6C 6C 00 00 t.KERNEL32.dll..
00402550 00 00 00 00 4E BF 7F 57 00 00 00 00 96 25 00 00 ....N..W.....%..
00402560 01 00 00 00 03 00 00 00 03 00 00 00 78 25 00 00 ............x%..
00402570 84 25 00 00 90 25 00 00 60 10 00 00 B0 10 00 00 .%...%..`.......
00402580 D0 10 00 00 A6 25 00 00 AC 25 00 00 B2 25 00 00 .....%...%...%..
00402590 00 00 01 00 02 00 56 43 45 78 65 53 61 6D 70 6C ......VCExeSampl
004025A0 65 2E 65 78 65 00 74 65 73 74 32 00 74 65 73 74 e.exe.test2.test
004025B0 33 00 74 65 73 74 34 00                         3.test4.       
;;; Segment .data (00403000)
00403000 FF FF FF FF FF FF FF FF FE FF FF FF 01 00 00 00 ................
00403010 4E E6 40 BB B1 19 BF 44                         N.@....D       
00403018                         00 00 00 00                     ....   
0040301C                                     00 00 00 00             ....
00403020 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403030 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403040 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403050 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403060 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403070 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403080 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403090 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
004030A0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
004030B0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
004030C0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
004030D0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
004030E0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
004030F0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403100 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403110 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403120 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403130 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403140 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403150 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403160 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403170 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403180 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403190 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
004031A0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
004031B0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
004031C0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
004031D0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
004031E0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
004031F0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403200 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403210 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403220 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403230 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403240 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403250 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403260 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403270 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403280 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403290 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
004032A0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
004032B0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
004032C0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
004032D0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
004032E0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
004032F0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403300 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403310 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403320 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403330 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403340 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403350 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403360 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403370 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
00403380 00 00 00 00 00 00 00 00 00 00 00 00             ............   
;;; Segment .rsrc (00404000)
00404000 00 00 00 00 00 00 00 00 04 00 00 00 00 00 01 00 ................
00404010 18 00 00 00 18 00 00 80 00 00 00 00 00 00 00 00 ................
00404020 04 00 00 00 00 00 01 00 01 00 00 00 30 00 00 80 ............0...
00404030 00 00 00 00 00 00 00 00 04 00 00 00 00 00 01 00 ................
00404040 09 04 00 00 48 00 00 00 58 40 00 00 52 01 00 00 ....H...X@..R...
00404050 E4 04 00 00 00 00 00 00 3C 61 73 73 65 6D 62 6C ........<assembl
00404060 79 20 78 6D 6C 6E 73 3D 22 75 72 6E 3A 73 63 68 y xmlns="urn:sch
00404070 65 6D 61 73 2D 6D 69 63 72 6F 73 6F 66 74 2D 63 emas-microsoft-c
00404080 6F 6D 3A 61 73 6D 2E 76 31 22 20 6D 61 6E 69 66 om:asm.v1" manif
00404090 65 73 74 56 65 72 73 69 6F 6E 3D 22 31 2E 30 22 estVersion="1.0"
004040A0 3E 0D 0A 20 20 3C 64 65 70 65 6E 64 65 6E 63 79 >..  <dependency
004040B0 3E 0D 0A 20 20 20 20 3C 64 65 70 65 6E 64 65 6E >..    <dependen
004040C0 74 41 73 73 65 6D 62 6C 79 3E 0D 0A 20 20 20 20 tAssembly>..    
004040D0 20 20 3C 61 73 73 65 6D 62 6C 79 49 64 65 6E 74   <assemblyIdent
004040E0 69 74 79 20 74 79 70 65 3D 22 77 69 6E 33 32 22 ity type="win32"
004040F0 20 6E 61 6D 65 3D 22 4D 69 63 72 6F 73 6F 66 74  name="Microsoft
00404100 2E 56 43 38 30 2E 43 52 54 22 20 76 65 72 73 69 .VC80.CRT" versi
00404110 6F 6E 3D 22 38 2E 30 2E 35 30 36 30 38 2E 30 22 on="8.0.50608.0"
00404120 20 70 72 6F 63 65 73 73 6F 72 41 72 63 68 69 74  processorArchit
00404130 65 63 74 75 72 65 3D 22 78 38 36 22 20 70 75 62 ecture="x86" pub
00404140 6C 69 63 4B 65 79 54 6F 6B 65 6E 3D 22 31 66 63 licKeyToken="1fc
00404150 38 62 33 62 39 61 31 65 31 38 65 33 62 22 3E 3C 8b3b9a1e18e3b"><
00404160 2F 61 73 73 65 6D 62 6C 79 49 64 65 6E 74 69 74 /assemblyIdentit
00404170 79 3E 0D 0A 20 20 20 20 3C 2F 64 65 70 65 6E 64 y>..    </depend
00404180 65 6E 74 41 73 73 65 6D 62 6C 79 3E 0D 0A 20 20 entAssembly>..  
00404190 3C 2F 64 65 70 65 6E 64 65 6E 63 79 3E 0D 0A 3C </dependency>..<
004041A0 2F 61 73 73 65 6D 62 6C 79 3E 50 41             /assembly>PA   
