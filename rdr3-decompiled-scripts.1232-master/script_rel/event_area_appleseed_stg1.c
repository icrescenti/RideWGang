#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	struct<28> Local_15[2];
	var uLocal_72[2] = { 0, 0 };
	int iLocal_75[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	struct<44> Local_104 = { 0, 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1072064102, 1072064102, -1082130432 } ;
	var uLocal_148 = -1082130432;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 1065353216;
	var uLocal_153 = 1;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	struct<214> Local_156 = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	struct<282> Local_398 = { 20, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 20, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 1065353216 } ;
	struct<7> Local_680 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	struct<31> Local_698 = { 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 1048576000, 1193033728, 1092616192, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	int iLocal_731 = 0;
	int iLocal_732 = 0;
	int iLocal_733 = 0;
	var uLocal_734 = 0;
	int iLocal_735 = 0;
	int iLocal_736[5] = { 0, 0, 0, 0, 0 };
	int iLocal_742 = 0;
	int iLocal_743 = 0;
	int iLocal_744 = 0;
	int iLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	float fLocal_749 = 0f;
	struct<21> Local_750[3];
	struct<52> Local_814[3];
	int iLocal_971 = 0;
	struct<21> Local_972 = { 0, 0, 0, 3, 30, -1, 0, 0, 0, 3, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 2 } ;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	struct<4> Local_1001 = { 0, 0, 0, 0 } ;
	struct<4> Local_1005 = { 0, 0, 0, 0 } ;
	var uLocal_1009 = 0;
	var uLocal_1010 = 1065353216;
	var uLocal_1011 = 1119092736;
	var uLocal_1012 = 1092616192;
	var uLocal_1013 = 1085276160;
	int iLocal_1014[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1020[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1026[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1032 = 0;
	int iLocal_1033[2] = { 0, 0 };
	int iLocal_1036[2] = { 0, 0 };
	struct<7> Local_1039[11];
	vector3 vLocal_1117[8] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_1142 = 0;
	int iLocal_1143 = 0;
	int iLocal_1144 = 0;
	int iLocal_1145 = 0;
	int iLocal_1146 = 0;
	int iLocal_1147 = 0;
	int iLocal_1148 = 0;
	int iLocal_1149[2] = { 0, 0 };
	int iLocal_1152 = 0;
	int iLocal_1153 = 0;
	int iLocal_1154 = 0;
	int iLocal_1155 = 0;
	int iLocal_1156 = 0;
	struct<691> Local_1157 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 9, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 2, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 10, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 26 } ;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = -1;
	var uLocal_1858 = 1;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = -1;
	var uLocal_1870 = 1;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = -1;
	var uLocal_1882 = 1;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = -1;
	var uLocal_1894 = 1;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = -1;
	var uLocal_1906 = 1;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = -1;
	var uLocal_1918 = 1;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = -1;
	var uLocal_1930 = 1;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = -1;
	var uLocal_1942 = 1;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = -1;
	var uLocal_1954 = 1;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = -1;
	var uLocal_1966 = 1;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = -1;
	var uLocal_1978 = 1;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = -1;
	var uLocal_1990 = 1;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = -1;
	var uLocal_2002 = 1;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = -1;
	var uLocal_2014 = 1;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = -1;
	var uLocal_2026 = 1;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = -1;
	var uLocal_2038 = 1;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = -1;
	var uLocal_2050 = 1;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = -1;
	var uLocal_2062 = 1;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = -1;
	var uLocal_2074 = 1;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = -1;
	var uLocal_2086 = 1;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = -1;
	var uLocal_2098 = 1;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = -1;
	var uLocal_2110 = 1;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = -1;
	var uLocal_2122 = 1;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = -1;
	var uLocal_2134 = 1;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = -1;
	var uLocal_2146 = 1;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = -1;
	var uLocal_2158 = 1;
	var uLocal_2159 = 0;
	struct<141> Local_2160 = { 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	int iLocal_2311[5] = { 0, 0, 0, 0, 0 };
	int iLocal_2317 = 0;
	int iLocal_2318 = 0;
	int iLocal_2319 = 0;
	var uLocal_2320[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_2351 = 30;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2413 = 0;
	var uLocal_2414 = 8;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	int iLocal_2479[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_2489[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_2499[2] = { 0, 0 };
	int iLocal_2502[2] = { 0, 0 };
	int iLocal_2505[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_2516 = 10;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	int iLocal_2527[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2543 = 0;
	struct<35> Local_2544 = { 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 1096810496, 1090519040, 0 } ;
	var uLocal_2579[1] = { 0 };
	struct<5> Local_2581[5];
	var uLocal_2607[5] = { 0, 0, 0, 0, 0 };
	struct<24> Local_2613 = { 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 1048576000, 1193033728, 1092616192, 1065353216, 0, 0 } ;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	int iLocal_2646 = 0;
	int iLocal_2647 = 0;
	int iLocal_2648 = 0;
	int iLocal_2649 = 0;
	int iLocal_2650 = 0;
	int iLocal_2651 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_749 = 15f;
	Local_2160.f_136 = 0;
	Local_2160.f_137 = uScriptParam_0;
	Local_2160.f_138 = 807;
	if (func_1() != 0)
	{
	}
	else
	{
		func_2();
		func_3(Local_2160.f_136);
		return;
	}
	iLocal_98 = func_4(Local_2160.f_136);
	if (func_5(Local_2160.f_136, 536870912))
	{
		func_8(&((Global_40.f_9096[Local_2160.f_136 /*12*/])->f_6), func_7(func_6()));
	}
	if (!func_9(Local_2160.f_136, 2097152))
	{
		func_10(Local_2160.f_136, 2097152);
	}
	func_11();
	func_13(128, func_12(Local_2160.f_136));
	if (func_9(Local_2160.f_136, 33554432))
	{
		func_14(128);
		func_15(Local_2160.f_136, 33554432);
	}
	func_14(1);
	func_13(262144, func_5(Local_2160.f_136, 128));
	func_13(131072, func_5(Local_2160.f_136, 4));
	func_13(2097152, func_9(Local_2160.f_136, 1024));
	func_13(-2147483648, func_9(Local_2160.f_136, 16384));
	func_13(1048576, func_16(Local_2160.f_136));
	func_13(16, func_17(Local_2160.f_136));
	func_18(0, &Local_2160, 0);
	VEHICLE::_0x012701ED938B85DE(1f, 5f);
	if (func_5(Local_2160.f_136, 128) || (iLocal_98 == 2 && (func_19(-2147483648) || !func_9(1, 2))))
	{
		func_14(262144);
	}
	func_21(&Local_2160, 32, func_20());
	if (func_22(&Local_2160, 32))
	{
		if (!func_23(Local_2160.f_138, 32))
		{
			func_24(Local_2160.f_138, 32);
		}
		if (!func_19(1048576))
		{
			iVar0 = 16;
			func_25(((*Global_1392194)[Local_2160.f_136 /*10*/])->f_6, iVar0);
		}
	}
	else
	{
		func_26(((*Global_1392194)[Local_2160.f_136 /*10*/])->f_6);
	}
	func_27(Local_2160.f_136, Local_2160.f_137, &Local_1157, &Local_2160, 1, 1);
	func_13(64, func_28());
	func_13(16384, func_29());
	func_13(32768, func_30());
	func_13(65536, func_31());
	func_13(256, func_32());
	func_33();
	Local_1157.f_13 = 925190986;
	func_34();
	if (!func_22(&Local_2160, 32))
	{
		iLocal_75[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1400.323f, -207.0721f, 103.6361f, 0f, 0f, 18.49513f, 5.458226f, 7.343121f, 3.461949f, "Appleseed - volOffice");
		POPULATION::_0x18262CAFEBB5FBE1(&(iLocal_75[0]), 0, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(&(iLocal_75[0]), 0, 0, 0, -1, -1, 2);
	}
	if (iLocal_98 != 1)
	{
	}
	else
	{
		iLocal_75[8] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1342.603f, -191.78f, 101.3216f, 0f, 0f, 26.31277f, 4.493421f, 15.76546f, 2.950686f, "Appleseed - volFlatbed");
		POPULATION::_0x18262CAFEBB5FBE1(&(iLocal_75[8]), 0, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(&(iLocal_75[8]), 0, 0, 0, -1, -1, 2);
	}
	func_3(Local_2160.f_136);
	uScriptParam_0 = uScriptParam_0;
	Local_1157.f_4 = { -1399.503f, -223.7296f, 99.81865f };
	Local_1157.f_7 = { -1474.662f, -341.2676f, 80f };
	Local_1157.f_10 = { -1326.326f, -116.0771f, 150f };
	if (func_19(16))
	{
		Local_972.f_3 = 1;
	}
	if (func_22(&Local_2160, 32))
	{
		POPULATION::_0x74C2B3DC0B294102(((*Global_1392194)[Local_2160.f_136 /*10*/])->f_5);
		POPULATION::_0xA1CFB35069D23C23(((*Global_1392194)[Local_2160.f_136 /*10*/])->f_5);
		func_35(512);
	}
	else if (iLocal_98 != 3)
	{
	}
	else
	{
		iLocal_75[18] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("EA LCMP - volOnMission");
		VOLUME::_0xBCE668AAF83608BE(&(iLocal_75[18]), -1414.369f, -264.0309f, 134.2139f, 0f, 0f, 18.97237f, 103.6197f, 144.6739f, 41.18933f);
		VOLUME::_0xBCE668AAF83608BE(&(iLocal_75[18]), -1470.38f, -391.851f, 142.0586f, 0f, 0f, -62.46322f, 62.55141f, 51.09426f, 31.34803f);
	}
	func_36();
	func_37();
	if (iLocal_98 > 3)
	{
		func_35(512);
	}
	if (iLocal_98 == 3 && !func_19(262144))
	{
		func_35(512);
	}
	func_13(8192, func_38());
	func_39(&Local_2160);
	func_40(&Local_2160, 1);
	if (func_19(1048576) || func_22(&Local_2160, 32))
	{
		func_41(&Local_2160, 1);
	}
	if (func_19(262144) && !func_5(Local_2160.f_136, 16777216))
	{
		func_42(Local_2160.f_136, 16777216);
	}
	func_43(&Local_2160, 128);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		iLocal_2651 = 1;
	}
	while (true)
	{
		func_45(iLocal_2651, 9338/*func_44*/, 0);
		func_46();
		if (!iLocal_2651)
		{
			switch (iLocal_2648)
			{
				case 0:
					if (!func_5(Local_2160.f_136, 524288) && Local_1157.f_3 < (15 + ((2 + (Local_1157 + Local_1157.f_1)) + iLocal_14)))
					{
						func_47((15 + ((2 + (Local_1157 + Local_1157.f_1)) + iLocal_14)), &Local_1157);
						func_48(vLocal_1117[4 /*3*/]);
					}
					else if (func_49())
					{
						iLocal_2648 = 1;
					}
					break;
				case 1:
					func_50(16);
					if (!func_51(1) && func_52())
					{
						bVar1 = func_51(16);
						func_54(1, func_53(&Local_1157, &Local_2160, &iLocal_2479, &iLocal_2502, &bVar1, &iLocal_733));
						func_54(16, bVar1);
						if (func_51(1))
						{
							iLocal_733 = 0;
						}
					}
					if (!func_51(131072))
					{
						if (func_19(256))
						{
							if (func_55())
							{
								func_57(func_56(), 10f, 1);
								if (!VOLUME::_0x92A78D0BEDB332A3(&(iLocal_75[21])))
								{
									iLocal_75[21] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1336.432f, -204.9798f, 102.1644f, 0f, 0f, 25.28583f, 5.635887f, 71.55907f, 4.877145f, "EA LCMP - volTrain");
									POPULATION::_0x18262CAFEBB5FBE1(&(iLocal_75[21]), 10208, 0, 0, -1, -1, 0);
								}
								if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_2502[1])))
								{
									iLocal_2502[1] = VEHICLE::_0xC239DBD9A57D2A71(-1901305252, func_56(), 0, 0, 1, 0);
								}
								if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_2502[1])) && VEHICLE::IS_VEHICLE_DRIVEABLE(&(iLocal_2502[1]), 0, 0))
								{
									VEHICLE::SET_TRAIN_SPEED(&(iLocal_2502[1]), 0f);
									VEHICLE::SET_TRAIN_CRUISE_SPEED(&(iLocal_2502[1]), 0f);
									VEHICLE::_0x3660BCAB3A6BB734(&(iLocal_2502[1]));
									VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(&(iLocal_2502[1]), false);
									VEHICLE::_0xA72B1BF3857B94D7(&(iLocal_2502[1]), 1);
									func_58(131072);
								}
							}
						}
						else
						{
							func_58(131072);
						}
					}
					if (!func_51(2) && func_52())
					{
						if (!func_22(&Local_2160, 32))
						{
							bVar2 = func_51(16);
							func_54(2, func_60(&bVar2, &iLocal_733, 0, func_59((iLocal_98 == 3 && !func_19(262144)), 0, -1)));
							func_54(16, bVar2);
							if (func_51(2))
							{
								iLocal_733 = 0;
							}
						}
						else
						{
							func_58(2);
						}
					}
					if (!func_51(4) && !func_51(16))
					{
						if (!func_22(&Local_2160, 32))
						{
							func_61(Local_2160.f_138, 0, 0, 0, 0, 0);
							func_58(16);
							func_54(4, func_62(Local_2160.f_138, 1, 1));
							if (!ENTITY::IS_ENTITY_DEAD(func_63(Local_2160.f_138)))
							{
								PED::SET_PED_CONFIG_FLAG(func_63(Local_2160.f_138), 146, true);
							}
						}
						else
						{
							func_58(4);
						}
					}
					if (!func_51(8))
					{
						if (!func_22(&Local_2160, 32) && !func_22(&Local_2160, 2))
						{
							if (func_64(&Local_1157))
							{
								if (!func_22(&Local_2160, 32) && func_19(64))
								{
									func_65(&(Local_2160.f_35), &(iLocal_2479[0]), "LOGGING_VICTIM", 0);
									iVar3 = 0 + 810;
									iVar4 = func_63(iVar3);
									func_65(&(Local_2160.f_35), iVar4, "LOGGING_WORKER", 0);
								}
								func_58(8);
							}
						}
						else
						{
							func_58(8);
						}
					}
					if (!func_51(524288) && func_66())
					{
						if (func_19(65536) && !ENTITY::IS_ENTITY_DEAD(&(iLocal_2479[5])))
						{
							func_67(uLocal_72[1], iLocal_2479[5], Local_15[1 /*28*/], 1112014848, 0, 0, 0);
						}
						if (func_19(32768) && !ENTITY::IS_ENTITY_DEAD(&(iLocal_2479[4])))
						{
							func_67(uLocal_72[0], iLocal_2479[4], Local_15[0 /*28*/], 1112014848, 0, iLocal_743, 0);
							if (!func_68(128) && ENTITY::DOES_ENTITY_EXIST(&(uLocal_72[0])))
							{
								VEHICLE::SET_VEHICLE_EXTRA(&(uLocal_72[0]), 1, true);
								VEHICLE::SET_VEHICLE_EXTRA(&(uLocal_72[0]), 2, true);
								func_69(128);
							}
						}
						func_58(524288);
					}
					func_70(Local_2160.f_136, 1);
					if (((((((((!CAM::IS_SCREEN_FADED_OUT() && func_51(1)) && func_51(2)) && func_51(4)) && func_51(8)) && func_51(131072)) && func_51(524288)) && func_71()) && func_72()) || func_22(&Local_2160, 32))
					{
						if (!func_22(&Local_2160, 32) && (func_19(128) || !func_73()))
						{
							func_65(&(Local_2160.f_35), Global_35, "ARTHUR", 0);
							func_65(&(Local_2160.f_35), func_63(Local_2160.f_138), "EA_LCMP_Foreman", 0);
							func_74();
						}
						else
						{
							func_65(&(Local_2160.f_35), Global_35, "ARTHUR", 0);
							func_65(&(Local_2160.f_35), func_63(Local_2160.f_138), "EA_LCMP_Foreman", 0);
							func_75(Local_2160.f_138, 1);
							func_76(Local_750[0 /*21*/], 0);
						}
						func_77();
						iLocal_2648 = 2;
					}
					break;
				case 2:
					if (func_22(&Local_2160, 128) && func_78(Local_2160.f_136, func_19(128)))
					{
						func_79(0);
						func_80(&Local_2160, 128);
					}
					func_81();
					if (!func_19(16777216))
					{
						func_13(16777216, func_82(&Local_2160, &Local_1157));
					}
					if (!func_22(&Local_2160, 32))
					{
						if (func_18(iLocal_745, &Local_2160, 5))
						{
							func_83();
							func_84();
						}
						if (!func_22(&Local_2160, 2))
						{
							func_85(&uLocal_2320, &uLocal_2382, &Local_2160, 808, 833, &iLocal_732, &iLocal_745, 10, -1082130432, 1);
							func_86(&uLocal_2320);
							func_86(&iLocal_2479);
							func_86(&iLocal_2505);
							func_87();
							func_88();
							if ((!func_22(&Local_2160, 32) && !func_19(32)) && func_19(128))
							{
								func_91(&Local_2160, 0, func_89(), func_90());
								func_92();
							}
							if (func_93())
							{
								if (func_68(8192))
								{
									TASK::SET_ANIM_RATE((Local_1157.f_690[12 /*12*/])->f_8, 0f, 0, false);
									TASK::SET_ANIM_RATE((Local_1157.f_690[13 /*12*/])->f_8, 0f, 0, false);
								}
								func_94(&Local_972, &Local_2160, 0);
								func_95(&Local_2160);
								func_15(Local_2160.f_136, 16384);
								func_96(&iLocal_2413);
								func_97();
								if (func_98(iLocal_154) && func_99(iLocal_154))
								{
									func_100(iLocal_154, 0, 2);
								}
								func_101(1);
								LAW::_0x710448D44A64C213(1);
								iVar5 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(-1905235087, Global_35, 1f, -1f, -1f, -1082130432, -1082130432, 1127481344, 0, 0, -1, -1);
								iVar6 = 0;
								while (iVar6 < 2)
								{
									if (PHYSICS::DOES_ROPE_EXIST(&(iLocal_1036[iVar6])))
									{
										PHYSICS::DELETE_ROPE(iLocal_1036[iVar6]);
									}
									iVar6++;
								}
								MAP::DISPLAY_RADAR(true);
								HUD::DISPLAY_HUD(true);
								if (func_102(1))
								{
									func_43(&Local_2160, 4096);
									func_43(&Local_2160, 16384);
								}
								else
								{
									func_10(Local_2160.f_136, 1024);
								}
								func_103();
								func_104();
								func_105();
								func_106(1);
								iVar7 = 0;
								while (iVar7 < 3)
								{
									func_107(Local_814[iVar7 /*52*/], 1, 1, 1, 0);
									iVar7++;
								}
								func_108(0);
								func_109(&(iLocal_75[1]));
								func_110();
								if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_2505[0])))
								{
									ENTITY::FREEZE_ENTITY_POSITION(&(iLocal_2505[0]), false);
								}
								if (ENTITY::DOES_ENTITY_EXIST((Local_1157.f_690[23 /*12*/])->f_8))
								{
									ENTITY::DETACH_ENTITY((Local_1157.f_690[23 /*12*/])->f_8, false, true);
								}
								func_111(&uLocal_2489);
								func_111(&uLocal_2516);
								func_111(&uLocal_2499);
								func_112(Local_2160.f_136, 3);
								func_113(&Local_2160);
								iLocal_2650 = 4;
								iVar8 = func_59(!ENTITY::IS_ENTITY_DEAD(func_63(Local_2160.f_138)), 1, 0);
								if (!func_22(&Local_2160, 4096))
								{
									func_114(func_63(Local_2160.f_138), Global_35, "LOG_AGGRO", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
								if (func_51(32768))
								{
									iVar9 = 1135209633; /* GXTEntry: "Vehicle Theft" */
								}
								else if (func_115(268435456))
								{
									iVar9 = -1103472584; /* GXTEntry: "Horse Theft" */
								}
								else
								{
									iVar9 = func_116(&Local_2160, Local_2160.f_28);
								}
								func_43(&Local_2160, 2);
								func_117();
								if (!func_19(1024))
								{
									func_119(&Local_2160, func_63(Local_2160.f_138), uLocal_2499[0], 0, func_118(131072, 1056964608, 1065353216), 0);
								}
								if (!(func_19(32) && func_19(1024)))
								{
									iLocal_2650 = func_59(iLocal_2650 > iVar8, (iLocal_2650 - iVar8), 0);
									iVar8 = func_120(&Local_2160, &iLocal_2479, &uLocal_2489, func_118(131072, 1056964608, 1065353216), iVar5, iLocal_2650, 0, 0, 0, iVar9, 1051260355);
									iLocal_2650 = func_59(iLocal_2650 > iVar8, (iLocal_2650 - iVar8), 0);
								}
								iLocal_2650 = func_59(iLocal_2650 > iVar8, (iLocal_2650 - iVar8), 0);
								func_47(iLocal_732, &Local_1157);
								iVar8 = func_121(&Local_2160, &uLocal_2320, &uLocal_2351, iLocal_2650, func_118(131072, 1056964608, 1065353216), iLocal_732, iVar5, 0, 0, 0, iVar9, 1051260355);
								iLocal_2650 = func_59(iLocal_2650 > iVar8, (iLocal_2650 - iVar8), 0);
								func_33();
								func_43(&Local_2160, 128);
							}
						}
						else
						{
							func_122(&uLocal_2320, &Local_2160);
							func_123();
							if (func_19(1024))
							{
								if (func_124(&Local_2160, func_63(Local_2160.f_138), uLocal_2499[0], 0))
								{
									if (func_19(32))
									{
										if (func_125())
										{
											iVar11 = 0;
											iVar10 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(-1905235087, Global_35, 1f, -1f, -1f, -1082130432, -1082130432, 1127481344, 0, 0, -1, -1);
											iLocal_2650 = func_59(iLocal_2650 > iVar11, (iLocal_2650 - iVar11), 0);
											iVar11 = (func_120(&Local_2160, &iLocal_2479, &uLocal_2489, func_118(131072, 1056964608, 1065353216), iVar10, iLocal_2650, 0, 0, 0, func_116(&Local_2160, Local_2160.f_28), 1051260355) + iVar11);
											iLocal_2650 = func_59(iLocal_2650 > iVar11, (iLocal_2650 - iVar11), 0);
											func_126(1024);
										}
									}
									else
									{
										func_126(1024);
									}
								}
							}
							if (func_19(32))
							{
								if (func_127())
								{
									if (!func_19(1024))
									{
										func_126(32);
									}
								}
							}
							if (func_19(64))
							{
								if (func_68(131072))
								{
									if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_2479[0])))
									{
										if ((PED::_0xB65A4DAB460A19BD(Global_35) == &iLocal_2479[0] || PED::_0x9682F850056C9ADE(&(iLocal_2479[0]))) || !TASK::GET_IS_TASK_ACTIVE(&(iLocal_2479[0]), 3))
										{
											func_128(&(iLocal_2479[0]), 0, 0);
										}
									}
								}
								else if (!func_129(&(iLocal_2479[0]), 518218985) && !TASK::GET_IS_TASK_ACTIVE(&(iLocal_2479[0]), 3))
								{
									ENTITY::FREEZE_ENTITY_POSITION(&(iLocal_2479[0]), false);
									PED::_0x89F5E7ADECCCB49C(&(iLocal_2479[0]), "INJURED_LEFT_LEG");
									TASK::_TASK_SMART_FLEE_STYLE_PED(&(iLocal_2479[0]), Global_35, 3, 0, -1082130432, -1, 0);
								}
							}
							if (!func_22(&Local_2160, 4) && func_130(&Local_2160, &iLocal_2479, &iLocal_2505, &(Local_2160.f_139), 5, func_63(Local_2160.f_138)))
							{
								func_43(&Local_2160, 4);
							}
						}
						if (!func_22(&Local_2160, 2))
						{
							if (func_19(65536) && !ENTITY::IS_ENTITY_DEAD(&(iLocal_2479[5])))
							{
								func_67(uLocal_72[1], iLocal_2479[5], Local_15[1 /*28*/], 1112014848, func_19(4096), 0, 0);
								if (!func_68(128) && ENTITY::DOES_ENTITY_EXIST(&(uLocal_72[1])))
								{
									PROPSET::_0xD80FAF919A2E56EA(&(uLocal_72[1]), 1242644044);
									func_69(128);
								}
							}
							if (func_19(32768) && !ENTITY::IS_ENTITY_DEAD(&(iLocal_2479[4])))
							{
								func_67(uLocal_72[0], iLocal_2479[4], Local_15[0 /*28*/], 1112014848, func_19(4096), iLocal_743, 0);
								if (!func_68(128) && ENTITY::DOES_ENTITY_EXIST(&(uLocal_72[0])))
								{
									func_69(128);
								}
							}
						}
					}
					if (!func_22(&Local_2160, 2))
					{
						if (!func_22(&Local_2160, 32))
						{
							func_131(&Local_972);
							if (func_132(&Local_972, 1))
							{
								func_133(&Local_2160, &Local_972, Local_750[2 /*21*/], Local_814[2 /*52*/]);
							}
							else
							{
								func_134(&Local_972, 4);
							}
						}
						if (func_135())
						{
							iLocal_2651 = 1;
						}
					}
					else if (!func_22(&Local_2160, 32))
					{
						func_136();
					}
					break;
			}
		}
		if (func_137())
		{
			iLocal_2651 = 1;
		}
		BUILTIN::WAIT(Local_2160.f_30);
	}
}

int func_1()
{
	return Global_1572887->f_12;
}

void func_2()
{
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(529482239, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(515502019, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(223107846, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1428772759, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1173617900, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1480157862, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-2061234582, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1033154098, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1619191432, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1254150069, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1668640329, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-92203186, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(378017637, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(874422897, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-508527824, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(2077381882, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-681889807, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-595414142, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1991616213, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1368197280, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1712141152, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1887892244, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(638507460, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1610796463, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-614511582, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1254654001, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-419045977, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(2146274232, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1850986699, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-465906603, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1498945676, false);
}

void func_3(int iParam0)
{
	int iVar0;

	if (!func_138(iParam0))
	{
		return;
	}
	iVar0 = func_139(iParam0);
	if (!func_140(iVar0, 8))
	{
		func_141(iVar0, 8);
	}
	TASK::_0x4161648394262FDF(func_142(iParam0, func_4(iParam0)), 100f);
	func_143(&(((*Global_1392194)[iParam0 /*10*/])->f_1), 1);
}

int func_4(int iParam0)
{
	if (!func_138(iParam0))
	{
		return -1;
	}
	return &(Global_40.f_9096[iParam0 /*12*/]);
}

bool func_5(int iParam0, int iParam1)
{
	if (!func_138(iParam0))
	{
		return false;
	}
	return ((Global_40.f_9096[iParam0 /*12*/])->f_4 && iParam1) != 0;
}

int func_6()
{
	switch (iLocal_98)
	{
		case 1:
			return 0;
		case 2:
			return 3;
		case 3:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_7(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

void func_8(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_9(int iParam0, int iParam1)
{
	if (!func_138(iParam0))
	{
		return false;
	}
	return ((Global_40.f_9096[iParam0 /*12*/])->f_5 && iParam1) != 0;
}

void func_10(int iParam0, int iParam1)
{
	if (!func_138(iParam0))
	{
		return;
	}
	if (func_9(iParam0, iParam1))
	{
		return;
	}
	(Global_40.f_9096[iParam0 /*12*/])->f_5 = ((Global_40.f_9096[iParam0 /*12*/])->f_5 || iParam1);
}

void func_11()
{
	iLocal_99 = 0;
}

int func_12(var uParam0)
{
	int iVar0;

	if (func_144(30336, 1, 1) && !func_145())
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	if (func_146(Global_35, 0))
	{
		iVar0 = 0;
	}
	if (func_147() && func_148() == 27)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_13(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_14(iParam0);
	}
	else
	{
		func_126(iParam0);
	}
}

void func_14(int iParam0)
{
	iLocal_99 = (iLocal_99 || iParam0);
}

void func_15(int iParam0, int iParam1)
{
	if (!func_138(iParam0))
	{
		return;
	}
	if (!func_9(iParam0, iParam1))
	{
		return;
	}
	(Global_40.f_9096[iParam0 /*12*/])->f_5 = ((Global_40.f_9096[iParam0 /*12*/])->f_5 - ((Global_40.f_9096[iParam0 /*12*/])->f_5 && iParam1));
}

int func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;

	if ((Global_40.f_9096[iParam0 /*12*/])->f_10 < 0)
	{
		return 0;
	}
	if (func_5(iParam0, 4194304))
	{
		return 0;
	}
	func_149(iParam0, &iVar0, &iVar1, &uVar2, &uVar3);
	if (iVar0 < 2 || iVar1 < 23)
	{
		return 0;
	}
	return 1;
}

int func_17(int iParam0)
{
	int iVar0;

	if ((Global_40.f_9096[iParam0 /*12*/])->f_9 == -1)
	{
		return 0;
	}
	if ((Global_40.f_9096[iParam0 /*12*/])->f_10 < 0)
	{
		return 0;
	}
	if (func_5(iParam0, 524288))
	{
		return 0;
	}
	if (!func_9(iParam0, 16777216))
	{
		func_112(iParam0, 2);
		return 1;
	}
	iVar0 = (&Global_40.f_9096[iParam0 /*12*/] - (Global_40.f_9096[iParam0 /*12*/])->f_9);
	if (iVar0 >= 2)
	{
		if (func_9(iParam0, 32768))
		{
			func_15(iParam0, 32768);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_150(iParam0))
	{
		if (func_9(iParam0, 32768))
		{
			func_15(iParam0, 32768);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_9(iParam0, 32768))
	{
		func_15(iParam0, 32768);
	}
	return 1;
}

int func_18(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	if ((iParam0 % iParam2) == 0)
	{
		iVar7 = MISC::_0x4BEB42AEBCA732E9();
		iVar8 = MISC::_0x51021D36F62AAA83();
		MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &fVar2);
		bVar4 = (func_151(iVar7) || func_152(iVar7));
		bVar5 = (func_151(iVar8) || func_152(iVar8));
		if (bVar4 && bVar5)
		{
			if (!func_22(uParam1, 256))
			{
				bVar6 = true;
			}
			func_43(uParam1, 256);
		}
		else if (bVar4)
		{
			if (func_153(iVar7) || func_154(iVar7))
			{
				fVar3 = 0.9f;
			}
			else
			{
				fVar3 = 0.5f;
			}
			if (fVar2 >= (1f - fVar3))
			{
				if (func_22(uParam1, 256))
				{
					bVar6 = true;
				}
				func_80(uParam1, 256);
			}
		}
		else if (bVar5)
		{
			if (func_153(iVar8) || func_154(iVar8))
			{
				fVar3 = 0.9f;
			}
			else
			{
				fVar3 = 0.5f;
			}
			if (fVar2 >= fVar3)
			{
				if (!func_22(uParam1, 256))
				{
					bVar6 = true;
				}
				func_43(uParam1, 256);
			}
		}
		else
		{
			if (func_22(uParam1, 256))
			{
				bVar6 = true;
			}
			func_80(uParam1, 256);
		}
		if (bVar6)
		{
		}
		return bVar6;
	}
	return 0;
}

bool func_19(int iParam0)
{
	return (iLocal_99 && iParam0) != 0;
}

int func_20()
{
	if (((func_5(Local_2160.f_136, 524288) || func_5(Local_2160.f_136, 2097152)) || func_5(Local_2160.f_136, 1048576)) || iLocal_98 > 3)
	{
		return 1;
	}
	return 0;
}

void func_21(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_43(uParam0, iParam1);
	}
	else
	{
		func_80(uParam0, iParam1);
	}
}

bool func_22(var uParam0, int iParam1)
{
	return (uParam0->f_29 && iParam1) != 0;
}

bool func_23(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_155(iParam0))
	{
		return false;
	}
	return (Global_24886[iParam0 /*2*/] && iParam1) != 0;
}

void func_24(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return;
	}
	if (!func_155(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (Global_24886[iParam0 /*2*/] || iParam1);
}

int func_25(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(Global_1935475[iVar0 /*2*/]) && Global_1935475[iVar0 /*2*/] == iParam0)
		{
			((*Global_1935475)[iVar0 /*2*/])->f_1 = iParam1;
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!VOLUME::_0x92A78D0BEDB332A3(Global_1935475[iVar0 /*2*/]))
		{
			(*Global_1935475)[iVar0 /*2*/] = iParam0;
			((*Global_1935475)[iVar0 /*2*/])->f_1 = iParam1;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_26(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(Global_1935475[iVar0 /*2*/]) && Global_1935475[iVar0 /*2*/] == iParam0)
		{
			(*Global_1935475)[iVar0 /*2*/] = 0;
			((*Global_1935475)[iVar0 /*2*/])->f_1 = 0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_27(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	uParam3->f_136 = uParam0;
	uParam3->f_137 = iParam1;
	func_43(uParam3, 128);
	func_156(iParam1, 1);
	if (bParam5)
	{
		func_157(((*Global_1392194)[uParam3->f_136 /*10*/])->f_5, 0, 0, 0);
	}
	if (bParam4)
	{
		func_158(((*Global_1392194)[uParam3->f_136 /*10*/])->f_6, 0);
		func_159(((*Global_1392194)[uParam3->f_136 /*10*/])->f_6, 0, 0, 1, 1, 0);
	}
	bVar0 = false;
	if (iParam1 == 76)
	{
		func_160(&iVar1, &iVar2, func_9(1, 1048576));
	}
	else
	{
		func_161(iParam1, &iVar1, &iVar2, 0, 0);
	}
	iVar3 = iVar1;
	while (iVar3 <= iVar2)
	{
		if (func_155(iVar3) && !func_23(iVar3, 32))
		{
			if (!bVar0)
			{
				bVar0 = true;
			}
			func_162(iVar3);
		}
		iVar3++;
	}
	if (bVar0)
	{
		func_163(iParam1, iVar1, iVar2, 1);
	}
	if (!func_22(uParam3, 32))
	{
		_NAMESPACE48::_0xB173599D61FAEB31();
	}
}

int func_28()
{
	float fVar0;

	if (!func_164(64))
	{
		return 0;
	}
	if (func_19(1048576))
	{
		return 0;
	}
	if (!func_9(Local_2160.f_136, 512))
	{
		if (iLocal_98 == 2 && !func_5(Local_2160.f_136, 64))
		{
			if (func_5(Local_2160.f_136, 128))
			{
				return 1;
			}
			else
			{
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
				if (fVar0 < 1f)
				{
					return 1;
				}
			}
		}
		if (iLocal_98 == 1 && func_5(Local_2160.f_136, 128))
		{
			return 1;
		}
	}
	return 0;
}

int func_29()
{
	if (iLocal_98 == 1 && !func_9(Local_2160.f_136, 1024))
	{
		return 1;
	}
	return 0;
}

bool func_30()
{
	float fVar0;

	if (func_164(16))
	{
		return false;
	}
	if (iLocal_98 == 3 && !func_19(262144))
	{
		return false;
	}
	if (iLocal_98 > 3)
	{
		return false;
	}
	if (iLocal_98 == 1)
	{
		return true;
	}
	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	return fVar0 < 0.4f;
}

int func_31()
{
	float fVar0;

	if (func_164(16))
	{
		return 0;
	}
	else if (iLocal_98 == 3 && !func_19(262144))
	{
		return 0;
	}
	else if (iLocal_98 > 3)
	{
		return 0;
	}
	else if (iLocal_98 == 2 && !func_19(131072))
	{
		return 1;
	}
	else if (iLocal_98 >= 2)
	{
		fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
		return fVar0 < 0.33f;
	}
	return 0;
}

int func_32()
{
	int iVar0;
	float fVar1;
	bool bVar2;

	if (func_19(64))
	{
		return 0;
	}
	else if (func_164(64) && (iLocal_98 == 2 || (iLocal_98 == 3 && func_19(262144))))
	{
		iVar0 = func_165(func_56(), 0);
		if (func_166(iVar0) && MISC::GET_DISTANCE_BETWEEN_COORDS(VEHICLE::_0x1E8A921112891651(((*Global_1425371)[iVar0 /*373*/])->f_1), func_56(), true) < 350f)
		{
			return 0;
		}
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
		bVar2 = fVar1 < 1f;
		if (bVar2)
		{
			return 1;
		}
	}
	return 0;
}

void func_33()
{
	func_2();
	if (iLocal_98 < 4 && !func_19(256))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1498945676, true);
	}
	switch (iLocal_98)
	{
		case 1:
			if (!func_22(&Local_2160, 32))
			{
				if (!func_22(&Local_2160, 2))
				{
					iLocal_742 = 1480157862;
					iLocal_743 = -1619191432;
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1173617900, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1480157862, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(638507460, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(529482239, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-2061234582, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1619191432, true);
					if (func_19(262144))
					{
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1428772759, true);
					}
				}
			}
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1033154098, true);
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(2146274232, true);
			break;
		case 2:
			if (!func_22(&Local_2160, 32))
			{
				if (!func_22(&Local_2160, 2))
				{
					iLocal_742 = 1254150069;
					iLocal_743 = 378017637;
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1173617900, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1254150069, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1991616213, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1368197280, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-614511582, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(515502019, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1668640329, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(378017637, true);
				}
			}
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-92203186, true);
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1850986699, true);
			break;
		case 3:
			if (!func_22(&Local_2160, 32))
			{
				if (!func_22(&Local_2160, 2))
				{
					if (func_19(262144))
					{
						iLocal_742 = 874422897;
						iLocal_743 = 1663347996;
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1173617900, true);
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(874422897, true);
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1991616213, true);
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-419045977, true);
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(515502019, true);
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-508527824, true);
					}
					else
					{
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(2077381882, true);
						TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-681889807, true);
						iLocal_742 = 2077381882;
						iLocal_743 = 1663347996;
					}
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(223107846, true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1368197280, true);
				}
			}
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-595414142, true);
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-465906603, true);
			break;
		case 4:
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1712141152, true);
			break;
		case 5:
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1887892244, true);
			break;
	}
	TASK::_0x9C8F42A5D1859DC1(((*Global_1392194)[Local_2160.f_136 /*10*/])->f_5);
}

void func_34()
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iLocal_98)
	{
		case 1:
			iVar0 = 12;
			break;
		case 2:
			iVar0 = 16;
			break;
		case 3:
			iVar0 = 22;
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (func_22(&Local_2160, 32))
	{
		iVar0 = 0;
	}
	iVar2 = 814;
	while (iVar2 <= 833)
	{
		if (_NAMESPACE48::_0x800DF3FC913355F3(func_167(iVar2)))
		{
			if (iVar1 >= iVar0)
			{
				func_24(iVar2, 32);
				func_168(iVar2);
			}
			else
			{
				func_169(iVar2, 32);
				if (_NAMESPACE48::_0x800DF3FC913355F3(func_167(iVar2)))
				{
					_NAMESPACE48::_0x4F81EAD1DE8FA19B(func_167(iVar2));
				}
			}
			iVar1++;
		}
		iVar2++;
	}
	iVar2 = 810;
	while (iVar2 <= 813)
	{
		if (_NAMESPACE48::_0x800DF3FC913355F3(func_167(iVar2)))
		{
			if (iLocal_98 >= 4 || func_22(&Local_2160, 32))
			{
				func_24(iVar2, 32);
				func_168(iVar2);
			}
			else
			{
				func_169(iVar2, 32);
				if (_NAMESPACE48::_0x800DF3FC913355F3(func_167(iVar2)))
				{
					_NAMESPACE48::_0x4F81EAD1DE8FA19B(func_167(iVar2));
				}
			}
		}
		iVar2++;
	}
	iVar2 = 808;
	while (iVar2 <= 809)
	{
		if (_NAMESPACE48::_0x800DF3FC913355F3(func_167(iVar2)))
		{
			if (iLocal_98 >= 4 || func_22(&Local_2160, 32))
			{
				func_24(iVar2, 32);
				func_168(iVar2);
			}
			else
			{
				func_169(iVar2, 32);
				if (_NAMESPACE48::_0x800DF3FC913355F3(func_167(iVar2)))
				{
					_NAMESPACE48::_0x4F81EAD1DE8FA19B(func_167(iVar2));
				}
			}
		}
		iVar2++;
	}
	func_84();
}

void func_35(int iParam0)
{
	iLocal_102 = (iLocal_102 || iParam0);
}

void func_36()
{
	if (func_22(&Local_2160, 32))
	{
		iLocal_75[0] = VOLUME::_CREATE_VOLUME_BOX(-1398.447f, -246.3103f, 99.12786f, 0f, 0f, 0f, 5.212102f, 3.640974f, 2.867354f);
		POPULATION::_0x18262CAFEBB5FBE1(&(iLocal_75[0]), 2304, 0, 0, -1, -1, 0);
	}
	else if (iLocal_98 == 2 || iLocal_98 == 3)
	{
		iLocal_75[5] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Appleseed - volHorseCorral");
		VOLUME::_0x39816F6F94F385AD(&(iLocal_75[5]), -1421.619f, -210.3775f, 102.9679f, 0f, 0f, -5.245227f, 18.54972f, 14.82578f, 5.569002f);
		VOLUME::_0xBCE668AAF83608BE(&(iLocal_75[5]), -1412.1f, -211.0359f, 103.0456f, 0f, 0f, -4.751498f, 3.586998f, 6.617523f, 2.783914f);
		VOLUME::_0xBCE668AAF83608BE(&(iLocal_75[5]), -1430.657f, -209.2033f, 103.0456f, 0f, 0f, -4.751498f, 3.586998f, 7.686718f, 2.783914f);
		iLocal_75[11] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1416.509f, -217.112f, 102.5954f, 0f, 0f, 0f, 7.971181f, 2.465843f, 4.154411f, "Appleseed - volCorralDoors");
		POPULATION::_0xB56D41A694E42E86(&(iLocal_75[11]), 256, 0, -1190799868, -1, -1, 2);
	}
}

int func_37()
{
	func_170(1024);
	func_171();
	if (iLocal_98 == 3 && !func_19(262144))
	{
		func_58(8388608);
		func_172();
	}
	if (func_22(&Local_2160, 32) && !(iLocal_98 == 4 && !func_19(262144)))
	{
		func_173(&Local_1157);
		return 1;
	}
	else
	{
		func_83();
	}
	switch (iLocal_98)
	{
		case 1:
			Local_1157 = 5;
			func_174(&Local_1157);
			break;
		case 2:
			Local_1157 = 5;
			func_175(&Local_1157);
			iLocal_14 += 2;
			break;
		case 3:
			func_176();
			Local_1157 = 5;
			func_177(&Local_1157, func_9(Local_2160.f_136, 2048));
			break;
		case 4:
		case 5:
			break;
	}
	if (!func_22(&Local_2160, 32))
	{
		if (iLocal_98 < 4)
		{
			func_178();
			func_179();
			func_180();
		}
		if (func_19(16384))
		{
			(Local_1157.f_369[0 /*32*/])->f_1 = 36009259;
			Local_1157.f_369[0 /*32*/] = 28;
			(Local_1157.f_369[0 /*32*/])->f_6 = { -1403.857f, -226.9338f, 100.4594f };
			(Local_1157.f_369[0 /*32*/])->f_9 = -83.35f;
		}
	}
	return 1;
}

int func_38()
{
	if (iLocal_1155 <= 0)
	{
		return 0;
	}
	if (iLocal_98 == 1 && !func_5(Local_2160.f_136, 4))
	{
		return 1;
	}
	if (!func_164(64))
	{
		return 0;
	}
	if (iLocal_98 > 3 || (iLocal_98 == 3 && !func_5(Local_2160.f_136, 128)))
	{
		return 0;
	}
	return 1;
}

void func_39(var uParam0)
{
	func_181(uParam0);
	func_182(uParam0, 10f, 1);
	func_183(uParam0, 1);
	func_184(uParam0, 1);
	func_185(uParam0, 1);
	func_186(uParam0, 1);
	func_187(uParam0, 0);
	func_40(uParam0, 0);
	func_188(uParam0, 1);
	func_189(uParam0, 1);
	func_190(uParam0, 1);
	func_191(uParam0, 1);
	func_192(uParam0, 1);
	func_193(uParam0, 1);
	func_194(uParam0, 1.25f);
	func_195(uParam0, 1);
	func_196(uParam0, 1);
	func_197(uParam0, 1);
	func_198(uParam0, 1);
}

void func_40(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_199(&(uParam0->f_1), 1024);
	}
	else
	{
		func_143(&(uParam0->f_1), 1024);
	}
}

void func_41(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_199(&(uParam0->f_1), 131072);
	}
	else
	{
		func_143(&(uParam0->f_1), 131072);
	}
}

void func_42(int iParam0, int iParam1)
{
	if (!func_138(iParam0))
	{
		return;
	}
	if (func_5(iParam0, iParam1))
	{
		return;
	}
	(Global_40.f_9096[iParam0 /*12*/])->f_4 = ((Global_40.f_9096[iParam0 /*12*/])->f_4 || iParam1);
}

void func_43(var uParam0, int iParam1)
{
	if (func_22(uParam0, iParam1))
	{
		return;
	}
	uParam0->f_29 = (uParam0->f_29 || iParam1);
}

void func_44()
{
	int iVar0;
	int iVar1;

	switch (iLocal_731)
	{
		case 0:
			func_200();
			if (func_19(128))
			{
				func_201();
			}
			if (func_51(32))
			{
				(Global_1914319->f_3[11 /*446*/])->f_35 = { Local_398 };
			}
			if (func_22(&Local_2160, 16384))
			{
				if (!func_22(&Local_2160, 32768))
				{
					func_202(Local_2160.f_136);
				}
				else
				{
					func_10(Local_2160.f_136, 1024);
				}
			}
			if (func_5(Local_2160.f_136, 128))
			{
				iVar0 = func_63(Local_2160.f_138);
				func_203(&iVar0);
			}
			func_94(&Local_972, &Local_2160, 0);
			func_204(Local_2160.f_136, 1073741824);
			func_204(Local_2160.f_136, 536870912);
			AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
			break;
		case 1:
			if (func_98(iLocal_154) && !((func_205(iLocal_154) || func_206(iLocal_154, 1)) || func_207(iLocal_154)))
			{
				func_100(iLocal_154, 0, 2);
			}
			if ((func_9(Local_2160.f_136, 16384) && ENTITY::DOES_ENTITY_EXIST(&(iLocal_2502[0]))) && (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_IN_VEHICLE(Global_35, &(iLocal_2502[0]), false)))
			{
				func_15(Local_2160.f_136, 16384);
			}
			if (PED::GET_PED_CONFIG_FLAG(Global_35, 514, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 514, false);
			}
			func_208(1024);
			func_209();
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 5, false);
				PED::SET_PED_RESET_FLAG(Global_35, 129, false);
			}
			func_210();
			func_211(1);
			func_212(1);
			if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_2479[5])) && !func_213(&(iLocal_2479[5]), ((*Global_1392194)[Local_2160.f_136 /*10*/])->f_5, 1, 0))
			{
				uLocal_2579[0] = &iLocal_2479[5];
			}
			VEHICLE::_0x8379E05871AD24E0();
			if (func_9(Local_2160.f_136, 256) && !func_9(Local_2160.f_136, 32))
			{
				func_214("SP_EVENT_AREA_APPLESEED_3_STOP", 0);
			}
			if (func_19(32))
			{
				func_214("SP_EVENT_AREA_APPLESEED_2_IDLE", 0);
			}
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (PHYSICS::DOES_ROPE_EXIST(&(iLocal_1036[iVar1])))
				{
					PHYSICS::DELETE_ROPE(iLocal_1036[iVar1]);
				}
				iVar1++;
			}
			break;
		case 3:
			func_105();
			func_215((Local_1157.f_690[2 /*12*/])->f_8, 1, 1);
			func_215((Local_1157.f_690[14 /*12*/])->f_8, 1, 1);
			func_215((Local_1157.f_690[23 /*12*/])->f_8, 1, 1);
			if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1392194)[Local_2160.f_136 /*10*/])->f_5))
			{
				iVar1 = 0;
				while (iVar1 < iLocal_2479)
				{
					if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_2479[iVar1])))
					{
						if (func_213(&(iLocal_2479[iVar1]), ((*Global_1392194)[Local_2160.f_136 /*10*/])->f_5, 1, 0))
						{
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(&(iLocal_2479[iVar1])))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(&(iLocal_2479[iVar1]), true, false);
							}
							PED::DELETE_PED(iLocal_2479[iVar1]);
						}
						else
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(iLocal_2479[iVar1]), false);
							PED::SET_PED_KEEP_TASK(&(iLocal_2479[iVar1]), true);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iLocal_2479[iVar1]);
						}
					}
					iVar1++;
				}
			}
			if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_75[4])))
			{
				PATHFIND::_0x2C87C3E1C7B96EE2(&(iLocal_75[4]));
			}
			iVar1 = 0;
			while (iVar1 < 22)
			{
				func_109(&(iLocal_75[iVar1]));
				iVar1++;
			}
			iVar1 = 0;
			while (iVar1 < 11)
			{
				if (ANIMSCENE::_0x25557E324489393C(&(Local_1039[iVar1 /*7*/])))
				{
					func_216(Local_1039[iVar1 /*7*/]);
				}
				iVar1++;
			}
			break;
		case 4:
			func_97();
			func_106(1);
			func_2();
			if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1392194)[Local_2160.f_136 /*10*/])->f_5))
			{
				if (!func_22(&Local_2160, 4) && !func_22(&Local_2160, 32))
				{
					if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_72[0])) && ENTITY::IS_ENTITY_IN_VOLUME(&(uLocal_72[0]), ((*Global_1392194)[Local_2160.f_136 /*10*/])->f_5, true, 0))
					{
						VEHICLE::DELETE_VEHICLE(uLocal_72[0]);
					}
					if (!ENTITY::IS_ENTITY_DEAD(&(uLocal_72[1])) && ENTITY::IS_ENTITY_IN_VOLUME(&(uLocal_72[1]), ((*Global_1392194)[Local_2160.f_136 /*10*/])->f_5, true, 0))
					{
						VEHICLE::DELETE_VEHICLE(uLocal_72[1]);
					}
				}
				iVar1 = 0;
				while (iVar1 < 2)
				{
					if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_2502[iVar1])))
					{
						if (iVar1 == 1)
						{
							VEHICLE::DELETE_MISSION_TRAIN(iLocal_2502[iVar1]);
						}
						else if (ENTITY::IS_ENTITY_IN_VOLUME(&(iLocal_2502[iVar1]), ((*Global_1392194)[Local_2160.f_136 /*10*/])->f_5, true, 0))
						{
							VEHICLE::DELETE_VEHICLE(iLocal_2502[iVar1]);
						}
					}
					iVar1++;
				}
			}
			break;
		case 5:
			func_10(Local_2160.f_136, 1073741824);
			func_217(Local_2160.f_136, &Local_1157, &Local_2160);
			func_218(&Local_1157);
			HUD::_0xAA03F130A637D923(func_219());
			HUD::_0xAA03F130A637D923(func_220());
			break;
		default:
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
	iLocal_731++;
}

void func_45(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_221(bParam2) || CAM::IS_SCREEN_FADED_OUT())
		{
			Call_Loc(iParam1);
		}
	}
}

void func_46()
{
	func_54(65536, func_213(Global_35, ((*Global_1392194)[Local_2160.f_136 /*10*/])->f_6, 1, 0));
}

void func_47(int iParam0, int iParam1)
{
	PED::_0xF008E0BA1FE1D644(iParam0);
	iParam1->f_3 = (iParam1->f_3 + iParam0);
}

void func_48(var uParam0)
{
	func_222(uParam0, 0f);
}

int func_49()
{
	if (func_223(vLocal_1117[4 /*3*/], 30f))
	{
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		return 0;
	}
	switch (iLocal_2649)
	{
		case 0:
			func_224(&(Local_1157.f_15));
			func_224(&(Local_1157.f_369));
			func_225(&((Local_15[0 /*28*/])->f_11));
			func_225(&((Local_15[1 /*28*/])->f_11));
			if (func_19(128) && iLocal_98 == 3)
			{
				func_224(&(Local_1157.f_369));
			}
			func_226();
			func_227();
			func_228(&(Local_1157.f_690));
			func_229();
			func_224(&(Local_1157.f_304));
			func_230();
			HUD::_0xF66090013DE648D5(func_219());
			HUD::_0xF66090013DE648D5(func_220());
			if (iLocal_98 == 3 && !func_19(262144))
			{
				func_231();
			}
			iLocal_2649 = 1;
			break;
		case 1:
			if (!func_52())
			{
			}
			if (!func_66())
			{
			}
			if (!func_55())
			{
			}
			if (!func_232())
			{
			}
			if (!func_71())
			{
			}
			if (!func_72())
			{
			}
			if (!func_233())
			{
				func_231();
				return 0;
			}
			if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Appleseed_01"))
			{
				return 0;
			}
			return 1;
	}
	return 0;
}

void func_50(int iParam0)
{
	iLocal_101 = (iLocal_101 - (iLocal_101 && iParam0));
}

bool func_51(int iParam0)
{
	return (iLocal_101 && iParam0) != 0;
}

int func_52()
{
	if (!func_234(&(Local_1157.f_15)) || !func_234(&(Local_1157.f_369)))
	{
		return 0;
	}
	if (!func_234(&(Local_1157.f_304)))
	{
		return 0;
	}
	return 1;
}

int func_53(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, var uParam5)
{
	int iVar0;

	if (func_22(uParam1, 32))
	{
		return 0;
	}
	if (*bParam4)
	{
		return 0;
	}
	if (PED::_0x5C16855277819BBF() >= *uParam0)
	{
		if (*uParam5 < *uParam0)
		{
			if ((uParam0->f_15[*uParam5 /*32*/])->f_1 != 0)
			{
				(*uParam2)[*uParam5] = func_235((uParam0->f_15[*uParam5 /*32*/])->f_1, uParam0->f_15[*uParam5 /*32*/], (uParam0->f_15[*uParam5 /*32*/])->f_6, (uParam0->f_15[*uParam5 /*32*/])->f_9, 1, 0, 1, 0, 1);
			}
			*uParam5++;
			*bParam4 = 1;
			return 0;
		}
	}
	else
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_2)
	{
		if ((uParam0->f_304[iVar0 /*32*/])->f_1 != 0)
		{
			(*uParam3)[iVar0] = VEHICLE::CREATE_VEHICLE((uParam0->f_304[iVar0 /*32*/])->f_1, (uParam0->f_304[iVar0 /*32*/])->f_6, (uParam0->f_304[iVar0 /*32*/])->f_9, true, true, false, false);
			(*uParam3)[0] = uParam3[0];
		}
		iVar0++;
	}
	return 1;
}

void func_54(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_58(iParam0);
	}
	else
	{
		func_50(iParam0);
	}
}

int func_55()
{
	return 1;
}

Vector3 func_56()
{
	return -1326.96f, -232.96f, 99.72f;
}

void func_57(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 2442171;
	if (bParam4)
	{
		iVar0 |= 1536;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_58(int iParam0)
{
	iLocal_101 = (iLocal_101 || iParam0);
}

int func_59(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_60(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	if (*bParam0)
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Local_1157.f_1;
	}
	if (*iParam1 < iParam2)
	{
		*iParam1 = iParam2;
	}
	if (PED::_0x5C16855277819BBF() >= iParam3)
	{
		if (*iParam1 < iParam3)
		{
			if ((Local_1157.f_369[*iParam1 /*32*/])->f_1 != 0)
			{
				if (iLocal_98 != 3 || func_19(262144))
				{
					iLocal_2505[*iParam1] = func_235((Local_1157.f_369[*iParam1 /*32*/])->f_1, Local_1157.f_369[*iParam1 /*32*/], (Local_1157.f_369[*iParam1 /*32*/])->f_6, (Local_1157.f_369[*iParam1 /*32*/])->f_9, 1, (iLocal_98 == 1 && *iParam1 == 5), 0, 0, 1);
					DECORATOR::DECOR_SET_BOOL(&(iLocal_2505[*iParam1]), "bNoticePlayer", false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(&(iLocal_2505[*iParam1]), true);
				}
			}
			*iParam1++;
			*bParam0 = 1;
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_61(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	vector3 vVar0;
	int iVar3;

	if (!func_155(iParam0))
	{
		return 0;
	}
	if (!func_237(func_236(iParam0)))
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_167(iParam0)))
	{
		func_238(iParam0, 0);
		return 0;
	}
	vVar0 = { iParam2, iParam3, iParam4 };
	if (!func_239(iParam0, 0))
	{
		if (bParam1)
		{
			if (!func_240(iParam0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!func_241(vVar0))
	{
		_NAMESPACE48::_0x59C7AD6FEA2AC449(func_167(iParam0), vVar0);
	}
	if (bParam5)
	{
		iVar3 = _NAMESPACE48::_0x08FC896D2CB31FCC(func_167(iParam0), 0);
	}
	else
	{
		iVar3 = _NAMESPACE48::_0x0CADC3A977997472(func_167(iParam0), 0);
	}
	if (!func_241(vVar0))
	{
		_NAMESPACE48::_0xBB68908CD11AEBDC(func_167(iParam0));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return 1;
	}
	return 0;
}

int func_62(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	func_242(iParam0, 0, 0, 0, 1, 1);
	iVar0 = func_63(iParam0);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 178, !bParam1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 168, false);
		PED::SET_PED_CONFIG_FLAG(iVar0, 259, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 297, bParam2);
		_NAMESPACE48::_0x6759BEE6762E140B(func_167(iParam0));
		if (!bParam1)
		{
			func_243(iVar0, 1, 1);
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_63(int iParam0)
{
	if (!func_155(iParam0))
	{
		return 0;
	}
	if (!func_23(iParam0, 2))
	{
		return 0;
	}
	if (func_237(func_236(iParam0)))
	{
		return func_244(iParam0);
	}
	return PED::_0xE76687023D8C8505(func_245(iParam0), 0);
}

bool func_64(var uParam0)
{
	return func_247(func_246(), &(uParam0->f_690), 0, 0, 0, -1, 1);
}

void func_65(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_248(uParam0, iParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam1, bParam3);
			}
		}
	}
}

int func_66()
{
	if (!func_249((Local_15[0 /*28*/])->f_11) || !func_249((Local_15[1 /*28*/])->f_11))
	{
		return 0;
	}
	return 1;
}

int func_67(var uParam0, var uParam1, var uParam2, float fParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;

	if (bParam6)
	{
		if (!uParam2->f_27)
		{
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0, 0) && !VEHICLE::IS_VEHICLE_STOPPED(*uParam0)) && !ENTITY::IS_ENTITY_DEAD(*uParam1))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(*uParam0, 2f, -1, false);
			}
			if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
			{
				TASK::CLEAR_PED_TASKS(*uParam1, 1, 0);
			}
			uParam2->f_27 = 1;
		}
		return 0;
	}
	else if (uParam2->f_27)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0, 0))
		{
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(*uParam1, *uParam0, *uParam2, 4f, 0, 0, 67633207, 5f, 10f);
		}
		uParam2->f_27 = 0;
	}
	switch (uParam2->f_15)
	{
		case 0:
			if (ENTITY::IS_ENTITY_DEAD(*uParam0))
			{
				if (func_250(uParam2))
				{
					*uParam0 = VEHICLE::CREATE_VEHICLE(uParam2->f_11, uParam2->f_4, uParam2->f_10, false, true, false, false);
					if (func_251(*uParam1, 0, 1))
					{
						PED::SET_PED_INTO_VEHICLE(*uParam1, *uParam0, -1);
						DECORATOR::DECOR_SET_BOOL(*uParam1, "bNoticePlayer", true);
					}
					uParam2->f_15 = 1;
				}
			}
			break;
		case 1:
			if (!bParam4 && (func_252(*uParam0, &(uParam2->f_16), &(uParam2->f_21), &(uParam2->f_24), 3f, fParam3, 20f, 0, 1092616192, 1) || !uParam2->f_22))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0, 0))
				{
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(*uParam1, *uParam0, *uParam2, 4f, 0, 0, 67633207, 5f, 20f);
				}
				if (uParam2->f_23)
				{
					if ((!uParam2->f_26 && func_253(0, 0, 0, 0)) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_12))
					{
						func_114(*uParam1, Global_35, uParam2->f_12, 0, -1082130432, 0, 0, 0, 0, 1, 1, 291934926, 1, 0, 0);
						uParam2->f_26 = 1;
					}
				}
				uParam2->f_15 = 2;
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(*uParam1) && TASK::GET_SCRIPT_TASK_STATUS(*uParam1, -1817882002, 1) == 8)
			{
				if (uParam2->f_23)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0, 0))
					{
						TASK::TASK_VEHICLE_DRIVE_WANDER(*uParam1, *uParam0, 5f, 524295);
						uParam2->f_15 = 4;
					}
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0, 0))
				{
					if (!VEHICLE::IS_VEHICLE_STOPPED(*uParam0))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(*uParam0, 2f, 2, false);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_STAND_STILL(0, 2000);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_GO_TO_COORD_ANY_MEANS(0, uParam2->f_7, 1f, 0, false, 524419, -1f);
					TASK::TASK_STAND_STILL(0, 2000);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(*uParam1, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					uParam2->f_15 = 3;
				}
			}
			break;
		case 3:
			if (!bParam4 && TASK::GET_SCRIPT_TASK_STATUS(*uParam1, 242628503, 1) == 8)
			{
				if ((!uParam2->f_26 && func_253(0, 0, 0, 0)) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_12))
				{
					func_114(*uParam1, Global_35, uParam2->f_12, 0, -1082130432, 0, 0, 0, 0, 1, 1, 291934926, 1, 0, 0);
					uParam2->f_26 = 1;
				}
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_STAND_STILL(0, 2000);
				if (!MISC::IS_STRING_NULL(uParam2->f_13))
				{
					TASK::TASK_PLAY_ANIM(0, uParam2->f_13, uParam2->f_14, 8f, -8f, -1, 1, 0, 0, 0, 0, 0, 0);
				}
				else if (iParam5 != 0)
				{
					TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(0, iParam5, 0, 0, 0);
				}
				else
				{
					TASK::TASK_WANDER_IN_AREA(0, ENTITY::GET_ENTITY_COORDS(*uParam1, true, false), 20f, 10f, 60f, 1);
				}
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(*uParam1, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				uParam2->f_15 = 4;
			}
			break;
		case 4:
			return 1;
	}
	return 0;
}

bool func_68(int iParam0)
{
	return (iLocal_100 && iParam0) != 0;
}

void func_69(int iParam0)
{
	iLocal_100 = (iLocal_100 || iParam0);
}

void func_70(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_138(iParam0))
	{
		return;
	}
	iVar0 = func_139(iParam0);
	if (bParam1)
	{
		func_141(iVar0, 8);
		func_143(&(((*Global_1392194)[iParam0 /*10*/])->f_1), 1);
	}
	else
	{
		func_254(iVar0, 8);
		func_199(&(((*Global_1392194)[iParam0 /*10*/])->f_1), 1);
	}
}

int func_71()
{
	if (!func_255(&uLocal_2414))
	{
		return 0;
	}
	if (!func_256())
	{
		return 0;
	}
	return 1;
}

int func_72()
{
	if (!HUD::_0xD0976CC34002DB57(func_219()))
	{
		return 0;
	}
	if (!HUD::_0xD0976CC34002DB57(func_220()))
	{
		return 0;
	}
	return 1;
}

int func_73()
{
	if (func_19(16))
	{
		return 1;
	}
	switch (iLocal_98)
	{
		case 3:
			if (func_9(Local_2160.f_136, 256) && !func_5(Local_2160.f_136, 128))
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_74()
{
	int iVar0;
	int iVar1;

	iVar0 = func_63(Local_2160.f_138);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, 0, 1);
		if (!func_257(iVar0, 1))
		{
			func_258(iVar0, "EA_LCMP_Foreman", 0);
		}
		PED::SET_PED_CONFIG_FLAG(iVar0, 178, true);
	}
	switch (iLocal_98)
	{
		case 1:
			if (!func_5(Local_2160.f_136, 128))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					iVar1 = TASK::_0xF533D68FF970D190(-1400.66f, -213.44f, 101.9f, func_259(), 1.5f, 0, 0);
					if (TASK::_0x841475AC96E794D1(iVar1))
					{
						TASK::_TASK_USE_SCENARIO_POINT(iVar0, iVar1, func_260(), -1, 0, 1, 0, 0, -1082130432, 0);
					}
					else
					{
						TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iVar0, -1400.66f, -213.44f, 101.9f, 1.5f, 0, 0, 0, 0, 0);
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
			}
			break;
		case 2:
			if (!func_5(Local_2160.f_136, 128))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
			}
			break;
		case 3:
			if (!func_5(Local_2160.f_136, 128))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					if (func_9(Local_2160.f_136, 256) || func_9(Local_2160.f_136, 262144))
					{
						TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iVar0, func_261(), 1.5f, 0, 0, 0, 0, 0);
					}
					else
					{
						func_262(iVar0, -1398.594f, -208.7037f, 101.8822f, 87.65f, 1, 1073741824);
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(func_63(Local_2160.f_138)))
			{
			}
			break;
		case 4:
		case 5:
			break;
	}
}

void func_75(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_263(iParam0, 0))
	{
		iVar0 = func_63(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 234, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 259, true);
		}
		func_264(iParam0, 0, 1, 0, 0);
		_NAMESPACE48::_0x6759BEE6762E140B(func_167(iParam0));
		if (bParam1)
		{
			func_243(iVar0, 1, 1);
		}
	}
}

void func_76(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_265(&(iParam0->f_18));
}

int func_77()
{
	int iVar0;

	func_266();
	if (iLocal_98 == 3 && !func_5(Local_2160.f_136, 128))
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_2479[0])))
		{
			func_268(&(iLocal_2479[0]), func_267(133120, 1056964608, 1065353216), 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			TASK::TASK_GUARD_CURRENT_POSITION(&(iLocal_2479[0]), 10f, 50f, true);
			PED::SET_PED_CONFIG_FLAG(&(iLocal_2479[0]), 146, false);
			func_258(&(iLocal_2479[0]), func_269(Local_2160.f_136, -1), 0);
			DECORATOR::DECOR_SET_BOOL(&(iLocal_2479[0]), "HAS_VOICE", true);
			func_243(&(iLocal_2479[0]), 1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_2479[1])))
		{
			func_268(&(iLocal_2479[1]), func_267(133120, 1056964608, 1065353216), 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			TASK::TASK_GUARD_CURRENT_POSITION(&(iLocal_2479[1]), 10f, 50f, true);
			PED::SET_PED_CONFIG_FLAG(&(iLocal_2479[1]), 146, false);
			func_258(&(iLocal_2479[1]), func_269(Local_2160.f_136, -1), 0);
			DECORATOR::DECOR_SET_BOOL(&(iLocal_2479[1]), "HAS_VOICE", true);
			func_243(&(iLocal_2479[1]), 1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_2479[2])))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(&(iLocal_2479[2]), 1);
			ENTITY::_SET_ENTITY_SOMETHING(&(iLocal_2479[2]), true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_2479[3])))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(&(iLocal_2479[3]), 1);
			ENTITY::_SET_ENTITY_SOMETHING(&(iLocal_2479[3]), true);
		}
	}
	else
	{
		if (func_19(64))
		{
			if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_2479[0])))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_735);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1388.626f, -234.6199f, 98.7432f, 1f, -1, 0.25f, false, 9.6661f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1398.8f, -214.8f, 101.4f, 1f, -1, 0.25f, false, 15.6f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1400.4f, -209.6f, 102f, 1f, -1, 0.25f, false, 148.8f);
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, -1400.871f, -210.4877f, 101.0936f, 2f, -1, 0, 0, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_735);
				TASK::TASK_PERFORM_SEQUENCE(&(iLocal_2479[0]), iLocal_735);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_735);
				PED::SET_PED_CONFIG_FLAG(&(iLocal_2479[0]), 146, false);
				func_243(&(iLocal_2479[0]), 1, 1);
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_2479[0])))
		{
			TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(&(iLocal_2479[0]), func_270(), 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(&(iLocal_2479[0]), 146, false);
			func_243(&(iLocal_2479[0]), 1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_2479[1])))
		{
			TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(&(iLocal_2479[1]), func_270(), 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(&(iLocal_2479[1]), 146, false);
			func_243(&(iLocal_2479[1]), 1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_2479[2])))
		{
			if (!func_19(64))
			{
				TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(&(iLocal_2479[2]), func_270(), 0, 0, 0);
				PED::SET_PED_CONFIG_FLAG(&(iLocal_2479[2]), 146, false);
				func_243(&(iLocal_2479[2]), 1, 1);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_2479[3])))
		{
			if (!func_19(64))
			{
				TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(&(iLocal_2479[3]), func_270(), 0, 0, 0);
				PED::SET_PED_CONFIG_FLAG(&(iLocal_2479[3]), 146, false);
				func_243(&(iLocal_2479[3]), 1, 1);
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_2479[4])))
	{
		func_243(&(iLocal_2479[4]), 1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_2479[5])))
	{
		func_243(&(iLocal_2479[5]), 1, 1);
	}
	iVar0 = 0;
	while (iVar0 < Local_1157)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_2479[iVar0])))
		{
			PED::SET_PED_CONFIG_FLAG(&(iLocal_2479[iVar0]), 178, true);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), &(iLocal_2479[iVar0]), 7, 0, 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_1157.f_1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_2505[iVar0])))
		{
			PED::SET_PED_CONFIG_FLAG(&(iLocal_2505[iVar0]), 178, true);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), &(iLocal_2505[iVar0]), 7, 0, 1);
		}
		iVar0++;
	}
	func_48(vLocal_1117[0 /*3*/]);
	return 1;
}

bool func_78(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		return false;
	}
	return MISC::_0x1B065A2BF7953815(0) != 1;
}

void func_79(bool bParam0)
{
	int iVar0;

	iVar0 = func_4(0);
	if (func_5(0, 128))
	{
		if (iVar0 != 1 || func_5(0, 16777216))
		{
			func_271(0, 0);
		}
	}
	else
	{
		if (iVar0 > 3)
		{
			func_271(0, 0);
		}
		if (func_9(0, 32768))
		{
			func_271(0, 0);
		}
		else
		{
			switch (iVar0)
			{
				case 1:
					if (func_9(0, 4) && func_5(0, 16777216))
					{
						func_271(0, 0);
					}
					else if (func_9(0, 1024))
					{
						if (bParam0 || !func_5(0, 268435456))
						{
							func_272(0);
							func_273(0, 0, "LOG_JOURN01", 0, !bParam0);
							func_42(0, 268435456);
						}
					}
					else
					{
						func_271(0, 0);
					}
					break;
				case 2:
					func_271(0, 0);
					break;
				case 3:
					if (func_9(0, 8))
					{
						func_271(0, 0);
					}
					else if (func_9(0, 256))
					{
						if (bParam0 || !func_5(0, 268435456))
						{
							func_272(0);
							func_273(0, 0, "LOG_JOURN02", 0, !bParam0);
							func_42(0, 268435456);
						}
					}
					else
					{
						func_271(0, 0);
					}
					break;
				default:
					func_271(0, 0);
					break;
			}
		}
	}
}

void func_80(var uParam0, int iParam1)
{
	if (!func_22(uParam0, iParam1))
	{
		return;
	}
	uParam0->f_29 = (uParam0->f_29 - (uParam0->f_29 && iParam1));
}

void func_81()
{
	if (func_51(8388608))
	{
		if (func_274(1024))
		{
			func_172();
		}
		else
		{
			func_209();
		}
	}
}

int func_82(var uParam0, var uParam1)
{
	if (!Global_1935630->f_12 && func_213(Global_35, ((*Global_1392194)[uParam0->f_136 /*10*/])->f_5, 1, 0))
	{
		if (!func_22(uParam0, 64))
		{
			func_43(uParam0, 64);
			func_275(uParam0->f_136, 1);
			return 1;
		}
	}
	return 0;
}

void func_83()
{
	bool bVar0;
	char* sVar1[4];
	int iVar6[4];
	int iVar11;

	Local_2544.f_24 = 0;
	Local_2544.f_23 = 0;
	Local_2544.f_17 = 0;
	func_143(&(Local_2544.f_34), 1);
	if (!func_19(16))
	{
		switch (iLocal_98)
		{
			case 1:
				if ((func_19(128) && !func_19(2)) && !func_5(Local_2160.f_136, 4))
				{
					if (func_276(1) > 0)
					{
						sVar1[0] = "LOG_WRK01A_P";
					}
					else
					{
						sVar1[0] = "LOG_WRK01A";
					}
				}
				else
				{
					sVar1[0] = "LOG_WRK01A_M";
					iVar6[0] = 1;
				}
				sVar1[1] = "LOG_WRK02A";
				if (func_22(&Local_2160, 256))
				{
					sVar1[2] = "LOG_WRK03A_R";
					iVar6[2] = 1;
					sVar1[3] = "LOG_WRK04A_R";
					iVar6[3] = 1;
				}
				else
				{
					sVar1[2] = "LOG_WRK03A";
					iVar6[2] = 1;
					sVar1[3] = "LOG_WRK04A";
					iVar6[3] = 1;
				}
				if (func_19(128) && !func_19(2))
				{
					bVar0 = true;
				}
				break;
			case 2:
				if (func_5(Local_2160.f_136, 64))
				{
					sVar1[0] = "LOG_WRK01BA";
					iVar6[0] = 1;
					sVar1[1] = "LOG_WRK02BA";
					iVar6[1] = 1;
					sVar1[2] = "LOG_WRK03BA";
					iVar6[2] = 1;
					sVar1[3] = "LOG_WRK04BA";
					iVar6[3] = 1;
				}
				else
				{
					if (func_19(128) && !func_19(2))
					{
						if (func_276(1) > 0)
						{
							sVar1[0] = "LOG_WRK01B_P";
						}
						else
						{
							sVar1[0] = "LOG_WRK01B";
						}
					}
					else
					{
						sVar1[0] = "LOG_WRK01B_M";
						iVar6[0] = 1;
					}
					if (func_22(&Local_2160, 256))
					{
						sVar1[1] = "LOG_WRK02B_R";
						iVar6[1] = 1;
						sVar1[2] = "LOG_WRK03B_R";
						iVar6[2] = 1;
						sVar1[3] = "LOG_WRK04B_R";
						iVar6[3] = 1;
					}
					else
					{
						sVar1[1] = "LOG_WRK02B";
						iVar6[1] = 1;
						sVar1[2] = "LOG_WRK03B";
						iVar6[2] = 1;
						sVar1[3] = "LOG_WRK04B";
						iVar6[3] = 1;
					}
					if (func_19(128) && !func_19(2))
					{
						bVar0 = true;
					}
				}
				break;
			case 3:
				if (!func_5(Local_2160.f_136, 128))
				{
					if (func_9(Local_2160.f_136, 8))
					{
						if (func_276(1) > 0)
						{
							sVar1[0] = "LOG_WRK01CH_P";
						}
						else
						{
							sVar1[0] = "LOG_WRK01CH";
						}
						if (func_22(&Local_2160, 256))
						{
							sVar1[1] = "LOG_WRK02CH_R";
						}
						else
						{
							sVar1[1] = "LOG_WRK02CH";
						}
						sVar1[2] = "LOG_WRK03CH";
						iVar6[2] = 1;
						sVar1[3] = "LOG_WRK04CH";
						iVar6[3] = 1;
					}
					else if (func_9(Local_2160.f_136, 32))
					{
						if (func_68(128))
						{
							iVar11 = func_277();
							if (PED::IS_PED_HUMAN(iVar11))
							{
								sVar1[0] = "LOG_WRK01CC";
								sVar1[1] = "LOG_WRK02CC";
								sVar1[2] = "LOG_WRK03CC";
								sVar1[3] = "LOG_WRK04CC";
							}
							else
							{
								sVar1[0] = "LOG_WRK01CW";
								sVar1[1] = "LOG_WRK02CW";
								sVar1[2] = "LOG_WRK03CW";
								sVar1[3] = "LOG_WRK04CW";
							}
						}
						else
						{
							sVar1[0] = "LOG_WRK01CB";
							sVar1[1] = "LOG_WRK02CB";
							if (func_276(1) > 0)
							{
								sVar1[2] = "LOG_WRK03CB_P";
							}
							else
							{
								sVar1[2] = "LOG_WRK03CB";
							}
							sVar1[3] = "LOG_WRK04CB";
						}
					}
					else if (func_9(Local_2160.f_136, 256))
					{
						sVar1[0] = "LOG_WRK01CA";
						sVar1[1] = "LOG_WRK02CA";
						iVar6[1] = 1;
						sVar1[2] = "LOG_WRK03CA";
						iVar6[2] = 1;
						if (func_276(1) > 0)
						{
							sVar1[3] = "LOG_WRK04CA_P";
						}
						else
						{
							sVar1[3] = "LOG_WRK04CA";
						}
					}
					else
					{
						if (func_19(128) && !func_19(2))
						{
							if (func_276(1) > 0)
							{
								sVar1[0] = "LOG_WRK01C_P";
							}
							else
							{
								sVar1[0] = "LOG_WRK01C";
							}
						}
						else
						{
							sVar1[0] = "LOG_WRK01C_M";
							iVar6[0] = 1;
						}
						if (func_22(&Local_2160, 256))
						{
							sVar1[1] = "LOG_WRK02C_R";
							iVar6[1] = 1;
							sVar1[2] = "LOG_WRK03C_R";
							iVar6[2] = 1;
							sVar1[3] = "LOG_WRK04C_R";
							iVar6[3] = 1;
						}
						else
						{
							sVar1[1] = "LOG_WRK02C";
							iVar6[1] = 1;
							sVar1[2] = "LOG_WRK03C";
							iVar6[2] = 1;
							sVar1[3] = "LOG_WRK04C";
							iVar6[3] = 1;
						}
						if (func_19(128) && !func_19(2))
						{
							bVar0 = true;
						}
					}
				}
				else if (func_9(Local_2160.f_136, 8))
				{
					sVar1[0] = "LOG_WRK01CH";
					sVar1[1] = "LOG_WRK02CH";
					iVar6[1] = 1;
					sVar1[2] = "LOG_WRK03CH";
					iVar6[2] = 1;
					sVar1[3] = "LOG_WRK04CH";
					iVar6[3] = 1;
				}
				else if (func_276(1) > 0)
				{
					sVar1[0] = "LOG_WRK01CN_P";
					sVar1[1] = "LOG_WRK02CN_P";
					sVar1[2] = "LOG_WRK03CN_P";
					sVar1[3] = "LOG_WRK04CN_P";
				}
				else
				{
					sVar1[0] = "LOG_WRK01CN";
					sVar1[1] = "LOG_WRK02CN";
					sVar1[2] = "LOG_WRK03CN";
					sVar1[3] = "LOG_WRK04CN";
				}
				break;
		}
	}
	else if (func_276(1) > 0)
	{
		sVar1[0] = "EA_WRKMD01_P";
		sVar1[1] = "EA_WRKMD02_P";
		sVar1[2] = "EA_WRKMD03_P";
		sVar1[3] = "EA_WRKMD04_P";
	}
	else
	{
		sVar1[0] = "EA_WRKMD01";
		sVar1[1] = "EA_WRKMD02";
		sVar1[2] = "EA_WRKMD03";
		sVar1[3] = "EA_WRKMD04";
	}
	Local_2544.f_33 = 15f;
	func_278(&sVar1, &iVar6, &Local_2544, bVar0);
}

void func_84()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;

	if (func_22(&Local_2160, 256))
	{
		sVar0 = "EventAreas/Appleseed/LCMP_Workers_Shelter";
		sVar1 = "EventAreas/Appleseed/LCMP_Foreman_Shelter";
	}
	else if (iLocal_98 == 3 && !func_19(262144))
	{
		sVar0 = "EventAreas/Appleseed/LCMP_Workers_Stalled";
		sVar1 = "EventAreas/Appleseed/LCMP_Foreman";
	}
	else
	{
		sVar0 = "EventAreas/Appleseed/LCMP_Workers";
		sVar1 = "EventAreas/Appleseed/LCMP_Foreman";
	}
	iVar2 = 810;
	while (iVar2 <= 833)
	{
		if (_NAMESPACE48::_0x800DF3FC913355F3(func_167(iVar2)) && !MISC::ARE_STRINGS_EQUAL(_NAMESPACE48::_0xCEB40B678E403759(func_236(iVar2)), sVar0))
		{
			_NAMESPACE48::_0x187D65F3AEC5D679(func_236(iVar2), sVar0);
			iVar3 = func_63(iVar2);
			if ((ENTITY::DOES_ENTITY_EXIST(iVar3) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar3, 1)) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar3))
			{
				TASK::TASK_PERSISTENT_CHARACTER(iVar3);
			}
		}
		iVar2++;
	}
	iVar2 = Local_2160.f_138;
	if (_NAMESPACE48::_0x800DF3FC913355F3(func_167(iVar2)) && !MISC::ARE_STRINGS_EQUAL(_NAMESPACE48::_0xCEB40B678E403759(func_236(iVar2)), sVar0))
	{
		_NAMESPACE48::_0x187D65F3AEC5D679(func_236(iVar2), sVar1);
	}
}

void func_85(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7, float fParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if ((*iParam6 % iParam7) == 0)
	{
		iVar0 = iParam3;
		while (iVar0 <= iParam4)
		{
			if (!func_23(iVar0, 32))
			{
				iVar1 = func_63(iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar1))
				{
					if (PED::IS_PED_HUMAN(iVar1))
					{
						(*uParam0)[iVar2] = iVar1;
						(*uParam1)[iVar2] = func_279(iVar1, 1, 0);
						iVar2++;
						if (bParam9)
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
							PED::SET_PED_CONFIG_FLAG(iVar1, 288, true);
						}
						else
						{
							PED::SET_PED_CONFIG_FLAG(iVar1, 288, false);
						}
						if (!DECORATOR::DECOR_EXIST_ON(iVar1, "bScriptedILO"))
						{
							PED::SET_PED_CONFIG_FLAG(iVar1, 130, false);
						}
						PED::SET_PED_CONFIG_FLAG(iVar1, 374, true);
						PED::SET_PED_CONFIG_FLAG(iVar1, 178, true);
						PED::SET_PED_CONFIG_FLAG(iVar1, 146, true);
						PED::SET_PED_CONFIG_FLAG(iVar1, 246, true);
						PED::SET_PED_CONFIG_FLAG(iVar1, 297, true);
						PED::SET_PED_CONFIG_FLAG(iVar1, 171, true);
						PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iVar1, 7, 0, 1);
						func_280(uParam2, iVar1, 0);
						if (fParam8 >= 0f)
						{
							PED::SET_PED_SEEING_RANGE(iVar1, fParam8);
						}
					}
					else
					{
						func_281(uParam2, iVar1, 0);
					}
				}
			}
			iVar0++;
		}
		iVar3 = iVar2;
		while (iVar3 <= (*uParam0 - 1))
		{
			(*uParam0)[iVar2] = 0;
			iVar3++;
		}
		*uParam5 = iVar2;
		*iParam6 = 0;
	}
	*iParam6++;
}

void func_86(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0[iVar0]))
		{
			PED::SET_PED_RESET_FLAG(uParam0[iVar0], 49, true);
		}
		iVar0++;
	}
}

void func_87()
{
}

void func_88()
{
	int iVar0;
	struct<21> Var1;
	char* sVar30;
	int iVar31;

	if (!func_68(268435456))
	{
		if (func_68(134217728) || (MISC::GET_FRAME_COUNT() % 9) == 0)
		{
			func_69(134217728);
			iVar0 = (MISC::GET_FRAME_COUNT() % 9);
			Var1.f_3 = 3;
			Var1.f_4 = 30;
			Var1.f_5 = -1;
			Var1.f_9 = 3;
			Var1.f_15 = -1;
			Var1.f_16 = -1;
			Var1.f_20 = 2;
			Var1.f_16 = iVar0;
			iVar31 = 0;
			while (iVar31 < 2)
			{
				sVar30 = func_282(&Var1, iVar31);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar30))
				{
					AUDIO::_0xEF51242E35242B47(sVar30);
				}
				iVar31++;
			}
			if (iVar0 == 8)
			{
				func_69(268435456);
			}
		}
	}
}

float func_89()
{
	if ((iLocal_98 == 1 && func_19(512)) && !func_19(262144))
	{
		return 1f;
	}
	return 2f;
}

float func_90()
{
	if ((iLocal_98 == 1 && func_19(512)) && !func_19(262144))
	{
		return 1f;
	}
	return 1.75f;
}

void func_91(var uParam0, int iParam1, float fParam2, float fParam3)
{
	int iVar0;

	if (func_283(PLAYER::GET_PLAYER_INDEX(), 1, 1, 1))
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = ((*Global_1392194)[uParam0->f_136 /*10*/])->f_6;
	}
	if (func_213(Global_35, iParam1, 1, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, fParam2);
	}
	iVar0 = PED::_0x4C8B59171957BCF7(Global_35);
	if (func_213(iVar0, iParam1, 1, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, fParam3);
	}
}

void func_92()
{
	if ((VOLUME::_0x92A78D0BEDB332A3(&(iLocal_75[0])) && func_213(Global_35, &(iLocal_75[0]), 1, 0)) && !PED::IS_PED_ON_MOUNT(Global_35))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
	}
}

int func_93()
{
	int iVar0;
	int iVar1;

	if (func_51(16384))
	{
		return 0;
	}
	iVar0 = uLocal_748;
	if (((func_132(&Local_972, 2) || func_284(&Local_2160, &(Local_2160.f_28))) || func_285()) || func_286(func_63(Local_2160.f_138), 0, &Local_2160, &(Local_2160.f_28), 0, 0))
	{
		if (func_132(&Local_972, 2))
		{
		}
		else if (Local_2160.f_28 == 65536)
		{
			func_287(&Local_2160, &(Local_2160.f_28));
			return 0;
		}
		else if (Local_2160.f_28 == 32)
		{
			return func_288();
		}
		else if (Local_2160.f_28 == 8192 && func_289())
		{
			func_287(&Local_2160, &(Local_2160.f_28));
			return 0;
		}
		if (func_290(&(Local_2160.f_28)) && !func_68(67108864))
		{
			if (!func_132(&Local_972, 1))
			{
				Local_972 = func_63(Local_2160.f_138);
				func_292(&Local_972, &Local_2160, Local_2160.f_28, 54304/*func_291*/, 0, 0);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_282(&Local_972, 0)))
				{
					StringCopy(Local_972.f_20[0 /*4*/], func_282(&Local_972, 0), 32);
					StringCopy(Local_972.f_20[1 /*4*/], func_282(&Local_972, 1), 32);
					func_293(&Local_972, 32);
				}
			}
			else if (Local_972.f_13 > 2)
			{
				func_293(&Local_972, 512);
			}
			func_287(&Local_2160, &(Local_2160.f_28));
			return 0;
		}
		return 1;
	}
	else if ((func_294(&uLocal_2320, &Local_2160, &(Local_2160.f_28), &uLocal_748, 0, (iLocal_732 - 1), 4) || func_294(&iLocal_2479, &Local_2160, &(Local_2160.f_28), &uLocal_746, 0, (Local_1157 - 1), 1)) || func_294(&iLocal_2505, &Local_2160, &(Local_2160.f_28), &uLocal_747, 0, func_59(func_19(16384), Local_1157.f_1 + 1, (Local_1157.f_1 - 1)), 1))
	{
		if (func_68(131072))
		{
			if ((PED::_0xB65A4DAB460A19BD(Global_35) == &iLocal_2479[0] || PED::_0x9682F850056C9ADE(&(iLocal_2479[0]))) || !TASK::GET_IS_TASK_ACTIVE(&(iLocal_2479[0]), 3))
			{
				func_128(&(iLocal_2479[0]), 0, 0);
			}
		}
		if (func_290(&(Local_2160.f_28)))
		{
			if (Local_2160.f_28 == 8192 && func_289())
			{
				return 0;
			}
			if (!func_132(&Local_972, 1) && !func_19(32))
			{
				if (Local_2160.f_28 == 8 && func_295())
				{
					return 1;
				}
				if (func_19(64) && Local_2160.f_10 == &iLocal_2479[0])
				{
					if (Local_2160.f_28 != 65536)
					{
						func_292(&Local_972, &Local_2160, Local_2160.f_28, 54304/*func_291*/, 0, 0);
						func_293(&Local_972, 64);
						StringCopy(Local_972.f_20[0 /*4*/], "LCMPF_IG_TFAIM", 32);
						func_293(&Local_972, 32);
					}
				}
				else
				{
					func_292(&Local_972, &Local_2160, Local_2160.f_28, 54304/*func_291*/, 0, 0);
				}
			}
			func_287(&Local_2160, &(Local_2160.f_28));
			return 0;
		}
		else if (Local_2160.f_28 == 32)
		{
			return func_288();
		}
		return 1;
	}
	else if (func_296(&Local_2160, &Local_972, 54304/*func_291*/))
	{
		if (!func_132(&Local_972, 1))
		{
			func_292(&Local_972, &Local_2160, 1024, 54304/*func_291*/, 0, 0);
			if (Local_972 == func_63(Local_2160.f_138) && !MISC::IS_STRING_NULL_OR_EMPTY(func_282(&Local_972, 0)))
			{
				StringCopy(Local_972.f_20[0 /*4*/], func_282(&Local_972, 0), 32);
				StringCopy(Local_972.f_20[1 /*4*/], func_282(&Local_972, 1), 32);
				func_293(&Local_972, 32);
			}
			func_287(&Local_2160, &(Local_2160.f_28));
			return 0;
		}
		else
		{
			func_293(&Local_972, 512);
		}
	}
	else if (func_297())
	{
		Local_2160.f_28 = 2;
		return 1;
	}
	iVar1 = func_298(iVar0 + 4, (iLocal_732 - 1));
	iVar0 = iVar0;
	while (iVar0 <= iVar1)
	{
		if (&uLocal_2382[iVar0] < Local_2160.f_19 && func_299(&(uLocal_2320[iVar0]), &Local_2160, 0, &(uLocal_2382[iVar0])))
		{
			func_48(vLocal_1117[6 /*3*/]);
		}
		else
		{
			iVar0++;
			iVar0++;
		}
	}
	if (func_223(vLocal_1117[6 /*3*/], 10f))
	{
		func_300(&Local_2160, &(Local_2160.f_28));
	}
	return 0;
}

void func_94(int iParam0, var uParam1, bool bParam2)
{
	func_265(&(iParam0->f_6));
	iParam0->f_5 = -1;
	func_134(iParam0, 1);
	func_134(iParam0, 4);
	func_134(iParam0, 32);
	func_134(iParam0, 128);
	func_134(iParam0, 64);
	func_134(iParam0, 8);
	func_134(iParam0, 256);
	func_134(iParam0, 512);
	iParam0->f_13 = 0;
	iParam0->f_18 = 0;
	if (!bParam2)
	{
		*iParam0 = 0;
		StringCopy(iParam0->f_20[0 /*4*/], "", 32);
		StringCopy(iParam0->f_20[1 /*4*/], "", 32);
		iParam0->f_16 = -1;
	}
	if (iParam0->f_19 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iParam0->f_19);
	}
	iParam0->f_2 = 0;
	uParam1->f_4 = 0;
}

void func_95(var uParam0)
{
	if (func_301(uParam0->f_32))
	{
		func_302(&(uParam0->f_32), 1, 1);
	}
	if (func_301(uParam0->f_33))
	{
		func_302(&(uParam0->f_33), 1, 1);
	}
	if (func_301(uParam0->f_34))
	{
		func_302(&(uParam0->f_34), 1, 1);
	}
}

void func_96(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_97()
{
	if (func_51(32))
	{
		func_303(0);
		func_304(11, 128);
		func_50(32);
	}
}

bool func_98(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_99(int iParam0)
{
	int iVar0;

	iVar0 = func_305(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_100(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_98(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_99(iParam0) && !func_306(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_307(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_99(iParam0))
	{
		iParam2 = -1;
	}
	if (func_308(iParam0) == 3 || (func_308(iParam0) == 1 && STATS::_0x01F4D242765C6B24(func_307(iParam0))))
	{
		func_310(func_309(iParam0), func_307(iParam0), iParam2);
		if ((!func_98(Global_1572864->f_8) && !func_144(0, 1, 0)) && !func_311(&Global_1935630, 32768))
		{
			iVar0 = func_312(iParam0);
			if (iVar0 != -1)
			{
				func_313(0);
			}
			else if (func_309(iParam0) == 8)
			{
				iVar0 = func_314();
				if (iVar0 != -1)
				{
					func_313(0);
				}
			}
		}
	}
	func_315(iParam0, 0);
	if (func_316(0) == iParam0)
	{
		func_101(1);
		func_317(0);
		func_318(1);
	}
	func_319(iParam0, 1);
	func_320(iParam0);
}

void func_101(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_321(Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_322(Global_1935630, 4194304);
	}
	MISC::ENABLE_DISPATCH_SERVICE(15, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(13, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(14, bParam0);
}

bool func_102(int iParam0)
{
	int iVar0;

	iVar0 = PED::_0x5407B7288D0478B7(Global_35, iParam0);
	return iVar0 > 0;
}

void func_103()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = func_323(iVar0);
		switch (iVar1)
		{
			case 2:
			case 9:
			case 10:
				break;
			case 0:
			case 1:
				if (func_19(262144) && !func_324())
				{
					func_216(Local_1039[iVar0 /*7*/]);
				}
				break;
			case 6:
				if (func_325(Local_1039[6 /*7*/]))
				{
					ENTITY::FREEZE_ENTITY_POSITION((Local_1157.f_690[14 /*12*/])->f_8, false);
					PHYSICS::ACTIVATE_PHYSICS((Local_1157.f_690[14 /*12*/])->f_8);
					func_327(Local_1039[6 /*7*/], func_63(func_326(6, 0, 0)), "PED1");
					func_327(Local_1039[6 /*7*/], func_63(func_326(6, 1, 0)), "PED2");
					func_216(Local_1039[6 /*7*/]);
				}
				break;
			default:
				func_216(Local_1039[iVar0 /*7*/]);
				break;
		}
		iVar0++;
	}
}

void func_104()
{
	if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_2505[0])))
	{
		func_328(iLocal_2505[0]);
		PED::SET_PED_CONFIG_FLAG(&(iLocal_2505[0]), 136, false);
		TASK::_TASK_SMART_FLEE_STYLE_PED(&(iLocal_2505[0]), Global_35, 4, 0, -1082130432, -1, 0);
	}
}

void func_105()
{
	PLAYER::_0xC6366A585659D15C(PLAYER::GET_PLAYER_INDEX(), "");
	PLAYER::_0x98CD760DE43B612E(PLAYER::GET_PLAYER_INDEX(), "");
	PED::_0x8AF46E5159A5B620(Global_35, 0);
}

void func_106(int iParam0)
{
	if (func_68(512) || iParam0)
	{
		if (func_251(iLocal_1156, 0, 1))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_1156, 136, false);
			func_329(iLocal_1156, 0);
		}
		func_330(512);
	}
}

void func_107(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_301(((*uParam0)[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_302(&(((*uParam0)[iVar0 /*17*/])->f_6), 1, 1);
					if (bParam2)
					{
						((*uParam0)[iVar0 /*17*/])->f_7 = 0;
						(*uParam0)[iVar0 /*17*/] = 0;
						((*uParam0)[iVar0 /*17*/])->f_5 = "";
						((*uParam0)[iVar0 /*17*/])->f_14 = 0;
						((*uParam0)[iVar0 /*17*/])->f_13 = "";
						((*uParam0)[iVar0 /*17*/])->f_15 = 0;
						((*uParam0)[iVar0 /*17*/])->f_11 = "";
						((*uParam0)[iVar0 /*17*/])->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}

void func_108(int iParam0)
{
	func_265(&uLocal_0);
	func_331(1, iParam0, 0);
	_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
	func_332();
}

void func_109(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		VOLUME::_0x43F867EF5C463A53(iParam0);
	}
}

void func_110()
{
	if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_75[4])))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(&(iLocal_75[4]));
		POPULATION::_0x74C2B3DC0B294102(&(iLocal_75[4]));
		POPULATION::_0xA1CFB35069D23C23(&(iLocal_75[4]));
	}
	func_109(&(iLocal_75[4]));
	func_109(&(iLocal_75[9]));
	func_109(&(iLocal_75[10]));
	func_109(&(iLocal_75[20]));
}

void func_111(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_96((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_112(int iParam0, int iParam1)
{
	(Global_40.f_9096[iParam0 /*12*/])->f_9 = &Global_40.f_9096[iParam0 /*12*/];
	(Global_40.f_9096[iParam0 /*12*/])->f_10 = (Global_40.f_9096[iParam0 /*12*/])->f_3;
	func_333(iParam0, iParam1, 0, 0, 0, 1);
	func_10(iParam0, 32768);
	func_15(iParam0, 16777216);
	func_204(iParam0, 4194304);
}

void func_113(var uParam0)
{
	func_287(uParam0, &(uParam0->f_28));
	func_334(uParam0, 1);
	func_189(uParam0, 0);
	func_335(uParam0, 0);
	func_336(uParam0, 0);
	func_41(uParam0, 0);
}

bool func_114(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_337(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, iParam7, iParam8, bParam9, iParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

bool func_115(int iParam0)
{
	return (iLocal_102 && iParam0) != 0;
}

int func_116(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 65536:
			return -1361146315;
		case 1024:
			return 1923998736;
		case 4:
		case 8:
		case 16:
		case 64:
		case 256:
		case 8192:
			return -1810065318;
		case 512:
			return -1547772340;
		case 2:
		case 32:
		case 2048:
			if (!ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_10, Global_35, 0, 0) || !ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[0])))
			{
				return -16106300;
			}
			else if (WEAPON::_0xCB690F680A3EA971(Global_35, 6))
			{
				return 195938434;
			}
			else
			{
				return 1352191066;
			}
			break;
		case 4096:
			return -2130852007;
		case 1:
		case 128:
			return -493957506;
		case 16384:
			return 0;
	}
	return -1361146315;
}

void func_117()
{
	if (func_19(64))
	{
		func_338();
	}
	func_339(-1);
	if (iLocal_98 == 2 || (iLocal_98 == 3 && func_19(262144)))
	{
		func_9(1, 2);
		func_340();
	}
	if (iLocal_98 == 3)
	{
		func_341();
	}
}

int func_118(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if ((func_342(iParam0, 8192) && func_342(iParam0, 16384)) && func_342(iParam0, 131072))
	{
		return joaat("weapon_revolver_cattleman");
	}
	iVar0 = WEAPON::_0xF8204EF17410BF43(416676503, iParam1, iParam2, 0);
	iVar1 = WEAPON::_0xF8204EF17410BF43(-1101297303, iParam1, iParam2, 0);
	iVar2 = joaat("weapon_shotgun_sawedoff");
	iVar3 = 0;
	if (!func_342(iParam0, 16384))
	{
		iVar3 = iVar1;
	}
	if (!func_342(iParam0, 8192))
	{
		if (!func_343(iVar3) || WEAPON::_0xF2F585411E748B9C(iVar0, 0) > WEAPON::_0xF2F585411E748B9C(iVar3, 0))
		{
			iVar3 = iVar0;
		}
	}
	if (!func_342(iParam0, 131072) && func_344(iVar2))
	{
		if (!func_343(iVar3) || WEAPON::_0xF2F585411E748B9C(iVar2, 0) > WEAPON::_0xF2F585411E748B9C(iVar3, 0))
		{
			iVar3 = iVar2;
		}
	}
	if (!func_343(iVar3))
	{
		return joaat("weapon_revolver_cattleman");
	}
	return iVar3;
}

void func_119(var uParam0, int iParam1, int* iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = -89429847;
	if (iParam5 == 0 || iParam5 == Global_35)
	{
		iParam5 = Global_35;
		iVar0 = 831283580;
	}
	bParam3 = (bParam3 || func_22(uParam0, 4096));
	if (WEAPON::_0xCB690F680A3EA971(iParam1, 4))
	{
		bParam3 = false;
	}
	func_345(iParam1);
	func_96(iParam2);
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		PED::_0xFC3DB99C8144CD81(iParam1, ((*Global_1392194)[uParam0->f_136 /*10*/])->f_5, 0, 0, 0);
		PED::SET_PED_CONFIG_FLAG(iParam1, 146, false);
		PED::SET_PED_CONFIG_FLAG(iParam1, 246, true);
		PED::SET_PED_CONFIG_FLAG(iParam1, 178, true);
		PED::SET_PED_CAN_BE_TARGETTED(iParam1, true);
		if (bParam3)
		{
			PED::_0xEEED8FAFEC331A70(iParam1, ENTITY::GET_ENTITY_COORDS(iParam5, true, false), 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, -401180987);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, iParam5, 4, 0, -1082130432, -1, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam1, iVar1, 0.1f, 0.75f);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
			PED::SET_PED_KEEP_TASK(iParam1, true);
		}
		else
		{
			if (iParam5 == Global_35)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, 1269650476);
			}
			PED::_0x802092B07E3B1EEA(iParam1, ENTITY::GET_ENTITY_COORDS(iParam5, true, false), 3);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 58, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 71, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 31, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 46, true);
			func_346(iParam1, iParam2, iVar0, 580546400, 0, 0);
			if (func_347(iParam1))
			{
				iParam4 = func_348(iParam1);
			}
			if (PED::IS_PED_HUMAN(iParam1))
			{
				bVar2 = func_349(iParam1, 0, 1, 0) != iParam4;
				if (bVar2)
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(iParam1, iParam4, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			if (func_343(iParam4))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iParam1, iParam4, true, 0, false, false);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			if (PED::IS_PED_HUMAN(iParam1))
			{
				if (func_343(iParam4))
				{
					TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
				}
				if (!PED::IS_PED_USING_ANY_SCENARIO(iParam1) && bVar2)
				{
					TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, func_350(), 0.5f, 0, 4);
				}
				if (!bVar2 && PED::GET_PED_CONFIG_FLAG(iParam1, 12, true))
				{
					TASK::_0x2416EC2F31F75266(0, iParam5, 0, 0, 0);
				}
			}
			TASK::TASK_COMBAT_PED(0, iParam5, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam1, iVar1, 0.1f, 0.75f);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		}
	}
}

int func_120(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, float fParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bParam7 = (bParam7 || func_22(uParam0, 4096));
	iVar2 = 0;
	while (iVar2 < *uParam1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam1[iVar2]))
		{
			if (!func_351(uParam1[iVar2], &(uParam0->f_140)))
			{
				PED::SET_PED_CONFIG_FLAG(uParam1[iVar2], 146, false);
				PED::SET_PED_CONFIG_FLAG(uParam1[iVar2], 277, false);
				PED::SET_PED_CONFIG_FLAG(uParam1[iVar2], 178, true);
				PED::SET_PED_CAN_BE_TARGETTED(uParam1[iVar2], true);
				iVar3 = func_352(uParam1[iVar2], 0);
				if (func_155(iVar3))
				{
					func_62(iVar3, 1, 1);
				}
				PED::_0xFC3DB99C8144CD81(uParam1[iVar2], ((*Global_1392194)[uParam0->f_136 /*10*/])->f_5, 0, 0, 0);
				if (func_353(uParam1[iVar2], (iParam5 == -1 || iVar1 < iParam5), (iParam8 || bParam7)))
				{
					if (bParam6)
					{
						PED::_0x802092B07E3B1EEA(uParam1[iVar2], Global_36, 3);
						TASK::CLEAR_PED_TASKS(uParam1[iVar2], 1, 0);
					}
					PED::_0x802092B07E3B1EEA(uParam1[iVar2], Global_36, 3);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam1[iVar2], 1269650476);
					func_346(uParam1[iVar2], (*uParam2)[iVar2], 831283580, 580546400, 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam1[iVar2], 58, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam1[iVar2], 5, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam1[iVar2], 71, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam1[iVar2], 31, true);
					if (func_347(uParam1[iVar2]))
					{
						iVar4 = func_348(uParam1[iVar2]);
					}
					if (PED::IS_PED_HUMAN(uParam1[iVar2]))
					{
						if (func_354((*uParam1)[iVar2], iVar4, (iParam8 || bParam7)))
						{
							WEAPON::_GIVE_WEAPON_TO_PED_2(uParam1[iVar2], iParam3, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
							if (func_343(iVar4))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(uParam1[iVar2], iVar4, true, 0, false, false);
							}
						}
						PED::SET_PED_COMBAT_ATTRIBUTES(uParam1[iVar2], 46, false);
					}
					else
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(uParam1[iVar2], 46, true);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (PED::IS_PED_HUMAN(uParam1[iVar2]))
					{
						if (func_343(iVar4))
						{
							TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(uParam1[iVar2], true))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						}
						else if (iParam4 != 0)
						{
						}
						else if (!func_347(uParam1[iVar2]))
						{
							TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, func_350(), 0.5f, 0, 4);
						}
					}
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(uParam1[iVar2], iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					iVar1++;
				}
				else
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam1[iVar2], -401180987);
					if (bParam6)
					{
						PED::_0x802092B07E3B1EEA(uParam1[iVar2], Global_36, 3);
						TASK::CLEAR_PED_TASKS(uParam1[iVar2], 1, 0);
					}
					else
					{
						PED::_0xEEED8FAFEC331A70(uParam1[iVar2], Global_36, 1);
					}
					PED::SET_PED_FLEE_ATTRIBUTES(uParam1[iVar2], 2, false);
					PED::SET_PED_FLEE_ATTRIBUTES(uParam1[iVar2], 1048576, false);
					PED::SET_PED_FLEE_ATTRIBUTES(uParam1[iVar2], 65536, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (PED::IS_PED_IN_ANY_VEHICLE(uParam1[iVar2], true))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4160);
						TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 1, -1082130432, -1, 0);
					}
					else
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 0, -1082130432, -1, 0);
					}
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(uParam1[iVar2], iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					PED::SET_PED_KEEP_TASK(uParam1[iVar2], true);
					func_355((*uParam1)[iVar2], iParam9, fParam10);
				}
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1[iVar2], true);
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_121(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, float fParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (iParam5 > 0)
	{
		PED::_0xF008E0BA1FE1D644(iParam5);
	}
	else
	{
		return iParam5;
	}
	bParam8 = (bParam8 || func_22(uParam0, 4096));
	if (uParam0->f_136 == 1)
	{
		func_160(&uVar4, &iVar5, func_9(1, 1048576));
	}
	else
	{
		func_161(uParam0->f_137, &uVar4, &iVar5, 1, 0);
	}
	iVar3 = uVar4;
	while (iVar3 <= iVar5)
	{
		if (!func_155(iVar3))
		{
		}
		else if (iVar3 == uParam0->f_138)
		{
		}
		else if (func_23(iVar3, 32))
		{
		}
		else
		{
			iVar6 = func_63(iVar3);
			if (!ENTITY::IS_ENTITY_DEAD(iVar6) && !func_351(iVar6, &(uParam0->f_140)))
			{
				(*uParam1)[iVar0] = iVar6;
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar6))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar6, true, false);
				}
				PED::SET_PED_CONFIG_FLAG(iVar6, 146, false);
				PED::SET_PED_CONFIG_FLAG(iVar6, 246, true);
				PED::SET_PED_CONFIG_FLAG(iVar6, 178, true);
				PED::SET_PED_CAN_BE_TARGETTED(iVar6, true);
				func_62(iVar3, 1, 1);
				PED::SET_PED_CONFIG_FLAG(iVar6, 277, false);
				PED::_0xFC3DB99C8144CD81(iVar6, ((*Global_1392194)[uParam0->f_136 /*10*/])->f_5, 0, 0, 0);
				if ((func_353(iVar6, (iParam3 == -1 || iVar1 < iParam3), (iParam9 || bParam8)) || iVar3 == 808) || iVar3 == 809)
				{
					PED::_0x802092B07E3B1EEA(iVar6, Global_36, 3);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar6, 1269650476);
					func_346(iVar6, (*uParam2)[iVar0], 831283580, 580546400, 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 58, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 5, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 71, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 31, true);
					if (func_347(iVar6))
					{
						iVar7 = func_348(iVar6);
					}
					if (PED::IS_PED_HUMAN(iVar6))
					{
						if (func_354(&iVar6, iVar7, (iParam9 || bParam8)))
						{
							WEAPON::_GIVE_WEAPON_TO_PED_2(iVar6, iParam4, 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
							if (func_343(iVar7))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar6, iVar7, true, 0, false, false);
							}
						}
						PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 46, false);
					}
					else
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(iVar6, 46, true);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					if (func_343(iVar7))
					{
						TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					}
					if (PED::IS_PED_HUMAN(iVar6) && !func_347(iVar6))
					{
						TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, func_350(), 0.5f, 0, 4);
					}
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					TASK::TASK_PERFORM_SEQUENCE(iVar6, iVar2);
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
					iVar1++;
				}
				else
				{
					PED::_0xEEED8FAFEC331A70(iVar6, Global_36, 1);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar6, -401180987);
					if ((iParam7 || func_279(iVar6, 1, 1) < 15f) || func_356())
					{
						TASK::CLEAR_PED_TASKS(iVar6, 1, 0);
						PED::SET_PED_CONFIG_FLAG(iVar6, 178, false);
						TASK::_TASK_SMART_FLEE_STYLE_PED(iVar6, Global_35, 4, 0, -1082130432, -1, 0);
						PED::SET_PED_KEEP_TASK(iVar6, true);
						func_355(&iVar6, iParam10, fParam11);
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar2);
						TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, func_350(), 0.5f, 0, 4);
						TASK::TASK_SEEK_COVER_FROM_PED(0, Global_35, 1500, 0, 1, 1);
						TASK::TASK_COWER(0, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iVar2);
						TASK::TASK_PERFORM_SEQUENCE(iVar6, iVar2);
						TASK::CLEAR_SEQUENCE_TASK(&iVar2);
						DECORATOR::DECOR_SET_BOOL(iVar6, "bCowering", true);
					}
				}
				iVar0++;
			}
		}
		iVar3++;
	}
	return iVar1;
}

int func_122(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_251(uParam0[iVar0], 0, 1))
		{
			if (DECORATOR::DECOR_EXIST_ON(uParam0[iVar0], "bCowering"))
			{
				if ((func_286(uParam0[iVar0], 0, uParam1, &(uParam1->f_28), 0, 0) || func_357(uParam0[iVar0], uParam1, &(uParam1->f_28), 0)) || func_358(uParam0[iVar0], Global_35, 1, 1) < 8f)
				{
					if (uParam1->f_28 != 32 || func_359((*uParam0)[iVar0], uParam1, 1097859072))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0[iVar0], -401180987);
						TASK::_TASK_SMART_FLEE_STYLE_PED(uParam0[iVar0], Global_35, 4, 0, -1082130432, -1, 0);
						PED::SET_PED_KEEP_TASK(uParam0[iVar0], true);
						DECORATOR::DECOR_REMOVE(uParam0[iVar0], "bCowering");
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_123()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_744)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(&(Local_2160.f_140[iVar0])) && !func_129(&(Local_2160.f_140[iVar0]), 518218985)) && !TASK::GET_IS_TASK_ACTIVE(&(Local_2160.f_140[iVar0]), 3))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(&(Local_2160.f_140[iVar0]), Global_35, 4, 0, -1082130432, -1, 0);
		}
		iVar0++;
	}
}

int func_124(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	switch (uParam0->f_31)
	{
		case 0:
			if (ENTITY::IS_ENTITY_DEAD(iParam1))
			{
				uParam0->f_31 = 2;
				return 1;
			}
			if (TASK::GET_IS_TASK_ACTIVE(iParam1, 3))
			{
				uParam0->f_31 = 1;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_DEAD(iParam1))
			{
				uParam0->f_31 = 2;
				return 1;
			}
			if ((!TASK::GET_IS_TASK_ACTIVE(iParam1, 3) || ENTITY::HAS_ANIM_EVENT_FIRED(iParam1, 277966886)) || PED::IS_PED_USING_ANY_SCENARIO(iParam1))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(iParam1))
				{
					PED::_0x62FDAD5E01D2DD47(iParam1, Global_36, 3, 0);
					TASK::CLEAR_PED_TASKS(iParam1, 1, 0);
				}
				func_119(uParam0, iParam1, iParam2, bParam3, joaat("weapon_revolver_cattleman"), 0);
				uParam0->f_31 = 2;
				return 1;
			}
			break;
		case 2:
			return 1;
	}
	return 0;
}

int func_125()
{
	if (((!ANIMSCENE::_0x25557E324489393C(&(Local_1039[2 /*7*/])) || func_360(Local_1039[2 /*7*/])) || func_361(Local_1039[2 /*7*/], "COWER_R_LOOP")) || func_361(Local_1039[2 /*7*/], "COWER_L_LOOP"))
	{
		return 1;
	}
	return 0;
}

void func_126(int iParam0)
{
	iLocal_99 = (iLocal_99 - (iLocal_99 && iParam0));
}

int func_127()
{
	float fVar0;

	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(&(iLocal_1014[0])))
	{
		if (!ENTITY::IS_ENTITY_VISIBLE((Local_1157.f_690[24 /*12*/])->f_8))
		{
			ENTITY::SET_ENTITY_VISIBLE((Local_1157.f_690[24 /*12*/])->f_8, true);
		}
		if (ENTITY::GET_ENTITY_COLLISION_DISABLED((Local_1157.f_690[24 /*12*/])->f_8))
		{
			ENTITY::SET_ENTITY_COLLISION((Local_1157.f_690[24 /*12*/])->f_8, true, false);
		}
		return 0;
	}
	if (!ENTITY::IS_ENTITY_VISIBLE((Local_1157.f_690[24 /*12*/])->f_8))
	{
		fVar0 = OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(&(iLocal_1014[0]));
		if (fVar0 > 0.9625f || OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(&(iLocal_1014[0])) == 10)
		{
			ENTITY::SET_ENTITY_VISIBLE((Local_1157.f_690[24 /*12*/])->f_8, true);
			ENTITY::SET_ENTITY_COLLISION((Local_1157.f_690[24 /*12*/])->f_8, true, false);
			func_362(991016631);
		}
	}
	else if (ENTITY::GET_ENTITY_COLLISION_DISABLED((Local_1157.f_690[24 /*12*/])->f_8))
	{
		fVar0 = OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(&(iLocal_1014[0]));
		if (fVar0 > 0.997f)
		{
			ENTITY::SET_ENTITY_COLLISION((Local_1157.f_690[24 /*12*/])->f_8, true, false);
			func_363(-926795318);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_128(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_35 == iParam0)
		{
		}
		ENTITY::_SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

int func_129(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_130(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (uParam0->f_136 == 1)
	{
		func_160(&uVar1, &iVar2, func_9(1, 1048576));
	}
	else
	{
		func_161(uParam0->f_137, &uVar1, &iVar2, 1, 0);
	}
	iVar0 = uVar1;
	while (iVar0 <= iVar2)
	{
		if (!func_155(iVar0))
		{
		}
		else if (func_23(iVar0, 32))
		{
		}
		else
		{
			iVar3 = func_63(iVar0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
			}
			else if (!DECORATOR::DECOR_EXIST_ON(iVar3, "bPedAlreadyCounted"))
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					if (func_364(uParam0, iVar3))
					{
						DECORATOR::DECOR_SET_BOOL(iVar3, "bPedAlreadyCounted", true);
						*uParam3++;
						if (!func_22(uParam0, 32768))
						{
							func_43(uParam0, 32768);
						}
					}
				}
				else if (!func_22(uParam0, 32768))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar3, Global_35, 1, 1))
					{
						func_43(uParam0, 32768);
					}
				}
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam5) && !DECORATOR::DECOR_EXIST_ON(iParam5, "bPedAlreadyCounted"))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			if (func_364(uParam0, iParam5))
			{
				DECORATOR::DECOR_SET_BOOL(iParam5, "bPedAlreadyCounted", true);
				*uParam3++;
				if (!func_22(uParam0, 32768))
				{
					func_43(uParam0, 32768);
				}
			}
		}
		else if (!func_22(uParam0, 32768))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam5, Global_35, 1, 1))
			{
				func_43(uParam0, 32768);
			}
		}
	}
	iVar4 = 0;
	while (iVar4 < *uParam1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam1[iVar4]) && !DECORATOR::DECOR_EXIST_ON(uParam1[iVar4], "bPedAlreadyCounted"))
		{
			if (ENTITY::IS_ENTITY_DEAD(uParam1[iVar4]))
			{
				if (func_364(uParam0, uParam1[iVar4]))
				{
					DECORATOR::DECOR_SET_BOOL(uParam1[iVar4], "bPedAlreadyCounted", true);
					*uParam3++;
					if (!func_22(uParam0, 32768))
					{
						func_43(uParam0, 32768);
					}
				}
			}
			else if (!func_22(uParam0, 32768))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam1[iVar4], Global_35, 1, 1))
				{
					func_43(uParam0, 32768);
				}
			}
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < *uParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam2[iVar4]) && !DECORATOR::DECOR_EXIST_ON(uParam2[iVar4], "bPedAlreadyCounted"))
		{
			if (ENTITY::IS_ENTITY_DEAD(uParam2[iVar4]))
			{
				if (func_364(uParam0, uParam2[iVar4]))
				{
					DECORATOR::DECOR_SET_BOOL(uParam2[iVar4], "bPedAlreadyCounted", true);
					*uParam3++;
					if (!func_22(uParam0, 32768))
					{
						func_43(uParam0, 32768);
					}
				}
			}
			else if (!func_22(uParam0, 32768))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam2[iVar4], Global_35, 1, 1))
				{
					func_43(uParam0, 32768);
				}
			}
		}
		iVar4++;
	}
	if (*uParam3 >= iParam4)
	{
		return 1;
	}
	return 0;
}

void func_131(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_365(&(iParam0->f_9[0])))
	{
		return;
	}
	iVar1 = &iParam0->f_9[0];
	func_366(&iVar1, 0, iParam0->f_4, 0, 0, 0, 0, 0);
	if (func_367(iVar1, 1))
	{
		iVar0 = 0;
		while (iVar0 < iParam0->f_3)
		{
			if (iVar0 < (iParam0->f_3 - 1))
			{
				iParam0->f_9[iVar0] = &iParam0->f_9[iVar0 + 1];
			}
			else
			{
				iParam0->f_9[iVar0] = -15;
			}
			iVar0++;
		}
		iParam0->f_1 = (iParam0->f_1 - 1);
		if (iParam0->f_1 <= 0)
		{
			iParam0->f_1 = 0;
			func_134(iParam0, 16);
			iParam0->f_4 = 30;
		}
	}
}

bool func_132(int iParam0, int iParam1)
{
	return func_368(iParam0->f_17, iParam1);
}

void func_133(var uParam0, int iParam1, int* iParam2, var uParam3)
{
	int iVar0;
	char* sVar1;

	if (ENTITY::IS_ENTITY_DEAD(*iParam1))
	{
		func_94(iParam1, uParam0, 0);
		return;
	}
	func_369(iParam1);
	if (func_132(iParam1, 4))
	{
		if (iParam1->f_13 < 7)
		{
			func_370(iParam1, 7);
		}
		func_134(iParam1, 4);
	}
	if (func_132(iParam1, 256))
	{
		func_371(iParam1, iParam2, uParam3, 0);
	}
	if (func_132(iParam1, 512) && iParam1->f_13 > 2)
	{
		if (iParam1->f_2 > 2)
		{
			iParam1->f_2 = 0;
			func_48(&(iParam1->f_6));
			func_370(iParam1, 2);
		}
		iParam1->f_2++;
		func_134(iParam1, 512);
	}
	switch (iParam1->f_13)
	{
		case 0:
			func_48(&(iParam1->f_6));
			if (*iParam1 == 0)
			{
				func_370(iParam1, 9);
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				func_370(iParam1, 9);
				return;
			}
			iParam1->f_5 = func_352(*iParam1, 0);
			if (iParam1->f_5 != -1)
			{
				if (!func_263(iParam1->f_5, 0))
				{
					func_372(iParam1->f_5);
				}
			}
			if (iParam1->f_5 == -1 && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam1, true, false);
			}
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(*iParam1, 250);
			AUDIO::STOP_PED_SPEAKING(*iParam1, true);
			PED::_0xA7DC9266ED6A4E51(*iParam1);
			EVENT::_0x6B9C5C38838FB6E6(*iParam1);
			if (PED::IS_PED_RAGDOLL(*iParam1))
			{
				func_293(iParam1, 8);
			}
			if (!func_257(*iParam1, 1))
			{
				sVar1 = func_373(uParam0->f_136, -1);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
				{
					func_258(*iParam1, sVar1, 0);
				}
			}
			if (func_132(iParam1, 64))
			{
			}
			else if (iParam1->f_16 == 5)
			{
			}
			else if (func_374(*iParam1))
			{
				TASK::TASK_DISMOUNT_ANIMAL(*iParam1, 16777216, 0, 0, 0, 0);
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(*iParam1, true))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(*iParam1, 0, 0);
			}
			func_370(iParam1, 1);
			break;
		case 1:
			if (func_155(iParam1->f_5))
			{
				if (!func_263(iParam1->f_5, 0))
				{
					func_372(iParam1->f_5);
				}
			}
			if (func_375(&(iParam1->f_6)) < 5f && ((func_129(*iParam1, 501393341) || func_129(*iParam1, -828834893)) || func_129(*iParam1, 451360105)))
			{
				return;
			}
			func_48(&(iParam1->f_6));
			if (iParam1->f_16 == 5)
			{
				func_370(iParam1, 3);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				func_370(iParam1, 9);
				return;
			}
			if (!func_132(iParam1, 64))
			{
				PED::_0x62FDAD5E01D2DD47(*iParam1, Global_36, 3, 0);
				TASK::CLEAR_PED_TASKS(*iParam1, 1, 0);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (func_376(iParam1) && (func_377(*iParam1, Global_35, 1) > 9f || WEAPON::_0xCB690F680A3EA971(*iParam1, 4)))
				{
					TASK::TASK_GO_TO_ENTITY(0, Global_35, -1, 5f, 2f, 2f, 0);
					TASK::TASK_STAND_STILL(0, 500);
				}
				else
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1082130432, -1082130432, -1082130432);
					TASK::TASK_STAND_STILL(0, 500);
				}
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(*iParam1, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			func_378(249295937, *iParam1, 1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_20[0 /*4*/]))
			{
				if (func_132(iParam1, 32))
				{
					func_379(&(uParam0->f_35), iParam1->f_20[0 /*4*/], *iParam1, Global_35, 0, 0, 1, 1);
				}
				else
				{
					func_114(*iParam1, Global_35, iParam1->f_20[0 /*4*/], 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				}
			}
			else
			{
				func_114(*iParam1, Global_35, func_380(iParam1, 1), 0, -1082130432, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			}
			if (iParam1->f_16 == 5)
			{
				func_370(iParam1, 3);
			}
			else
			{
				func_370(iParam1, 2);
			}
			break;
		case 3:
			if ((AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || !func_253(0, 1, *iParam1, 1)) || func_381(iParam1->f_20[0 /*4*/]))
			{
				return;
			}
			if (func_382(*iParam1, 1, 1, 1, 0, 0))
			{
				if (func_375(&(iParam1->f_6)) < 10f)
				{
					return;
				}
				else
				{
					func_293(iParam1, 2);
					func_370(iParam1, 9);
					return;
				}
			}
			func_370(iParam1, 5);
			break;
		case 4:
			if (func_155(iParam1->f_5))
			{
				if (!func_263(iParam1->f_5, 0))
				{
					func_372(iParam1->f_5);
				}
			}
			if ((AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || !func_253(0, 1, *iParam1, 1)) || func_381(iParam1->f_20[0 /*4*/]))
			{
				return;
			}
			if (func_382(*iParam1, 1, 1, 1, 0, 0))
			{
				if (func_375(&(iParam1->f_6)) < 10f)
				{
					return;
				}
				else
				{
					func_293(iParam1, 2);
					func_370(iParam1, 9);
					return;
				}
			}
			func_370(iParam1, 5);
			break;
		case 5:
			if (func_155(iParam1->f_5))
			{
				if (!func_263(iParam1->f_5, 0))
				{
					func_372(iParam1->f_5);
				}
			}
			if ((AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || !func_253(0, 1, *iParam1, 1)) || func_381(iParam1->f_20[0 /*4*/]))
			{
				return;
			}
			if (func_382(*iParam1, 1, 1, 1, 0, 0))
			{
				if (func_375(&(iParam1->f_6)) < 10f)
				{
					func_370(iParam1, 3);
					return;
				}
				else
				{
					func_293(iParam1, 2);
					func_370(iParam1, 9);
					return;
				}
			}
			func_48(&(iParam1->f_6));
			func_370(iParam1, 7);
			break;
		case 2:
			if (func_155(iParam1->f_5))
			{
				if (!func_263(iParam1->f_5, 0))
				{
					func_372(iParam1->f_5);
				}
			}
			if ((AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || !func_253(0, 1, *iParam1, 1)) || func_381(iParam1->f_20[0 /*4*/]))
			{
				return;
			}
			if (((iParam1->f_16 != 5 && func_375(&(iParam1->f_6)) < 25f) && func_129(*iParam1, 242628503)) && func_377(*iParam1, Global_35, 1) > 9f)
			{
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				func_370(iParam1, 9);
				return;
			}
			if (!func_132(iParam1, 64))
			{
				switch (iParam1->f_16)
				{
					case -1:
					case 2:
					case 4:
						TASK::CLEAR_PED_TASKS(*iParam1, 1, 0);
						if (!func_132(iParam1, 4) && !WEAPON::_0xCB690F680A3EA971(*iParam1, 7))
						{
							TASK::TASK_CONFRONT(*iParam1, Global_35, 2);
						}
						break;
					case 0:
					case 1:
					case 3:
					case 6:
						break;
					case 7:
						if (func_132(iParam1, 16))
						{
							TASK::CLEAR_PED_TASKS(*iParam1, 1, 0);
							if (!func_132(iParam1, 4) && !WEAPON::_0xCB690F680A3EA971(*iParam1, 7))
							{
								TASK::TASK_CONFRONT(*iParam1, Global_35, 2);
							}
						}
						else
						{
							switch (iParam1->f_1)
							{
								case 1:
									TASK::CLEAR_PED_TASKS(*iParam1, 1, 0);
									break;
								case 2:
									TASK::CLEAR_PED_TASKS(*iParam1, 1, 0);
									if (!func_132(iParam1, 4) && !WEAPON::_0xCB690F680A3EA971(*iParam1, 7))
									{
										TASK::TASK_CONFRONT(*iParam1, Global_35, 2);
									}
									break;
							}
						}
						break;
					case 8:
						TASK::CLEAR_PED_TASKS(*iParam1, 1, 0);
						if (func_132(iParam1, 16))
						{
							TASK::TASK_AIM_AT_ENTITY(*iParam1, Global_35, -1, 0, 0);
						}
						else
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam1, Global_35, -1, -1082130432, -1082130432, -1082130432);
						}
						break;
				}
			}
			func_48(&(iParam1->f_6));
			func_378(249295937, *iParam1, 1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam1->f_20[1 /*4*/]))
			{
				if (func_132(iParam1, 32))
				{
					func_379(&(uParam0->f_35), iParam1->f_20[1 /*4*/], *iParam1, Global_35, 0, 0, 1, 1);
				}
				else
				{
					func_114(*iParam1, Global_35, iParam1->f_20[1 /*4*/], 0, -1082130432, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				}
			}
			else
			{
				func_114(*iParam1, Global_35, func_380(iParam1, 2), 0, -1082130432, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
			}
			switch (iParam1->f_16)
			{
				case 1:
				case 3:
				case 6:
				case 8:
					func_370(iParam1, 6);
					break;
				default:
					func_370(iParam1, 7);
					break;
			}
			break;
		case 6:
			if (func_155(iParam1->f_5))
			{
				if (!func_263(iParam1->f_5, 0))
				{
					func_372(iParam1->f_5);
				}
			}
			if (AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || !func_253(0, 1, *iParam1, 1))
			{
				return;
			}
			if ((!func_132(iParam1, 4) && func_129(*iParam1, -1942934348)) && func_375(&(iParam1->f_6)) < 5f)
			{
				return;
			}
			if (func_375(&(iParam1->f_6)) < 15f)
			{
				return;
			}
			func_48(&(iParam1->f_6));
			if (ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				func_370(iParam1, 9);
				return;
			}
			func_370(iParam1, 7);
			break;
		case 7:
			if (func_155(iParam1->f_5))
			{
				if (!func_263(iParam1->f_5, 0))
				{
					func_372(iParam1->f_5);
				}
			}
			if (AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) || !func_253(0, 1, *iParam1, 1))
			{
				return;
			}
			if ((!func_132(iParam1, 4) && func_129(*iParam1, -1942934348)) && func_375(&(iParam1->f_6)) < 5f)
			{
				return;
			}
			if (iParam1->f_16 == 1 && ENTITY::DOES_ENTITY_EXIST(func_383(Global_35)))
			{
				func_293(iParam1, 2);
			}
			func_48(&(iParam1->f_6));
			if (ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				func_370(iParam1, 9);
				return;
			}
			if (!func_132(iParam1, 64))
			{
				TASK::CLEAR_PED_TASKS(*iParam1, 1, 0);
			}
			func_370(iParam1, 8);
			break;
		case 8:
			if (func_155(iParam1->f_5))
			{
				if (!func_263(iParam1->f_5, 0))
				{
					func_372(iParam1->f_5);
				}
			}
			if (func_385(&(iParam1->f_6), func_384(iParam1)))
			{
				AUDIO::STOP_PED_SPEAKING(*iParam1, false);
				if (!func_132(iParam1, 64) && !func_132(iParam1, 128))
				{
					if (iParam1->f_5 != -1)
					{
						func_75(iParam1->f_5, 1);
					}
					else
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam1);
					}
				}
				func_370(iParam1, 9);
			}
			break;
		case 9:
			func_386(iParam1, iParam2, uParam3);
			func_94(iParam1, uParam0, 0);
			break;
	}
}

void func_134(int iParam0, int iParam1)
{
	func_199(&(iParam0->f_17), iParam1);
}

int func_135()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;

	if (iLocal_98 >= 4)
	{
		return func_387();
	}
	if (func_22(&Local_2160, 32))
	{
		if (iLocal_98 == 3 && !func_9(Local_2160.f_136, 32))
		{
			iVar0 = 0;
			while (iVar0 < Local_1157.f_1)
			{
				func_388(&iVar0);
				iVar0++;
			}
		}
		return 0;
	}
	func_389(&uLocal_734, 2);
	if (func_19(8192))
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			bVar3 = func_390(iLocal_1155, func_7(iVar1));
			if (bVar3)
			{
				func_391(iVar1, iVar2);
				iVar2++;
			}
			iVar1++;
		}
	}
	if (!func_115(512))
	{
		func_392();
		func_393();
	}
	if (!func_51(67108864))
	{
		func_394(0);
		func_395(0, 1, 1);
		func_58(67108864);
	}
	iVar4 = func_63(Local_2160.f_138);
	if (!ENTITY::IS_ENTITY_DEAD(iVar4))
	{
		if (iVar4 != iLocal_155)
		{
			iLocal_155 = iVar4;
			func_76(Local_750[0 /*21*/], 0);
		}
		func_65(&(Local_2160.f_35), iVar4, "EA_LCMP_Foreman", 0);
		func_396(&iVar4);
		PED::SET_PED_RESET_FLAG(iVar4, 49, true);
	}
	if ((iLocal_98 == 1 || iLocal_98 == 2) || (iLocal_98 == 3 && func_5(Local_2160.f_136, 128)))
	{
		func_397(&iVar4);
	}
	if (iLocal_98 < 4)
	{
		func_398();
	}
	func_399();
	func_400(&iVar4);
	if (!func_19(128))
	{
		if (iLocal_98 == 3 && !func_5(Local_2160.f_136, 128))
		{
			func_401();
		}
		func_402();
		return 0;
	}
	func_403();
	if (func_19(16384))
	{
		func_404(iLocal_2505[0]);
	}
	if (!func_19(16) && !func_19(64))
	{
		bVar5 = func_19(1);
		func_406(iVar4, uLocal_2499[0], &Local_2160, func_19(262144), &bVar5, 1, func_405());
		func_13(1, bVar5);
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_2502[0])) && !PROPSET::_0x53784CEA0159439B(&(iLocal_2502[0])))
	{
		PROPSET::_0xD80FAF919A2E56EA(&(iLocal_2502[0]), 1242644044);
	}
	func_407();
	if (func_19(64) && !func_19(4))
	{
		func_13(4, func_408(&iVar4, iLocal_2479[0]));
		return 0;
	}
	if (func_19(64) && func_19(4))
	{
		func_409(&iVar4);
		func_410(iLocal_2479[0]);
	}
	if (iLocal_98 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_2502[0])) && !ENTITY::_0x083D497D57B7400F(&(iLocal_2502[0])))
		{
			ENTITY::SET_ENTITY_COORDS(&(iLocal_2502[0]), (Local_1157.f_304[0 /*32*/])->f_6, true, false, true, true);
			ENTITY::FREEZE_ENTITY_POSITION(&(iLocal_2502[0]), true);
			AITRANSPORT::_0xBA8818212633500A(&(iLocal_2502[0]), 0, 1);
		}
	}
	if (!func_19(32))
	{
		if (func_19(262144))
		{
			Local_2544.f_2[0] = "LOG_WRK02";
			if (!func_19(16))
			{
				switch (iLocal_98)
				{
					case 2:
					case 3:
						if (!func_19(-2147483648) && func_9(1, 2))
						{
							return func_411(&iVar4);
						}
						else
						{
							return func_412(&iVar4);
						}
						break;
					default:
						return func_412(&iVar4);
				}
			}
			else
			{
				return func_413(&iVar4);
			}
		}
		else
		{
			switch (iLocal_98)
			{
				case 1:
					if (!func_19(16))
					{
						return func_414(&iVar4);
					}
					else
					{
						return func_413(&iVar4);
					}
					break;
				case 2:
					if (!func_19(16))
					{
						if (!func_19(-2147483648) && func_9(1, 2))
						{
							return func_411(&iVar4);
						}
						else
						{
							return func_412(&iVar4);
						}
					}
					else
					{
						return func_413(&iVar4);
					}
					break;
				case 3:
					func_415(iLocal_2479[0], 0);
					func_415(iLocal_2479[1], 1);
					func_416();
					func_417();
					if (func_9(Local_2160.f_136, 256) || func_418(&iVar4))
					{
						return func_419(&iVar4);
					}
					break;
				case 4:
				case 5:
					return func_387();
			}
		}
	}
	return 0;
}

void func_136()
{
	int iVar0;
	float fVar1;
	int iVar2;

	func_420();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_421(iVar0) && !func_422(iVar0))
		{
			if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(&(iLocal_1014[iVar0])))
			{
				if (!(iVar0 == 0 && func_19(512)))
				{
				}
			}
			else
			{
				fVar1 = OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(&(iLocal_1014[iVar0]));
				if (fVar1 >= (func_423(iVar0) - 0.007544f) && fVar1 <= func_424(iVar0))
				{
					func_425();
				}
				switch (iLocal_1153)
				{
					case 0:
						if (fVar1 >= func_423(iVar0) && fVar1 < func_424(iVar0))
						{
							PAD::SET_PAD_SHAKE(0, 400, func_426(iVar0));
							func_427(iVar0);
							AUDIO::_0x017492B2201E3428("SHOCKWAVE_TREE_FALL", func_428(iVar0));
							iVar2 = PED::_0x4C8B59171957BCF7(Global_35);
							if (!ENTITY::IS_ENTITY_DEAD(iVar2) && func_430(iVar2, func_429(iVar0), 1) < 10f)
							{
								PED::_0xBAE08F00021BFFB2(iVar2, func_356());
							}
							iLocal_1153 = 1;
						}
						break;
					case 1:
						if (fVar1 >= func_424(iVar0))
						{
							EVENT::ADD_SHOCKING_EVENT_AT_POSITION(-1905235087, func_428(iVar0), -1f, 100f, 100f, -1082130432, (30f + 5f), -1, -1);
							func_58(8192);
							PAD::SET_PAD_SHAKE(0, 300, (func_426(iVar0) / 2));
							iLocal_1153 = 2;
						}
						break;
					case 2:
						func_109(&(iLocal_75[2]));
						func_109(&(iLocal_75[3]));
						iLocal_1153 = 0;
						break;
				}
			}
		}
		iVar0++;
	}
}

int func_137()
{
	if (func_22(&Local_2160, 1024))
	{
		return 1;
	}
	if (iLocal_2651)
	{
		return 1;
	}
	if (iLocal_2648 == 1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return 0;
		}
	}
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		return 0;
	}
	if (func_431(iLocal_2651))
	{
		return 1;
	}
	return 0;
}

int func_138(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return 0;
	}
	return 1;
}

int func_139(int iParam0)
{
	if (!func_138(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 0:
			return 11;
		case 1:
			return 76;
		case 3:
			return 15;
		case 2:
			return 128;
		default:
			break;
	}
	return -1;
}

bool func_140(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

void func_141(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (Global_23117[iParam0 /*11*/] || iParam1);
	}
	else
	{
		Global_1058888->f_40615[iParam0 /*11*/] = (Global_1058888->f_40615[iParam0 /*11*/] || iParam1);
	}
}

Vector3 func_142(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1410.538f, -223.0142f, 100.0121f;
		case 1:
			return -439.4129f, 498.0963f, 97.94115f;
		case 3:
			return -1577.892f, -915.5556f, 82.73499f;
		case 2:
			switch (iParam1)
			{
				case 1:
					return 2226.756f, 666.0685f, 94.00805f;
				case 2:
					return 2195.606f, 794.7285f, 106.9675f;
				case 3:
					return 1951.033f, 934.2983f, 116.3355f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_143(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_144(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (Global_1572887->f_12 != -1)
	{
		if ((iParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((iParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_432())
		{
			return 1;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if (((*Global_1055058)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/])->f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (iParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if ((Global_1898164->f_1[0 /*5*/])->f_2 == 8)
	{
		iVar0 = func_433(&(Global_1898164->f_1[0 /*5*/]));
		if (func_434(iVar0) && func_435(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_98(&(Global_1898164->f_1[0 /*5*/])))
	{
		return 1;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1898438)
		{
			return 1;
		}
	}
	switch ((Global_1898164->f_1[0 /*5*/])->f_2)
	{
		case 0:
			return 0;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & 512 == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return 0;
}

bool func_145()
{
	return func_436(64);
}

int func_146(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_437(iVar0) || func_438(iVar0))
				{
					return 0;
				}
				return 1;
			}
		}
	}
	return 0;
}

bool func_147()
{
	return Global_1310750->f_16077 != 0;
}

int func_148()
{
	return Global_1310750->f_16071;
}

void func_149(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	if (!func_138(iParam0))
	{
		return;
	}
	func_439(iParam0, (Global_40.f_9096[iParam0 /*12*/])->f_10, uParam1, uParam2, uParam3, uParam4);
}

bool func_150(int iParam0)
{
	if (!func_138(iParam0))
	{
		return false;
	}
	return (Global_40.f_9096[iParam0 /*12*/])->f_3 > (Global_40.f_9096[iParam0 /*12*/])->f_10;
}

int func_151(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case -416908843:
		case 212278652:
		case 839715153:
		case 1420204096:
		case 1974067816:
		case 2082228755:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_152(int iParam0)
{
	switch (iParam0)
	{
		case -273223690:
		case 603685163:
		case 669657108:
		case 725623432:
		case 1679686673:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_153(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case 1500834021:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_154(int iParam0)
{
	switch (iParam0)
	{
		case 603685163:
		case 1679686673:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_155(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

void func_156(int iParam0, int iParam1)
{
	if (!func_440(iParam0))
	{
		return;
	}
	((*Global_1888801)[iParam0 /*35*/])->f_19 = iParam1;
}

void func_157(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_199(&iParam1, 8192);
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_158(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_159(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 8;
	if (bParam1)
	{
		iVar0 |= 72;
	}
	if (bParam2)
	{
		iVar0 |= 131072;
	}
	if (bParam3)
	{
		iVar0 |= 24;
	}
	if (bParam4)
	{
		iVar0 |= 40;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_160(var uParam0, var uParam1, bool bParam2)
{
	if (!bParam2)
	{
		*uParam0 = 64;
		*uParam1 = 66;
	}
	else
	{
		*uParam0 = 67;
		*uParam1 = 68;
	}
}

int func_161(int iParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_1() != -1;
	switch (iParam0)
	{
		case 76:
			*uParam1 = 0;
			if (bParam3)
			{
				*uParam2 = 47;
			}
			else
			{
				*uParam2 = 63;
			}
			if (bVar0)
			{
				*uParam2 = 5;
			}
			break;
		case 105:
			*uParam1 = 69;
			if (bParam3)
			{
				*uParam2 = 127;
			}
			else
			{
				*uParam2 = 136;
			}
			if (bVar0)
			{
				*uParam2 = 72;
			}
			break;
		case 5:
			*uParam1 = 137;
			*uParam2 = 324;
			if (bVar0)
			{
				*uParam2 = 142;
			}
			break;
		case 61:
			*uParam1 = 380;
			*uParam2 = 381;
			if (bVar0)
			{
				*uParam2 = 380;
			}
			break;
		case 78:
			*uParam1 = 382;
			*uParam2 = 431;
			if (bVar0)
			{
				*uParam2 = 384;
			}
			break;
		case 92:
			*uParam1 = 443;
			*uParam2 = 471;
			if (bVar0)
			{
				*uParam2 = 443;
			}
			break;
		case 26:
			*uParam1 = 472;
			if (bParam3)
			{
				*uParam2 = 500;
			}
			else
			{
				*uParam2 = 502;
			}
			if (bVar0)
			{
				*uParam2 = 472;
			}
			break;
		case 38:
			*uParam1 = 508;
			*uParam2 = 553;
			if (bVar0)
			{
				*uParam2 = 509;
			}
			break;
		case 68:
			*uParam1 = 554;
			*uParam2 = 565;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 65:
			*uParam1 = 566;
			*uParam2 = 588;
			if (bVar0)
			{
				*uParam2 = 566;
			}
			break;
		case 69:
			*uParam1 = 589;
			if (bParam3)
			{
				*uParam2 = 598;
			}
			else
			{
				*uParam2 = 612;
			}
			if (bVar0)
			{
				*uParam2 = 590;
			}
			break;
		case 75:
			*uParam1 = 503;
			*uParam2 = 506;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 93:
			*uParam1 = 613;
			*uParam2 = 625;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 95:
			*uParam1 = 626;
			*uParam2 = 641;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 97:
			*uParam1 = 642;
			*uParam2 = 643;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 3:
			*uParam1 = 644;
			*uParam2 = 656;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 6:
			*uParam1 = 657;
			*uParam2 = 658;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 32:
			*uParam1 = 325;
			*uParam2 = 344;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 82:
			*uParam1 = 659;
			if (bParam3)
			{
				*uParam2 = 673;
			}
			else
			{
				*uParam2 = 690;
			}
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 35:
			*uParam1 = 691;
			*uParam2 = 700;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 56:
			*uParam1 = 701;
			*uParam2 = 708;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*uParam1 = 715;
			}
			else
			{
				*uParam1 = 715;
			}
			*uParam2 = 723;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 110:
			*uParam1 = 724;
			*uParam2 = 730;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 64:
			*uParam1 = 736;
			*uParam2 = 740;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 66:
			*uParam1 = 745;
			*uParam2 = 750;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 70:
			*uParam1 = 751;
			*uParam2 = 754;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 77:
			*uParam1 = 731;
			*uParam2 = 732;
			break;
		case 96:
			*uParam1 = 741;
			*uParam2 = 743;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 29:
			*uParam1 = 744;
			*uParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 100:
			*uParam1 = 755;
			*uParam2 = 763;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 102:
			*uParam1 = 764;
			*uParam2 = 767;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 72:
			*uParam1 = 733;
			*uParam2 = 735;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 124:
			*uParam1 = 791;
			*uParam2 = 793;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 86:
			*uParam1 = 768;
			*uParam2 = 772;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 126:
			*uParam1 = 773;
			*uParam2 = 779;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 120:
			*uParam1 = 432;
			*uParam2 = 442;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 115:
			*uParam1 = 345;
			*uParam2 = 375;
			if (bVar0)
			{
				*uParam2 = 375;
			}
			break;
		case 125:
			*uParam1 = 376;
			*uParam2 = 379;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 116:
			*uParam1 = 783;
			*uParam2 = 790;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 21:
			*uParam1 = 780;
			*uParam2 = 782;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 42:
			*uParam1 = 794;
			*uParam2 = 798;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 89:
			*uParam1 = 799;
			*uParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 23:
			*uParam1 = 801;
			*uParam2 = 801;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 28:
			*uParam1 = 802;
			*uParam2 = 803;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 101:
			*uParam1 = 804;
			*uParam2 = 806;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 117:
			*uParam1 = 507;
			*uParam2 = 507;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 11:
			*uParam1 = 807;
			*uParam2 = 833;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		case 128:
			*uParam1 = 834;
			*uParam2 = 857;
			if (bVar0)
			{
				*uParam1 = -1;
				*uParam2 = -1;
			}
			break;
		default:
			*uParam1 = -1;
			*uParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *uParam2 == -1)
	{
		return 0;
	}
	return 1;
}

int func_162(int iParam0)
{
	if (!func_155(iParam0))
	{
		return 0;
	}
	if (!func_237(func_236(iParam0)))
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_167(iParam0)))
	{
		return 0;
	}
	_NAMESPACE48::_0x4F81EAD1DE8FA19B(func_167(iParam0));
	return 1;
}

int func_163(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_1() != -1)
	{
		return 1;
	}
	if (!func_440(iParam0))
	{
		return 1;
	}
	if (func_140(iParam0, 16))
	{
		return 1;
	}
	if (func_441(iParam0) && !func_442(iParam0))
	{
	}
	if (func_161(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_155(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_155(iParam2))
		{
			iVar1 = iParam2;
		}
		if (&Global_1897950 < iVar0 || &Global_1897950 > iVar1)
		{
			Global_1897950 = iVar0;
		}
		while (true)
		{
			if ((!func_441(iParam0) || func_442(iParam0)) || func_443(&Global_1897950))
			{
				func_238(&Global_1897950, 0);
			}
			Global_1897950 = &Global_1897950 + 1;
			iVar2++;
			if (&Global_1897950 > iVar1)
			{
				Global_1897950 = -1;
				return 1;
			}
			if (iVar2 >= 10 && !bParam3)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_164(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_445(func_444());
	if (func_368(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_368(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return 1;
		}
	}
	if (func_368(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return 1;
		}
	}
	if (func_368(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_368(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_368(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return 1;
		}
	}
	if (func_368(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return 1;
		}
	}
	if (func_368(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return 1;
		}
	}
	if (func_368(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_368(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_368(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_368(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return 1;
		}
	}
	if (func_368(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return 1;
		}
	}
	if (func_368(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return 1;
		}
	}
	if (func_368(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return 1;
		}
	}
	if (func_368(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return 1;
		}
	}
	if (func_368(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return 1;
		}
	}
	return 0;
}

int func_165(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar1 = -1;
	fVar2 = 1E+08f;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!bParam3 || func_446(iVar0))
		{
			fVar3 = func_447(iVar0, vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_166(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return 0;
	}
	return 1;
}

int func_167(int iParam0)
{
	if (!func_155(iParam0))
	{
		return 0;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_1;
}

void func_168(int iParam0)
{
	int iVar0;

	if (!func_155(iParam0))
	{
		return;
	}
	iVar0 = func_167(iParam0);
	func_448(iParam0);
	_NAMESPACE48::_0x7B204F88F6C3D287(iVar0);
	_NAMESPACE48::_0xFC77C5B44D5FF7C0(iVar0);
}

void func_169(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return;
	}
	if (!func_155(iParam0))
	{
		return;
	}
	Global_24886[iParam0 /*2*/] = (&Global_24886[iParam0 /*2*/] - (Global_24886[iParam0 /*2*/] && iParam1));
}

void func_170(int iParam0)
{
	Global_1898092->f_1 = (Global_1898092->f_1 || iParam0);
}

void func_171()
{
	if (!VOLUME::_0x92A78D0BEDB332A3(&(iLocal_75[16])))
	{
		if (func_19(64))
		{
			iLocal_75[16] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1390.451f, -274.8033f, 102.3449f, 0f, 0f, 0f, 4.622575f, 4.933644f, 4.047438f, "Appleseed - volRoadBlocking");
		}
		else if (iLocal_98 == 3 && !func_19(262144))
		{
			iLocal_75[16] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1430.557f, -357.1499f, 111.7085f, 0f, 0f, 0f, 7.102352f, 6.564137f, 4.575559f, "Appleseed - volRoadBlocking");
		}
	}
}

void func_172()
{
	vector3 vVar0;

	if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_75[16])))
	{
		if (!func_51(4194304) && !func_274(2048))
		{
			vVar0 = { VOLUME::_0x3E2A25B2416DD67E(&(iLocal_75[16])) };
			func_450(VOLUME::_0xF70F00013A62F866(&(iLocal_75[16])), func_449(vVar0.x, vVar0.y), 0, 0, 4);
			PATHFIND::_0xB03944057FD735BA(&(iLocal_75[16]), 4, 0);
			func_58(4194304);
		}
	}
}

void func_173(var uParam0)
{
	if (iLocal_98 == 3)
	{
		uParam0->f_1 = 2;
		(uParam0->f_369[0 /*32*/])->f_6 = { -1403.06f, -269.28f, 98.71f };
		(uParam0->f_369[0 /*32*/])->f_9 = -49f;
		(uParam0->f_369[0 /*32*/])->f_1 = joaat("a_c_wolf");
		(uParam0->f_369[1 /*32*/])->f_6 = { -1414.56f, -182f, 99.63f };
		(uParam0->f_369[1 /*32*/])->f_9 = 40.7f;
		(uParam0->f_369[1 /*32*/])->f_1 = joaat("a_c_wolf");
	}
}

void func_174(int iParam0)
{
	*iParam0 = 4;
	if (func_19(64))
	{
		(iParam0->f_15[0 /*32*/])->f_6 = { -1413.793f, -240.7767f, 98.87817f };
		(iParam0->f_15[0 /*32*/])->f_9 = 251.3227f;
		(iParam0->f_15[0 /*32*/])->f_1 = func_451();
		(iParam0->f_15[0 /*32*/])->f_3 = 1842387010;
		(iParam0->f_15[1 /*32*/])->f_6 = { -1403.043f, -243.4083f, 99.37144f };
		(iParam0->f_15[1 /*32*/])->f_9 = 214.3414f;
		(iParam0->f_15[1 /*32*/])->f_1 = func_451();
		(iParam0->f_15[2 /*32*/])->f_6 = { -1407.91f, -252.1218f, 99.3026f };
		(iParam0->f_15[2 /*32*/])->f_9 = 354.953f;
		(iParam0->f_15[2 /*32*/])->f_21 = 0;
		(iParam0->f_15[2 /*32*/])->f_1 = func_451();
		(iParam0->f_15[3 /*32*/])->f_6 = { -1415.464f, -251.052f, 100.0263f };
		(iParam0->f_15[3 /*32*/])->f_9 = 323.5956f;
		(iParam0->f_15[3 /*32*/])->f_21 = 1;
		(iParam0->f_15[3 /*32*/])->f_1 = func_451();
	}
	iParam0->f_1 = 0;
	if (func_19(16384))
	{
		iParam0->f_1++;
	}
	if (iLocal_98 == 1 && func_19(131072))
	{
		(Local_15[0 /*28*/])->f_4 = { -1376.811f, -220.7483f, 100.515f };
		(Local_15[0 /*28*/])->f_10 = -22.2f;
	}
	else
	{
		(Local_15[0 /*28*/])->f_4 = { -1261.942f, -304.2063f, 97.9132f };
		(Local_15[0 /*28*/])->f_10 = 59.8051f;
	}
	if (func_19(32768))
	{
		(Local_15[0 /*28*/])->f_11 = joaat("logwagon");
		if (iLocal_98 == 1 && !func_19(131072))
		{
			(Local_15[0 /*28*/])->f_12 = "LOG_WAGON01A";
		}
		iLocal_14 += 2;
	}
	*(Local_15[0 /*28*/]) = { -1372.528f, -209.3416f, 100.5443f };
	(Local_15[0 /*28*/])->f_3 = 349.7721f;
	(Local_15[0 /*28*/])->f_23 = 0;
	(Local_15[0 /*28*/])->f_22 = 0;
	(Local_15[0 /*28*/])->f_7 = { -1381.927f, -210.7938f, 102.3367f };
	(iParam0->f_15[4 /*32*/])->f_6 = { -1416.878f, -211.8701f, 104.7347f };
	(iParam0->f_15[4 /*32*/])->f_9 = 309.938f;
	if (func_19(32768))
	{
		*iParam0++;
		(iParam0->f_15[4 /*32*/])->f_1 = func_451();
	}
	else
	{
		(iParam0->f_15[4 /*32*/])->f_1 = 0;
	}
}

void func_175(int iParam0)
{
	func_174(iParam0);
	if (func_19(64))
	{
		(iParam0->f_15[1 /*32*/])->f_6 = { -1403.043f, -243.4083f, 99.37144f };
		(iParam0->f_15[1 /*32*/])->f_9 = 214.3414f;
		(iParam0->f_15[1 /*32*/])->f_1 = func_451();
	}
	(Local_15[1 /*28*/])->f_4 = { -1377.5f, -200.4f, 102.6f };
	(Local_15[1 /*28*/])->f_10 = 77.9f;
	if (func_19(65536))
	{
		(Local_15[1 /*28*/])->f_11 = joaat("logwagon");
		iLocal_14 += 2;
	}
	*(Local_15[1 /*28*/]) = { -1400.617f, -124.2774f, 96.3551f };
	(Local_15[1 /*28*/])->f_3 = 89f;
	(Local_15[1 /*28*/])->f_23 = 1;
	(Local_15[1 /*28*/])->f_25 = 1;
	if (func_19(65536))
	{
		(Local_15[1 /*28*/])->f_12 = "LOG_WAGON02C";
	}
	if (func_19(32768))
	{
		(Local_15[0 /*28*/])->f_12 = "LOG_WAGON01B";
	}
	*(Local_15[0 /*28*/]) = { -1373.148f, -219.672f, 99.51241f };
	(iParam0->f_15[5 /*32*/])->f_6 = { -1376f, -197.6f, 102.1f };
	(iParam0->f_15[5 /*32*/])->f_9 = 55.8f;
	if (func_19(65536))
	{
		*iParam0++;
		(iParam0->f_15[5 /*32*/])->f_1 = func_451();
	}
	else
	{
		(iParam0->f_15[5 /*32*/])->f_1 = 0;
	}
}

void func_176()
{
}

void func_177(int iParam0, bool bParam1)
{
	func_174(iParam0);
	func_175(iParam0);
	if (func_5(0, 128))
	{
		if (func_19(65536))
		{
			(Local_15[1 /*28*/])->f_12 = "LOG_WAGON02C";
		}
		if (func_19(32768))
		{
			(Local_15[0 /*28*/])->f_12 = "LOG_WAGON01C";
		}
	}
	else
	{
		(iParam0->f_15[0 /*32*/])->f_6 = { -1389.931f, -265.0812f, 98.29932f };
		(iParam0->f_15[0 /*32*/])->f_9 = -161.23f;
		(iParam0->f_15[0 /*32*/])->f_1 = func_451();
		(iParam0->f_15[1 /*32*/])->f_6 = { -1431.474f, -269.5809f, 102.2202f };
		(iParam0->f_15[1 /*32*/])->f_9 = -148.66f;
		(iParam0->f_15[1 /*32*/])->f_1 = func_451();
		if (!bParam1)
		{
			(iParam0->f_15[2 /*32*/])->f_6 = { -1444.14f, -359.7078f, 114.5595f };
			(iParam0->f_15[2 /*32*/])->f_9 = 49.7f;
			(iParam0->f_15[2 /*32*/])->f_21 = 1;
			(iParam0->f_15[2 /*32*/])->f_1 = func_451();
			(iParam0->f_15[2 /*32*/])->f_3 = -1149853461;
			func_452(&((iParam0->f_15[2 /*32*/])->f_22));
			func_453(&((iParam0->f_15[2 /*32*/])->f_22));
			func_454(&((iParam0->f_15[2 /*32*/])->f_22));
			func_455(&((iParam0->f_15[2 /*32*/])->f_22));
			func_456(&((iParam0->f_15[2 /*32*/])->f_22));
			(iParam0->f_15[3 /*32*/])->f_6 = { -1444.485f, -357.8756f, 114.8794f };
			(iParam0->f_15[3 /*32*/])->f_9 = -145.8f;
			(iParam0->f_15[3 /*32*/])->f_21 = 1;
			(iParam0->f_15[3 /*32*/])->f_1 = func_451();
			(iParam0->f_15[3 /*32*/])->f_3 = 307318431;
			func_452(&((iParam0->f_15[3 /*32*/])->f_22));
			func_453(&((iParam0->f_15[3 /*32*/])->f_22));
			func_454(&((iParam0->f_15[3 /*32*/])->f_22));
			func_455(&((iParam0->f_15[3 /*32*/])->f_22));
			func_456(&((iParam0->f_15[3 /*32*/])->f_22));
		}
		else
		{
			(iParam0->f_15[2 /*32*/])->f_1 = 0;
			(iParam0->f_15[2 /*32*/])->f_6 = { -1444.14f, -359.7078f, 114.5595f };
			(iParam0->f_15[3 /*32*/])->f_1 = 0;
			(iParam0->f_15[3 /*32*/])->f_6 = { -1444.485f, -357.8756f, 114.8794f };
		}
		(iParam0->f_369[0 /*32*/])->f_6 = { -1468.629f, -379.8213f, 125.2618f };
		(iParam0->f_369[0 /*32*/])->f_9 = -45.42f;
		(iParam0->f_369[0 /*32*/])->f_1 = joaat("a_c_wolf");
		(iParam0->f_369[1 /*32*/])->f_6 = { -1459.213f, -380.2958f, 122.0884f };
		(iParam0->f_369[1 /*32*/])->f_9 = -6.39f;
		(iParam0->f_369[1 /*32*/])->f_1 = joaat("a_c_wolf");
		(iParam0->f_369[2 /*32*/])->f_6 = { -1449.054f, -341.1028f, 118.9559f };
		(iParam0->f_369[2 /*32*/])->f_9 = -124.44f;
		(iParam0->f_369[2 /*32*/])->f_1 = joaat("a_c_wolf");
		*iParam0 = 4;
		iParam0->f_1 = 3;
		(Local_15[1 /*28*/])->f_11 = 0;
		(Local_15[0 /*28*/])->f_11 = 0;
		(iParam0->f_15[5 /*32*/])->f_1 = 0;
		(iParam0->f_15[4 /*32*/])->f_1 = 0;
	}
}

void func_178()
{
	int iVar0;

	if (!iLocal_98 == 3 || func_5(Local_2160.f_136, 128))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if ((func_9(Local_2160.f_136, 512) && iLocal_98 == 2) && iVar0 == 0)
			{
				func_457(iVar0);
			}
			if (func_19(64) && iVar0 == 0)
			{
				Jump @118; //curOff = 96
			}
			else if (!func_458(iVar0))
			{
				func_459(&iVar0);
			}
			iVar0++;
		}
	}
}

void func_179()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_460(iVar0);
		iVar0++;
	}
}

void func_180()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = func_356();
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (iVar1 == 0 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.75f)
	{
		iVar1 = 1;
	}
	if (iLocal_98 == 1 && !func_5(Local_2160.f_136, 4))
	{
		bVar0 = false;
		iVar1 = 2;
	}
	if (bVar0)
	{
		iVar2 = 1;
	}
	iVar3 = iVar2;
	while (iVar3 <= 3)
	{
		if (iVar4 >= iVar1)
		{
			return;
		}
		iVar4++;
		func_461(&iLocal_1155, func_7(iVar3));
		iVar3 += 2;
	}
}

void func_181(var uParam0)
{
	func_336(uParam0, 0);
	func_188(uParam0, 0);
	func_186(uParam0, 1);
	func_191(uParam0, 1);
	func_187(uParam0, 0);
	func_196(uParam0, 1);
	func_462(uParam0, 1, 1, 1);
}

void func_182(var uParam0, float fParam1, bool bParam2)
{
	uParam0->f_22 = fParam1;
	if (bParam2)
	{
		func_463(uParam0, fParam1);
	}
}

void func_183(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_199(&(uParam0->f_1), 4);
	}
	else
	{
		func_143(&(uParam0->f_1), 4);
	}
}

void func_184(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_199(&(uParam0->f_1), 2);
	}
	else
	{
		func_143(&(uParam0->f_1), 2);
	}
}

void func_185(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_199(&(uParam0->f_1), 1);
	}
	else
	{
		func_143(&(uParam0->f_1), 1);
	}
}

void func_186(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_199(&(uParam0->f_1), 256);
	}
	else
	{
		func_143(&(uParam0->f_1), 256);
	}
}

void func_187(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_199(&(uParam0->f_1), 128);
	}
	else
	{
		func_143(&(uParam0->f_1), 128);
	}
}

void func_188(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_199(&(uParam0->f_1), 2048);
	}
	else
	{
		func_143(&(uParam0->f_1), 2048);
	}
}

void func_189(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(uParam0, 32);
	}
	else
	{
		func_199(uParam0, 32);
	}
}

void func_190(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_199(&(uParam0->f_1), 8);
	}
	else
	{
		func_143(&(uParam0->f_1), 8);
	}
}

void func_191(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(uParam0, 16);
	}
	else
	{
		func_199(uParam0, 67108864);
		func_199(uParam0, 16);
	}
}

void func_192(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(uParam0, 8);
	}
	else
	{
		func_199(uParam0, 8);
	}
}

void func_193(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(uParam0, 1024);
	}
	else
	{
		func_199(uParam0, 1024);
	}
}

void func_194(var uParam0, float fParam1)
{
	uParam0->f_19 = fParam1;
}

void func_195(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(uParam0, 128);
	}
	else
	{
		func_199(uParam0, 128);
	}
}

void func_196(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(uParam0, 256);
	}
	else
	{
		func_199(uParam0, 256);
	}
}

void func_197(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(uParam0, 2);
	}
	else
	{
		func_199(uParam0, 2);
	}
}

void func_198(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(uParam0, 131072);
	}
	else
	{
		func_199(uParam0, 131072);
	}
}

void func_199(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_200()
{
	int iVar0;

	if (func_115(512))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::_0x1FF441D7954F8709(&(iLocal_1020[iVar0])))
		{
			ENTITY::_0xD2B9C78537ED5759(&(iLocal_1020[iVar0]));
		}
		iVar0++;
	}
}

void func_201()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_202(int iParam0)
{
	(Global_40.f_9096[iParam0 /*12*/])->f_9 = -1;
	(Global_40.f_9096[iParam0 /*12*/])->f_10 = -1;
	func_15(iParam0, 32768);
}

void func_203(int iParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		iVar0 = PLAYER::_0x0139637A3BFF8B6D(*iParam0, &iVar1);
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), iVar1, iVar0);
	}
}

void func_204(int iParam0, int iParam1)
{
	if (!func_138(iParam0))
	{
		return;
	}
	if (!func_5(iParam0, iParam1))
	{
		return;
	}
	(Global_40.f_9096[iParam0 /*12*/])->f_4 = ((Global_40.f_9096[iParam0 /*12*/])->f_4 - ((Global_40.f_9096[iParam0 /*12*/])->f_4 && iParam1));
}

bool func_205(int iParam0)
{
	return func_305(iParam0) == 0;
}

int func_206(int iParam0, bool bParam1)
{
	switch (func_305(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_207(int iParam0)
{
	return func_305(iParam0) == 7;
}

void func_208(int iParam0)
{
	Global_1898092->f_1 = (Global_1898092->f_1 - (Global_1898092->f_1 && iParam0));
}

void func_209()
{
	vector3 vVar0;

	if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_75[16])))
	{
		if (func_51(4194304))
		{
			vVar0 = { VOLUME::_0x3E2A25B2416DD67E(&(iLocal_75[16])) };
			func_464(VOLUME::_0xF70F00013A62F866(&(iLocal_75[16])), func_449(vVar0.x, vVar0.y), 4);
			PATHFIND::_0x5A4E1A41E3A02AD0(&(iLocal_75[16]), 4, 0);
		}
	}
}

void func_210()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_465(func_428(iVar0), 0);
		iLocal_1014[iVar0] = 0;
		iVar0++;
	}
}

void func_211(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_466(iVar0, bParam0);
		iVar0++;
	}
}

void func_212(bool bParam0)
{
	PED::SET_PED_RESET_FLAG(Global_35, 5, !bParam0);
	func_183(&Local_2160, bParam0);
	func_186(&Local_2160, bParam0);
}

bool func_213(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

int func_214(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (!AUDIO::PREPARE_MUSIC_EVENT(sParam0))
		{
			return 0;
		}
	}
	if (AUDIO::TRIGGER_MUSIC_EVENT(sParam0))
	{
		return 1;
	}
	return 0;
}

void func_215(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			ENTITY::DETACH_ENTITY(iParam0, bParam1, bParam2);
		}
	}
}

void func_216(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return;
	}
	ANIMSCENE::_DELETE_ANIM_SCENE(*uParam0);
}

void func_217(int iParam0, var uParam1, var uParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_43(uParam2, 128);
	func_70(iParam0, 0);
	func_156(uParam2->f_137, 0);
	func_467(uParam2);
	func_42(iParam0, 2048);
	func_80(uParam2, 64);
	if (uParam2->f_137 == 76)
	{
		func_160(&uVar0, &iVar1, func_9(1, 1048576));
	}
	else
	{
		func_161(uParam2->f_137, &uVar0, &iVar1, 0, 0);
	}
	iVar2 = uVar0;
	while (iVar2 <= iVar1)
	{
		PED::SET_PED_KEEP_TASK(func_63(iVar2), true);
		iVar2++;
	}
	Global_1898092->f_26.f_7 = uVar0;
	Global_1898092->f_26.f_8 = uParam2->f_29;
	Global_1898092->f_26.f_2 = uParam2->f_136;
	Global_1898092->f_26.f_1 = uParam2->f_137;
	func_170(512);
	iVar3 = 0;
	while (iVar3 < 26)
	{
		if (ENTITY::DOES_ENTITY_EXIST((uParam1->f_690[iVar3 /*12*/])->f_8))
		{
			OBJECT::DELETE_OBJECT(&((uParam1->f_690[iVar3 /*12*/])->f_8));
		}
		iVar3++;
	}
	if (func_301(uParam2->f_32))
	{
		func_302(&(uParam2->f_32), 1, 1);
	}
	if (func_301(uParam2->f_33))
	{
		func_302(&(uParam2->f_33), 1, 1);
	}
	if (func_301(uParam2->f_34))
	{
		func_302(&(uParam2->f_34), 1, 1);
	}
	if ((*uParam1 + uParam1->f_1) > 0)
	{
		PED::_0x7D4E70A67A651C71((*uParam1 + uParam1->f_1));
	}
	if (func_390(PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP(), 1))
	{
		func_42(uParam2->f_136, 4194304);
	}
	func_468();
	if (func_22(uParam2, 65536))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
		MAP::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}
}

void func_218(var uParam0)
{
	int iVar0;

	iVar0 = PED::_0x62DE46F061CAA468();
	if (uParam0->f_3 > iVar0)
	{
		uParam0->f_3 = iVar0;
	}
	PED::_0x7D4E70A67A651C71(uParam0->f_3);
	uParam0->f_3 = 0;
}

char* func_219()
{
	return "LOGCMP";
}

char* func_220()
{
	return "LCMPAUD";
}

int func_221(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	if (bParam0)
	{
		return 1;
	}
	if (func_469(iVar0))
	{
		return 0;
	}
	if (func_470(iVar0, 1) || func_470(iVar0, 2))
	{
		return 1;
	}
	return 0;
}

void func_222(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_471() - fParam1);
	func_472(uParam0, 1);
	func_473(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_223(var uParam0, float fParam1)
{
	if (func_385(uParam0, fParam1))
	{
		func_265(uParam0);
		return 1;
	}
	return 0;
}

void func_224(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_225(&(((*uParam0)[iVar0 /*32*/])->f_1));
		func_225(&(((*uParam0)[iVar0 /*32*/])->f_12));
		iVar0++;
	}
}

void func_225(var uParam0)
{
	if (*uParam0 != 0)
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
	}
}

void func_226()
{
	int iVar0;

	if (func_19(8192))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			func_475(Local_1039[(9 + iVar0) /*7*/], "script@proc@eventareas@appleseed@Tree_Saw", func_474(9), 0);
			iVar0++;
		}
	}
	if (func_19(16384))
	{
		func_475(Local_1039[6 /*7*/], "script@proc@eventareas@appleseed@Log_Drag", func_474(6), 0);
	}
	if (func_19(256))
	{
		func_475(Local_1039[7 /*7*/], "script@proc@eventareas@appleseed@Boom_Operator", func_474(7), 0);
		func_475(Local_1039[8 /*7*/], "script@proc@eventareas@appleseed@Boom_Spotter", func_474(8), 0);
	}
	if (func_19(64))
	{
		func_475(Local_1039[2 /*7*/], "script@proc@eventareas@appleseed@Tree_Fall", func_474(2), 0);
		func_475(Local_1039[3 /*7*/], "script@proc@eventareas@appleseed@Player_Help_A", func_474(3), 0);
		func_475(Local_1039[4 /*7*/], "script@proc@eventareas@appleseed@Player_Help_B", func_474(4), 0);
	}
	if (func_19(262144))
	{
		if (func_19(16))
		{
			func_476();
		}
		else if (func_9(1, 2) && !func_9(Local_2160.f_136, 16384))
		{
			func_475(Local_1039[0 /*7*/], "script@proc@eventareas@appleseed@Foreman_Stage2_talk", func_474(0), 0);
			func_475(Local_1039[5 /*7*/], "script@proc@eventareas@appleseed@Player_Give_Money", func_474(5), 0);
		}
		else
		{
			func_476();
		}
	}
	else
	{
		switch (iLocal_98)
		{
			case 1:
				if (func_19(16))
				{
					func_476();
				}
				else
				{
					func_475(Local_1039[5 /*7*/], "script@proc@eventareas@appleseed@Leadin@INT@Leadin_ILO", func_474(5), 0);
					func_475(Local_1039[0 /*7*/], "script@proc@eventareas@appleseed@Leadout@INT@Leadout_new", func_474(0), 0);
					func_475(Local_1039[1 /*7*/], "script@proc@eventareas@appleseed@Leadout@INT@Leadout_new", func_474(1), 0);
				}
				break;
			case 2:
				if (func_19(16))
				{
					func_476();
				}
				else if (func_9(1, 2) && !func_9(Local_2160.f_136, 16384))
				{
					func_475(Local_1039[0 /*7*/], "script@proc@eventareas@appleseed@Foreman_Stage2_talk", func_474(0), 0);
					func_475(Local_1039[5 /*7*/], "script@proc@eventareas@appleseed@Player_Give_Money", func_474(5), 0);
				}
				else
				{
					func_476();
				}
				break;
			case 3:
				func_475(Local_1039[0 /*7*/], "script@proc@eventareas@appleseed@Foreman_Orders", func_474(0), 0);
				func_475(Local_1039[1 /*7*/], "script@proc@eventareas@appleseed@Foreman_Stage3_Pay", func_474(1), 0);
				func_475(Local_1039[2 /*7*/], "script@proc@eventareas@appleseed@Player_Grab_Money", func_474(2), 0);
				func_475(Local_1039[3 /*7*/], "script@proc@eventareas@appleseed@Worker_Convo", func_474(3), 0);
				break;
		}
	}
}

void func_227()
{
	int iVar0[2];
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	vector3 vVar8;

	if (func_19(256))
	{
	}
	if (func_19(128))
	{
		if (func_19(64))
		{
			(Local_1157.f_690[7 /*12*/])->f_7 = joaat("p_axe02x");
		}
		else
		{
			(Local_1157.f_690[7 /*12*/])->f_7 = 0;
		}
		*(Local_1157.f_690[7 /*12*/]) = { func_477() };
		(Local_1157.f_690[7 /*12*/])->f_3 = 89f;
		(Local_1157.f_690[7 /*12*/])->f_10 = 0;
		if (func_19(64))
		{
			(Local_1157.f_690[8 /*12*/])->f_7 = joaat("p_axe02x");
		}
		else
		{
			(Local_1157.f_690[8 /*12*/])->f_7 = 0;
		}
		*(Local_1157.f_690[8 /*12*/]) = { func_477() };
		(Local_1157.f_690[8 /*12*/])->f_3 = 89f;
		(Local_1157.f_690[8 /*12*/])->f_10 = 0;
		if (func_19(64))
		{
			(Local_1157.f_690[9 /*12*/])->f_7 = joaat("p_axe02x");
		}
		else
		{
			(Local_1157.f_690[9 /*12*/])->f_7 = 0;
		}
		*(Local_1157.f_690[9 /*12*/]) = { func_477() };
		(Local_1157.f_690[9 /*12*/])->f_3 = 89f;
		(Local_1157.f_690[9 /*12*/])->f_10 = 0;
		if (func_19(64))
		{
			(Local_1157.f_690[10 /*12*/])->f_7 = joaat("p_cigarette_cs02x");
		}
		else
		{
			(Local_1157.f_690[10 /*12*/])->f_7 = 0;
		}
		*(Local_1157.f_690[10 /*12*/]) = { func_477() };
		(Local_1157.f_690[10 /*12*/])->f_3 = 89f;
		(Local_1157.f_690[10 /*12*/])->f_10 = 0;
		if (func_19(64))
		{
			(Local_1157.f_690[24 /*12*/])->f_7 = 581435710;
		}
		else
		{
			(Local_1157.f_690[24 /*12*/])->f_7 = 0;
		}
		*(Local_1157.f_690[24 /*12*/]) = { -1402.82f, -270.8668f, 98.5585f };
		(Local_1157.f_690[24 /*12*/])->f_3 = 74.57f;
		(Local_1157.f_690[24 /*12*/])->f_10 = 0;
		func_478(&((Local_1157.f_690[24 /*12*/])->f_11), 64);
		if (func_19(64))
		{
			(Local_1157.f_690[6 /*12*/])->f_7 = -770982987;
			*(Local_1157.f_690[6 /*12*/]) = { func_479() };
			(Local_1157.f_690[6 /*12*/])->f_3 = 89f;
			(Local_1157.f_690[6 /*12*/])->f_10 = 0;
		}
	}
	switch (iLocal_98)
	{
		case 1:
			(Local_1157.f_690[12 /*12*/])->f_7 = 1246532592;
			*(Local_1157.f_690[12 /*12*/]) = { -1341.215f, -194.8321f, 102.4812f };
			(Local_1157.f_690[12 /*12*/])->f_3 = 27f;
			(Local_1157.f_690[12 /*12*/])->f_10 = 0;
			func_478(&((Local_1157.f_690[12 /*12*/])->f_11), 75);
			if (func_19(128))
			{
				(Local_1157.f_690[0 /*12*/])->f_7 = 0;
				*(Local_1157.f_690[0 /*12*/]) = { func_477() };
				(Local_1157.f_690[0 /*12*/])->f_3 = 89f;
				(Local_1157.f_690[0 /*12*/])->f_10 = 0;
				if (!func_5(Local_2160.f_136, 128))
				{
					(Local_1157.f_690[4 /*12*/])->f_7 = joaat("p_woodwhittle01x");
				}
				else
				{
					(Local_1157.f_690[4 /*12*/])->f_7 = 0;
				}
				*(Local_1157.f_690[4 /*12*/]) = { func_477() };
				(Local_1157.f_690[4 /*12*/])->f_3 = 89f;
				(Local_1157.f_690[4 /*12*/])->f_10 = 0;
				if (!func_5(Local_2160.f_136, 128))
				{
					(Local_1157.f_690[3 /*12*/])->f_7 = joaat("p_knife02x");
				}
				else
				{
					(Local_1157.f_690[3 /*12*/])->f_7 = 0;
				}
				*(Local_1157.f_690[3 /*12*/]) = { func_477() };
				(Local_1157.f_690[3 /*12*/])->f_3 = 89f;
				(Local_1157.f_690[3 /*12*/])->f_10 = 0;
			}
			break;
		case 2:
			(Local_1157.f_690[13 /*12*/])->f_7 = 343412282;
			*(Local_1157.f_690[13 /*12*/]) = { -1349.263f, -189.6734f, 99.9598f };
			(Local_1157.f_690[13 /*12*/])->f_3 = 24f;
			(Local_1157.f_690[13 /*12*/])->f_10 = 0;
			func_478(&((Local_1157.f_690[13 /*12*/])->f_11), 75);
			(Local_1157.f_690[12 /*12*/])->f_7 = 2117892179;
			*(Local_1157.f_690[12 /*12*/]) = { -1342.864f, -201.941f, 101.154f };
			(Local_1157.f_690[12 /*12*/])->f_3 = 25f;
			(Local_1157.f_690[12 /*12*/])->f_10 = 0;
			func_478(&((Local_1157.f_690[12 /*12*/])->f_11), 75);
			(Local_1157.f_690[25 /*12*/])->f_7 = joaat("p_chair06x");
			*(Local_1157.f_690[25 /*12*/]) = { -1400.832f, -205.2252f, 101.8838f };
			(Local_1157.f_690[25 /*12*/])->f_3 = 19.95f;
			(Local_1157.f_690[25 /*12*/])->f_10 = 0;
			if (func_19(128))
			{
				if (func_9(1, 2))
				{
					(Local_1157.f_690[3 /*12*/])->f_7 = joaat("p_pen01x");
				}
				else
				{
					(Local_1157.f_690[3 /*12*/])->f_7 = 0;
				}
				*(Local_1157.f_690[3 /*12*/]) = { func_477() };
				(Local_1157.f_690[3 /*12*/])->f_4 = { 90f, 0f, -5.99f };
				(Local_1157.f_690[3 /*12*/])->f_10 = 0;
				if (func_9(1, 2))
				{
					(Local_1157.f_690[4 /*12*/])->f_7 = joaat("p_cs_ledger01x");
				}
				else
				{
					(Local_1157.f_690[4 /*12*/])->f_7 = 0;
				}
				*(Local_1157.f_690[4 /*12*/]) = { -1400.53f, -206.6157f, 102.7172f };
				(Local_1157.f_690[4 /*12*/])->f_3 = -153.92f;
				(Local_1157.f_690[4 /*12*/])->f_10 = 0;
				func_478(&((Local_1157.f_690[4 /*12*/])->f_11), 2);
				if (func_9(1, 2) || func_19(64))
				{
					(Local_1157.f_690[6 /*12*/])->f_7 = -770982987;
					*(Local_1157.f_690[6 /*12*/]) = { func_479() };
					(Local_1157.f_690[6 /*12*/])->f_3 = 89f;
					(Local_1157.f_690[6 /*12*/])->f_10 = 0;
				}
			}
			break;
		case 3:
			(Local_1157.f_690[13 /*12*/])->f_7 = 343412282;
			*(Local_1157.f_690[13 /*12*/]) = { -1349.263f, -189.6734f, 99.9598f };
			(Local_1157.f_690[13 /*12*/])->f_3 = 24f;
			(Local_1157.f_690[13 /*12*/])->f_10 = 0;
			func_478(&((Local_1157.f_690[13 /*12*/])->f_11), 75);
			(Local_1157.f_690[12 /*12*/])->f_7 = 2117892179;
			*(Local_1157.f_690[12 /*12*/]) = { -1342.864f, -201.941f, 101.154f };
			(Local_1157.f_690[12 /*12*/])->f_3 = 25f;
			(Local_1157.f_690[12 /*12*/])->f_10 = 0;
			func_478(&((Local_1157.f_690[12 /*12*/])->f_11), 75);
			(Local_1157.f_690[25 /*12*/])->f_7 = joaat("p_chair06x");
			*(Local_1157.f_690[25 /*12*/]) = { -1400.832f, -205.2252f, 101.8838f };
			(Local_1157.f_690[25 /*12*/])->f_3 = 19.95f;
			(Local_1157.f_690[25 /*12*/])->f_10 = 0;
			if (func_19(128))
			{
				if (!func_5(Local_2160.f_136, 128) || (func_5(Local_2160.f_136, 128) && func_9(1, 2)))
				{
					(Local_1157.f_690[3 /*12*/])->f_7 = joaat("p_pen01x");
				}
				else
				{
					(Local_1157.f_690[3 /*12*/])->f_7 = 0;
				}
				*(Local_1157.f_690[3 /*12*/]) = { func_477() };
				(Local_1157.f_690[3 /*12*/])->f_3 = 89f;
				(Local_1157.f_690[3 /*12*/])->f_10 = 0;
				if (!func_5(Local_2160.f_136, 128) || (func_5(Local_2160.f_136, 128) && func_9(1, 2)))
				{
					(Local_1157.f_690[4 /*12*/])->f_7 = joaat("p_cs_ledger01x");
				}
				else
				{
					(Local_1157.f_690[4 /*12*/])->f_7 = 0;
				}
				*(Local_1157.f_690[4 /*12*/]) = { -1400.53f, -206.6157f, 102.7172f };
				(Local_1157.f_690[4 /*12*/])->f_3 = -153.92f;
				(Local_1157.f_690[4 /*12*/])->f_10 = 0;
				func_478(&((Local_1157.f_690[4 /*12*/])->f_11), 2);
				if (!func_5(Local_2160.f_136, 128) || func_9(1, 2))
				{
					(Local_1157.f_690[6 /*12*/])->f_7 = -770982987;
				}
				else
				{
					(Local_1157.f_690[6 /*12*/])->f_7 = 0;
				}
				*(Local_1157.f_690[6 /*12*/]) = { func_477() };
				(Local_1157.f_690[6 /*12*/])->f_3 = 89f;
				(Local_1157.f_690[6 /*12*/])->f_10 = 0;
				if (!func_5(Local_2160.f_136, 128))
				{
					(Local_1157.f_690[7 /*12*/])->f_7 = joaat("p_bottlejd01x");
				}
				else
				{
					(Local_1157.f_690[7 /*12*/])->f_7 = 0;
				}
				*(Local_1157.f_690[7 /*12*/]) = { func_477() };
				(Local_1157.f_690[7 /*12*/])->f_3 = 89f;
				(Local_1157.f_690[7 /*12*/])->f_10 = 0;
				if (!func_5(Local_2160.f_136, 128))
				{
					(Local_1157.f_690[8 /*12*/])->f_7 = joaat("p_camp_cup_01x");
				}
				else
				{
					(Local_1157.f_690[8 /*12*/])->f_7 = 0;
				}
				*(Local_1157.f_690[8 /*12*/]) = { func_477() };
				(Local_1157.f_690[8 /*12*/])->f_3 = 89f;
				(Local_1157.f_690[8 /*12*/])->f_10 = 0;
				if (!func_5(Local_2160.f_136, 128))
				{
					(Local_1157.f_690[9 /*12*/])->f_7 = joaat("p_camp_cup_01x");
				}
				else
				{
					(Local_1157.f_690[9 /*12*/])->f_7 = 0;
				}
				*(Local_1157.f_690[9 /*12*/]) = { func_477() };
				(Local_1157.f_690[9 /*12*/])->f_3 = 89f;
				(Local_1157.f_690[9 /*12*/])->f_10 = 0;
				if (!func_5(Local_2160.f_136, 128))
				{
					(Local_1157.f_690[10 /*12*/])->f_7 = joaat("p_camp_cup_01x");
				}
				else
				{
					(Local_1157.f_690[10 /*12*/])->f_7 = 0;
				}
				*(Local_1157.f_690[10 /*12*/]) = { func_477() };
				(Local_1157.f_690[10 /*12*/])->f_3 = 89f;
				(Local_1157.f_690[10 /*12*/])->f_10 = 0;
				if (!func_5(Local_2160.f_136, 128))
				{
					(Local_1157.f_690[11 /*12*/])->f_7 = joaat("p_camp_cup_01x");
				}
				else
				{
					(Local_1157.f_690[11 /*12*/])->f_7 = 0;
				}
				*(Local_1157.f_690[11 /*12*/]) = { func_477() };
				(Local_1157.f_690[11 /*12*/])->f_3 = 89f;
				(Local_1157.f_690[11 /*12*/])->f_10 = 0;
				if (!func_5(Local_2160.f_136, 128))
				{
					(Local_1157.f_690[0 /*12*/])->f_7 = 171105065;
				}
				else
				{
					(Local_1157.f_690[0 /*12*/])->f_7 = 0;
				}
				*(Local_1157.f_690[0 /*12*/]) = { func_480(0, 2) };
				(Local_1157.f_690[0 /*12*/])->f_2 = ((Local_1157.f_690[0 /*12*/])->f_2 - 5f);
				(Local_1157.f_690[0 /*12*/])->f_3 = 89f;
				(Local_1157.f_690[0 /*12*/])->f_10 = 0;
				func_478(&((Local_1157.f_690[0 /*12*/])->f_11), 67);
				if (!func_5(Local_2160.f_136, 128))
				{
					(Local_1157.f_690[1 /*12*/])->f_7 = -1700886102;
				}
				else
				{
					(Local_1157.f_690[1 /*12*/])->f_7 = 0;
				}
				*(Local_1157.f_690[1 /*12*/]) = { func_480(0, 3) };
				(Local_1157.f_690[1 /*12*/])->f_2 = ((Local_1157.f_690[1 /*12*/])->f_2 - 5f);
				(Local_1157.f_690[1 /*12*/])->f_3 = 89f;
				(Local_1157.f_690[1 /*12*/])->f_10 = 0;
				func_478(&((Local_1157.f_690[1 /*12*/])->f_11), 67);
			}
			break;
	}
	iVar3 = 0;
	while (iVar3 < 4)
	{
		bVar5 = func_390(iLocal_1155, func_7(iVar3));
		if (bVar5)
		{
			iVar0[iVar4] = iVar3;
			iVar4++;
		}
		if (iVar4 >= 2)
		{
		}
		else
		{
			iVar3++;
		}
	}
	iVar6 = 0;
	while (iVar6 < iVar4)
	{
		iVar7 = iVar6 * 4;
		if (iVar7 + 18 >= Local_1157.f_690 || iVar7 < 0)
		{
		}
		else
		{
			iVar3 = &iVar0[iVar6];
			if (func_19(8192))
			{
				(Local_1157.f_690[(15 + iVar7) /*12*/])->f_7 = -396933308;
				(Local_1157.f_690[(16 + iVar7) /*12*/])->f_7 = 622277464;
				(Local_1157.f_690[(17 + iVar7) /*12*/])->f_7 = 2125915446;
				(Local_1157.f_690[(18 + iVar7) /*12*/])->f_7 = 861227228;
			}
			else
			{
				(Local_1157.f_690[(15 + iVar7) /*12*/])->f_7 = 0;
				(Local_1157.f_690[(16 + iVar7) /*12*/])->f_7 = 0;
				(Local_1157.f_690[(17 + iVar7) /*12*/])->f_7 = 0;
				(Local_1157.f_690[(18 + iVar7) /*12*/])->f_7 = 0;
			}
			*(Local_1157.f_690[(15 + iVar7) /*12*/]) = { func_481(iVar3) };
			(Local_1157.f_690[(15 + iVar7) /*12*/])->f_3 = func_482(iVar3);
			(Local_1157.f_690[(15 + iVar7) /*12*/])->f_10 = 0;
			*(Local_1157.f_690[(16 + iVar7) /*12*/]) = { func_483(iVar3) };
			(Local_1157.f_690[(16 + iVar7) /*12*/])->f_4 = { func_484(iVar3) };
			(Local_1157.f_690[(16 + iVar7) /*12*/])->f_10 = 0;
			func_478(&((Local_1157.f_690[(16 + iVar7) /*12*/])->f_11), 2);
			vVar8 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*(Local_1157.f_690[(16 + iVar7) /*12*/]), (Local_1157.f_690[(16 + iVar7) /*12*/])->f_3, 0.025f, -4.4039f, 0.041f) };
			*(Local_1157.f_690[(17 + iVar7) /*12*/]) = { vVar8 };
			(Local_1157.f_690[(17 + iVar7) /*12*/])->f_3 = (Local_1157.f_690[(16 + iVar7) /*12*/])->f_3;
			(Local_1157.f_690[(17 + iVar7) /*12*/])->f_10 = 0;
			vVar8 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*(Local_1157.f_690[(16 + iVar7) /*12*/]), (Local_1157.f_690[(16 + iVar7) /*12*/])->f_3, 0f, 6.3529f, -0.077f) };
			*(Local_1157.f_690[(18 + iVar7) /*12*/]) = { vVar8 };
			(Local_1157.f_690[(18 + iVar7) /*12*/])->f_3 = (Local_1157.f_690[(16 + iVar7) /*12*/])->f_3;
			(Local_1157.f_690[(18 + iVar7) /*12*/])->f_10 = 0;
			iVar6++;
		}
	}
	if (func_19(128))
	{
		if (func_19(16384))
		{
			(Local_1157.f_690[2 /*12*/])->f_7 = -1035439448;
		}
		else
		{
			(Local_1157.f_690[2 /*12*/])->f_7 = 0;
		}
		*(Local_1157.f_690[2 /*12*/]) = { -1410.311f, -227.9941f, 99.4013f };
		(Local_1157.f_690[2 /*12*/])->f_3 = 100.36f;
		(Local_1157.f_690[2 /*12*/])->f_10 = 0;
		if (func_19(16384))
		{
			(Local_1157.f_690[14 /*12*/])->f_7 = 1410968406;
		}
		else
		{
			(Local_1157.f_690[14 /*12*/])->f_7 = 0;
		}
		*(Local_1157.f_690[14 /*12*/]) = { -1404.688f, -227.0209f, 99.4983f };
		(Local_1157.f_690[14 /*12*/])->f_3 = 94.76f;
		(Local_1157.f_690[14 /*12*/])->f_10 = 0;
		if (func_19(16384))
		{
			(Local_1157.f_690[23 /*12*/])->f_7 = 1481263968;
		}
		else
		{
			(Local_1157.f_690[23 /*12*/])->f_7 = 0;
		}
		*(Local_1157.f_690[23 /*12*/]) = { -1412.52f, -227.139f, 99.815f };
		(Local_1157.f_690[23 /*12*/])->f_3 = 129.6f;
		(Local_1157.f_690[23 /*12*/])->f_10 = 1;
	}
	if ((func_19(262144) || func_19(16)) && func_324())
	{
		if (iLocal_98 != 3)
		{
			(Local_1157.f_690[5 /*12*/])->f_7 = joaat("p_chair06x");
		}
		else
		{
			(Local_1157.f_690[5 /*12*/])->f_7 = 0;
		}
		iLocal_75[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1400.116f, -211.4299f, 103.0422f, 0f, 0f, 18.85407f, 1f, 1f, 2.328289f, "volChairSpawnBlock");
		POPULATION::_0x18262CAFEBB5FBE1(&(iLocal_75[1]), 0, 0, 0, -1, -1, 0);
		(Local_1157.f_690[11 /*12*/])->f_7 = 1566690690;
		switch (iLocal_98)
		{
			case 1:
				(Local_1157.f_690[11 /*12*/])->f_7 = 0;
				*(Local_1157.f_690[11 /*12*/]) = { -1399.87f, -212.58f, 102.43f };
				break;
			case 2:
				*(Local_1157.f_690[11 /*12*/]) = { -1399.06f, -210.58f, 104.42f };
				break;
			case 3:
				*(Local_1157.f_690[11 /*12*/]) = { -1399.06f, -210.58f, 104.42f };
				break;
		}
		(Local_1157.f_690[11 /*12*/])->f_3 = 5f;
		(Local_1157.f_690[11 /*12*/])->f_10 = 0;
		func_478(&((Local_1157.f_690[11 /*12*/])->f_11), 66);
	}
	else
	{
		(Local_1157.f_690[5 /*12*/])->f_7 = 0;
	}
	*(Local_1157.f_690[5 /*12*/]) = { -1400.098f, -211.239f, 101.889f };
	(Local_1157.f_690[5 /*12*/])->f_3 = 22f;
	(Local_1157.f_690[5 /*12*/])->f_10 = 0;
	func_478(&((Local_1157.f_690[5 /*12*/])->f_11), 2);
}

void func_228(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (((*uParam0)[iVar0 /*12*/])->f_7 != 0)
		{
			STREAMING::REQUEST_MODEL(((*uParam0)[iVar0 /*12*/])->f_7, false);
		}
		iVar0++;
	}
}

void func_229()
{
	Local_1157.f_2 = 0;
	switch (iLocal_98)
	{
		case 1:
			(Local_1157.f_304[0 /*32*/])->f_1 = joaat("northflatcar01x");
			(Local_1157.f_304[0 /*32*/])->f_6 = { -1342.64f, -191.66f, 99.56f };
			(Local_1157.f_304[0 /*32*/])->f_9 = 27f;
			func_478(&((Local_1157.f_304[0 /*32*/])->f_22), 129);
			Local_1157.f_2 = 1;
			break;
		case 2:
			if (!func_22(&Local_2160, 32))
			{
				if (func_19(256))
				{
					Local_1157.f_2++;
				}
			}
			if (func_9(1, 2) || func_9(Local_2160.f_136, 16384))
			{
				(Local_1157.f_304[0 /*32*/])->f_6 = { -1400.716f, -226.2228f, 103.3883f };
				(Local_1157.f_304[0 /*32*/])->f_9 = 298.1611f;
				(Local_1157.f_304[0 /*32*/])->f_1 = joaat("logwagon");
				iLocal_14 += 2;
				Local_1157.f_2++;
				if (func_19(262144))
				{
					Local_2544.f_2[0] = "LOG_WRK01B";
				}
			}
			break;
		case 3:
			if ((func_19(262144) && func_9(1, 2)) || func_9(Local_2160.f_136, 16384))
			{
				(Local_1157.f_304[0 /*32*/])->f_6 = { -1400.716f, -226.2228f, 103.3883f };
				(Local_1157.f_304[0 /*32*/])->f_9 = 298.1611f;
				(Local_1157.f_304[0 /*32*/])->f_1 = joaat("logwagon");
				iLocal_14 += 2;
				Local_1157.f_2++;
				if (func_19(262144))
				{
					Local_2544.f_2[0] = "LOG_WRK01B";
				}
			}
			if (!func_22(&Local_2160, 32))
			{
				if (func_19(256))
				{
					Local_1157.f_2++;
				}
			}
			break;
	}
}

void func_230()
{
	char* sVar0;

	if (func_19(256))
	{
		sVar0 = "props_misc@appleseed_loader";
		func_485(sVar0, &uLocal_2414);
		sVar0 = "script_proc@event_area@appleseed@boom_lift";
		func_485(sVar0, &uLocal_2414);
	}
	if (func_19(8192))
	{
		sVar0 = "ai_react@male_stand@SMALL_VARIATIONS@IDLE_A";
		func_485(sVar0, &uLocal_2414);
		sVar0 = "script_proc@event_area@appleseed@tree_saw";
		func_485(sVar0, &uLocal_2414);
	}
	if (func_19(262144))
	{
		sVar0 = func_486();
		func_485(sVar0, &uLocal_2414);
		if (func_9(1, 2))
		{
			sVar0 = "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2";
			func_485(sVar0, &uLocal_2414);
		}
	}
	else
	{
		switch (iLocal_98)
		{
			case 1:
				break;
			case 2:
				sVar0 = "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2";
				func_485(sVar0, &uLocal_2414);
				break;
			case 3:
				sVar0 = "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE3_WOLF";
				func_485(sVar0, &uLocal_2414);
				break;
		}
	}
}

void func_231()
{
	STREAMING::REQUEST_COLLISION_AT_COORD(func_487());
}

int func_232()
{
	if (!func_488(&(Local_1157.f_690)))
	{
		return 0;
	}
	return 1;
}

int func_233()
{
	if (iLocal_98 == 3 && !func_19(262144))
	{
		return ENTITY::_0x6BFBDC46139C45AB(func_487());
	}
	return 1;
}

bool func_234(var uParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_489((*uParam0)[iVar0 /*32*/]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

int func_235(int iParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;

	if (bParam6)
	{
		func_490(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_491(uParam1))
	{
		iVar0 = PED::_0xEAF682A14F8E5F53(uParam1->f_5, vParam2, fParam5, 1, 1, iParam9, iParam10);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = func_492(iParam0, vParam2, fParam5, 1, 1, 0, 1, bParam8, 1, 0, 0, 0, 0);
		}
		else if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam1->f_5))
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_492(iParam0, vParam2, fParam5, 1, 1, 0, 1, bParam8, 1, 0, 0, 0, 0);
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	else
	{
		EVENT::_0x9520175B35E2268D(iVar0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		if (uParam1->f_10)
		{
			if (PED::IS_PED_HUMAN(iVar0))
			{
				PED::_0x0FB1BA7FF73B41E1(iVar0, uParam1->f_4, 0);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_23)) && !func_493(iVar0))
		{
			func_258(iVar0, &(uParam1->f_23), 0);
		}
		if (func_493(iVar0))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 307, true);
		}
		if (func_494(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(iVar0, true);
			PED::SET_PED_TO_RAGDOLL(iVar0, 1000, 1000, 1, false, false, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 186, !func_495(&(uParam1->f_22)));
			func_128(iVar0, func_496(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar0);
		}
		if (func_497(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
		if (func_498(&(uParam1->f_22)))
		{
			func_499(iVar0, 1);
		}
		ENTITY::_0xA91E6CF94404E8C9(iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 6, func_500(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(iVar0, 393, true);
		if (!func_501(uParam1->f_22, 8192))
		{
			ENTITY::_SET_ENTITY_SOMETHING(iVar0, true);
		}
		if (!func_493(iVar0))
		{
			func_503(iVar0, !func_502(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 4, func_504(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, !func_505(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 317, !func_505(&(uParam1->f_22)));
			if (uParam1->f_31 != 623901053)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, uParam1->f_31);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::IS_PED_HUMAN(iVar0))
		{
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatPed", true);
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatCriminal", *uParam1 == 22);
		}
	}
	return iVar0;
}

int func_236(int iParam0)
{
	if (!func_155(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_237(int iParam0)
{
	return iParam0 != 0;
}

int func_238(int iParam0, bool bParam1)
{
	if (!func_155(iParam0))
	{
		return 0;
	}
	if (!func_23(iParam0, 2))
	{
		return 0;
	}
	if (func_23(iParam0, 32) && !bParam1)
	{
		func_506(iParam0, _NAMESPACE48::_0x4F76E3676583D951(func_236(iParam0)));
		if (func_1() == -1)
		{
			if (func_23(iParam0, 2048))
			{
				_NAMESPACE48::_0x49A8C2CD97815215(func_167(iParam0));
				func_169(iParam0, 2048);
			}
			_NAMESPACE48::_0xFCC6DB8DBE709BC8(func_167(iParam0));
		}
		return 0;
	}
	if (!func_507(iParam0) && func_1() == -1)
	{
		return 0;
	}
	if (_NAMESPACE48::_0x800DF3FC913355F3(func_167(iParam0)))
	{
		func_169(iParam0, 128);
		return 1;
	}
	func_506(iParam0, _NAMESPACE48::_0x4F76E3676583D951(func_236(iParam0)));
	_NAMESPACE48::_0x4F81EAD1DE8FA19B(func_167(iParam0));
	if (func_23(iParam0, 2048))
	{
		_NAMESPACE48::_0x49A8C2CD97815215(func_167(iParam0));
		func_169(iParam0, 2048);
	}
	return 1;
}

bool func_239(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_155(iParam0))
	{
		return false;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_167(iParam0)))
	{
		return false;
	}
	if (iParam1 && !ENTITY::DOES_ENTITY_EXIST(func_244(iParam0)))
	{
		return false;
	}
	return !_NAMESPACE48::_0xEB98B38CA60742D7(func_167(iParam0));
}

int func_240(int iParam0)
{
	if (!func_155(iParam0))
	{
		return 0;
	}
	if (_NAMESPACE48::_0x800DF3FC913355F3(func_167(iParam0)))
	{
		_NAMESPACE48::_0x49A8C2CD97815215(func_167(iParam0));
		if (!ENTITY::DOES_ENTITY_EXIST(_NAMESPACE48::_0x0CADC3A977997472(func_167(iParam0), 0)))
		{
			return 0;
		}
	}
	return 1;
}

int func_241(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_242(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (!func_508(iParam0, 1))
	{
		return 0;
	}
	if (func_237(func_236(iParam0)))
	{
		iVar1 = func_167(iParam0);
		if (!_NAMESPACE48::_0x800DF3FC913355F3(iVar1))
		{
			return 0;
		}
		if (bParam1)
		{
			if (_NAMESPACE48::_0xEB98B38CA60742D7(iVar1))
			{
				_NAMESPACE48::_0x49A8C2CD97815215(iVar1);
			}
		}
		_NAMESPACE48::_0x6759BEE6762E140B(iVar1);
		iVar0 = _NAMESPACE48::_0x0CADC3A977997472(iVar1, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return 0;
		}
	}
	if ((iParam4 && !func_509(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	func_24(iParam0, 1);
	func_510(iParam0);
	if (bParam3)
	{
		func_24(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

void func_243(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
}

int func_244(int iParam0)
{
	int iVar0;

	iVar0 = func_167(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
	{
		return 0;
	}
	return _NAMESPACE48::_0x31C70A716CAE1FEE(iVar0);
}

int func_245(int iParam0)
{
	if (!func_155(iParam0))
	{
		return 0;
	}
	return _NAMESPACE48::_0xA00DF706C60173D1(Global_1895087[iParam0 /*3*/]);
}

Vector3 func_246()
{
	return 0f, 0f, 0f;
}

int func_247(vector3 vParam0, var uParam3, float fParam4, bool bParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	vector3 vVar9;

	iVar4 = 1;
	if (iParam7 < 0 || iParam7 >= *uParam3)
	{
		iParam7 = (*uParam3 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (iParam8 && ENTITY::DOES_ENTITY_EXIST(((*uParam3)[iVar0 /*12*/])->f_8))
		{
		}
		else if (((*uParam3)[iVar0 /*12*/])->f_7 != 0 && !func_501(((*uParam3)[iVar0 /*12*/])->f_11, 16))
		{
			if (!STREAMING::HAS_MODEL_LOADED(((*uParam3)[iVar0 /*12*/])->f_7))
			{
				iVar4 = 0;
			}
			else
			{
				if (((*uParam3)[iVar0 /*12*/])->f_9 != -1)
				{
					iVar8 = ((*uParam3)[iVar0 /*12*/])->f_9;
					vVar5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(((*uParam3)[iVar8 /*12*/])->f_8, *((*uParam3)[iVar0 /*12*/])) };
					if (func_501(((*uParam3)[iVar0 /*12*/])->f_11, 64))
					{
						((*uParam3)[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET(((*uParam3)[iVar0 /*12*/])->f_7, vVar5, true, true, false, false);
					}
					else
					{
						((*uParam3)[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT(((*uParam3)[iVar0 /*12*/])->f_7, vVar5, true, true, false, false, true);
					}
					ENTITY::ATTACH_ENTITY_TO_ENTITY(((*uParam3)[iVar0 /*12*/])->f_8, ((*uParam3)[iVar8 /*12*/])->f_8, 0, *((*uParam3)[iVar0 /*12*/]), ((*uParam3)[iVar0 /*12*/])->f_4, 0, 0, 0, 0, 2, 1, 0, 0);
				}
				else
				{
					if (!func_501(((*uParam3)[iVar0 /*12*/])->f_11, 8))
					{
						vVar5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, fParam4, *((*uParam3)[iVar0 /*12*/])) };
					}
					else
					{
						vVar5 = { *((*uParam3)[iVar0 /*12*/]) };
					}
					if (!func_501(((*uParam3)[iVar0 /*12*/])->f_11, 128))
					{
						func_511(&vVar5, ((*uParam3)[iVar0 /*12*/])->f_10);
					}
					if (func_501(((*uParam3)[iVar0 /*12*/])->f_11, 64))
					{
						((*uParam3)[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET(((*uParam3)[iVar0 /*12*/])->f_7, vVar5, true, true, false, false);
					}
					else
					{
						((*uParam3)[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT(((*uParam3)[iVar0 /*12*/])->f_7, vVar5, true, true, false, false, true);
					}
					if (func_241(((*uParam3)[iVar0 /*12*/])->f_4))
					{
						vVar1 = { 0f, 0f, ((*uParam3)[iVar0 /*12*/])->f_3 };
					}
					else
					{
						vVar1 = { ((*uParam3)[iVar0 /*12*/])->f_4 };
					}
					if (func_501(((*uParam3)[iVar0 /*12*/])->f_11, 4))
					{
						vVar1.f_2 = func_512((vVar1.z + fParam4));
					}
					ENTITY::SET_ENTITY_ROTATION(((*uParam3)[iVar0 /*12*/])->f_8, vVar1, 2, true);
					if (!func_501(((*uParam3)[iVar0 /*12*/])->f_11, 128))
					{
						if (((*uParam3)[iVar0 /*12*/])->f_10)
						{
							ENTITY::_0x9587913B9E772D29(((*uParam3)[iVar0 /*12*/])->f_8, 0);
						}
					}
				}
				if (func_501(((*uParam3)[iVar0 /*12*/])->f_11, 2))
				{
					ENTITY::FREEZE_ENTITY_POSITION(((*uParam3)[iVar0 /*12*/])->f_8, true);
				}
				if (func_501(((*uParam3)[iVar0 /*12*/])->f_11, 32))
				{
					ENTITY::SET_ENTITY_VISIBLE(((*uParam3)[iVar0 /*12*/])->f_8, false);
				}
				if (bParam5)
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(((*uParam3)[iVar0 /*12*/])->f_8, 1);
					PHYSICS::ACTIVATE_PHYSICS(((*uParam3)[iVar0 /*12*/])->f_8);
				}
				ENTITY::_0xA91E6CF94404E8C9(((*uParam3)[iVar0 /*12*/])->f_8);
				vVar9 = { ENTITY::GET_ENTITY_COORDS(((*uParam3)[iVar0 /*12*/])->f_8, true, false) };
			}
		}
		iVar0++;
	}
	return iVar4;
}

bool func_248(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &(((*uParam0)[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = iParam1;
			StringCopy(&(((*uParam0)[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

int func_249(int iParam0)
{
	if (iParam0 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_250(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	if (func_513(uParam0->f_4, 1) > 120f)
	{
		iVar0 = 1;
	}
	else if (func_513(uParam0->f_4, 1) > 65f && !CAM::IS_SPHERE_VISIBLE(uParam0->f_4, 4f))
	{
		iVar0 = 1;
	}
	else if (uParam0->f_25)
	{
		iVar0 = 1;
	}
	return iVar0;
}

bool func_251(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_514(iParam0, iParam1);
}

int func_252(int iParam0, var uParam1, var uParam2, bool bParam3, float fParam4, float fParam5, float fParam6, bool bParam7, float fParam8, int iParam9)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (func_377(PLAYER::PLAYER_PED_ID(), iParam0, 1) < (fParam8 * fParam8))
	{
		*uParam2 = 0f;
		return 1;
	}
	if (fParam6 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > fParam6)
		{
			return 0;
		}
	}
	if (func_515(iParam0, fParam5))
	{
		if (func_516(vVar0, iParam0, uParam1, uParam2, bParam3, fParam4, fParam5, bParam7, iParam9))
		{
			return 1;
		}
	}
	else if (!bParam7)
	{
		*uParam2 = 0f;
	}
	return 0;
}

int func_253(float fParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_517(iParam2, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (func_518(fParam0))
	{
		return 0;
	}
	return 1;
}

void func_254(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23117[iParam0 /*11*/] = (&Global_23117[iParam0 /*11*/] - (Global_23117[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0 /*11*/] = (&Global_1058888->f_40615[iParam0 /*11*/] - (Global_1058888->f_40615[iParam0 /*11*/] && iParam1));
}

int func_255(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY((*uParam0)[iVar1 /*8*/]))
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED((*uParam0)[iVar1 /*8*/]))
			{
				bVar0 = false;
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
		return 0;
	}
	return 1;
}

int func_256()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 11)
	{
		if (ANIMSCENE::_0x25557E324489393C(&(Local_1039[iVar1 /*7*/])))
		{
			if (!func_519(Local_1039[iVar1 /*7*/]))
			{
				iVar0 = 0;
			}
			else
			{
				iVar1++;
			}
			return iVar0;
		}
	}

int func_257(int iParam0, int iParam1)
{
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HAS_VOICE") && DECORATOR::DECOR_GET_BOOL(iParam0, "HAS_VOICE"))
	{
		return 1;
	}
	if (iParam1 && AUDIO::_0xF0EE69F500952FA5(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_258(int iParam0, char* sParam1, int iParam2)
{
	if (iParam2 || func_251(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

int func_259()
{
	return 953851965;
}

char* func_260()
{
	return "PROP_HUMAN_SEAT_CHAIR_WHITTLE_MALE_C";
}

Vector3 func_261()
{
	return -1400.832f, -205.7252f, 101.8838f;
}

void func_262(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::_0xD5FE956C70FF370B(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == func_520(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_493(iParam0))
	{
		if (func_521(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_501(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_262(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_262(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_501(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 0, 1);
		}
	}
	if (func_501(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_501(iParam5, 32), 1);
		}
		else
		{
			ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_501(iParam5, 32), 1);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (func_501(iParam5, 129))
	{
		if (func_501(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_501(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_0x203BEFFDBE12E96A(iParam0, vParam1, fParam4, 1, func_501(iParam5, 32), 1);
	}
	if (bVar4)
	{
		if (!func_501(iParam5, 16))
		{
			PED::_0x7DE9692C6F64CFE8(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, 0);
		}
		if (func_493(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_501(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, 1, 0);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_501(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

int func_263(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return 0;
	}
	if (!func_155(iParam0))
	{
		return 0;
	}
	if (!func_509(iParam0) && iParam1)
	{
		return 0;
	}
	return func_23(iParam0, 1);
}

void func_264(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_155(iParam0))
	{
		return;
	}
	if (!func_23(iParam0, 1))
	{
		return;
	}
	if (!func_23(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_509(iParam0)) && func_522(iParam0))
	{
		return;
	}
	func_169(iParam0, 1);
	func_523(iParam0);
	if (func_237(func_236(iParam0)))
	{
		iVar0 = func_167(iParam0);
		if (!_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
		{
			return;
		}
		_NAMESPACE48::_0xBB68908CD11AEBDC(iVar0);
		_NAMESPACE48::_0xB65E7F733956CF25(iVar0);
		if (iParam2 && !_NAMESPACE48::_0xEB98B38CA60742D7(iVar0))
		{
			_NAMESPACE48::_0x631CD2D77FDC0316(iVar0);
		}
		iVar1 = _NAMESPACE48::_0x31C70A716CAE1FEE(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 171, false);
		}
		if (bParam1)
		{
			_NAMESPACE48::_0x7B204F88F6C3D287(iVar0);
		}
		func_169(iParam0, 16);
	}
	if (func_23(iParam0, 128) && !bParam3)
	{
		func_524(iParam0, 0);
	}
}

void func_265(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_266()
{
}

int func_267(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (((func_342(iParam0, 4096) && func_342(iParam0, 512)) && func_342(iParam0, 1024)) && func_342(iParam0, 2048))
	{
		return joaat("weapon_repeater_carbine");
	}
	iVar0 = WEAPON::_0xF8204EF17410BF43(-594562071, iParam1, iParam2, 0);
	iVar1 = WEAPON::_0xF8204EF17410BF43(970310034, iParam1, iParam2, 0);
	iVar2 = WEAPON::_0xF8204EF17410BF43(-1212426201, iParam1, iParam2, 0);
	iVar3 = WEAPON::_0xF8204EF17410BF43(860033945, iParam1, iParam2, 0);
	while (func_525(iVar3))
	{
		iVar4++;
		if (iVar4 >= 10)
		{
			iVar3 = joaat("weapon_shotgun_doublebarrel");
			Jump @185; //curOff = 160
		}
		else
		{
			iVar3 = WEAPON::_0xF8204EF17410BF43(860033945, iParam1, iParam2, 0);
		}
	}
	if (!func_344(iVar3))
	{
		iVar3 = joaat("weapon_repeater_carbine");
	}
	iVar5 = 0;
	if (!func_342(iParam0, 4096))
	{
		iVar5 = iVar0;
	}
	if (!func_342(iParam0, 512))
	{
		if (!func_343(iVar5) || WEAPON::_0xF2F585411E748B9C(iVar1, 0) > WEAPON::_0xF2F585411E748B9C(iVar5, 0))
		{
			iVar5 = iVar1;
		}
	}
	if (!func_342(iParam0, 1024))
	{
		if (!func_343(iVar5) || WEAPON::_0xF2F585411E748B9C(iVar3, 0) > WEAPON::_0xF2F585411E748B9C(iVar5, 0))
		{
			iVar5 = iVar3;
		}
	}
	if (!func_342(iParam0, 2048))
	{
		if (!func_343(iVar5) || WEAPON::_0xF2F585411E748B9C(iVar2, 0) > WEAPON::_0xF2F585411E748B9C(iVar5, 0))
		{
			iVar5 = iVar2;
		}
	}
	if (!func_343(iVar5))
	{
		return joaat("weapon_repeater_carbine");
	}
	return iVar5;
}

bool func_268(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case -1212426201:
		case -1101297303:
		case -594562071:
		case 416676503:
		case 860033945:
		case 970310034:
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			bVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(bVar0) || WEAPON::_0x959383DCD42040DA(bVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				StringCopy(&cVar5, WEAPON::_0x89CF5FF3D363311E(bVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43890 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_343(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(bVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43890)
						{
							if (func_343(iVar4) && iVar4 != bVar0)
							{
								bVar0 = iVar4;
							}
						}
						else if (iVar4 == bVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_1() == -1 && !func_344(bVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, bVar0, 0, 0) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == bVar0 && !Global_43890) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
		{
			bVar22 = true;
		}
		else
		{
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
		}
	}
	if (bVar0 == joaat("weapon_unarmed") && iParam1 == joaat("weapon_unarmed"))
	{
		return bVar0;
	}
	else if (bVar0 == joaat("weapon_unarmed"))
	{
		switch (iParam1)
		{
			case -1101297303:
			case 416676503:
				bVar0 = joaat("weapon_revolver_cattleman");
				break;
			case -1212426201:
			case -594562071:
			case 860033945:
			case 970310034:
				if (func_344(joaat("weapon_repeater_carbine")))
				{
					bVar0 = joaat("weapon_repeater_carbine");
				}
				else
				{
					bVar0 = joaat("weapon_revolver_cattleman");
				}
				break;
			default:
				bVar0 = joaat("weapon_revolver_cattleman");
				break;
		}
	}
	else if (bVar0 == joaat("weapon_melee_lantern") && iParam0 == Global_35)
	{
		bVar0 = joaat("weapon_melee_davy_lantern");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_343(bVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, bVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_0x959383DCD42040DA(bVar0) && bVar0 != joaat("weapon_unarmed")) && !WEAPON::_0x79407D33328286C6(bVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, bVar0));
			iVar24 = WEAPON::_0xD3750CCC00635FC2(bVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (iParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_526(bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_527(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_528(bVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, bVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), bVar0, iParam4);
	}
	return bVar0;
}

char* func_269(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			if (iParam1 < 0)
			{
				iParam1 = 3;
			}
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iParam1);
			switch (iVar0)
			{
				case 0:
					return "0957_A_M_M_Rancher_White_02";
				case 1:
					return "0977_A_M_M_RoughTravellers_White_08";
				case 2:
					return "0807_S_M_M_Army_01_WHITE_02";
				default:
					break;
			}
			break;
		case 2:
			if (iParam1 < 0)
			{
				iParam1 = 4;
			}
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iParam1);
			switch (iVar0)
			{
				case 0:
					return "0948_A_M_M_Guard_White_AGGRESSIVE_03";
				case 1:
					return "0949_A_M_M_Guard_White_AGGRESSIVE_04";
				case 2:
					return "0955_A_M_M_Guard_White_AGGRESSIVE_10";
				case 3:
					return "0708_S_M_M_RaCRailGuards_01_WHITE_01";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_270()
{
	if (func_164(64))
	{
		return iLocal_742;
	}
	return iLocal_743;
}

void func_271(int iParam0, int iParam1)
{
	if (iParam1 || func_5(iParam0, 8192))
	{
		if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, func_529(iParam0)))
		{
			return;
		}
		UILOG::_UILOG_REMOVE_ENTRY(3, func_529(iParam0));
		func_204(iParam0, 8192);
	}
}

void func_272(int iParam0)
{
	if (!func_5(iParam0, 8192))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, func_529(iParam0), func_142(iParam0, func_4(iParam0)), func_530(iParam0), func_531(iParam0), 0);
		UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, func_529(iParam0), func_532(iParam0), func_533());
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, func_529(iParam0), func_534(iParam0), func_535());
		func_42(iParam0, 8192);
	}
}

void func_273(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, func_529(iParam0), iParam1, sParam2, iParam3, 0, 0);
	if (bParam4)
	{
		func_537(func_536(iParam0), sParam2, func_533(), func_532(iParam0), 1433015236, 0, -1, -2, 0, 0, 0, 0, 1, 1, 0);
	}
}

bool func_274(int iParam0)
{
	return (Global_1898092->f_1 && iParam0) != 0;
}

void func_275(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_538(iParam0))
	{
		iVar0 = func_139(iParam0);
		func_10(iParam0, 1);
		switch (iParam0)
		{
			case 0:
			case 2:
			case 3:
				func_539(iVar0, 0);
				break;
			case 1:
				MAP::_0xD8C7162AB2E2AF45(-238119963);
				break;
		}
		if (bParam1)
		{
			func_540(iParam0, 0);
		}
	}
}

int func_276(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_541(Global_1359489->f_4);
	}
	PED::GET_GROUP_SIZE(func_542(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_542(), iVar3);
		if (func_543(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

int func_277()
{
	int iVar0;
	int iVar1;

	iVar1 = PED::_0xD806CD2A4F2C2996(Global_35);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (func_544(Global_35))
		{
			iVar1 = func_545(Global_35);
		}
		else if (func_546(Global_35))
		{
			iVar1 = func_547(Global_35);
		}
		else if (func_548(Global_35))
		{
			iVar1 = func_549(Global_35);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return iVar0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar1))
	{
		return iVar0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
	return iVar0;
}

void func_278(char* sParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;
	var uVar1[8];
	int iVar10;
	var uVar11;
	int iVar12;

	iVar0 = *sParam0;
	if (iVar0 > 8)
	{
		return;
	}
	func_550(&uVar1, iVar0, 1);
	if (bParam3)
	{
		uVar11 = &uVar1[0];
		iVar10 = 0;
		while (iVar10 < iVar0)
		{
			if (&uVar1[iVar10] == 0)
			{
				uVar1[0] = &uVar1[iVar10];
				uVar1[iVar10] = uVar11;
			}
			iVar10++;
		}
	}
	iVar10 = 0;
	iVar10 = 0;
	while (iVar10 < 4)
	{
		iVar12 = &uVar1[iVar10];
		uParam2->f_2[iVar10] = sParam0[iVar12];
		uParam2->f_7[iVar10] = iParam1[iVar12];
		iVar10++;
	}
}

float func_279(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_358(Global_35, iParam0, bParam1, iParam2);
}

void func_280(var uParam0, int iParam1, int iParam2)
{
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamA", true);
			break;
		case 1:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamB", true);
			break;
		case 2:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamA", true);
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamB", true);
			break;
		default:
			break;
	}
}

void func_281(var uParam0, int iParam1, int iParam2)
{
	if (PED::IS_PED_HUMAN(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamA", true);
			break;
		case 1:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamB", true);
			break;
		case 2:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamA", true);
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamB", true);
			break;
		default:
			break;
	}
	DECORATOR::DECOR_SET_INT(iParam1, "HorseScriptCreator", SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
}

char* func_282(int iParam0, int iParam1)
{
	if (func_132(iParam0, 16))
	{
		switch (iParam0->f_1)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return "LCMP_AGGRO1";
					case 1:
						return "LCMP_AGGRO2";
					default:
						break;
				}
				break;
			default:
				switch (iParam1)
				{
					case 0:
						return "LCMP_AGGRO3";
					case 1:
						return "LCMP_AGGRO4";
					default:
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0->f_16)
		{
			case 1:
				switch (iParam1)
				{
					case 0:
						return "LCMP_BODY1";
					case 1:
						return "LCMP_BODY2";
					default:
						break;
				}
				break;
			case 7:
				switch (iParam0->f_1)
				{
					case 0:
					case 1:
						switch (iParam1)
						{
							case 0:
								return "LCMP_STEAL1";
							case 1:
								return "LCMP_STEAL2";
							default:
								break;
						}
						break;
					default:
						switch (iParam1)
						{
							case 0:
								return "LCMP_STEAL3";
							case 1:
								return "LCMP_STEAL4";
							default:
								break;
						}
						break;
				}
				break;
		}
	}
	return "";
}

int func_283(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_551(bParam1, iParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225638->f_10)
		{
			if (!Global_1225638->f_11)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::_0xAD401C63158ACBAA(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (iParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::_0x532C5FDDB986EE5C(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::_0x69E181772886F48B(iParam0) || LAW::_0xF0FBFB9AB15F7734(iParam0, 0, 0))
		{
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_284(var uParam0, var uParam1)
{
	if (func_19(1048576))
	{
		if (((((func_357(func_63(Local_2160.f_138), uParam0, uParam1, 0) || ((iLocal_745 % 3) == 1 && func_552(&uLocal_2320, uParam0, uParam1, 0, (iLocal_732 / 3)))) || ((iLocal_745 % 3) == 2 && func_552(&uLocal_2320, uParam0, uParam1, (iLocal_732 / 3) + 1, (iLocal_732 * 2 / 3)))) || ((iLocal_745 % 3) == 0 && func_552(&uLocal_2320, uParam0, uParam1, (iLocal_732 * 2 / 3) + 1, iLocal_732))) || func_552(&iLocal_2479, uParam0, uParam1, 0, -1)) || func_552(&iLocal_2505, uParam0, uParam1, 0, -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_285()
{
	if (func_9(1, 2) || func_9(Local_2160.f_136, 16384))
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_2502[0])) && func_553(Global_35, &(iLocal_2502[0]), 0))
		{
			if (func_9(Local_2160.f_136, 16384))
			{
				func_96(uLocal_2499[1]);
				return 0;
			}
			else
			{
				func_555(3, 0, 0, func_554(), func_63(Local_2160.f_138), 0, 1065353216, 0);
				func_58(32768);
				return 1;
			}
		}
	}
	if (func_19(65536))
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_72[1])) && func_553(Global_35, &(uLocal_72[1]), 1))
		{
			func_555(3, 0, 0, func_554(), func_63(Local_2160.f_138), 0, 1065353216, 0);
			func_58(32768);
			return 1;
		}
	}
	if (func_19(32768))
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_72[0])) && func_553(Global_35, &(uLocal_72[0]), 1))
		{
			func_555(3, 0, 0, func_554(), func_63(Local_2160.f_138), 0, 1065353216, 0);
			func_58(32768);
			return 1;
		}
	}
	return 0;
}

int func_286(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_556(uParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_557(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_558(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_559(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_558(iParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_560(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_558(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_561(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_558(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_26 && func_283(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_558(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_562(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_563(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_558(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_564(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_558(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_565(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_558(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_565(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_558(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_566(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_558(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_567(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_558(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_568(uParam2, 4000))
				{
					if ((func_569(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_570(uParam2, iParam0)) && func_571(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_558(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_569(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_570(uParam2, iParam0)) && func_571(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_558(iParam0, uParam2, *uParam3);
					return 1;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_572(iParam0, Global_1935630->f_41))
							{
								func_573();
								*uParam3 = 2;
								func_558(iParam0, uParam2, *uParam3);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_40 == 0)
			{
				if (Global_1935630->f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (func_572(iParam0, Global_1935630->f_41))
						{
							func_573();
							*uParam3 = 2;
							func_558(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_574(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_575() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_573();
						*uParam3 = 2;
						func_558(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_576())
					{
						if (func_572(iParam0, Global_1935630->f_42))
						{
							func_573();
							*uParam3 = 2;
							func_558(iParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_577(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_558(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_578(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_558(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_579(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_558(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_580(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_558(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_581(uParam2, 4000))
				{
					if (func_582(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_558(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_583(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_558(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_364(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_558(iParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

void func_287(var uParam0, var uParam1)
{
	if (uParam0->f_16 != 0 || *uParam1 != 0)
	{
		Global_1935630->f_30 = 0;
		Global_1935630->f_31 = 0;
		Global_1935630->f_25 = 0;
		Global_1935630->f_39 = 0;
		uParam0->f_8 = func_575();
		PLAYER::_0xEACEBAAE0A33FB3F(PLAYER::PLAYER_ID());
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_5 = 0;
	uParam0->f_10 = 0;
	func_584(uParam0, 0);
	*uParam1 = 0;
	uParam0->f_16 = 0;
}

int func_288()
{
	if (!func_585(&Local_2160))
	{
		if (!func_586(Global_1935630->f_34[0]))
		{
			return 0;
		}
		func_43(&Local_2160, 4096);
	}
	return 1;
}

int func_289()
{
	if (iLocal_98 != 3)
	{
		return 0;
	}
	if (func_19(262144))
	{
		return 0;
	}
	return 0;
}

int func_290(var uParam0)
{
	switch (*uParam0)
	{
		case 8:
		case 64:
		case 512:
		case 2048:
		case 8192:
		case 65536:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_291(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;

	if (!ENTITY::IS_ENTITY_DEAD(func_63(Local_2160.f_138)))
	{
		if (func_587())
		{
			(*uParam0)[iVar0] = func_63(Local_2160.f_138);
			iVar0++;
		}
	}
	if (func_19(64))
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_2479[0])))
		{
			(*uParam0)[iVar0] = &iLocal_2479[0];
			iVar0++;
		}
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_2505[0])))
		{
			(*uParam0)[iVar0] = &iLocal_2505[0];
			iVar0++;
		}
	}
	if (func_19(8192))
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			bVar5 = func_390(iLocal_1155, func_7(iVar2));
			if (bVar5)
			{
				iVar1 = 0;
				while (iVar1 < 2)
				{
					iVar3 = func_326(9, iVar1, iVar6);
					iVar4 = func_63(iVar3);
					if (!ENTITY::IS_ENTITY_DEAD(iVar4))
					{
						(*uParam0)[iVar0] = iVar4;
						iVar0++;
					}
					iVar1++;
				}
				iVar6++;
			}
			iVar2++;
		}
	}
	if (iLocal_98 == 1 && !func_5(Local_2160.f_136, 64))
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar3 = func_326(6, iVar1, 0);
			iVar4 = func_63(iVar3);
			if (!ENTITY::IS_ENTITY_DEAD(iVar4))
			{
				(*uParam0)[iVar0] = iVar4;
				iVar0++;
			}
			iVar1++;
		}
	}
	if (func_19(256))
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar3 = func_326(7, iVar1, 0);
			iVar4 = func_63(iVar3);
			if (!ENTITY::IS_ENTITY_DEAD(iVar4))
			{
				(*uParam0)[iVar0] = iVar4;
				iVar0++;
			}
			iVar1++;
		}
	}
	if (iLocal_98 == 3 && !func_5(Local_2160.f_136, 64))
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			iVar3 = func_326(0, iVar1, 0);
			iVar4 = func_63(iVar3);
			if (!ENTITY::IS_ENTITY_DEAD(iVar4))
			{
				(*uParam0)[iVar0] = iVar4;
				iVar0++;
			}
			iVar1++;
		}
	}
	if (iLocal_98 == 3 && !func_9(Local_2160.f_136, 16))
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar3 = func_326(3, iVar1, 0);
			iVar4 = func_63(iVar3);
			if (!ENTITY::IS_ENTITY_DEAD(iVar4))
			{
				(*uParam0)[iVar0] = iVar4;
				iVar0++;
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iLocal_2505)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_2505[iVar1])))
		{
			(*uParam0)[iVar0] = &iLocal_2505[iVar1];
			iVar0++;
		}
		iVar1++;
	}
	if (iLocal_98 == 3 && !func_19(262144))
	{
		(*uParam0)[iVar0] = &iLocal_2479[2];
		iVar0++;
		(*uParam0)[iVar0] = &iLocal_2479[3];
		iVar0++;
	}
	return iVar0;
	return 0;
}

void func_292(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;

	func_293(iParam0, 1);
	iVar0 = PED::_0xB65A4DAB460A19BD(Global_35);
	if (iParam5 || iParam0->f_1 < iParam0->f_3)
	{
		if (iParam0->f_1 >= 2)
		{
			func_293(iParam0, 16);
			iParam0->f_4 = 45;
		}
		if (iParam0->f_16 == -1)
		{
			switch (iParam2)
			{
				case 65536:
					iParam0->f_16 = 0;
					break;
				case 8:
					if (PED::_0x268B3AEBF032A88D(uParam1->f_10))
					{
						func_293(iParam0, 2);
						return;
					}
					if (func_588(iParam0, &(uParam1->f_10)))
					{
						func_293(iParam0, 2);
					}
					else
					{
						func_134(iParam0, 1);
					}
					return;
				case 64:
					if (func_588(iParam0, &(uParam1->f_10)))
					{
						func_293(iParam0, 2);
					}
					else
					{
						func_134(iParam0, 1);
					}
					return;
				case 2048:
					iParam0->f_16 = 4;
					break;
				case 8192:
					if (ENTITY::DOES_ENTITY_EXIST(func_383(Global_35)))
					{
						iParam0->f_16 = 1;
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (PED::IS_PED_MALE(iVar0))
						{
							iParam0->f_18 = 1;
						}
						else
						{
							iParam0->f_18 = 2;
						}
						iParam0->f_16 = 2;
					}
					else if (PED::IS_PED_PLANTING_BOMB(Global_35))
					{
						iParam0->f_16 = 3;
					}
					break;
				case 512:
				case 1024:
					iParam0->f_16 = 7;
					break;
			}
		}
		if (*iParam0 != 0)
		{
		}
		else if (iParam0->f_16 != 3 && uParam1->f_10 != 0)
		{
			*iParam0 = uParam1->f_10;
		}
		else if (!func_591(iParam0, iParam3, Global_36, 50f, func_589(iParam0), func_590(iParam0)))
		{
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0) || !PED::IS_PED_HUMAN(*iParam0))
		{
			return;
		}
		if (iParam0->f_1 < 3)
		{
			iParam0->f_9[iParam0->f_1] = func_444();
		}
		if (!bParam4)
		{
			iParam0->f_1++;
		}
	}
	else
	{
		func_293(iParam0, 2);
	}
}

void func_293(int iParam0, int iParam1)
{
	func_143(&(iParam0->f_17), iParam1);
}

int func_294(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_298(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_286(uParam0[*uParam3], 0, uParam1, uParam2, 0, 0))
		{
			return 1;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return 0;
}

int func_295()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (func_325(Local_1039[6 /*7*/]))
	{
		iVar0 = 0;
		while (iVar0 < func_592(6))
		{
			iVar1 = func_63(func_326(6, iVar0, 0));
			if (iVar1 == Local_2160.f_10)
			{
				return 1;
			}
			iVar0++;
		}
	}
	if (func_325(Local_1039[3 /*7*/]))
	{
		iVar0 = 0;
		while (iVar0 < func_592(3))
		{
			iVar1 = func_63(func_326(3, iVar0, 0));
			if (iVar1 == Local_2160.f_10)
			{
				return 1;
			}
			iVar0++;
		}
	}
	if (func_325(Local_1039[7 /*7*/]))
	{
		iVar0 = 0;
		while (iVar0 < func_592(7))
		{
			iVar1 = func_63(func_326(7, iVar0, 0));
			if (iVar1 == Local_2160.f_10)
			{
				return 1;
			}
			iVar0++;
		}
	}
	if (func_325(Local_1039[8 /*7*/]))
	{
		iVar0 = 0;
		while (iVar0 < func_592(8))
		{
			iVar1 = func_63(func_326(8, iVar0, 0));
			if (iVar1 == Local_2160.f_10)
			{
				return 1;
			}
			iVar0++;
		}
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar3 = (9 + iVar2);
		if (func_325(Local_1039[iVar3 /*7*/]))
		{
			iVar4 = iVar2 * 2;
			iVar0 = 0;
			while (iVar0 < func_592(9))
			{
				iVar1 = func_63(func_326(9, iVar0, iVar4));
				if (iVar1 == Local_2160.f_10)
				{
					return 1;
				}
				iVar0++;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_296(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (func_132(iParam1, 1))
	{
		return 0;
	}
	if (!func_213(Global_35, ((*Global_1392194)[uParam0->f_136 /*10*/])->f_6, 1, 0))
	{
		return 0;
	}
	if ((func_593(Global_35, &iVar0, 4) && !STREAMING::IS_MODEL_A_PED(iVar0)) || TASK::_0xD04241BBF6D03A5E(Global_35) != 0)
	{
		if (func_591(&uVar1, iParam2, Global_36, 12.5f, 1, 120f))
		{
			*iParam1 = uVar1;
			iParam1->f_16 = 7;
			return 1;
		}
	}
	return 0;
}

int func_297()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = 0;
	bVar1 = false;
	if (PED::_0x5407B7288D0478B7(Global_35, 512) > 0)
	{
		iVar2 = ITEMSET::CREATE_ITEMSET(true);
		iVar3 = PED::_0x7BE607DAFF382FD2(Global_35, iVar2, 512);
		if (iVar3 > 0)
		{
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				iVar0 = 0;
				bVar1 = false;
				iVar5 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar2));
				if (ENTITY::IS_ENTITY_A_PED(iVar5))
				{
					iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar5);
					if (func_213(iVar6, ((*Global_1392194)[Local_2160.f_136 /*10*/])->f_6, 1, 0))
					{
						iVar0 = 1;
					}
					if (iVar6 == func_63(Local_2160.f_138))
					{
						iVar0 = 1;
						bVar1 = true;
					}
					else if (func_351(iVar6, &uLocal_2320))
					{
						iVar0 = 1;
						bVar1 = true;
					}
					else if (func_351(iVar6, &iLocal_2479))
					{
						iVar0 = 1;
						bVar1 = true;
					}
					else
					{
						if (iVar0 && !bVar1)
						{
							if (!func_586(&iVar6))
							{
								iVar0 = 0;
							}
						}
						iVar4++;
					}
					ITEMSET::DESTROY_ITEMSET(iVar2);
					if (iVar0 && !bVar1)
					{
						func_43(&Local_2160, 4096);
					}
					return iVar0;
				}
			}
		}
	}

int func_298(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_299(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_12;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

void func_300(var uParam0, var uParam1)
{
	*uParam1 = 0;
	uParam0->f_10 = 0;
	uParam0->f_4 = 0;
}

bool func_301(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (((*Global_1945938)[iParam0 /*18*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3);
}

void func_302(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 && !func_301(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_594(*uParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_595(iVar0);
	*uParam0 = 0;
}

void func_303(bool bParam0)
{
	int iVar0;

	iVar0 = 11;
	if (!func_596())
	{
		return;
	}
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1914319->f_3[iVar0 /*446*/])->f_25))
	{
		if (bParam0)
		{
			VOLUME::_0x43F867EF5C463A53((Global_1914319->f_3[iVar0 /*446*/])->f_25);
		}
		else
		{
			(Global_1914319->f_3[iVar0 /*446*/])->f_25 = 0;
		}
	}
	(Global_1914319->f_3[iVar0 /*446*/])->f_23 = 0;
	func_597(11);
	func_598(101, 0);
	func_304(11, 4);
}

void func_304(int iParam0, int iParam1)
{
	if (!func_599(iParam0))
	{
		return;
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_7 = ((Global_1914319->f_3[iParam0 /*446*/])->f_7 - ((Global_1914319->f_3[iParam0 /*446*/])->f_7 && iParam1));
}

int func_305(int iParam0)
{
	if (!func_98(iParam0))
	{
		return -1;
	}
	return func_308(iParam0);
}

int func_306(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = (Global_12105[iParam0 /*7*/])->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_308(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

int func_307(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_5;
	}
	return (Global_1058888->f_498[iParam0 /*2*/])->f_1;
}

int func_308(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_600(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_309(int iParam0)
{
	if (!func_98(iParam0))
	{
		return 0;
	}
	return func_602(func_601(iParam0));
}

void func_310(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_1() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

bool func_311(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_312(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_309(iParam0))
	{
		case 1:
			iVar0 = func_433(iParam0);
			return func_603(iVar0);
		case 8:
			iVar1 = func_433(iParam0);
			if (func_435(((*Global_1347702)[iVar1 /*49*/])->f_12, 1))
			{
				return func_604(iVar1);
			}
			break;
	}
	return -1;
}

void func_313(bool bParam0)
{
	int iVar0;

	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_1() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_605(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_606();
		Global_1898077->f_9 = func_607(Global_1894899->f_2);
		func_608(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_314()
{
	if (!func_206(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 0;
	}
	else if (!func_206(((*Global_1347702)[66 /*49*/])->f_15, 1))
	{
		return 1;
	}
	else if (!func_206(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 2;
	}
	else if (!func_206(((*Global_1835011)[38 /*74*/])->f_1, 1))
	{
		return 3;
	}
	else if (!func_206(((*Global_1347702)[68 /*49*/])->f_15, 1))
	{
		return 4;
	}
	else if (!func_206(((*Global_1835011)[59 /*74*/])->f_1, 1))
	{
		return 5;
	}
	else if (!func_206(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_315(int iParam0, int iParam1)
{
	if (!func_98(iParam0))
	{
		return;
	}
	func_609(iParam0, iParam1);
}

int func_316(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

int func_317(bool bParam0)
{
	if (!bParam0 && func_610(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

void func_318(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_319(int iParam0, bool bParam1)
{
	if (func_1() != -1)
	{
		return;
	}
	if (func_316(0) != iParam0)
	{
		return;
	}
	if (func_611(iParam0))
	{
		if (bParam1)
		{
			func_612(-525676072);
		}
		else
		{
			func_613(-525676072);
		}
	}
}

int func_320(int iParam0)
{
	return func_615(func_614(iParam0));
}

void func_321(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_322(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_323(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (iLocal_98 == 2)
			{
				return 0;
			}
			else if (iLocal_98 == 3)
			{
				return 0;
			}
			break;
		case 2:
			if (func_19(64))
			{
				return 2;
			}
			else if (iLocal_98 == 3)
			{
				return 2;
			}
			break;
		case 3:
			if (func_19(64))
			{
				return 3;
			}
			else if (iLocal_98 == 3)
			{
				return 3;
			}
			break;
		case 1:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			return iParam0;
	}
	return -1;
}

bool func_324()
{
	return (iLocal_1147 == 0 || iLocal_1147 == 1);
}

bool func_325(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::_0xCBFC7725DE6CE2E0(*uParam0, 0);
}

int func_326(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 6:
			iVar0 = 814;
			break;
		case 9:
			iVar0 = 816;
			break;
		case 7:
			iVar0 = 820;
			break;
		case 0:
			iVar0 = 814;
			break;
		case 3:
			iVar0 = 817;
			break;
	}
	iVar0 = (iVar0 + (iParam1 + iParam2));
	return iVar0;
}

void func_327(var uParam0, int iParam1, char* sParam2)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return;
	}
	if (!func_616(uParam0, sParam2))
	{
		return;
	}
	ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam0, sParam2, iParam1);
}

void func_328(int iParam0)
{
	if (iLocal_744 < 10)
	{
		if (!func_351(*iParam0, &(Local_2160.f_140)))
		{
			Local_2160.f_140[iLocal_744] = *iParam0;
			iLocal_744++;
		}
	}
}

void func_329(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (!func_617(iParam0))
	{
		return;
	}
	iVar0 = func_618(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_619(iVar0);
	func_620(iVar0);
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = func_621(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_622(iVar0))
		{
			return;
		}
	}
	func_623(iVar0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	if (bParam1 && func_1() == -1)
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
		}
	}
}

void func_330(int iParam0)
{
	iLocal_100 = (iLocal_100 - (iLocal_100 && iParam0));
}

void func_331(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

void func_332()
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(4, 1, 0);
}

void func_333(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_138(iParam0))
	{
		return;
	}
	func_624(iParam0, &((Global_40.f_9096[iParam0 /*12*/])->f_10), iParam1, iParam2, iParam3, iParam4, bParam5);
}

void func_334(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		uParam0->f_1 = 0;
		func_335(uParam0, 1);
		func_192(uParam0, 1);
		func_191(uParam0, 1);
		func_189(uParam0, 1);
		func_625(uParam0, 1);
		func_193(uParam0, 1);
		func_626(uParam0, 1);
	}
	else
	{
		uParam0->f_1 = -1;
		func_335(uParam0, 0);
		func_192(uParam0, 0);
		func_191(uParam0, 0);
		func_189(uParam0, 0);
		func_625(uParam0, 0);
		func_193(uParam0, 0);
		func_626(uParam0, 0);
	}
}

void func_335(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(uParam0, 4);
	}
	else
	{
		func_199(uParam0, 4);
	}
}

void func_336(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_199(&(uParam0->f_1), 16384);
	}
	else
	{
		func_143(&(uParam0->f_1), 16384);
	}
}

int func_337(int iParam0, int iParam1, char* sParam2, var uParam3, float fParam4, var uParam5, bool bParam6, var uParam7, var uParam8, bool bParam9, var uParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, var uParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> Var3;

	uParam5 = uParam5;
	iParam1 = iParam1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, iParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1f)
	{
		if (func_627())
		{
			fParam4 = 50f;
		}
		else
		{
			fParam4 = 75f;
		}
	}
	if (bParam9)
	{
		if (iParam0 != Global_35 && iParam1 != Global_35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (func_279(iParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (iParam0 == iParam1 || iParam1 == 0);
	if ((!ENTITY::IS_ENTITY_DEAD(iParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_358(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || uParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_48(&uLocal_0);
			if (!bVar0 && uParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_628(iParam0, iParam1, fVar1, bParam13))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam1, iParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = iParam1;
				Var3.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
				Var3.f_6 = uParam15;
				Var3.f_2 = uParam5;
				if (bParam14)
				{
					MISC::SET_BIT(&(Var3.f_7), 3);
					MISC::SET_BIT(&(Var3.f_7), 2);
				}
				iVar2 = AUDIO::_0x72E4D1C4639BC465(iParam0, &Var3);
				if (iVar2 >= 0)
				{
					AUDIO::_0xB18FEC133C7C6C69(iVar2);
				}
			}
			else
			{
				iVar2 = func_59(func_629(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, uParam5, uParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_338()
{
	float fVar0;
	float fVar1;
	var uVar4;

	if (func_325(Local_1039[2 /*7*/]))
	{
		fVar0 = func_630(Local_1039[2 /*7*/]);
		func_631(Local_1039[2 /*7*/], &fVar1, &uVar4);
		if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_2479[0])) && ENTITY::HAS_ANIM_EVENT_FIRED(&(iLocal_2479[0]), -615221946))
		{
			ENTITY::FREEZE_ENTITY_POSITION(&(iLocal_2479[0]), false);
			func_632(Local_1039[2 /*7*/], "PB_VIC_BRKOUT", 1);
			func_633(Local_1039[2 /*7*/], "RECOVERY_BOOL");
		}
		else if ((func_634(Local_1039[2 /*7*/], "PBL_IMPATIENT") || (func_634(Local_1039[2 /*7*/], "PBL_LIFT_SUCCESS") && fVar0 < 0.1855f)) || (func_634(Local_1039[2 /*7*/], "PBL_ENTER") && fVar0 > 0.8602f))
		{
			if (Global_36 < fVar1)
			{
				func_632(Local_1039[2 /*7*/], "PBL_COMBAT_L", 1);
				func_633(Local_1039[2 /*7*/], "bBreakInternalLoop");
			}
			else
			{
				func_632(Local_1039[2 /*7*/], "PBL_COMBAT_R", 1);
				func_633(Local_1039[2 /*7*/], "bBreakInternalLoop");
			}
			func_14(1024);
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_63(Local_2160.f_138)))
			{
				func_327(Local_1039[2 /*7*/], func_63(Local_2160.f_138), "FOREMAN");
			}
			if (!ENTITY::IS_ENTITY_DEAD(func_63(810)))
			{
				func_327(Local_1039[2 /*7*/], func_63(810), "PED1");
			}
			if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_2479[2])))
			{
				func_327(Local_1039[2 /*7*/], &(iLocal_2479[2]), "PED2");
			}
			if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_2479[3])))
			{
				func_327(Local_1039[2 /*7*/], &(iLocal_2479[3]), "PED3");
			}
			if (!ENTITY::IS_ENTITY_DEAD((Local_1157.f_690[7 /*12*/])->f_8))
			{
				func_327(Local_1039[2 /*7*/], (Local_1157.f_690[7 /*12*/])->f_8, "AXE1");
			}
			if (!ENTITY::IS_ENTITY_DEAD((Local_1157.f_690[8 /*12*/])->f_8))
			{
				func_327(Local_1039[2 /*7*/], (Local_1157.f_690[8 /*12*/])->f_8, "AXE2");
			}
			if (!ENTITY::IS_ENTITY_DEAD((Local_1157.f_690[9 /*12*/])->f_8))
			{
				func_327(Local_1039[2 /*7*/], (Local_1157.f_690[9 /*12*/])->f_8, "AXE3");
			}
			if (!ENTITY::IS_ENTITY_DEAD((Local_1157.f_690[10 /*12*/])->f_8))
			{
				func_327(Local_1039[2 /*7*/], (Local_1157.f_690[10 /*12*/])->f_8, "CIGARETTE");
			}
			if (func_19(512))
			{
				if (Global_36 < fVar1)
				{
					func_632(Local_1039[2 /*7*/], "PBL_COMBAT_L", 1);
					func_633(Local_1039[2 /*7*/], "bBreakInternalLoop");
				}
				else
				{
					func_632(Local_1039[2 /*7*/], "PBL_COMBAT_R", 1);
					func_633(Local_1039[2 /*7*/], "bBreakInternalLoop");
				}
			}
			func_126(1024);
		}
	}
}

void func_339(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iParam0 > -1 && iParam0 != iVar0)
		{
		}
		else if (func_325(Local_1039[(9 + iVar0) /*7*/]))
		{
			iVar1 = iVar0 * 4;
			iVar2 = iVar0 * 2;
			iVar3 = func_63(func_326(9, 0, iVar2));
			iVar4 = func_63(func_326(9, 1, iVar2));
			if (!ENTITY::IS_ENTITY_DEAD(iVar4))
			{
				iVar5 = iVar4;
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iVar3))
			{
				iVar5 = iVar3;
				bVar6 = true;
			}
			else
			{
				func_327(Local_1039[(9 + iVar0) /*7*/], (Local_1157.f_690[(15 + iVar1) /*12*/])->f_8, "SAW");
				if (ENTITY::HAS_ANIM_EVENT_FIRED((Local_1157.f_690[(15 + iVar1) /*12*/])->f_8, -1984935666))
				{
					ENTITY::FREEZE_ENTITY_POSITION((Local_1157.f_690[(15 + iVar1) /*12*/])->f_8, true);
				}
				func_216(Local_1039[(9 + iVar0) /*7*/]);
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					func_328(&iVar3);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar4))
				{
					func_328(&iVar4);
				}
				iVar7 = func_635(iVar5, Global_35, 1060437492);
				if (bVar6)
				{
					switch (iVar7)
					{
						case 1:
							iVar7 = 0;
							break;
						case 0:
							iVar7 = 1;
							break;
						case 3:
							iVar7 = 2;
							break;
						case 2:
							iVar7 = 3;
							break;
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar5, -137640087))
				{
					iVar8 = 0;
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar5, -1300850144))
				{
					iVar8 = 1;
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar5, -1011860333))
				{
					iVar8 = 2;
				}
				else
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar3))
					{
						func_327(Local_1039[(9 + iVar0) /*7*/], iVar3, "PED1");
					}
					if (!ENTITY::IS_ENTITY_DEAD(iVar4))
					{
						func_327(Local_1039[(9 + iVar0) /*7*/], iVar4, "PED2");
					}
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_636(iVar8, iVar7)))
				{
					func_632(Local_1039[(9 + iVar0) /*7*/], func_636(iVar8, iVar7), 1);
					func_633(Local_1039[(9 + iVar0) /*7*/], "bBreakInternalLoop");
				}
				func_327(Local_1039[(9 + iVar0) /*7*/], (Local_1157.f_690[(15 + iVar1) /*12*/])->f_8, "SAW");
				if (ENTITY::HAS_ANIM_EVENT_FIRED((Local_1157.f_690[(15 + iVar1) /*12*/])->f_8, -1984935666))
				{
					ENTITY::FREEZE_ENTITY_POSITION((Local_1157.f_690[(15 + iVar1) /*12*/])->f_8, true);
				}
			}
		}
		iVar0++;
	}
}

void func_340()
{
	if (ENTITY::IS_ENTITY_DEAD(func_63(Local_2160.f_138)))
	{
		return;
	}
	if (!func_325(Local_1039[0 /*7*/]))
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(func_63(Local_2160.f_138), 465284456))
	{
		return;
	}
	ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(func_63(Local_2160.f_138), (Local_1157.f_690[25 /*12*/])->f_8, false);
	func_632(Local_1039[0 /*7*/], "PBL_FOREMAN_STAGE2_COMBAT", 1);
	func_633(Local_1039[0 /*7*/], "bBreakInternalLoop");
	func_14(1024);
}

void func_341()
{
	if (!ENTITY::IS_ENTITY_DEAD(func_63(Local_2160.f_138)) && func_325(Local_1039[1 /*7*/]))
	{
		if (!ENTITY::HAS_ANIM_EVENT_FIRED(func_63(Local_2160.f_138), 465284456))
		{
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(func_63(Local_2160.f_138), (Local_1157.f_690[25 /*12*/])->f_8, false);
			func_632(Local_1039[1 /*7*/], "PBL_COMBAT", 1);
			func_633(Local_1039[1 /*7*/], "bBreakInternalLoop");
			func_14(1024);
		}
		else
		{
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(func_63(Local_2160.f_138), (Local_1157.f_690[5 /*12*/])->f_8, false);
			func_216(Local_1039[1 /*7*/]);
		}
	}
	if (func_325(Local_1039[3 /*7*/]))
	{
		func_216(Local_1039[3 /*7*/]);
		PHYSICS::ACTIVATE_PHYSICS((Local_1157.f_690[7 /*12*/])->f_8);
	}
	if (func_325(Local_1039[0 /*7*/]))
	{
		func_216(Local_1039[0 /*7*/]);
	}
}

bool func_342(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_343(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_344(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_345(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
	func_96(&iVar0);
}

void func_346(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (MAP::DOES_BLIP_EXIST(*iParam1))
		{
			MAP::REMOVE_BLIP(iParam1);
		}
		iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
		if (MAP::DOES_BLIP_EXIST(iVar0))
		{
			MAP::REMOVE_BLIP(&iVar0);
		}
		*iParam1 = MAP::_0x23F74C2FDA6E7C61(iParam2, iParam0);
		if (iParam3 != 0)
		{
			MAP::_0x662D364ABF16DE2F(*iParam1, iParam3);
		}
		if (iParam4 != 0)
		{
			MAP::SET_BLIP_SPRITE(*iParam1, iParam4, true);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam1, sParam5);
		}
	}
}

int func_347(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, iVar0, true);
		if (!WEAPON::IS_WEAPON_VALID(iVar1))
		{
		}
		else if (!WEAPON::_0x0556E9D2ECF39D01(iVar1))
		{
		}
		else
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_348(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, iVar0, true);
		if (!WEAPON::IS_WEAPON_VALID(iVar1))
		{
		}
		else if (!WEAPON::_0x0556E9D2ECF39D01(iVar1))
		{
		}
		else
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_349(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

char* func_350()
{
	return "Default_Shocked";
}

int func_351(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iParam0 == uParam1[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_352(int iParam0, bool bParam1)
{
	return func_637(iParam0, Global_1894899->f_2, bParam1);
}

int func_353(int iParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;

	if (func_347(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, 0))
	{
		return 1;
	}
	if (bParam2)
	{
		return 0;
	}
	if (!bParam1)
	{
		return 0;
	}
	if (!PED::IS_PED_MALE(iParam0))
	{
		return 0;
	}
	fVar1 = func_279(iParam0, 1, 1);
	if (fVar1 < 30f)
	{
		fVar0 = 1f;
	}
	else if (fVar1 < 75f)
	{
		fVar0 = 0.7f;
	}
	else if (fVar1 < 150f)
	{
		fVar0 = 0.5f;
	}
	else
	{
		fVar0 = 0.3f;
	}
	fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar2 <= fVar0)
	{
		return 1;
	}
	return 0;
}

int func_354(int iParam0, int iParam1, bool bParam2)
{
	if (func_343(iParam1))
	{
		return 1;
	}
	if (bParam2 && PED::IS_PED_IN_COMBAT(*iParam0, 0))
	{
		return 0;
	}
	return 1;
}

void func_355(int iParam0, int iParam1, float fParam2)
{
	float fVar0;

	if (PED::IS_PED_HUMAN(*iParam0))
	{
		fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
		if (fVar0 < fParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 146, false);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 148, false);
			PED::_0xC6C4E15CF7D52FEA(*iParam0, 1000f);
			LAW::_0xF0B67BAD53C35BD9(*iParam0, Global_35, *iParam0, Global_36, iParam1);
		}
	}
}

int func_356()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return 1;
	}
	return 0;
}

int func_357(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_5)
	{
		func_556(uParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		uParam1->f_12 = fParam3;
	}
	else
	{
		uParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1935630->f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam1->f_1 & 2 != 0)
			{
				if (func_568(uParam1, 4000))
				{
					if ((func_569(iParam0, Global_1935630->f_41, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_570(uParam1, iParam0)) && func_571(uParam1, iParam0))
					{
						func_573();
						*uParam2 = 2;
						func_558(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 2 != 0)
		{
			if (uParam1->f_12 < 4f)
			{
				if (func_568(uParam1, 4000))
				{
					if ((func_569(iParam0, Global_1935630->f_41, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_570(uParam1, iParam0)) && func_571(uParam1, iParam0))
					{
						func_573();
						*uParam2 = 2;
						func_558(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam1 & 131072 == 0)
						{
							if (func_572(iParam0, Global_1935630->f_41))
							{
								func_573();
								*uParam2 = 2;
								func_558(iParam0, uParam1, *uParam2);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_41 != 0)
			{
				if (Global_1935630->f_40 == 0)
				{
					if (*uParam1 & 131072 == 0)
					{
						if (func_572(iParam0, Global_1935630->f_41))
						{
							func_573();
							*uParam2 = 2;
							func_558(iParam0, uParam1, *uParam2);
							return 1;
						}
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam1 & 131072 == 0)
				{
					if (func_576())
					{
						if (func_572(iParam0, Global_1935630->f_42))
						{
							func_573();
							*uParam2 = 2;
							func_558(iParam0, uParam1, *uParam2);
							return 1;
						}
					}
				}
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_562(uParam1, 1065353216))
			{
				if (!uParam1->f_1 & 4 != 0)
				{
					if (func_563(Global_35, iParam0, uParam1))
					{
						func_573();
						*uParam2 = 4;
						func_558(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (func_564(Global_35, iParam0, uParam1))
					{
						func_573();
						*uParam2 = 256;
						func_558(iParam0, uParam1, *uParam2);
						return 1;
					}
				}
			}
		}
		if (!uParam1->f_1 & 131072 != 0)
		{
			if (func_638(iParam0, uParam1))
			{
				func_573();
				*uParam2 = 131072;
				func_558(iParam0, uParam1, *uParam2);
				return 1;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_639(iParam0, uParam1))
			{
				func_573();
				*uParam2 = 262144;
				func_558(iParam0, uParam1, *uParam2);
				return 1;
			}
		}
	}
	return 0;
}

float func_358(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && iParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

int func_359(var uParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1935630->f_34)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[iVar0])))
		{
			if (func_358(&(Global_1935630->f_34[iVar0]), *uParam0, 1, 1) < fParam2)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_360(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return true;
	}
	return ANIMSCENE::_0xD8254CB2C586412B(*uParam0, 0);
}

bool func_361(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::_0x8D81E7824B7753F7(*uParam0, sParam1, 1);
}

void func_362(int iParam0)
{
	if (!STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		STREAMING::_REQUEST_IMAP(iParam0);
	}
}

void func_363(int iParam0)
{
	if (STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		STREAMING::_REMOVE_IMAP(iParam0);
	}
}

int func_364(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIgnoreDamageChecking"))
	{
		return 0;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_35 == iVar1 || Global_1935630->f_40 == iVar1)
	{
		return 1;
	}
	return 0;
}

int func_365(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_640(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_641(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_445(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_642(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_643(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_644(iParam0);
	if (iVar5 < 1 || iVar5 > func_645(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_366(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_642(*uParam0);
	iVar1 = func_643(*uParam0);
	iVar2 = func_644(*uParam0);
	iVar3 = func_445(*uParam0);
	iVar4 = func_641(*uParam0);
	iVar5 = func_640(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_645(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_645(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_646(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_367(int iParam0, bool bParam1)
{
	return func_647(func_444(), iParam0, bParam1);
}

bool func_368(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_369(int iParam0)
{
	if (iParam0->f_19 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_383(Global_35)))
		{
			iParam0->f_19 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(67779789, Global_35, 999f, 5f, 5f, -1082130432, -1082130432, 1127481344, 0, 0, -1, -1);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(func_383(Global_35)))
	{
		EVENT::REMOVE_SHOCKING_EVENT(iParam0->f_19);
	}
}

void func_370(int iParam0, int iParam1)
{
	iParam0->f_13 = iParam1;
}

void func_371(int iParam0, int* iParam1, var uParam2, int iParam3)
{
	var uVar0;
	int iVar1;

	if (iParam0->f_14 > 0)
	{
		iVar1 = func_649(iParam0, iParam1, 15f, uParam2, &uVar0, 0, 1, 0, 0, func_648(1, 0, 0), 0, 0, 2, 1, -1082130432, 0);
		if (iVar1 != -1)
		{
			iParam0->f_15 = iVar1;
		}
	}
	switch (iParam0->f_14)
	{
		case 0:
			if (iParam3 || iParam0->f_13 > 0)
			{
				if (!DECORATOR::DECOR_EXIST_ON(*iParam0, "bScriptedILO"))
				{
					DECORATOR::DECOR_SET_BOOL(*iParam0, "bScriptedILO", true);
				}
				func_651((*uParam2)[0 /*17*/], func_650(8), "", -163964935, 0, 0, 0, 1, 0);
				func_652((*uParam2)[0 /*17*/], 1, 0);
				func_653((*uParam2)[0 /*17*/], 0);
				func_651((*uParam2)[1 /*17*/], func_650(10), "", 648122183, 0, 0, 0, 1, 0);
				func_652((*uParam2)[1 /*17*/], 1, 0);
				func_653((*uParam2)[1 /*17*/], 0);
				func_651((*uParam2)[2 /*17*/], func_650(12), "", -1616532217, 0, 0, 0, 1, 0);
				func_652((*uParam2)[2 /*17*/], 0, 0);
				func_653((*uParam2)[2 /*17*/], 1);
				func_654(iParam0, 1);
			}
			break;
		case 1:
			if (!func_253(0, 1, Global_35, 1) || !func_253(0, 1, *iParam0, 1))
			{
				func_655(uParam2);
			}
			if (iParam0->f_15 != -1)
			{
				func_76(iParam1, 0);
				func_652((*uParam2)[0 /*17*/], 0, 0);
				func_652((*uParam2)[1 /*17*/], 0, 0);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_656(iParam0)))
				{
					func_114(Global_35, *iParam0, func_656(iParam0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_654(iParam0, 2);
			}
			break;
		case 2:
			if (func_253(0, 1, Global_35, 1) && func_253(0, 1, *iParam0, 1))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_657(iParam0)))
				{
					func_114(*iParam0, Global_35, func_657(iParam0), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_654(iParam0, 3);
			}
			break;
		case 3:
			if (func_253(0, 1, Global_35, 1) && func_253(0, 1, *iParam0, 1))
			{
				func_654(iParam0, 4);
			}
			break;
		case 4:
			break;
	}
}

int func_372(int iParam0)
{
	return func_62(iParam0, 0, 1);
}

char* func_373(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			if (iParam1 < 0)
			{
				iParam1 = 5;
			}
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iParam1);
			switch (iVar0)
			{
				case 0:
					return "0038_A_M_M_BiVWorker_01_WHITE_01";
				case 1:
					return "0977_A_M_M_RoughTravellers_White_08";
				case 2:
					return "0976_A_M_M_RoughTravellers_White_07";
				case 3:
					return "0807_S_M_M_Army_01_WHITE_02";
				case 4:
					return "0957_A_M_M_Rancher_White_02";
				default:
					break;
			}
			break;
		case 2:
			if (iParam1 < 0)
			{
				iParam1 = 2;
			}
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iParam1);
			switch (iVar0)
			{
				case 0:
					return "0880_A_M_M_Civ_Poor_Asian_AVOID_04";
				case 1:
					return "0113_S_M_M_RaCRailWorker_01_ASIAN_01";
				default:
					break;
			}
			break;
	}
	return "";
}

bool func_374(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

float func_375(var uParam0)
{
	if (!func_658(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_659(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_471() - uParam0->f_1);
}

int func_376(int iParam0)
{
	return 1;
}

float func_377(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
	return func_660(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

void func_378(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_0x0C7A2289A5C4D7C9(iParam0, iParam1);
}

int func_379(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	vector3 vVar0[24];
	bool bVar3;

	iParam3 = iParam3;
	iParam4 = iParam4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam2) && (func_358(iParam2, iParam3, 1, 1) < 70f || iParam5))
	{
		StringCopy(&cVar0, sParam1, 24);
		if (bParam7)
		{
			TASK::TASK_LOOK_AT_ENTITY(iParam2, iParam3, 7000, 0, 51, 0);
			if (func_358(iParam2, iParam3, 1, 1) < 25f)
			{
				TASK::TASK_LOOK_AT_ENTITY(iParam3, iParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			bVar3 = true;
		}
		func_48(&uLocal_0);
		if (AUDIO::_0xD89504D9D7D5057D(sParam1))
		{
			if (func_661(sParam1))
			{
				return 1;
			}
		}
		else if (func_662(uParam0, cVar0, bVar3, iParam4, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

char* func_380(int iParam0, int iParam1)
{
	char cVar0[32];

	if (iParam1 == 1)
	{
		if (iParam0->f_16 == 8 && func_356())
		{
			switch (iParam0->f_1)
			{
				case 1:
					return "WHATS_GOING_ON";
				case 2:
					return "GENERIC_CURSE_MED";
				case 3:
				default:
					break;
			}
			return "GENERIC_CURSE_HIGH";
		}
		else
		{
			switch (iParam0->f_1)
			{
				case 1:
					return "GENERIC_SHOCKED_DISBELIEF";
				case 2:
					return "GENERIC_CURSE_MED";
				case 3:
				default:
					break;
			}
			return "GENERIC_CURSE_HIGH";
		}
	}
	if (func_132(iParam0, 16))
	{
		StringCopy(&cVar0, "GET_LOST", 32);
	}
	else
	{
		switch (iParam0->f_16)
		{
			case -1:
			case default:
				StringCopy(&cVar0, "PLAYER_ACTING_WEIRD", 32);
				break;
			case 1:
				StringCopy(&cVar0, "GENERIC_ANGRY_REACTION", 32);
				break;
			case 2:
				StringCopy(&cVar0, "PLEAD_HOGTIED", 32);
				break;
			case 3:
				switch (iParam0->f_1)
				{
					case 1:
						StringCopy(&cVar0, "PLAYER_ACTING_WEIRD", 32);
						break;
					case 2:
					default:
						StringCopy(&cVar0, "GENERIC_ANGRY_REACTION", 32);
						break;
				}
				break;
			case 4:
				StringCopy(&cVar0, "WHATS_YOUR_PROBLEM", 32);
				break;
			case 6:
				StringCopy(&cVar0, "PLAYER_AIMING_NOBODY", 32);
				break;
			case 5:
				StringCopy(&cVar0, "GUN", 32);
				break;
			case 8:
				switch (iParam0->f_1)
				{
					case 1:
					case default:
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
						{
							case 0:
								StringCopy(&cVar0, "WHATS_YOUR_PROBLEM", 32);
								break;
							case 1:
								StringCopy(&cVar0, "STOP_THAT", 32);
								break;
						}
						break;
					case 2:
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
						{
							case 0:
								StringCopy(&cVar0, "CUT_THAT_OUT", 32);
								break;
							case 1:
								StringCopy(&cVar0, "SHAME_ON_YOU", 32);
								break;
							case 2:
								StringCopy(&cVar0, "GENERIC_ANTISOCIAL_MALE_EVENT_COMMENT", 32);
								break;
						}
						break;
					case 3:
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
						{
							case 0:
								StringCopy(&cVar0, "FINAL_WARNING", 32);
								break;
							case 1:
								StringCopy(&cVar0, "GUARD_FINAL_WARNING", 32);
								break;
							case 2:
								StringCopy(&cVar0, "WARNED_ALREADY", 32);
								break;
							case 3:
								StringCopy(&cVar0, "GUARD_WARNED_ALREADY", 32);
								break;
							case 4:
								StringCopy(&cVar0, "GUARD_WARNING", 32);
								break;
						}
						break;
				}
				break;
			case 7:
				switch (iParam0->f_1)
				{
					case 1:
					case default:
						StringCopy(&cVar0, "STOP_THAT", 32);
						break;
					case 2:
						StringCopy(&cVar0, "CUT_THAT_OUT", 32);
						break;
					case 3:
						StringCopy(&cVar0, "CHALLENGE_THREATEN", 32);
						break;
				}
				break;
		}
	}
	return func_663(cVar0);
}

int func_381(char* sParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(sParam0) && AUDIO::_0x1ECC76792F661CF5(sParam0))
	{
		return 1;
	}
	return 0;
}

int func_382(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if (Global_1935630->f_44 == joaat("weapon_lasso") && Global_1935630->f_27)
	{
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return 0;
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1935630->f_40, 1) == iParam0)
		{
			return 0;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_358(iVar0, iParam0, 1, 1) <= 4f)
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_664(iVar0, 0)))
		{
			if (func_665(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_383(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PED::_0xD806CD2A4F2C2996(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			return iVar1;
		}
	}
	return 0;
}

float func_384(int iParam0)
{
	switch (iParam0->f_16)
	{
		case 1:
		case 2:
			return 5f;
		case 7:
			return 7.5f;
		default:
			break;
	}
	return 1.5f;
}

int func_385(var uParam0, float fParam1)
{
	if (!func_658(uParam0))
	{
		return 0;
	}
	if (func_375(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

void func_386(int iParam0, int* iParam1, var uParam2)
{
	func_666(iParam0, iParam1, uParam2, 1, 1);
	func_107(uParam2, 0, 1, 1, 1);
	if (DECORATOR::DECOR_EXIST_ON(*iParam0, "bScriptedILO"))
	{
		DECORATOR::DECOR_REMOVE(*iParam0, "bScriptedILO");
	}
	iParam0->f_14 = 0;
	iParam0->f_15 = -1;
}

int func_387()
{
	return 0;
}

int func_388(int iParam0)
{
	return 0;
}

int func_389(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar0, 1, 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(0, 648122183))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
				if (DECORATOR::DECOR_EXIST_ON(iVar1, "interactNeg"))
				{
					iVar2 = DECORATOR::DECOR_GET_INT(iVar1, "interactNeg");
				}
				iVar2++;
				*uParam0++;
				DECORATOR::DECOR_SET_INT(iVar1, "interactNeg", iVar2);
				if (iVar2 >= iParam1)
				{
					PED::SET_PED_CONFIG_FLAG(iVar1, 330, true);
				}
				return 1;
			}
		}
	}
	return 0;
}

bool func_390(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_391(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = iParam1 * 4;
	iVar1 = iParam1 * 2;
	iVar2 = iParam1 * 2;
	if ((18 + iVar0) >= Local_1157.f_690 || iVar0 < 0)
	{
	}
	if ((1 + iVar1) >= 4 || iVar1 < 0)
	{
	}
	iVar3 = func_63(func_326(9, 0, iVar1));
	iVar4 = func_63(func_326(9, 1, iVar1));
	if (&iLocal_1149[iParam1] < 11)
	{
		func_667(&iVar1, &iVar0, &iVar3, &iVar4, iParam1);
		func_668(iParam1, &iVar3);
		func_669(&iVar3, &iVar4, iParam1);
	}
	switch (&iLocal_1149[iParam1])
	{
		case 0:
			if ((ENTITY::DOES_ENTITY_EXIST((Local_1157.f_690[(16 + iVar0) /*12*/])->f_8) && ENTITY::DOES_ENTITY_EXIST((Local_1157.f_690[(17 + iVar0) /*12*/])->f_8)) && ENTITY::DOES_ENTITY_EXIST((Local_1157.f_690[(18 + iVar0) /*12*/])->f_8))
			{
				OBJECT::SET_OBJECT_PHYSICS_PARAMS((Local_1157.f_690[(16 + iVar0) /*12*/])->f_8, 500f, 1f, 1f, 1f, 1f, 1f, 1f, 1f, -1f, 0f, -1f);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS((Local_1157.f_690[(17 + iVar0) /*12*/])->f_8, 750f, 1f, 1f, 1f, 1f, 1f, 1f, 1f, -1f, 0f, -1f);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS((Local_1157.f_690[(18 + iVar0) /*12*/])->f_8, 1000f, 1f, 1f, 1f, 1f, 1f, 1f, 1f, -1f, 0f, -1f);
				ENTITY::FREEZE_ENTITY_POSITION((Local_1157.f_690[(16 + iVar0) /*12*/])->f_8, true);
				ENTITY::FREEZE_ENTITY_POSITION((Local_1157.f_690[(17 + iVar0) /*12*/])->f_8, true);
				ENTITY::FREEZE_ENTITY_POSITION((Local_1157.f_690[(18 + iVar0) /*12*/])->f_8, true);
				iLocal_75[(12 + iVar2)] = VOLUME::_CREATE_VOLUME_BOX(*(Local_1157.f_690[(17 + iVar0) /*12*/]), 0f, 0f, (Local_1157.f_690[(17 + iVar0) /*12*/])->f_3, 0.613833f, 3.325524f, 5.714088f);
				PED::_0x7C00CFC48A782DC0(&(iLocal_75[(12 + iVar2)]), (Local_1157.f_690[(17 + iVar0) /*12*/])->f_8, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				PATHFIND::_0x19C7567D2F2287D6(&(iLocal_75[(12 + iVar2)]), 7);
				iLocal_75[(13 + iVar2)] = VOLUME::_CREATE_VOLUME_BOX(*(Local_1157.f_690[(18 + iVar0) /*12*/]), 0f, 0f, (Local_1157.f_690[(18 + iVar0) /*12*/])->f_3, 1f, 7.3475f, 5f);
				PED::_0x7C00CFC48A782DC0(&(iLocal_75[(13 + iVar2)]), (Local_1157.f_690[(18 + iVar0) /*12*/])->f_8, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				PATHFIND::_0x19C7567D2F2287D6(&(iLocal_75[(13 + iVar2)]), 7);
				func_47(func_592(9), &Local_1157);
				iLocal_1149[iParam1] = 1;
			}
			break;
		case 1:
			if (PED::_0x5E420FF293EE5472())
			{
				iVar5 = func_670(9, iVar1);
				if (iVar5 == func_592(9))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar4))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar3, 0, 1);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar4, 0, 1);
						iLocal_1149[iParam1] = 2;
					}
				}
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_DEAD(iVar3) || ENTITY::IS_ENTITY_DEAD(iVar4))
			{
				iLocal_1149[iParam1] = 1;
			}
			else if (ENTITY::DOES_ENTITY_EXIST((Local_1157.f_690[(15 + iVar0) /*12*/])->f_8))
			{
				ENTITY::_0x203BEFFDBE12E96A((Local_1157.f_690[(15 + iVar0) /*12*/])->f_8, func_481(iParam0), func_482(iParam0), 1, 0, 1);
				func_673(Local_1039[(9 + iParam1) /*7*/], func_671(iParam0), func_672(iParam0));
				func_674(Local_1039[(9 + iParam1) /*7*/], iVar3, "PED1", 1);
				func_674(Local_1039[(9 + iParam1) /*7*/], iVar4, "PED2", 1);
				StringCopy(&((Local_1039[(9 + iParam1) /*7*/])->f_4), "bBreakInternalLoop", 24);
				func_675(Local_1039[(9 + iParam1) /*7*/], (Local_1157.f_690[(15 + iVar0) /*12*/])->f_8, "SAW");
				func_675(Local_1039[(9 + iParam1) /*7*/], (Local_1157.f_690[(16 + iVar0) /*12*/])->f_8, "LOG_01");
				func_675(Local_1039[(9 + iParam1) /*7*/], (Local_1157.f_690[(17 + iVar0) /*12*/])->f_8, "LOG_03");
				func_675(Local_1039[(9 + iParam1) /*7*/], (Local_1157.f_690[(18 + iVar0) /*12*/])->f_8, "LOG_02");
				iLocal_1149[iParam1] = 3;
			}
			break;
		case 3:
			if (func_519(Local_1039[(9 + iParam1) /*7*/]))
			{
				func_676(Local_1039[(9 + iParam1) /*7*/]);
				iLocal_1149[iParam1] = 4;
			}
			break;
		case 4:
			if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && func_677(iVar3, 40f, -1082130432, -1082130432, -1082130432)) || (!ENTITY::IS_ENTITY_DEAD(iVar4) && func_677(iVar4, 40f, -1082130432, -1082130432, -1082130432)))
			{
				func_633(Local_1039[(9 + iParam1) /*7*/], "bBreakInternalLoop");
				iLocal_1149[iParam1] = 5;
			}
			break;
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(iVar3))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar3, 545488006))
				{
					AUDIO::_0xCCE219C922737BFA("Wood_Tear", ENTITY::GET_ENTITY_COORDS((Local_1157.f_690[(15 + iVar0) /*12*/])->f_8, true, false), "APPLESEED_SOUNDSET", 0, 0, 1, 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar3, -1817629992))
				{
					func_109(&(iLocal_75[(13 + iVar2)]));
					iLocal_1149[iParam1] = 6;
				}
			}
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(iVar3))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar3, 545488006))
				{
					AUDIO::_0xCCE219C922737BFA("Wood_Tear", ENTITY::GET_ENTITY_COORDS((Local_1157.f_690[(15 + iVar0) /*12*/])->f_8, true, false), "APPLESEED_SOUNDSET", 0, 0, 1, 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar3, -1817629992))
				{
					func_109(&(iLocal_75[(12 + iVar2)]));
					iLocal_1149[iParam1] = 7;
				}
			}
			break;
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(iVar3) && ENTITY::HAS_ANIM_EVENT_FIRED(iVar3, -1202392137))
			{
				iLocal_1149[iParam1] = 8;
			}
			break;
		case 8:
			if (func_678(iVar4, &(Local_1039[(9 + iParam1) /*7*/]), "PED2", 0, 0, 1, 0))
			{
				PED::SET_PED_CONFIG_FLAG(iVar4, 330, false);
				if (Local_972 != iVar4)
				{
					func_679(9, 1, iVar1, 0);
				}
				iLocal_1149[iParam1] = 9;
			}
			break;
		case 9:
			if (func_678(iVar3, &(Local_1039[(9 + iParam1) /*7*/]), "PED1", 0, 0, 1, 0))
			{
				PED::SET_PED_CONFIG_FLAG(iVar3, 330, false);
				if (Local_972 != iVar3)
				{
					func_679(9, 0, iVar1, 0);
				}
				iLocal_1149[iParam1] = 10;
			}
			break;
		case 10:
			if (!ANIMSCENE::_0x25557E324489393C(&(Local_1039[(9 + iParam1) /*7*/])) || func_360(Local_1039[(9 + iParam1) /*7*/]))
			{
				func_216(Local_1039[(9 + iParam1) /*7*/]);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS((Local_1157.f_690[(16 + iVar0) /*12*/])->f_8, 500f, 1f, 1f, 1f, 1f, 0.5f, 0.5f, 0.5f, -1f, -1f, -1f);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS((Local_1157.f_690[(17 + iVar0) /*12*/])->f_8, 750f, 1f, 1f, 1f, 1f, 0.5f, 0.5f, 0.5f, -1f, -1f, -1f);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS((Local_1157.f_690[(18 + iVar0) /*12*/])->f_8, 1000f, 1f, 1f, 1f, 1f, 0.5f, 0.5f, 0.5f, -1f, -1f, -1f);
				iLocal_1149[iParam1] = 11;
			}
			break;
		case 11:
			break;
	}
}

int func_392()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;

	if (iLocal_1154 > 0)
	{
		func_680();
	}
	switch (iLocal_1154)
	{
		case 0:
			STREAMING::_0x19A6BE7D9C6884D3(-1939316457, 262148, func_451(), 0);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				iVar1 = func_681(iVar0);
				iVar2 = (810 + iVar0);
				if (!func_263(iVar2, 0))
				{
					func_62(iVar2, 1, 1);
				}
				else
				{
					iVar3 = func_63(iVar2);
					if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && func_251(iVar3, 0, 1)) && !func_115(func_682(iVar0)))
					{
						func_258(iVar3, func_373(Local_2160.f_136, 4), 0);
						if (func_164(64))
						{
							if (TASK::_0x6EEAD6AF637DA752(func_429(iVar1), func_683(), 4f, 0) && !func_422(iVar1))
							{
								vVar4 = { func_429(iVar1) };
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar3, 0, 1);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_735);
								if (TASK::_0x841475AC96E794D1(&(iLocal_1026[iVar1])))
								{
									TASK::_TASK_USE_SCENARIO_POINT(0, &(iLocal_1026[iVar1]), 0, 0, 0, 1, 0, 0, -1082130432, 0);
								}
								else
								{
									TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vVar4, 5f, 0, 0, 0, 0, 0);
								}
								TASK::CLOSE_SEQUENCE_TASK(iLocal_735);
								TASK::_TASK_PERFORM_SEQUENCE_2(iVar3, iLocal_735, 0f, 2f);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_735);
								PED::SET_PED_CONFIG_FLAG(iVar3, 146, false);
							}
							else
							{
								func_75(iVar2, 1);
								PED::SET_PED_CONFIG_FLAG(iVar3, 146, false);
							}
						}
						else
						{
							func_75(iVar2, 1);
							PED::SET_PED_CONFIG_FLAG(iVar3, 146, false);
						}
						func_35(func_682(iVar0));
					}
					iVar0++;
					iVar0 = 0;
					while (iVar0 < 5)
					{
						func_684(func_682(iVar0));
						iVar0++;
					}
					iLocal_1154 = 2;
					Jump @738; //curOff = 430
					func_685();
					func_136();
					iVar0 = (iLocal_745 % 4);
					iVar1 = func_681(iVar0);
					if (!func_458(iVar1) && !func_115(func_686(iVar0)))
					{
						func_687(iVar0);
						iVar2 = (810 + iVar0);
						if (!func_263(iVar2, 0))
						{
							func_62(iVar2, 1, 1);
						}
						iVar3 = func_63(iVar2);
						func_688(&iVar3);
						func_689(iVar0);
						func_690(&iVar3, iVar0);
						if (func_251(iVar3, 0, 1))
						{
							if (!func_19(4096) && func_691(&iVar3, Local_2581[iVar0 /*5*/], uLocal_2607[iVar0], iVar0))
							{
								func_692(&iVar3, iVar0);
								iLocal_1154 = 3;
								return 0;
							}
						}
					}
					if (((((iLocal_745 % 10) == 1 && !func_164(64)) && !func_19(4096)) && !func_19(512)) && !func_693(&Local_156))
					{
						func_694();
						iLocal_1154 = 1;
						return 0;
					}
					Jump @738; //curOff = 682
					if ((iLocal_745 % 10) == 1 && func_164(64))
					{
						func_694();
						iLocal_1154 = 2;
					}
					Jump @738; //curOff = 715
					func_48(vLocal_1117[0 /*3*/]);
					iLocal_1154 = 2;
				}
				return 0;
			}
		}

void func_393()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar2 = (810 + iVar0);
		iVar3 = func_63(iVar2);
		iVar1 = func_681(iVar0);
		if (((OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(&(iLocal_1014[iVar1])) && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(&(iLocal_1014[iVar1])) == 10) && (ENTITY::IS_ENTITY_DEAD(iVar3) || !PED::IS_PED_USING_ANY_SCENARIO(iVar3))) && !func_422(iVar1))
		{
			func_695(iVar1);
			func_466(iVar1, 0);
			if (!func_19(64) || iVar1 != 0)
			{
				func_264(iVar2, 0, 1, 0, 0);
			}
			func_696();
		}
		else
		{
			iVar0++;
		}
	}
}

void func_394(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_651((*Local_814[iParam0 /*52*/])[0 /*17*/], func_650(7), "", -163964935, 0, 0, 0, 1, 0);
	func_651((*Local_814[iParam0 /*52*/])[1 /*17*/], func_650(10), "", 648122183, 0, 0, 0, 1, 0);
	func_651((*Local_814[iParam0 /*52*/])[2 /*17*/], func_650(12), "", -1616532217, 0, 0, 0, 1, 0);
}

void func_395(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_76(Local_750[iParam0 /*21*/], 0);
	func_697(iParam0, 0);
	if (!bParam2)
	{
		if (iParam0 == 1)
		{
			func_330(524288);
		}
		else
		{
			func_50(268435456);
		}
	}
	if (bParam1)
	{
		iLocal_971 = -1;
	}
}

void func_396(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;

	if (!func_51(67108864))
	{
		return;
	}
	if (func_68(536870912))
	{
		if (DECORATOR::DECOR_EXIST_ON(*iParam0, "bScriptedILO"))
		{
			DECORATOR::DECOR_REMOVE(*iParam0, "bScriptedILO");
		}
		return;
	}
	iVar0 = func_648(1, 0, 0);
	if (func_51(134217728))
	{
		iVar0 = 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		if (func_19(4096))
		{
			PED::SET_PED_RESET_FLAG(*iParam0, 49, true);
			if (!PED::GET_PED_CONFIG_FLAG(Global_35, 514, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 514, true);
			}
		}
		else if (PED::GET_PED_CONFIG_FLAG(Global_35, 514, true))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 514, false);
		}
		PED::SET_PED_RESET_FLAG(*iParam0, 49, true);
	}
	if (iLocal_98 == 1 && !func_5(Local_2160.f_136, 128))
	{
		fLocal_749 = 8f;
	}
	iVar1 = 1;
	if (!DECORATOR::DECOR_EXIST_ON(*iParam0, "bScriptedILO"))
	{
		DECORATOR::DECOR_SET_BOOL(*iParam0, "bScriptedILO", true);
	}
	if (((((PAD::IS_CONTROL_PRESSED(0, 1287709438) || PAD::IS_CONTROL_PRESSED(0, 1499911466)) || PAD::IS_CONTROL_PRESSED(0, -209515122)) || func_698()) || func_699()) || func_700())
	{
		func_48(vLocal_1117[7 /*3*/]);
	}
	if (func_658(vLocal_1117[7 /*3*/]) && !func_385(vLocal_1117[7 /*3*/], 0.25f))
	{
		func_655(Local_814[0 /*52*/]);
	}
	iVar2 = func_649(iParam0, Local_750[0 /*21*/], fLocal_749, Local_814[0 /*52*/], &iVar1, 0, 1, 0, 0, iVar0, 0, 0, 2, 1, -1082130432, 0);
	if (iLocal_971 <= -1)
	{
		if (iVar2 != -1)
		{
		}
		iLocal_971 = iVar2;
	}
	if (!func_51(-2147483648))
	{
		if (!func_51(268435456))
		{
			if (func_253(-3.5f, 1, 0, 0))
			{
				if (iLocal_971 == 1 && !func_51(536870912))
				{
					func_114(*iParam0, Global_35, func_701(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_58(1048576);
				}
				func_395(0, 1, 0);
				func_58(268435456);
			}
		}
		else
		{
			switch (iLocal_971)
			{
				case 0:
					func_379(&(Local_2160.f_35), "LCMP_GOODBYE", Global_35, *iParam0, 0, 0, 1, 1);
					func_58(1073741824);
					func_395(0, 1, 0);
					break;
				case 1:
					if (func_51(536870912))
					{
						func_50(536870912);
						func_379(&(Local_2160.f_35), "LCMP_QUIT", Global_35, *iParam0, 0, 0, 1, 1);
						func_58(64);
						func_10(Local_2160.f_136, 262144);
						func_15(Local_2160.f_136, 256);
						func_395(0, 1, 0);
					}
					else
					{
						sVar3 = func_702();
						func_114(Global_35, *iParam0, sVar3, 0, -1082130432, MISC::GET_RANDOM_INT_IN_RANGE(1, 21), 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
						func_395(0, 0, 0);
					}
					break;
			}
		}
	}
}

void func_397(int iParam0)
{
	switch (iLocal_1148)
	{
		case 0:
			if (iLocal_98 == 1 || ENTITY::DOES_ENTITY_EXIST((Local_1157.f_690[12 /*12*/])->f_8))
			{
				if (func_164(64))
				{
					iLocal_1148 = 2;
				}
				else
				{
					iLocal_1148 = 1;
				}
			}
			break;
		case 1:
			if (func_164(64))
			{
				if (iLocal_98 != 1)
				{
					AUDIO::_0xCCE219C922737BFA("Whistle_Long", ENTITY::GET_ENTITY_COORDS((Local_1157.f_690[12 /*12*/])->f_8, true, false), "Steam_Donkey_Sounds", 0, 0, 1, 0);
				}
				iLocal_1148 = 2;
			}
			break;
		case 2:
			if (!func_164(64))
			{
				if (iLocal_98 == 1)
				{
					func_379(&(Local_2160.f_35), "LCMP_FMN_EOS", *iParam0, Global_35, 0, 0, 1, 0);
				}
				else
				{
					AUDIO::_0xCCE219C922737BFA("Whistle_Harmonic", ENTITY::GET_ENTITY_COORDS((Local_1157.f_690[12 /*12*/])->f_8, true, false), "Steam_Donkey_Sounds", 0, 0, 1, 0);
				}
				iLocal_1148 = 1;
			}
			break;
		case 3:
			break;
	}
}

void func_398()
{
}

void func_399()
{
}

int func_400(int iParam0)
{
	int iVar0[9];
	var uVar10[9];
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	var uVar24;

	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_132(&Local_972, 1))
	{
		return 0;
	}
	if (func_19(32))
	{
		return 0;
	}
	if ((iLocal_745 % 5) != 0)
	{
		return 0;
	}
	if (!func_213(Global_35, ((*Global_1392194)[Local_2160.f_136 /*10*/])->f_5, 1, 0))
	{
		return 0;
	}
	if (func_279(*iParam0, 1, 1) < (15f + 10f))
	{
		func_14(33554432);
		return 1;
	}
	if (func_19(4096))
	{
		return 0;
	}
	uVar24 = 30;
	func_291(&uVar24);
	iVar22 = func_703(&uVar10, &uVar24, 9, Global_36, 15f, 0, 1, 1, Local_1157.f_13, 1, 0, -1082130432, 0, 0);
	iVar21 = 0;
	while (iVar21 < iVar22)
	{
		if (iVar23 < 9)
		{
			iVar20 = &uVar10[iVar21];
			if (!ENTITY::IS_ENTITY_DEAD(iVar20) && PED::IS_PED_HUMAN(iVar20))
			{
				if (!DECORATOR::DECOR_EXIST_ON(iVar20, "HAS_VOICE") || !DECORATOR::DECOR_GET_BOOL(iVar20, "HAS_VOICE"))
				{
					func_258(iVar20, func_373(Local_2160.f_136, -1), 0);
				}
				iVar0[iVar23] = iVar20;
				iVar23++;
			}
		}
		iVar21++;
	}
	if (func_704(&Local_2544, &iVar0, &uLocal_2579, 1, func_19(2)))
	{
		func_199(&(Local_2544.f_34), 1);
		func_14(2);
		func_14(33554432);
		return 1;
	}
	return 0;
}

void func_401()
{
}

void func_402()
{
	if (func_705() && (MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (func_12(Local_2160.f_136))
		{
			func_14(128);
		}
	}
}

void func_403()
{
	if (!func_5(Local_2160.f_136, 4))
	{
		if (func_51(65536))
		{
			func_42(Local_2160.f_136, 4);
		}
	}
}

void func_404(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;
	int iVar14;
	vector3 vVar15;
	vector3 vVar18;
	int iVar21;

	if (func_68(32768) && iLocal_1152 < 6)
	{
		ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
		func_327(Local_1039[6 /*7*/], func_63(func_326(6, 0, 0)), "PED1");
		func_327(Local_1039[6 /*7*/], func_63(func_326(6, 1, 0)), "PED2");
		func_327(Local_1039[6 /*7*/], (Local_1157.f_690[2 /*12*/])->f_8, "LOG");
		func_216(Local_1039[6 /*7*/]);
		func_475(Local_1039[6 /*7*/], "script@proc@eventareas@appleseed@Log_Drag", "PBL_UNHOOK_STAND", 0);
		func_706();
		TASK::CLEAR_PED_TASKS(*uParam0, 1, 0);
		if (!ENTITY::IS_ENTITY_DEAD(func_63(func_326(6, 0, 0))))
		{
			TASK::TASK_STAND_STILL(func_63(func_326(6, 0, 0)), -1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(func_63(func_326(6, 1, 0))))
		{
			TASK::TASK_STAND_STILL(func_63(func_326(6, 1, 0)), -1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			TASK::TASK_STAND_STILL(*uParam0, -1);
		}
		iLocal_1152 = 6;
	}
	if (iLocal_1152 < 4)
	{
		func_707(uParam0);
	}
	switch (iLocal_1152)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(*uParam0) && PED::_0xA0BC8FAED8CFEB3C(*uParam0))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 136, true);
				func_708(*uParam0, 0, 100);
				func_708(*uParam0, 1, 100);
				TASK::TASK_STAND_STILL(*uParam0, -1);
				ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
				PED::_0xA2B8E47442C76CEC(*uParam0, -1758176869);
				PED::_0xCC8CA3E88256E58F(*uParam0, 0, 1, 1, 1, 0);
				iVar2 = 0;
				iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(*uParam0, "SKEL_ROOT");
				iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME((Local_1157.f_690[2 /*12*/])->f_8, "Log");
				iVar1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME((Local_1157.f_690[14 /*12*/])->f_8, "HrsAtt_placement01");
				ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY((Local_1157.f_690[14 /*12*/])->f_8, *uParam0, iVar2, iVar0, 0f, 0f, 0f, 0f, -0.6f, 1f, 0f, 0f, 180f, 0f, 1, 1, 0, 1, 2, 0, 1065353216, 1065353216);
				func_706();
				func_281(&Local_2160, *uParam0, 0);
				PHYSICS::ACTIVATE_PHYSICS((Local_1157.f_690[2 /*12*/])->f_8);
				func_47(func_592(6), &Local_1157);
				iLocal_1152 = 1;
			}
			break;
		case 1:
			if (PED::_0x5E420FF293EE5472())
			{
				if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					iVar4 = func_670(6, 0);
				}
				if ((iVar4 == func_592(6) && !ENTITY::IS_ENTITY_DEAD(func_63(func_326(6, 0, 0)))) && !ENTITY::IS_ENTITY_DEAD(func_63(func_326(6, 1, 0))))
				{
					func_708(*uParam0, 0, 100);
					func_708(*uParam0, 1, 100);
					iVar5 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME((Local_1157.f_690[14 /*12*/])->f_8, "HookPlacementBone01");
					iVar6 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME((Local_1157.f_690[14 /*12*/])->f_8, "HookPlacementBone02");
					ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY((Local_1157.f_690[23 /*12*/])->f_8, (Local_1157.f_690[14 /*12*/])->f_8, iVar6, iVar5, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 1, 2, 0, 1065353216, 1065353216);
					iLocal_1152 = 2;
				}
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_DEAD(func_63(func_326(6, 0, 0))) || ENTITY::IS_ENTITY_DEAD(func_63(func_326(6, 1, 0))))
			{
				iLocal_1152 = 1;
			}
			if ((!ENTITY::IS_ENTITY_DEAD(func_63(func_326(6, 0, 0))) && !ENTITY::IS_ENTITY_DEAD(func_63(func_326(6, 1, 0)))) && !ENTITY::IS_ENTITY_DEAD(*uParam0))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_63(func_326(6, 0, 0)), 0, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_63(func_326(6, 1, 0)), 0, 1);
				iLocal_1036[1] = PHYSICS::_0xE9C59F6809373A99(ENTITY::GET_ENTITY_COORDS((Local_1157.f_690[2 /*12*/])->f_8, true, false), ENTITY::GET_ENTITY_ROTATION((Local_1157.f_690[2 /*12*/])->f_8, 2), 1f, 7, 1, -1, -1082130432);
				PHYSICS::_0xE9CD9A67834985A7(&(iLocal_1036[1]), (Local_1157.f_690[2 /*12*/])->f_8, (Local_1157.f_690[23 /*12*/])->f_8, 0f, 0f, 0f, 0f, 0f, 0f, 22240, 43815);
				func_631(Local_1039[6 /*7*/], &vVar7, &vVar10);
				func_262(*uParam0, vVar7, vVar10.z, 2, 1073741824);
				func_674(Local_1039[6 /*7*/], func_63(func_326(6, 0, 0)), "PED1", 1);
				func_674(Local_1039[6 /*7*/], func_63(func_326(6, 1, 0)), "PED2", 1);
				func_675(Local_1039[6 /*7*/], (Local_1157.f_690[2 /*12*/])->f_8, "LOG");
				func_676(Local_1039[6 /*7*/]);
				iLocal_1036[0] = PHYSICS::_0xE9C59F6809373A99(ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), ENTITY::GET_ENTITY_ROTATION(*uParam0, 2), 0.5f, 5, 1, -1, -1082130432);
				PHYSICS::ATTACH_ENTITIES_TO_ROPE(&(iLocal_1036[0]), func_63(func_326(6, 1, 0)), *uParam0, 0f, 0f, 0f, 0f, 0f, 0f, 0.5f, 0, 0, "", "", 0, 37709, 53951, 0, 0, 1, 1);
				func_708(*uParam0, 0, 100);
				func_708(*uParam0, 1, 100);
				iLocal_1152 = 3;
			}
			break;
		case 3:
			if (func_19(4194304))
			{
				func_48(vLocal_1117[1 /*3*/]);
				func_215((Local_1157.f_690[2 /*12*/])->f_8, 0, 0);
				ENTITY::FREEZE_ENTITY_POSITION((Local_1157.f_690[2 /*12*/])->f_8, false);
				func_215((Local_1157.f_690[14 /*12*/])->f_8, 0, 0);
				PHYSICS::DETACH_ROPE_FROM_ENTITY(&(iLocal_1036[0]), func_63(func_326(6, 1, 0)));
				PHYSICS::ATTACH_ENTITIES_TO_ROPE(&(iLocal_1036[0]), func_63(func_326(6, 1, 0)), *uParam0, 0f, 0f, 0f, 0f, 0f, 0f, 0.5f, 0, 0, "", "", 0, 7966, 53951, 0, 0, 1, 1);
				iLocal_1152 = 6;
			}
			break;
		case 4:
			if (func_223(vLocal_1117[1 /*3*/], 3.25f))
			{
				func_633(Local_1039[6 /*7*/], "bBreakInternalLoop");
				iLocal_1152 = 5;
			}
			break;
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(func_63(func_326(6, 0, 0))) && !ENTITY::IS_ENTITY_DEAD(*uParam0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(func_63(func_326(6, 0, 0)), 2039378757))
				{
					PHYSICS::_0x814D453FCFDF119F(&(iLocal_1036[1]), 1, 1);
					PHYSICS::ACTIVATE_PHYSICS((Local_1157.f_690[2 /*12*/])->f_8);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(func_63(func_326(6, 0, 0)), -1795669989))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
					func_327(Local_1039[6 /*7*/], func_63(func_326(6, 0, 0)), "PED1");
					func_327(Local_1039[6 /*7*/], func_63(func_326(6, 1, 0)), "PED2");
					func_327(Local_1039[6 /*7*/], (Local_1157.f_690[2 /*12*/])->f_8, "LOG");
					func_216(Local_1039[6 /*7*/]);
					func_475(Local_1039[6 /*7*/], "script@proc@eventareas@appleseed@Log_Drag", "PBL_UNHOOK_STAND", 0);
					TASK::CLEAR_PED_TASKS(*uParam0, 1, 0);
					TASK::TASK_STAND_STILL(func_63(func_326(6, 0, 0)), -1);
					TASK::TASK_STAND_STILL(func_63(func_326(6, 1, 0)), -1);
					TASK::TASK_STAND_STILL(*uParam0, -1);
					iLocal_1152 = 6;
				}
			}
			break;
		case 6:
			if (func_68(32768))
			{
				if (!ENTITY::IS_ENTITY_ATTACHED((Local_1157.f_690[2 /*12*/])->f_8))
				{
					iVar14 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME((Local_1157.f_690[2 /*12*/])->f_8, "Log");
					iVar13 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME((Local_1157.f_690[14 /*12*/])->f_8, "HrsAtt_placement01");
					ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY((Local_1157.f_690[2 /*12*/])->f_8, (Local_1157.f_690[14 /*12*/])->f_8, iVar14, iVar13, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0, 1, 0, 1, 2, 0, 1065353216, 1065353216);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(func_63(func_326(6, 0, 0)), (Local_1157.f_690[2 /*12*/])->f_8, false);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(func_63(func_326(6, 1, 0)), (Local_1157.f_690[2 /*12*/])->f_8, false);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(func_63(func_326(6, 0, 0)), (Local_1157.f_690[14 /*12*/])->f_8, false);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(func_63(func_326(6, 1, 0)), (Local_1157.f_690[14 /*12*/])->f_8, false);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(func_63(func_326(6, 0, 0)), *uParam0, false);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(func_63(func_326(6, 1, 0)), *uParam0, false);
				}
				vVar15 = { func_709() };
				func_262(*uParam0, func_710(), vVar15.z, 2, 1073741824);
				func_262(func_63(func_326(6, 0, 0)), func_711(0), func_712(0), 2, 1073741824);
				func_262(func_63(func_326(6, 1, 0)), func_711(1), func_712(1), 2, 1073741824);
				func_262((Local_1157.f_690[2 /*12*/])->f_8, -1369.573f, -221.1912f, 99.5689f, 130.32f, 1, 1073741824);
				ENTITY::FREEZE_ENTITY_POSITION((Local_1157.f_690[2 /*12*/])->f_8, true);
				ANIMSCENE::RESET_ANIM_SCENE(&(Local_1039[6 /*7*/]), "PBL_UNHOOK_STAND");
				ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
				func_713(Local_1039[6 /*7*/]);
				iLocal_1152 = 7;
			}
			break;
		case 7:
			if (!func_325(Local_1039[6 /*7*/]))
			{
				if ((!ENTITY::IS_ENTITY_DEAD(func_63(func_326(6, 0, 0))) && !ENTITY::IS_ENTITY_DEAD(func_63(func_326(6, 1, 0)))) && !ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					vVar18 = { func_710() };
					vVar18.f_2 = (vVar18.z + 0.2f);
					func_673(Local_1039[6 /*7*/], vVar18, func_709());
					func_674(Local_1039[6 /*7*/], func_63(func_326(6, 0, 0)), "PED1", 1);
					func_674(Local_1039[6 /*7*/], func_63(func_326(6, 1, 0)), "PED2", 1);
					if (func_519(Local_1039[6 /*7*/]))
					{
						func_676(Local_1039[6 /*7*/]);
					}
				}
			}
			else
			{
				iLocal_1152 = 8;
			}
			break;
		case 8:
			if (!ENTITY::IS_ENTITY_DEAD(func_63(func_326(6, 0, 0))))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(func_63(func_326(6, 0, 0)), 2038561225))
				{
					if (ENTITY::DOES_ENTITY_EXIST((Local_1157.f_690[2 /*12*/])->f_8) && ENTITY::IS_ENTITY_ATTACHED((Local_1157.f_690[2 /*12*/])->f_8))
					{
						ENTITY::DETACH_ENTITY((Local_1157.f_690[2 /*12*/])->f_8, false, true);
					}
					if (ENTITY::DOES_ENTITY_EXIST((Local_1157.f_690[23 /*12*/])->f_8) && ENTITY::IS_ENTITY_ATTACHED((Local_1157.f_690[23 /*12*/])->f_8))
					{
						ENTITY::DETACH_ENTITY((Local_1157.f_690[23 /*12*/])->f_8, false, true);
					}
					ENTITY::ATTACH_ENTITY_TO_ENTITY((Local_1157.f_690[23 /*12*/])->f_8, func_63(func_326(6, 0, 0)), ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_63(func_326(6, 0, 0)), "PH_R_Hand"), 0f, 0.1f, 0.1f, 0f, 90f, -160f, 1, 1, 0, 1, 2, 1, 0, 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(func_63(func_326(6, 0, 0)), -276949338))
				{
					func_215((Local_1157.f_690[23 /*12*/])->f_8, 0, 1);
				}
			}
			if (func_360(Local_1039[6 /*7*/]))
			{
				iLocal_1152 = 9;
			}
			break;
		case 9:
			if (func_360(Local_1039[6 /*7*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					TASK::CLEAR_PED_TASKS(*uParam0, 1, 0);
					PHYSICS::DELETE_ROPE(iLocal_1036[0]);
					PED::SET_PED_CONFIG_FLAG(*uParam0, 136, false);
					func_215((Local_1157.f_690[14 /*12*/])->f_8, 0, 1);
					PHYSICS::ACTIVATE_PHYSICS((Local_1157.f_690[14 /*12*/])->f_8);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_735);
					TASK::TASK_MOUNT_ANIMAL(0, *uParam0, -1, -1, 1f, 1, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_714(), 1f, -1, 0.25f, false, func_715());
					TASK::CLOSE_SEQUENCE_TASK(iLocal_735);
					TASK::TASK_PERFORM_SEQUENCE(func_63(func_326(6, 1, 0)), iLocal_735);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_735);
				}
				if (!ENTITY::IS_ENTITY_DEAD(func_63(func_326(6, 0, 0))))
				{
					func_679(6, 0, 0, 0);
				}
				iLocal_1152 = 11;
			}
			break;
		case 11:
			if (!ENTITY::IS_ENTITY_DEAD(func_63(func_326(6, 1, 0))) && !func_129(func_63(func_326(6, 1, 0)), 242628503))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					iVar21 = TASK::_0xF533D68FF970D190(func_714(), -1805387726, 1.5f, 1, 1);
					if (TASK::_0x841475AC96E794D1(iVar21))
					{
						TASK::TASK_HITCH_ANIMAL(func_63(func_326(6, 1, 0)), iVar21, 33554432);
					}
					else
					{
						TASK::TASK_DISMOUNT_ANIMAL(func_63(func_326(6, 1, 0)), 0, func_716(), 0, 0, 0);
						PHYSICS::_0x06AADE17334F7A40(*uParam0, -1399.61f, -246.8489f, 99.33929f);
					}
				}
				iLocal_1152 = 10;
			}
			break;
		case 10:
			if (!func_129(func_63(func_326(6, 1, 0)), -850912737) && !func_129(func_63(func_326(6, 1, 0)), 501393341))
			{
				func_679(6, 1, 0, 0);
				PHYSICS::_0x06AADE17334F7A40(*uParam0, func_717());
				iLocal_1152 = 12;
			}
			break;
		case 12:
			break;
	}
}

char* func_405()
{
	return "LOG_BLIP_FM";
}

void func_406(int iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6)
{
	int iVar0;

	bParam3 = bParam3;
	if (*bParam4)
	{
		if (func_213(Global_35, ((*Global_1392194)[uParam2->f_136 /*10*/])->f_6, 1, 0))
		{
			*bParam4 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (bParam5)
				{
					iVar0 = 580546400;
				}
				else
				{
					iVar0 = 0;
				}
				func_346(iParam0, iParam1, -89429847, iVar0, 0, sParam6);
			}
		}
	}
}

void func_407()
{
	if (func_19(64))
	{
		OBJECT::SET_FORCE_OBJECT_THIS_FRAME(func_718(), 10f);
	}
}

int func_408(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar6;
	char[] cVar7[8];
	int iVar8;

	func_719();
	func_720();
	func_721();
	func_722();
	iVar0 = func_681(0);
	iVar1 = 810;
	iVar2 = func_63(iVar1);
	func_723(iParam0, iParam1, &iVar2, iLocal_2479[2], iLocal_2479[3]);
	switch (iLocal_2317)
	{
		case 0:
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(*iParam1) && iLocal_1154 >= 2)
			{
				func_724(*iParam1, 1);
				ENTITY::FREEZE_ENTITY_POSITION((Local_1157.f_690[24 /*12*/])->f_8, true);
				ENTITY::SET_ENTITY_VISIBLE((Local_1157.f_690[24 /*12*/])->f_8, false);
				ENTITY::SET_ENTITY_COLLISION((Local_1157.f_690[24 /*12*/])->f_8, false, false);
				ENTITY::SET_CAN_CLIMB_ON_ENTITY((Local_1157.f_690[24 /*12*/])->f_8, false);
				ENTITY::_0x203BEFFDBE12E96A((Local_1157.f_690[24 /*12*/])->f_8, *(Local_1157.f_690[24 /*12*/]), (Local_1157.f_690[24 /*12*/])->f_3, 1, 0, 1);
				iLocal_75[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1388.585f, -272.0242f, 98.8074f, 0f, 0f, 84.9909f, 12.74726f, 17.5874f, 14f, "volAccident");
				iLocal_75[10] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1388.585f, -272.0242f, 98.8074f, 0f, 0f, 84.99091f, 24.8216f, 45f, 14f, "volAccidentTrot");
				iLocal_75[9] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1388.585f, -272.0242f, 98.8074f, 0f, 0f, 84.99091f, 44.1305f, 80f, 14f, "volAccidentCanter");
				iLocal_75[20] = VOLUME::_0x0EB78C2B156635B1(665633627, -1391.962f, -270.2142f, 99.82114f, 0f, 0f, 15.0005f, 1.639143f, 1.521353f, 1.523817f);
				POPULATION::_0xB56D41A694E42E86(&(iLocal_75[4]), 534496, 0, 0, -1, -1, 2);
				POPULATION::_0x18262CAFEBB5FBE1(&(iLocal_75[4]), 0, 0, 0, -1, -1, 0);
				PATHFIND::_0x19C7567D2F2287D6(&(iLocal_75[4]), 7);
				iLocal_75[17] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1391.082f, -270.6321f, 98.77602f, 0f, 0f, -4.499413f, 22.57252f, 0.586106f, 4f, "Appleseed - volAccidentBlocking");
				PATHFIND::_0x19C7567D2F2287D6(&(iLocal_75[17]), 7);
				POPULATION::_0xB56D41A694E42E86(&(iLocal_75[17]), 534496, 0, 0, -1, -1, 2);
				POPULATION::_0x18262CAFEBB5FBE1(&(iLocal_75[17]), 0, 0, 0, -1, -1, 0);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam0, 0, 1);
				func_725(*iParam0, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam1, 0, 1);
				func_725(*iParam1, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar2, 0, 1);
				func_725(iVar2, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(&(iLocal_2479[2]), 0, 1);
				func_725(&(iLocal_2479[2]), 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(&(iLocal_2479[3]), 0, 1);
				func_725(&(iLocal_2479[3]), 1);
				func_395(0, 1, 1);
				func_674(Local_1039[2 /*7*/], *iParam0, "FOREMAN", 1);
				func_674(Local_1039[2 /*7*/], *iParam1, "VICTIM", 1);
				func_674(Local_1039[2 /*7*/], iVar2, "PED1", 1);
				func_674(Local_1039[2 /*7*/], &(iLocal_2479[2]), "PED2", 1);
				func_674(Local_1039[2 /*7*/], &(iLocal_2479[3]), "PED3", 1);
				func_674(Local_1039[2 /*7*/], Global_35, "player", 1);
				func_675(Local_1039[2 /*7*/], (Local_1157.f_690[6 /*12*/])->f_8, "MONEY");
				func_675(Local_1039[2 /*7*/], (Local_1157.f_690[7 /*12*/])->f_8, "AXE1");
				func_675(Local_1039[2 /*7*/], (Local_1157.f_690[8 /*12*/])->f_8, "AXE2");
				func_675(Local_1039[2 /*7*/], (Local_1157.f_690[9 /*12*/])->f_8, "AXE3");
				func_675(Local_1039[2 /*7*/], (Local_1157.f_690[10 /*12*/])->f_8, "CIGARETTE");
				func_675(Local_1039[2 /*7*/], (Local_1157.f_690[24 /*12*/])->f_8, "TREE");
				func_726(Local_1039[2 /*7*/], "PBL_LIFT_SUCCESS");
				func_726(Local_1039[2 /*7*/], "PBL_IMPATIENT");
				func_726(Local_1039[2 /*7*/], "PBL_COMBAT_L");
				func_726(Local_1039[2 /*7*/], "PBL_COMBAT_R");
				func_726(Local_1039[2 /*7*/], "PB_VIC_BRKOUT");
				func_65(&(Local_2160.f_35), *iParam0, "EA_LCMP_Foreman", 0);
				func_65(&(Local_2160.f_35), iVar2, "LOG_WORKER_3", 0);
				func_65(&(Local_2160.f_35), &(iLocal_2479[2]), "LCMP_WITNESS1", 0);
				func_65(&(Local_2160.f_35), *iParam1, "LOGGING_VICTIM", 0);
				func_727(&(Local_2160.f_35), "LCMPF_IG3", 0);
				func_727(&(Local_2160.f_35), "LCMP_IG_TREE_P2", 0);
				AUDIO::PREPARE_MUSIC_EVENT("SP_EVENT_AREA_APPLESEED_2_START");
				func_126(1);
				if (iLocal_98 == 2 && func_9(1, 2))
				{
					ENTITY::PLAY_ENTITY_ANIM((Local_1157.f_690[4 /*12*/])->f_8, func_728(), func_729(), 0.3f, true, true, false, 0f, 0);
				}
				func_676(Local_1039[2 /*7*/]);
				func_69(67108864);
				iLocal_2317 = 2;
			}
			break;
		case 2:
			if (func_730(iParam1, iVar0))
			{
				vVar3 = { func_731(Global_35, 2f) };
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, func_718(), false) < 60f)
				{
					func_732(1048576000, 1028443341, 0, 106);
					func_14(4096);
					func_126(2);
					func_14(32);
					func_48(vLocal_1117[4 /*3*/]);
					func_379(&(Local_2160.f_35), "LCMPF_IG3", iVar2, *iParam0, 0, 0, 1, 1);
					func_692(&iVar2, 0);
					func_687(0);
					iLocal_2317 = 1;
				}
			}
			else if (func_513(func_429(iVar0), 1) <= 63f)
			{
				if (!func_658(vLocal_1117[4 /*3*/]))
				{
					func_48(vLocal_1117[4 /*3*/]);
				}
				else if (func_659(vLocal_1117[4 /*3*/]))
				{
					func_733(vLocal_1117[4 /*3*/]);
				}
				if (func_385(vLocal_1117[4 /*3*/], 7.5f))
				{
					func_58(2097152);
					iLocal_2317 = 10;
				}
			}
			else if (func_658(vLocal_1117[4 /*3*/]) && !func_659(vLocal_1117[4 /*3*/]))
			{
				func_734(vLocal_1117[4 /*3*/]);
			}
			break;
		case 1:
			func_732(1048576000, 1028443341, 0, 106);
			if (func_223(vLocal_1117[4 /*3*/], 2f))
			{
				func_633(Local_1039[2 /*7*/], "bBreakInternalLoop");
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar2, -1318036203))
			{
				func_214("SP_EVENT_AREA_APPLESEED_2_START", 0);
				PED::SET_PED_CONFIG_FLAG(*iParam1, 277, true);
				PED::SET_PED_CONFIG_FLAG(*iParam1, 146, true);
				func_735(Local_1039[2 /*7*/], "bBreakInternalLoop");
				func_736();
				iLocal_1154 = 3;
				iLocal_2317 = 4;
			}
			break;
		case 4:
			func_732(1048576000, 1028443341, 0, 106);
			func_127();
			if (func_737(20))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 318, true);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam1, 935159765))
			{
				func_69(131072);
				PED::_0x735662994E60A710(*iParam1, 1);
				PED::_0x897934E868EDDD6C(*iParam1, 55120, 0.2f, 0f, 0f);
				PED::_0x91BAB9E064F036CD(*iParam1, 0.5f);
				func_328(iParam1);
				func_629(*iParam1, "SCREAM_TERROR", 1017772929, 0, 1, 0, 0, 1);
				MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
				MAP::_0x0C7A2289A5C4D7C9(-890428877, *iParam1);
			}
			if (!func_19(512) && ENTITY::HAS_ANIM_EVENT_FIRED(*iParam1, 442538763))
			{
				func_346(*iParam1, uLocal_2489[0], -89429847, 580546400, 0, "LOG_BLIP_VICT");
				PED::_0x735662994E60A710(*iParam1, 1);
				PED::_0xFFD54D9FE71B966A(*iParam1, 0, 55120, 0.2f, 0f, 0f, 0f, 0f, -1f, 0.5f);
				PED::_0x66B1CB778D911F49(*iParam1, 0.5f);
				func_14(512);
				PED::_0xAE6004120C18DF97(*iParam1, 0, 0);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(*iParam1, 319570);
				ENTITY::FREEZE_ENTITY_POSITION(*iParam1, true);
				PED::_0x1902C4CFCC5BE57C(*iParam1, 306062959);
				PED::_0xCC8CA3E88256E58F(*iParam1, 0, 1, 1, 1, 0);
				func_379(&(Local_2160.f_35), "LCMP_IG_TFHEL", *iParam0, *iParam1, 0, 0, 1, 1);
				MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
				MAP::_0x0C7A2289A5C4D7C9(-890428877, *iParam1);
				func_629(*iParam1, "SCREAM_TERROR", 1017772929, 0, 1, 0, 0, 1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, 265434504))
			{
				PED::APPLY_DAMAGE_TO_PED(*iParam1, 50, 0, 55120, 0);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, 1836246720))
			{
				func_109(&(iLocal_75[20]));
				iLocal_75[6] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1391.421f, -270.6241f, 99.11503f, 0f, 0f, -4.797453f, 21.93634f, 0.903251f, 1.400946f, "Appleseed - volTreeNav");
				PATHFIND::_0x19C7567D2F2287D6(&(iLocal_75[6]), 7);
				func_96(uLocal_2489[0]);
				func_48(vLocal_1117[3 /*3*/]);
				iLocal_2317 = 5;
			}
			break;
		case 5:
			func_732(1048576000, 1028443341, 0, 106);
			func_127();
			if (func_737(20))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 318, true);
			}
			if (func_738(Local_1039[2 /*7*/], "bBreakInternalLoop"))
			{
				func_735(Local_1039[2 /*7*/], "bBreakInternalLoop");
			}
			func_739(&(Local_2160.f_32), &(Local_2160.f_33));
			if (func_741(&(Local_2160.f_32), "LOG_CTXTHLP", func_740(), 0, -719620017, 1.5f, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, -820096546, 0))
			{
				MAP::DISPLAY_RADAR(false);
				bVar6 = true;
				func_265(vLocal_1117[3 /*3*/]);
			}
			else if (func_741(&(Local_2160.f_33), "LOG_CTXTHLP", func_742(), 0, -719620017, 1.5f, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, -820096546, 0))
			{
				func_69(256);
				MAP::DISPLAY_RADAR(false);
				bVar6 = true;
				func_265(vLocal_1117[3 /*3*/]);
			}
			if (func_223(vLocal_1117[3 /*3*/], 7.5f))
			{
				iLocal_2317 = 6;
				func_48(vLocal_1117[1 /*3*/]);
				func_743();
			}
			if (func_223(vLocal_1117[1 /*3*/], 7.5f))
			{
				iLocal_2317 = 9;
			}
			if (bVar6)
			{
				if (Global_36.f_1 > func_744())
				{
					func_69(256);
				}
				func_302(&(Local_2160.f_32), 1, 1);
				func_302(&(Local_2160.f_33), 1, 1);
				func_96(&iLocal_2413);
				func_48(vLocal_1117[3 /*3*/]);
				func_265(vLocal_1117[1 /*3*/]);
				func_10(Local_2160.f_136, 128);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 4352, 0);
				func_43(&Local_2160, 65536);
				PATHFIND::_0x2C87C3E1C7B96EE2(&(iLocal_75[4]));
				func_58(16384);
				func_745(&Local_698);
				Local_698.f_1 = Global_35;
				if (func_68(256))
				{
					Local_698.f_8 = { func_746(Local_1039[4 /*7*/], "ARTHUR", func_474(4)) };
					Local_698.f_19 = func_747(Local_1039[4 /*7*/], "ARTHUR", func_474(4));
				}
				else
				{
					Local_698.f_8 = { func_746(Local_1039[3 /*7*/], "ARTHUR", func_474(3)) };
					Local_698.f_19 = func_747(Local_1039[3 /*7*/], "ARTHUR", func_474(3));
				}
				Local_698.f_17 = 0.15f;
				Local_698.f_18 = 0.2f;
				func_143(&(Local_698.f_23), 17425);
				func_43(&Local_2160, 65536);
				func_748(&Local_698, 129);
				func_293(&Local_972, 4);
				iLocal_2317 = 7;
			}
			break;
		case 6:
			func_732(1048576000, 1028443341, 0, 106);
			if (func_737(20))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 318, true);
			}
			func_632(Local_1039[2 /*7*/], "PBL_IMPATIENT", 1);
			func_633(Local_1039[2 /*7*/], "bBreakInternalLoop");
			func_379(&(Local_2160.f_35), "LCMP_IG_TFSOM", *iParam0, Global_35, 0, 0, 1, 1);
			iLocal_2317 = 5;
			break;
		case 7:
			func_732(1048576000, 1028443341, 0, 106);
			if (func_737(20))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 318, true);
			}
			if (func_748(&Local_698, 129))
			{
				if (func_68(256))
				{
					func_674(Local_1039[4 /*7*/], Global_35, "ARTHUR", 1);
					func_676(Local_1039[4 /*7*/]);
					PATHFIND::_0x19C7567D2F2287D6(&(iLocal_75[4]), 7);
					iLocal_2317 = 8;
				}
				else
				{
					func_674(Local_1039[3 /*7*/], Global_35, "ARTHUR", 1);
					func_676(Local_1039[3 /*7*/]);
					PATHFIND::_0x19C7567D2F2287D6(&(iLocal_75[4]), 7);
					iLocal_2317 = 8;
				}
			}
			break;
		case 8:
			func_732(1048576000, 1028443341, 0, 106);
			if (func_737(20))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 318, true);
			}
			if (func_361(Local_1039[2 /*7*/], "LIFT_LOOP") && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 331855897))
			{
				if (!func_301(Local_2160.f_32))
				{
					Local_2160.f_32 = func_749("LOG_CTXTHLP", -1300031296, 1, 0, 0, 9, 570, 4000, 10, 1073741824, 1704213876, 0);
					func_750("LOG_HELP_MASH", 10000, 0, 0, 0, 1);
					func_10(Local_2160.f_136, 64);
					func_202(Local_2160.f_136);
					func_126(16);
					func_48(vLocal_1117[3 /*3*/]);
				}
				if (func_751(Local_2160.f_32, 1))
				{
					func_752(Local_2160.f_32, 1);
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(0, -1300031296) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, -1300031296))
				{
					PAD::SET_PAD_SHAKE(0, 250, 50);
				}
				if (func_753(Local_2160.f_32, 1) || func_385(vLocal_1117[3 /*3*/], 15f))
				{
					func_265(vLocal_1117[3 /*3*/]);
					func_754(1);
					func_555(13, 0, 0, 0, *iParam0, 0, 1065353216, 0);
					func_302(&(Local_2160.f_32), 1, 1);
					func_50(16384);
					Local_972.f_3 = 3;
					iLocal_2317 = 9;
				}
			}
			break;
		case 9:
			func_302(&(Local_2160.f_32), 1, 1);
			func_302(&(Local_2160.f_33), 1, 1);
			func_96(&iLocal_2413);
			func_743();
			if (func_737(20))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 318, true);
			}
			if (func_325(Local_1039[3 /*7*/]))
			{
				func_633(Local_1039[3 /*7*/], "bBreakInternalLoop");
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				func_80(&Local_2160, 65536);
			}
			if (func_325(Local_1039[4 /*7*/]))
			{
				func_633(Local_1039[4 /*7*/], "bBreakInternalLoop");
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				func_80(&Local_2160, 65536);
			}
			if (func_325(Local_1039[2 /*7*/]))
			{
				func_632(Local_1039[2 /*7*/], "PBL_LIFT_SUCCESS", 1);
				func_633(Local_1039[2 /*7*/], "bBreakInternalLoop");
				func_379(&(Local_2160.f_35), "LCMP_IG_TFHLS", *iParam0, *iParam1, 0, 0, 1, 1);
				PED::_0xAE6004120C18DF97(*iParam1, 0, 1);
				AUDIO::_0xCCE219C922737BFA("LOG_LIFT", ENTITY::GET_ENTITY_COORDS((Local_1157.f_690[24 /*12*/])->f_8, true, false), "APPLESEED_SOUNDSET", 0, 0, 1, 0);
				func_330(131072);
			}
			func_126(512);
			if (!VOLUME::_0x92A78D0BEDB332A3(&(iLocal_75[20])))
			{
				iLocal_75[20] = VOLUME::_0x0EB78C2B156635B1(665633627, -1391.903f, -269.6049f, 99.57925f, 0f, 0f, 0f, 0.702347f, 0.731577f, 1.200654f);
			}
			iLocal_2317 = 11;
			break;
		case 10:
			if (func_737(20))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 318, true);
			}
			func_327(Local_1039[2 /*7*/], *iParam1, "Victim");
			TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(*iParam1, func_270(), 0, 0, 0);
			func_216(Local_1039[2 /*7*/]);
			OBJECT::DELETE_OBJECT(&((Local_1157.f_690[7 /*12*/])->f_8));
			OBJECT::DELETE_OBJECT(&((Local_1157.f_690[8 /*12*/])->f_8));
			OBJECT::DELETE_OBJECT(&((Local_1157.f_690[9 /*12*/])->f_8));
			OBJECT::DELETE_OBJECT(&((Local_1157.f_690[10 /*12*/])->f_8));
			OBJECT::DELETE_OBJECT(&((Local_1157.f_690[24 /*12*/])->f_8));
			iLocal_2317 = 11;
			break;
		case 11:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 886554851))
			{
				PAD::SET_PAD_SHAKE(0, 250, 100);
			}
			func_106(1);
			if (((func_68(1) && func_68(2)) && func_68(4)) && func_68(8))
			{
				iLocal_2317 = 14;
			}
			if (!TASK::GET_IS_TASK_ACTIVE(Global_35, 3))
			{
				MAP::DISPLAY_RADAR(true);
			}
			if (ENTITY::DOES_ENTITY_EXIST((Local_1157.f_690[24 /*12*/])->f_8))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED((Local_1157.f_690[24 /*12*/])->f_8, -1545720465))
				{
					AUDIO::_0xCCE219C922737BFA("LOG_PUT_DOWN", ENTITY::GET_ENTITY_COORDS((Local_1157.f_690[24 /*12*/])->f_8, true, false), "APPLESEED_SOUNDSET", 0, 0, 1, 0);
					func_214("SP_EVENT_AREA_APPLESEED_2_IDLE", 0);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED((Local_1157.f_690[24 /*12*/])->f_8, 745376786))
				{
					ENTITY::SET_CAN_CLIMB_ON_ENTITY((Local_1157.f_690[24 /*12*/])->f_8, true);
					ENTITY::FREEZE_ENTITY_POSITION((Local_1157.f_690[24 /*12*/])->f_8, true);
					func_327(Local_1039[2 /*7*/], (Local_1157.f_690[24 /*12*/])->f_8, "TREE");
				}
			}
			if (!func_68(1))
			{
				if (func_678(*iParam0, &(Local_1039[2 /*7*/]), "FOREMAN", -1795669989, 0, 1, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
					{
						func_327(Local_1039[2 /*7*/], *iParam0, "FOREMAN");
						func_725(*iParam0, 0);
					}
					func_126(4096);
					func_69(1);
					if (!func_51(2097152))
					{
						iLocal_2317 = 12;
					}
				}
			}
			if (!func_68(2))
			{
				if (func_678(iVar2, &(Local_1039[2 /*7*/]), "PED1", -1795669989, 0, 1, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar2))
					{
						func_327(Local_1039[2 /*7*/], iVar2, "PED1");
						func_725(iVar2, 0);
						func_75(iVar1, 1);
					}
					func_69(2);
				}
			}
			if (!func_68(4))
			{
				if (func_678(&(iLocal_2479[2]), &(Local_1039[2 /*7*/]), "PED2", -1795669989, 0, 1, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_2479[2])))
					{
						func_327(Local_1039[2 /*7*/], &(iLocal_2479[2]), "PED2");
						func_725(&(iLocal_2479[2]), 1);
						TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(&(iLocal_2479[2]), func_270(), 0, 0, 0);
					}
					func_69(4);
				}
			}
			if (!func_68(8))
			{
				if (func_678(&(iLocal_2479[3]), &(Local_1039[2 /*7*/]), "PED3", -1795669989, 0, 1, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(&(iLocal_2479[3])))
					{
						func_327(Local_1039[2 /*7*/], &(iLocal_2479[3]), "PED3");
						func_725(&(iLocal_2479[3]), 1);
						TASK::TASK_USE_RANDOM_SCENARIO_IN_GROUP(&(iLocal_2479[3]), func_270(), 0, 0, 0);
					}
					func_69(8);
				}
			}
			break;
		case 12:
			func_14(2);
			if (!ENTITY::IS_ENTITY_DEAD(*iParam0) && func_358(*iParam0, Global_35, 0, 1) < 40f)
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, Global_35, -1, -1082130432, -1082130432, -1082130432);
				if (func_9(Local_2160.f_136, 64))
				{
					cVar7 = "LOG_ACCPH";
				}
				else
				{
					cVar7 = "LOG_ACCPN";
				}
				func_379(&(Local_2160.f_35), cVar7, *iParam0, Global_35, 0, 0, 1, 1);
			}
			iLocal_2317 = 11;
			break;
		case 14:
			if (func_253(-3.5f, 1, 0, 0))
			{
				func_126(32);
				func_126(2);
				if (func_263(Local_2160.f_138, 0))
				{
					func_75(Local_2160.f_138, 1);
					func_76(Local_750[0 /*21*/], 0);
				}
				func_35(256);
				func_48(vLocal_1117[0 /*3*/]);
				iVar8 = 0;
				while (iVar8 < iLocal_2543)
				{
					func_755(&iVar8);
					iLocal_2527[iVar8] = -1;
					iVar8++;
				}
				iLocal_2543 = 0;
				func_110();
				func_330(67108864);
				iLocal_2317 = 13;
			}
			break;
		case 13:
			func_243(iVar2, 1, 1);
			func_666(&iVar2, Local_750[1 /*21*/], Local_814[1 /*52*/], 0, 1);
			func_243(&(iLocal_2479[2]), 1, 1);
			func_666(iLocal_2479[2], Local_750[1 /*21*/], Local_814[1 /*52*/], 0, 1);
			func_243(&(iLocal_2479[3]), 1, 1);
			func_666(iLocal_2479[3], Local_750[1 /*21*/], Local_814[1 /*52*/], 0, 1);
			func_756(0, 0, 1);
			func_395(0, 1, 0);
			if (func_51(2097152))
			{
				func_126(64);
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_409(int iParam0)
{
	if (func_213(*iParam0, &(iLocal_75[0]), 1, 0) && iLocal_2319 < 5)
	{
		iLocal_2319 = 5;
	}
	switch (iLocal_2319)
	{
		case 0:
			func_394(0);
			func_757(1, 0);
			func_395(0, 1, 0);
			func_758(0, 0);
			iLocal_2319 = 2;
			break;
		case 2:
			switch (iLocal_971)
			{
				case 1:
					func_379(&(Local_2160.f_35), "LCMP_IG_TFPLNF", Global_35, *iParam0, 0, 0, 1, 1);
					func_395(0, 1, 0);
					iLocal_2319 = 5;
					break;
			}
			break;
		case 5:
			break;
	}
}

void func_410(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_68(65536) && iLocal_2318 < 5)
	{
		func_395(1, 0, 0);
		func_756(1, 0, 1);
		iLocal_2318 = 5;
	}
	if (iLocal_2318 >= 2)
	{
		iVar1 = 1;
		iVar0 = func_649(uParam0, Local_750[1 /*21*/], 8f, Local_814[1 /*52*/], &iVar1, 0, 1, 0, 0, func_648(1, 0, 0) | 2048, 0, 0, 2, 1, -1082130432, 0);
	}
	switch (iLocal_2318)
	{
		case 0:
			func_394(1);
			func_395(1, 0, 0);
			func_726(Local_1039[2 /*7*/], "PB_VIC_BRKOUT");
			func_726(Local_1039[2 /*7*/], "PB_HANDOVER_R");
			func_726(Local_1039[2 /*7*/], "PB_HANDOVER_L");
			func_726(Local_1039[2 /*7*/], "PB_HANDOVER_N");
			if (!VOLUME::_0x92A78D0BEDB332A3(&(iLocal_75[20])))
			{
				iLocal_75[20] = VOLUME::_0x0EB78C2B156635B1(665633627, -1391.903f, -269.6049f, 99.57925f, 0f, 0f, 0f, 0.702347f, 0.731577f, 1.200654f);
			}
			func_48(vLocal_1117[1 /*3*/]);
			if (!VOLUME::_0x92A78D0BEDB332A3(&(iLocal_75[19])))
			{
				iLocal_75[19] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1391.695f, -268.6573f, 99.66403f, 0f, 0f, -3.999926f, 4.302533f, 3.265524f, 2.894566f, "EA LCMP - volGiveMoney");
			}
			iLocal_2318 = 1;
			break;
		case 1:
			if ((func_253(0, 1, 0, 0) && func_385(vLocal_1117[1 /*3*/], 1.5f)) && func_279(*uParam0, 1, 1) < 10f)
			{
				func_759(uParam0, 0, 0, 1, 0, 0, 0, 1);
				func_732(1048576000, 1028443341, 0, 106);
				if (func_9(Local_2160.f_136, 128))
				{
					func_379(&(Local_2160.f_35), "LCMPF_IG_TFRSH", *uParam0, Global_35, 0, 0, 1, 1);
				}
				else
				{
					func_379(&(Local_2160.f_35), "LCMPF_IG_TFRSN", *uParam0, Global_35, 0, 0, 1, 1);
				}
				PED::SET_PED_CONFIG_FLAG(*uParam0, 277, false);
				iLocal_2318 = 2;
			}
			break;
		case 2:
			if (func_279(*uParam0, 1, 1) < 20f)
			{
				func_732(1048576000, 1028443341, 0, 106);
			}
			if (AUDIO::IS_ANY_SPEECH_PLAYING(*uParam0))
			{
				func_759(uParam0, 0, 0, 1, 0, 0, 0, 1);
			}
			func_760(uParam0);
			switch (iVar0)
			{
				case 0:
					func_395(1, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST((Local_1157.f_690[6 /*12*/])->f_8))
					{
						ENTITY::SET_ENTITY_COORDS((Local_1157.f_690[6 /*12*/])->f_8, func_479(), true, false, true, true);
					}
					func_745(&Local_2613);
					Local_2613.f_1 = Global_35;
					func_761(&(Local_2613.f_8), &(Local_698.f_19), uParam0);
					Local_2613.f_18 = 0.2f;
					Local_2613.f_17 = 0.15f;
					Local_2613.f_21 = 1f;
					func_143(&(Local_2613.f_23), 17920);
					StringCopy(&((Local_1039[2 /*7*/])->f_4), "RECOVERY_BOOL", 24);
					func_43(&Local_2160, 65536);
					func_748(&Local_2613, 106);
					iLocal_2318 = 3;
					break;
				case 1:
					func_379(&(Local_2160.f_35), "LCMPF_IG_TFPLRN", Global_35, *uParam0, 0, 0, 1, 1);
					func_395(1, 0, 0);
					func_762(1, 0, 0);
					iLocal_2318 = 6;
					break;
			}
			break;
		case 3:
			if (func_748(&Local_2613, 106) && func_763(Local_1039[2 /*7*/]))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
				func_80(&Local_2160, 65536);
				func_764(Local_1039[2 /*7*/], 1, 1);
				func_379(&(Local_2160.f_35), "LCMPF_IG_TFPLRP", Global_35, *uParam0, 0, 0, 1, 1);
				iLocal_2318 = 4;
			}
			break;
		case 4:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1898385492))
			{
				func_765(Local_1039[2 /*7*/]);
				func_766(500, 0, 0, 1, 1);
				func_555(13, 0, 0, 0, 0, 0, 1065353216, 0);
				func_767(*uParam0, 500);
				if (ENTITY::DOES_ENTITY_EXIST((Local_1157.f_690[6 /*12*/])->f_8))
				{
					ENTITY::SET_ENTITY_COORDS((Local_1157.f_690[6 /*12*/])->f_8, func_477(), true, false, true, true);
				}
				func_726(Local_1039[2 /*7*/], "PB_VIC_BRKOUT");
				iLocal_2318 = 5;
			}
			break;
		case 5:
			if ((!func_68(524288) && iLocal_2646 < 2) && func_253(-3.5f, 1, 0, 0))
			{
				func_756(1, 0, 1);
			}
			switch (iVar0)
			{
				case 0:
					func_379(&(Local_2160.f_35), func_768(iVar0), Global_35, *uParam0, 0, 0, 1, 1);
					func_395(1, 0, 0);
					iLocal_2646++;
					break;
				case 1:
					func_379(&(Local_2160.f_35), func_768(iVar0), Global_35, *uParam0, 0, 0, 1, 1);
					func_395(1, 0, 0);
					func_762(1, 0, 0);
					iLocal_2646++;
					iLocal_2318 = 6;
					break;
			}
			break;
		case 6:
			if ((!func_68(524288) && iLocal_2646 < 2) && func_253(-3.5f, 1, 0, 0))
			{
				func_756(1, 0, 1);
				func_762(1, 0, 0);
			}
			switch (iVar0)
			{
				case 1:
					func_379(&(Local_2160.f_35), func_768(iVar0), Global_35, *uParam0, 0, 0, 1, 1);
					func_395(1, 0, 0);
					func_762(1, 0, 0);
					iLocal_2646++;
					break;
			}
			break;
	}
}

int func_411(int iParam0)
{
	var uVar0;
	var uVar3;
	bool bVar6;

	switch (iLocal_1146)
	{
		case 0:
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			func_96(uLocal_2499[0]);
			func_674(Local_1039[0 /*7*/], *iParam0, "FOREMAN", 1);
			func_675(Local_1039[0 /*7*/], (Local_1157.f_690[3 /*12*/])->f_8, "PEN");
			func_675(Local_1039[0 /*7*/], (Local_1157.f_690[4 /*12*/])->f_8, "BOOK");
			func_726(Local_1039[0 /*7*/], "PBL_FOREMAN_STAGE2_COMBAT");
			func_631(Local_1039[0 /*7*/], &uVar0, &uVar3);
			func_675(Local_1039[0 /*7*/], (Local_1157.f_690[25 /*12*/])->f_8, "p_chair04x");
			if (func_19(64) || func_51(2097152))
			{
				ENTITY::PLAY_ENTITY_ANIM((Local_1157.f_690[4 /*12*/])->f_8, func_728(), func_729(), 0.3f, true, true, false, 0f, 0);
				func_745(&Local_698);
				Local_698.f_1 = *iParam0;
				Local_698.f_8 = { func_769() };
				Local_698.f_21 = 1f;
				Local_698.f_18 = 2f;
				func_143(&(Local_698.f_23), 128);
				func_748(&Local_698, 129);
				iLocal_1146 = 1;
			}
			else
			{
				func_395(0, 1, 1);
				func_676(Local_1039[0 /*7*/]);
				iLocal_1146 = 4;
			}
			break;
		case 1:
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			OBJECT::SET_FORCE_OBJECT_THIS_FRAME(func_770(), 5f);
			if (func_748(&Local_698, 129))
			{
				func_745(&Local_698);
				Local_698.f_1 = *iParam0;
				Local_698.f_8 = { func_746(Local_1039[0 /*7*/], "FOREMAN", "PB_L_ENTER") };
				Local_698.f_21 = 1f;
				Local_698.f_18 = 0.25f;
				Local_698.f_17 = 0.2f;
				func_143(&(Local_698.f_23), 1152);
				func_748(&Local_698, 129);
				iLocal_1146 = 2;
			}
			break;
		case 2:
			OBJECT::SET_FORCE_OBJECT_THIS_FRAME(func_770(), 5f);
			if (func_748(&Local_698, 129))
			{
				iLocal_1146 = 3;
			}
			break;
		case 3:
			func_14(1);
			func_676(Local_1039[0 /*7*/]);
			iLocal_1146 = 4;
			break;
		case 4:
			if (func_19(33554432))
			{
				func_69(67108864);
				if (func_19(2))
				{
					iLocal_1146 = 6;
				}
				else
				{
					iLocal_1146 = 7;
				}
			}
			break;
		case 6:
			if (!func_771(-1f))
			{
				func_772("LOG_OBJ01", 1);
				func_346(*iParam0, uLocal_2499[0], -89429847, 580546400, 0, func_405());
				iLocal_1146 = 7;
			}
			break;
		case 7:
			if (func_773(iParam0, 0, 0))
			{
				func_732(1048576000, 1028443341, 0, 106);
				func_201();
				func_759(iParam0, 0, 0, 1, 0, 0, 0, 0);
				func_14(4096);
				func_633(Local_1039[0 /*7*/], "bBreakInternalLoop");
				func_327(Local_1039[0 /*7*/], (Local_1157.f_690[4 /*12*/])->f_8, "BOOK");
				ENTITY::PLAY_ENTITY_ANIM((Local_1157.f_690[4 /*12*/])->f_8, func_728(), func_729(), 0.3f, true, true, false, 0f, 0);
				if (func_19(64))
				{
					if (func_9(Local_2160.f_136, 64))
					{
						func_379(&(Local_2160.f_35), "LCMP_IG_ACK_ACP", *iParam0, Global_35, 0, 0, 1, 1);
					}
					else
					{
						func_379(&(Local_2160.f_35), "LCMP_IG_ACK_ACN", *iParam0, Global_35, 0, 0, 1, 1);
					}
				}
				else if (func_9(Local_2160.f_136, 2))
				{
					func_379(&(Local_2160.f_35), "LCMP_IG_ACK_2", *iParam0, Global_35, 0, 0, 1, 1);
				}
				else
				{
					func_379(&(Local_2160.f_35), "LCMP_IG_S2ACK", *iParam0, Global_35, 0, 0, 1, 1);
					func_10(Local_2160.f_136, 2);
				}
				func_69(65536);
				iLocal_1146 = 8;
			}
			break;
		case 8:
			func_732(1048576000, 1028443341, 0, 106);
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			func_759(iParam0, 0, 0, 1, 0, 0, 0, 0);
			if (func_678(*iParam0, &(Local_1039[0 /*7*/]), "FOREMAN", 0, 0, 1, 0) && func_253(-3.5f, 1, 0, 0))
			{
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "BACK_FOR_MORE", Global_35, -1, 2f, -2f, 2113536, 0, 0, 0, -1082130432, 0, 524297, -1082130432);
				func_379(&(Local_2160.f_35), "LCMP_IG_S2BFM", *iParam0, Global_35, 0, 0, 1, 1);
				func_48(vLocal_1117[3 /*3*/]);
				func_395(0, 1, 0);
				func_757(1, 0);
				iLocal_1146 = 9;
			}
			if (!func_773(iParam0, 0, 0))
			{
				func_395(0, 1, 0);
				func_757(0, 0);
				func_756(0, 0, 1);
				iLocal_1146 = 13;
			}
			break;
		case 9:
			func_732(1048576000, 1028443341, 0, 106);
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			if (!TASK::GET_IS_TASK_ACTIVE(*iParam0, 3))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, Global_35, -1, -1082130432, -1082130432, -1082130432);
			}
			if (func_658(vLocal_1117[3 /*3*/]) && func_774(vLocal_1117[3 /*3*/]) > 30000)
			{
				iLocal_1146 = 10;
			}
			func_759(iParam0, 0, 0, 1, 0, 0, 0, 1);
			if (func_253(0, 1, 0, 0))
			{
				if (!func_51(268435456))
				{
					func_757(1, 1);
					func_395(0, 1, 0);
					func_775(0);
					func_58(268435456);
				}
				switch (iLocal_971)
				{
					case 0:
						func_395(0, 1, 0);
						func_757(0, 0);
						func_756(0, 0, 1);
						func_14(2048);
						func_10(Local_2160.f_136, 16384);
						func_776(&Local_2160);
						func_745(&Local_698);
						Local_698.f_8 = { -1400.12f, -207.92f, 101.88f };
						Local_698.f_14 = { func_777() };
						Local_698.f_1 = Global_35;
						Local_698.f_17 = 0.2f;
						Local_698.f_18 = 0.2f;
						Local_698.f_19 = 20.6f;
						Local_698.f_25 = &Local_1039[5 /*7*/];
						StringCopy(&(Local_698.f_30), "ARTHUR", 24);
						StringCopy(&(Local_698.f_26), func_474(5), 32);
						func_143(&(Local_698.f_23), 26624);
						func_43(&Local_2160, 65536);
						func_748(&Local_698, 129);
						iLocal_1146 = 11;
						break;
					case 1:
						func_395(0, 1, 1);
						func_757(0, 0);
						func_126(2048);
						iLocal_1146 = 13;
						break;
				}
			}
			if (!func_773(iParam0, 0, 0))
			{
				func_395(0, 1, 0);
				func_757(0, 0);
				func_756(0, 0, 1);
				func_126(2048);
				iLocal_1146 = 13;
			}
			break;
		case 10:
			func_732(1048576000, 1028443341, 0, 106);
			func_759(iParam0, 0, 0, 1, 0, 0, 0, 1);
			func_265(vLocal_1117[3 /*3*/]);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "WHAT_DO_U_SAY", Global_35, -1, 2f, -2f, 0, 0, 0, 0, -1082130432, 0, 0, -1082130432);
			func_379(&(Local_2160.f_35), "LCMP_IG_S2WS", *iParam0, Global_35, 0, 0, 1, 1);
			iLocal_1146 = 9;
			break;
		case 11:
			if (func_748(&Local_698, 129))
			{
				func_379(&(Local_2160.f_35), "LCMP_IG_S2AL", Global_35, *iParam0, 0, 0, 1, 1);
				func_674(Local_1039[5 /*7*/], Global_35, "ARTHUR", 1);
				func_675(Local_1039[5 /*7*/], (Local_1157.f_690[6 /*12*/])->f_8, "MONEY");
				func_676(Local_1039[5 /*7*/]);
				iLocal_1146 = 12;
			}
			break;
		case 12:
			func_732(1048576000, 1028443341, 0, 106);
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			func_759(iParam0, 0, 0, 1, 0, 0, 0, 1);
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1898385492))
				{
					func_766(func_778(), 0, 0, 1, 1);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 810372829))
				{
					func_96(uLocal_2499[0]);
					func_379(&(Local_2160.f_35), "LCMP_IG_S2VG", *iParam0, Global_35, 0, 0, 1, 1);
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "VERY_GOOD", Global_35, -1, 2f, -2f, 0, 0, 0, 0, -1082130432, 0, 0, -1082130432);
					func_346(&(iLocal_2502[0]), uLocal_2499[1], -325639900, 580546400, 0, "LOG_BLIP_WAG");
					if (func_9(1, 2))
					{
						func_43(&Local_2160, 128);
					}
					iLocal_1146 = 15;
				}
			}
			break;
		case 13:
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			func_759(iParam0, 0, 0, 1, 0, 0, 0, 1);
			if (func_253(-3.5f, 1, *iParam0, 1))
			{
				func_96(uLocal_2499[0]);
				if (func_213(Global_35, &(iLocal_75[0]), 1, 0))
				{
					if (func_349(Global_35, 0, 1, 0) == joaat("weapon_unarmed") && func_349(Global_35, 1, 1, 0) == joaat("weapon_unarmed"))
					{
						TASK::TASK_PLAY_ANIM(Global_35, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "MAYBE_SOME_OTHER_TIME_PLAYER", 1090519040, -1056964608, -1, 67108880, 0, 0, 0, 0, 0, 0);
					}
					func_379(&(Local_2160.f_35), "LCMP_IG_S2OT", Global_35, *iParam0, 0, 0, 1, 1);
				}
				iLocal_1146 = 14;
			}
			break;
		case 14:
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			func_759(iParam0, 0, 0, 1, 0, 0, 0, 1);
			if (!func_381("LCMP_IG_S2OT"))
			{
				func_379(&(Local_2160.f_35), "LCMP_IG_S2MNT", *iParam0, Global_35, 0, 0, 1, 1);
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(*iParam0, "SCRIPT_PROC@EVENT_AREA@APPLESEED@FOREMAN_STAGE2", "MAYBE_NEXT_TIME", Global_35, -1, 2f, -2f, 0, 0, 0, 0, -1082130432, 0, 0, -1082130432);
				iLocal_1146 = 15;
			}
			break;
		case 15:
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			bVar6 = true;
			if (func_19(2048) && !func_360(Local_1039[5 /*7*/]))
			{
				bVar6 = false;
			}
			if (bVar6)
			{
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
					func_80(&Local_2160, 65536);
				}
				func_759(iParam0, 0, 0, 1, 0, 0, 0, 1);
				if (!TASK::GET_IS_TASK_ACTIVE(*iParam0, 3) && func_253(-3.5f, 1, *iParam0, 1))
				{
					func_126(4096);
					POPULATION::_0x74C2B3DC0B294102(&(iLocal_75[0]));
					POPULATION::_0xA1CFB35069D23C23(&(iLocal_75[0]));
					func_395(0, 1, 0);
					func_126(4096);
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*iParam0, -1400.86f, -205.41f, 102.34f, 2f, -1, 0, 0, 0, 0);
					func_779(iParam0);
					func_330(67108864);
					iLocal_1146 = 17;
				}
			}
			break;
		case 17:
			if (func_263(Local_2160.f_138, 0))
			{
				if (func_780(Local_2160.f_138, &Local_2160, 60000, 1))
				{
					func_76(Local_750[0 /*21*/], 0);
				}
			}
			break;
	}
	return 0;
}

int func_412(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];
	int iVar5;
	vector3 vVar6[24];
	bool bVar9;
	vector3 vVar10[24];

	if (func_132(&Local_972, 1) && Local_972 == *iParam0)
	{
		if (iLocal_1146 < 17)
		{
			func_781();
			iLocal_1146 = 17;
		}
	}
	func_720();
	switch (iLocal_1146)
	{
		case 0:
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			if (func_9(Local_2160.f_136, 131072))
			{
				iVar0 = iLocal_1147;
				iLocal_1147 = iVar0 + 1;
				func_15(Local_2160.f_136, 131072);
			}
			else
			{
				func_10(Local_2160.f_136, 131072);
			}
			if (func_9(Local_2160.f_136, 16384))
			{
				func_346(&(iLocal_2502[0]), uLocal_2499[1], -325639900, 580546400, 0, "LOG_BLIP_WAG");
			}
			if (func_324())
			{
				STREAMING::_0x19A6BE7D9C6884D3(func_782(), 262209, func_783(), func_784());
				iLocal_1032 = TASK::_0xF533D68FF970D190(func_785(), func_782(), 1f, 0, 0);
			}
			else
			{
				STREAMING::_0x19A6BE7D9C6884D3(func_786(), 262209, func_783(), func_787());
				iLocal_1032 = TASK::_0xF533D68FF970D190(func_788(), func_786(), 1f, 0, 0);
			}
			if (func_19(64) || func_51(2097152))
			{
				func_745(&Local_698);
				Local_698.f_8 = { func_769() };
				Local_698.f_1 = *iParam0;
				Local_698.f_21 = 1f;
				func_143(&(Local_698.f_23), 128);
				func_748(&Local_698, 129);
				iLocal_1146 = 1;
			}
			else
			{
				func_394(0);
				func_395(0, 1, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam0, 0, 1);
				if (TASK::_0x841475AC96E794D1(iLocal_1032))
				{
					TASK::_TASK_USE_SCENARIO_POINT(*iParam0, iLocal_1032, func_791(func_324(), func_789(), func_790()), -1, 0, 1, 0, 0, -1082130432, 0);
				}
				else
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(*iParam0, func_792(func_324(), func_785(), func_788()), 1.5f, -1, 0, 0, 0, 0);
				}
				iLocal_1146 = 4;
			}
			break;
		case 1:
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			if (func_748(&Local_698, 129))
			{
				func_394(0);
				func_395(0, 1, 1);
				func_14(1);
				if (TASK::_0x841475AC96E794D1(iLocal_1032))
				{
					TASK::_TASK_USE_SCENARIO_POINT(*iParam0, iLocal_1032, func_791(func_324(), func_789(), func_790()), -1, 1, 0, 0, 0, -1082130432, 0);
				}
				else
				{
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*iParam0, func_792(func_324(), func_785(), func_788()), 1.5f, -1, 0, 0, 0, 0);
				}
				iLocal_1146 = 4;
			}
			break;
		case 4:
			if (func_19(33554432))
			{
				iVar1 = func_4(1);
				if (iVar1 > 3 || (iVar1 == 3 && func_5(1, 128)))
				{
					func_42(Local_2160.f_136, 4096);
				}
				func_395(0, 1, 1);
				func_757(1, 0);
				if (func_19(2))
				{
					iLocal_1146 = 6;
				}
				else
				{
					iLocal_1146 = 7;
				}
			}
			break;
		case 6:
			if (!func_771(-1f))
			{
				func_96(uLocal_2499[0]);
				iLocal_1146 = 7;
			}
			break;
		case 7:
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			if (func_773(iParam0, 0, func_324()) && func_795(iParam0, func_793(), 10f, 0, func_794(), 1, -1243035987))
			{
				func_732(1048576000, 1028443341, 0, 106);
				func_14(4096);
				func_759(iParam0, 0, 0, 1, 0, 0, 0, !func_324());
				switch (iLocal_1147)
				{
					case 2:
						StringCopy(&cVar2, "LCMP_IG_NIACT1", 24);
						break;
					case 3:
						StringCopy(&cVar2, "LCMP_IG_NIBA", 24);
						break;
					case 0:
						StringCopy(&cVar2, "LCMP_IG_NOG", 24);
						break;
					case 1:
						StringCopy(&cVar2, "LCMP_IG_NOTI", 24);
						break;
				}
				func_379(&(Local_2160.f_35), &cVar2, *iParam0, Global_35, 0, 0, 1, 1);
				iLocal_1146 = 8;
			}
			break;
		case 8:
			func_732(1048576000, 1028443341, 0, 106);
			func_759(iParam0, 0, 0, 1, 0, 0, 0, !func_324());
			if (func_324())
			{
				func_395(0, 1, 1);
				func_757(0, 0);
				iLocal_1146 = 5;
			}
			else if ((!ENTITY::IS_ENTITY_DEAD(*iParam0) && func_253(-3.5f, 1, 0, 0)) && (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, -1376584066) || TASK::_0x02EBBB3989B7E695(*iParam0)))
			{
				TASK::CLEAR_PED_TASKS(*iParam0, 1, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, Global_35, 0, -1082130432, -1082130432, -1082130432);
				iLocal_1146 = 2;
			}
			break;
		case 2:
			func_732(1048576000, 1028443341, 0, 106);
			if (!PED::IS_PED_USING_ANY_SCENARIO(*iParam0))
			{
				if (iLocal_1147 == 2)
				{
					iVar5 = 8466;
				}
				else
				{
					iVar5 = -1;
				}
				switch (iLocal_1147)
				{
					case 2:
						StringCopy(&cVar6, "LCMP_IG_NIACTB", 24);
						break;
					case 3:
						StringCopy(&cVar6, "LCMP_IG_NICL", 24);
						break;
				}
				func_379(&(Local_2160.f_35), &cVar6, *iParam0, Global_35, 0, 0, 1, 1);
				TASK::CLEAR_PED_TASKS(*iParam0, 1, 0);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_735);
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, func_486(), func_796(0), Global_35, iVar5, 1090519040, -1056964608, 0, 0, 0, 1, -1082130432, 0, 0, -1082130432);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_735);
				TASK::TASK_PERFORM_SEQUENCE(*iParam0, iLocal_735);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_735);
				func_395(0, 1, 1);
				func_757(0, 0);
				iLocal_1146 = 5;
			}
			break;
		case 5:
			func_732(1048576000, 1028443341, 0, 106);
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			func_759(iParam0, 0, 0, 1, 0, 0, 0, !func_324());
			if (func_797(iParam0))
			{
				func_757(1, 0);
				func_395(0, 1, 1);
				func_756(0, 0, 1);
				func_48(vLocal_1117[3 /*3*/]);
			}
			if (func_51(-2147483648))
			{
				switch (iLocal_971)
				{
					case 0:
						switch (iLocal_1147)
						{
							case 2:
								StringCopy(&cVar10, "LCMP_IG_NIACT2", 24);
								break;
							case 3:
								StringCopy(&cVar10, "LCMP_IG_NIFM", 24);
								break;
							case 0:
								StringCopy(&cVar10, "LCMP_IG_NOSEE", 24);
								break;
							case 1:
								StringCopy(&cVar10, "LCMP_IG_NOAIN", 24);
								break;
						}
						func_379(&(Local_2160.f_35), &cVar10, Global_35, *iParam0, 0, 0, 1, 1);
						func_395(0, 1, 0);
						bVar9 = true;
						break;
					case 1:
						switch (iLocal_1147)
						{
							case 2:
								StringCopy(&cVar10, "LCMP_IG_NI2N", 24);
								break;
							case 3:
								StringCopy(&cVar10, "LCMP_IG_NIFN", 24);
								break;
							case 0:
								StringCopy(&cVar10, "LCMP_IG_NI2N", 24);
								break;
							case 1:
								StringCopy(&cVar10, "LCMP_IG_NIFN", 24);
								break;
						}
						func_379(&(Local_2160.f_35), &cVar10, Global_35, *iParam0, 0, 0, 1, 1);
						func_395(0, 1, 0);
						bVar9 = true;
						break;
				}
				if (!bVar9 && func_223(vLocal_1117[3 /*3*/], 12.5f))
				{
					func_395(0, 1, 0);
					bVar9 = true;
				}
				if (bVar9)
				{
					func_757(0, 0);
					if (!func_324())
					{
						TASK::CLEAR_PED_TASKS(*iParam0, 1, 0);
						TASK::_0x9C8F42A5D1859DC1(&(iLocal_75[0]));
						TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*iParam0, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 3f, -1, 0, 0, 0, 0);
					}
					func_126(4096);
					func_96(uLocal_2499[0]);
					func_48(vLocal_1117[3 /*3*/]);
					iLocal_1146 = 16;
				}
			}
			break;
		case 16:
			if (func_223(vLocal_1117[3 /*3*/], 60f))
			{
				if (func_324())
				{
				}
				else
				{
					TASK::CLEAR_PED_TASKS(*iParam0, 1, 0);
				}
				POPULATION::_0x74C2B3DC0B294102(&(iLocal_75[0]));
				POPULATION::_0xA1CFB35069D23C23(&(iLocal_75[0]));
				func_395(0, 1, 0);
				func_756(0, 0, 1);
				func_779(iParam0);
				iLocal_1146 = 17;
			}
			break;
		case 17:
			if (!(func_132(&Local_972, 1) && Local_972 == *iParam0))
			{
				if (func_263(Local_2160.f_138, 0))
				{
					func_75(Local_2160.f_138, 1);
					func_76(Local_750[0 /*21*/], 0);
				}
			}
			break;
	}
	return 0;
}

int func_413(int iParam0)
{
	char cVar0[64];
	bool bVar8;
	vector3 vVar9[24];
	vector3 vVar12[24];

	func_720();
	switch (iLocal_1146)
	{
		case 0:
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			func_58(1073741824);
			if (!func_9(Local_2160.f_136, 131072))
			{
				func_10(Local_2160.f_136, 131072);
			}
			else
			{
				func_15(Local_2160.f_136, 131072);
			}
			if (func_324())
			{
				STREAMING::_0x19A6BE7D9C6884D3(func_782(), 262209, func_783(), func_784());
				iLocal_1032 = TASK::_0xF533D68FF970D190(func_785(), func_782(), 1f, 0, 0);
			}
			else
			{
				STREAMING::_0x19A6BE7D9C6884D3(func_786(), 262209, func_783(), func_787());
				iLocal_1032 = TASK::_0xF533D68FF970D190(func_788(), func_786(), 1f, 0, 0);
			}
			if (func_19(64) || func_51(2097152))
			{
				func_745(&Local_698);
				Local_698.f_8 = { -1402.34f, -207.62f, 101.88f };
				Local_698.f_1 = *iParam0;
				Local_698.f_21 = 1f;
				func_143(&(Local_698.f_23), 128);
				func_748(&Local_698, 129);
				iLocal_1146 = 1;
			}
			else
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam0, 0, 1);
				if (TASK::_0x841475AC96E794D1(iLocal_1032))
				{
					TASK::_TASK_USE_SCENARIO_POINT(*iParam0, iLocal_1032, func_791(func_324(), func_789(), func_790()), -1, 0, 1, 0, 0, -1082130432, 0);
				}
				else
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(*iParam0, func_792(func_324(), func_785(), func_788()), 1.5f, -1, 0, 0, 0, 0);
				}
				if (func_324())
				{
				}
				iLocal_1146 = 4;
			}
			break;
		case 1:
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			if (func_748(&Local_698, 129))
			{
				func_14(1);
				if (TASK::_0x841475AC96E794D1(iLocal_1032))
				{
					TASK::_TASK_USE_SCENARIO_POINT(*iParam0, iLocal_1032, func_791(func_324(), func_789(), func_790()), -1, 0, 1, 0, 0, -1082130432, 0);
				}
				else
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(*iParam0, func_792(func_324(), func_785(), func_788()), 1.5f, -1, 0, 0, 0, 0);
				}
				iLocal_1146 = 4;
			}
			break;
		case 4:
			if (func_19(33554432))
			{
				func_42(Local_2160.f_136, 4096);
				func_395(0, 1, 1);
				if (func_19(2))
				{
					iLocal_1146 = 6;
				}
				else
				{
					iLocal_1146 = 7;
				}
			}
			break;
		case 6:
			if (!func_771(-1f))
			{
				func_96(uLocal_2499[0]);
				iLocal_1146 = 7;
			}
			break;
		case 7:
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			if (func_773(iParam0, 1, func_324()))
			{
				if (func_795(iParam0, func_798(iParam0), 10f, 0, 0, 1, -1243035987))
				{
					TASK::CLEAR_PED_TASKS(*iParam0, 1, 0);
					func_14(4096);
					func_799(iParam0, 0, 0);
					func_10(Local_2160.f_136, 16777216);
					Local_104.f_40 = *iParam0;
					Local_104.f_43 = 4f;
					Local_104.f_41 = 4f;
					Local_104.f_39 = ((*Global_1392194)[Local_2160.f_136 /*10*/])->f_6;
					if (func_324())
					{
						StringCopy(&cVar0, "LCMPF_IG1_ALT", 64);
					}
					else
					{
						StringCopy(&cVar0, "LCMPF_IG1", 64);
					}
					func_379(&(Local_2160.f_35), &cVar0, *iParam0, Global_35, 0, 0, 1, 1);
					iLocal_1146 = 5;
				}
			}
			break;
		case 5:
			func_800(iParam0);
			func_759(iParam0, 0, 0, 1, 0, 0, 0, !func_324());
			if (func_797(iParam0))
			{
				func_395(0, 1, 1);
				func_758(0, 0);
				func_757(1, 0);
				func_48(vLocal_1117[3 /*3*/]);
			}
			if (func_51(-2147483648))
			{
				switch (iLocal_971)
				{
					case 1:
						if (func_324())
						{
							StringCopy(&cVar9, "LCMP_ANGRRES2", 24);
						}
						else
						{
							StringCopy(&cVar9, "LCMP_ANGRRES1", 24);
						}
						func_379(&(Local_2160.f_35), &cVar9, Global_35, *iParam0, 0, 0, 1, 1);
						func_395(0, 1, 0);
						bVar8 = true;
						break;
				}
				if (!bVar8 && func_223(vLocal_1117[3 /*3*/], 12.5f))
				{
					func_395(0, 1, 0);
					bVar8 = true;
				}
				if (bVar8)
				{
					func_757(0, 0);
					iLocal_1146 = 8;
				}
			}
			break;
		case 8:
			func_800(iParam0);
			func_799(iParam0, 0, 0);
			if (func_253(-3.5f, 1, 0, 0))
			{
				if (func_324())
				{
					func_75(Local_2160.f_138, 1);
					func_76(Local_750[0 /*21*/], 0);
					func_779(iParam0);
					StringCopy(&cVar12, "LCMPF_IG1_ALTR", 24);
					iLocal_1146 = 17;
				}
				else
				{
					StringCopy(&cVar12, "LCMPF_IG1_R", 24);
					iLocal_1146 = 16;
				}
				func_379(&(Local_2160.f_35), &cVar12, *iParam0, Global_35, 0, 0, 1, 1);
				func_126(4096);
				func_96(uLocal_2499[0]);
			}
			break;
		case 16:
			func_800(iParam0);
			if (func_223(vLocal_1117[3 /*3*/], 60f))
			{
				POPULATION::_0x74C2B3DC0B294102(&(iLocal_75[0]));
				POPULATION::_0xA1CFB35069D23C23(&(iLocal_75[0]));
				func_75(Local_2160.f_138, 1);
				func_76(Local_750[0 /*21*/], 0);
				TASK::CLEAR_PED_TASKS(*iParam0, 1, 0);
				func_779(iParam0);
				iLocal_1146 = 17;
			}
			break;
		case 17:
			break;
	}
	return 0;
}

int func_414(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (iLocal_1145 >= 8)
	{
		func_801(iParam0);
	}
	func_802();
	switch (iLocal_1145)
	{
		case 0:
			if (!VOLUME::_0x92A78D0BEDB332A3(&(iLocal_75[4])))
			{
				iLocal_75[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1398.107f, -213.5636f, 102.7725f, 0f, 0f, 18.99809f, 6.332798f, 6.346769f, 4.001091f, "Appleseed - volSell");
			}
			if (func_9(Local_2160.f_136, 1024))
			{
				if (func_803(iParam0))
				{
					func_757(0, 1);
					func_395(0, 1, 0);
					func_756(0, 0, 1);
					func_69(256);
					func_779(iParam0);
					func_216(Local_1039[1 /*7*/]);
					func_475(Local_1039[1 /*7*/], "script@proc@handovers@player_handovers@exchange_item_for_money", "PB_HANDOVER", 0);
					POPULATION::_0x74C2B3DC0B294102(&(iLocal_75[0]));
					POPULATION::_0xA1CFB35069D23C23(&(iLocal_75[0]));
					TASK::CLEAR_PED_TASKS(*iParam0, 1, 0);
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*iParam0, -1398.248f, -210.7696f, 101.8917f, 1.5f, -1, 0, 0, 0, 0);
					func_42(Local_2160.f_136, 4096);
					iLocal_1145 = 15;
				}
			}
			else if (func_804() && func_805(iParam0))
			{
				func_69(67108864);
				func_395(0, 1, 0);
				func_757(1, 1);
				func_806(0);
				iLocal_75[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1399.521f, -209.5342f, 104.064f, 0f, 0f, 18.19485f, 9.259386f, 12.57203f, 6.4343f, "Appleseed - volCut");
				iLocal_75[11] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1399.238f, -220.5899f, 102.4817f, 0f, 0f, 0.277182f, 8.547582f, 7.336222f, 3.176049f, "Appleseed - volHorse");
				POPULATION::_0xB56D41A694E42E86(&(iLocal_75[1]), 0, 0, 0, -1, -1, 2);
				POPULATION::_0x18262CAFEBB5FBE1(&(iLocal_75[1]), 0, 0, 0, -1, -1, 0);
				iLocal_1145 = 1;
			}
			break;
		case 1:
			if (func_19(33554432))
			{
				if (func_9(1, 2))
				{
					func_42(0, 16);
				}
				if (func_19(2))
				{
					iLocal_1145 = 6;
				}
				else
				{
					iLocal_1145 = 2;
				}
			}
			break;
		case 6:
			if (!func_771(0))
			{
				func_772("LOG_OBJ01", 1);
				func_346(*iParam0, uLocal_2499[0], -89429847, 580546400, 0, func_405());
				if (!func_9(Local_2160.f_136, 1024))
				{
					iLocal_1145 = 2;
				}
				else if (func_803(iParam0))
				{
					iLocal_1145 = 8;
				}
			}
			break;
		case 2:
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			if (func_807(0))
			{
				if (!PED::IS_PED_USING_ANY_SCENARIO(*iParam0))
				{
					if (ENTITY::DOES_ENTITY_EXIST((Local_1157.f_690[8 /*12*/])->f_8))
					{
						OBJECT::DELETE_OBJECT(&((Local_1157.f_690[8 /*12*/])->f_8));
					}
					if (ENTITY::DOES_ENTITY_EXIST((Local_1157.f_690[7 /*12*/])->f_8))
					{
						OBJECT::DELETE_OBJECT(&((Local_1157.f_690[7 /*12*/])->f_8));
					}
				}
				if (((func_129(Global_35, 242628503) || func_129(Global_35, 501393341)) || func_129(Global_35, 1553520516)) || func_129(Global_35, 1920417248))
				{
					MAP::DISPLAY_RADAR(false);
				}
				func_808(iParam0);
				if (func_809(Local_750[0 /*21*/], 1))
				{
					func_810();
				}
				if (iLocal_971 == 0)
				{
					func_810();
					func_14(2);
					CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
					func_811(&(Local_1005.f_3), 4);
					func_812(*iParam0, &Local_1005, 0f, 0f, 0f, 0, 1106247680, 1092616192, -1, 4000, 1000, 0f, 0, 1, 1084227584);
					func_674(Local_1039[5 /*7*/], func_63(Local_2160.f_138), "U_M_M_BiVForeman_01", 1);
					func_674(Local_1039[5 /*7*/], Global_35, "ARTHUR", 1);
					func_675(Local_1039[5 /*7*/], (Local_1157.f_690[3 /*12*/])->f_8, "p_knife02x");
					func_675(Local_1039[5 /*7*/], (Local_1157.f_690[4 /*12*/])->f_8, "p_woodWittle01x");
					StringCopy(&((Local_1039[5 /*7*/])->f_4), "Loop_Look_Idle", 24);
					func_676(Local_1039[5 /*7*/]);
					func_813(Local_1039[5 /*7*/], "pl_Back_To_Scenario");
					func_745(&Local_698);
					Local_698.f_1 = Global_35;
					Local_698.f_8 = { func_814() };
					Local_698.f_19 = func_815();
					func_143(&(Local_698.f_23), 17921);
					func_43(&Local_2160, 65536);
					func_748(&Local_698, 129);
					func_10(Local_2160.f_136, 524288);
					func_203(iParam0);
					func_395(0, 0, 1);
					func_379(&(Local_2160.f_35), "LCMP_INT_GRT", Global_35, *iParam0, 0, 0, 1, 1);
					func_732(1048576000, 1028443341, 0, 106);
					iLocal_1145 = 3;
				}
			}
			break;
		case 3:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			func_810();
			func_812(*iParam0, &Local_1005, 0f, 0f, 0f, 0, 1106247680, 1092616192, -1, 4000, 1000, 0f, 0, 1, 1084227584);
			func_808(iParam0);
			func_748(&Local_698, 129);
			func_732(1048576000, 1028443341, 0, 106);
			if (func_253(-10f, 1, 0, 0))
			{
				if (!func_19(4096))
				{
					func_379(&(Local_2160.f_35), "LOG_LCMP_INT_LI", *iParam0, Global_35, 0, 0, 1, 1);
					func_201();
					func_14(4096);
					func_48(vLocal_1117[3 /*3*/]);
					func_293(&Local_972, 4);
					iLocal_1145 = 4;
				}
			}
			break;
		case 4:
			func_732(1048576000, 1028443341, 0, 106);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			func_810();
			func_812(*iParam0, &Local_1005, 0f, 0f, 0f, 0, 1106247680, 1092616192, -1, 4000, 1000, 0f, 0, 1, 1084227584);
			func_808(iParam0);
			func_748(&Local_698, 129);
			if (func_223(vLocal_1117[3 /*3*/], 1.5f))
			{
				func_816(Local_1039[5 /*7*/]);
				func_379(&(Local_2160.f_35), "LOG_LCMP_INT_LB", Global_35, *iParam0, 0, 0, 1, 1);
				iLocal_1145 = 5;
			}
			break;
		case 5:
			func_732(1048576000, 1028443341, 0, 106);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			func_810();
			func_812(*iParam0, &Local_1005, 0f, 0f, 0f, 0, 1106247680, 1092616192, -1, 4000, 1000, 0f, 0, 1, 1084227584);
			func_808(iParam0);
			func_748(&Local_698, 129);
			if (func_678(*iParam0, &(Local_1039[5 /*7*/]), "U_M_M_BiVForeman_01", 0, 0, 1, 0))
			{
				if (!func_19(4096))
				{
					func_201();
					func_14(4096);
					func_293(&Local_972, 4);
				}
				func_14(4194304);
				func_818(&Local_156, 135700/*func_817*/);
				func_109(Local_156.f_4);
				Local_156.f_4 = &iLocal_75[11];
				func_819(&Local_156, -1393.122f, -207.5938f, 101.5584f, -5.5f, 0);
				func_820(&(Local_156.f_213), 32);
				func_822(func_821(), &Local_156);
				func_732(1048576000, 1028443341, 1, 106);
				func_215((Local_1157.f_690[14 /*12*/])->f_8, 1, 1);
				iLocal_1145 = 7;
			}
			break;
		case 7:
			func_810();
			if (!func_263(Local_2160.f_138, 0))
			{
				func_62(Local_2160.f_138, 1, 1);
			}
			if (!func_19(4096))
			{
				func_126(512);
				func_201();
				func_14(4096);
				func_293(&Local_972, 4);
			}
			if (!func_51(4096) && ANIMSCENE::_0x3FBC3F51BF12DFBF(Local_156.f_156) >= 0.587f)
			{
				func_823();
			}
			if (func_822(func_821(), &Local_156) && func_803(iParam0))
			{
				func_126(512);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 0, 0);
				func_43(&Local_2160, 65536);
				func_58(4096);
				func_824(11, 128);
				MAP::DISPLAY_RADAR(false);
				func_48(vLocal_1117[3 /*3*/]);
				iVar1 = 0;
				iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(&(iLocal_2505[0]), "SKEL_ROOT");
				ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY((Local_1157.f_690[14 /*12*/])->f_8, &(iLocal_2505[0]), iVar1, iVar0, 0f, 0f, 0f, 0f, -0.6f, 1f, 0f, 0f, 180f, 0f, 1, 1, 0, 1, 2, 0, 1065353216, 1065353216);
				func_825(&Local_680, "LOG_CTXT1", func_650(1), 0, 2, BUILTIN::CEIL((12.5f * 1000f)), 1, -1, -1);
				iLocal_1145 = 8;
			}
			break;
		case 8:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			func_826(11, 2);
			if (func_301(Local_2160.f_32) && !func_827(101))
			{
				func_828(Local_2160.f_32, 0, 1);
			}
			if (func_829(&Local_680))
			{
				if (func_830(&Local_680))
				{
					if (func_831(&Local_680))
					{
						func_304(11, 128);
						func_832(11, 1);
						func_833(11, 2);
						func_14(536870912);
						func_632(Local_1039[0 /*7*/], "PBL_SEARCHENTER", 1);
						func_633(Local_1039[0 /*7*/], "Internal_Loop");
						bVar2 = true;
						func_95(&Local_2160);
						if (func_301(Local_680.f_5))
						{
							func_828(Local_680.f_5, 0, 1);
							func_834(Local_680.f_5, 0, 1);
						}
						if (func_301(Local_680.f_6))
						{
							func_828(Local_680.f_6, 0, 1);
							func_834(Local_680.f_6, 0, 1);
						}
						iLocal_1145 = 9;
					}
					else if (func_835(&Local_680))
					{
						bVar2 = true;
						func_379(&(Local_2160.f_35), "LOG_LCMP_INT_b0", Global_35, *iParam0, 0, 0, 1, 0);
						func_304(11, 128);
						func_95(&Local_2160);
						func_69(16384);
						if (func_301(Local_680.f_5))
						{
							func_828(Local_680.f_5, 0, 1);
							func_834(Local_680.f_5, 0, 1);
						}
						if (func_301(Local_680.f_6))
						{
							func_828(Local_680.f_6, 0, 1);
							func_834(Local_680.f_6, 0, 1);
						}
						iLocal_1145 = 13;
					}
				}
			}
			if (bVar2)
			{
				POPULATION::_0x74C2B3DC0B294102(&(iLocal_75[1]));
				POPULATION::_0xA1CFB35069D23C23(&(iLocal_75[1]));
				func_109(&(iLocal_75[1]));
				POPULATION::_0x74C2B3DC0B294102(&(iLocal_75[0]));
				POPULATION::_0xA1CFB35069D23C23(&(iLocal_75[0]));
			}
			break;
		case 9:
			if (func_738(Local_1039[0 /*7*/], "Internal_Loop"))
			{
				func_735(Local_1039[0 /*7*/], "Internal_Loop");
				func_836(&Local_680);
			}
			if (func_19(1073741824) && !func_837(11))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 0, 0);
				func_43(&Local_2160, 65536);
				func_826(11, 2);
				if (func_9(Local_2160.f_136, 4))
				{
					func_824(11, 128);
					(Local_1157.f_690[0 /*12*/])->f_7 = func_838();
					(Local_1157.f_690[6 /*12*/])->f_7 = func_839();
					STREAMING::REQUEST_MODEL(func_838(), false);
					STREAMING::REQUEST_MODEL(func_839(), false);
					iLocal_1145 = 11;
				}
				else
				{
					func_379(&(Local_2160.f_35), "LOG_LCMP_INT_b0", Global_35, *iParam0, 0, 0, 1, 0);
					iLocal_1145 = 13;
				}
			}
			break;
		case 10:
			if (func_748(&Local_698, 129))
			{
				iLocal_1145 = 11;
			}
			break;
		case 11:
			if (func_840())
			{
				func_841();
				iLocal_1145 = 12;
			}
			break;
		case 12:
			if (ENTITY::DOES_ENTITY_EXIST((Local_1157.f_690[0 /*12*/])->f_8))
			{
				if (!func_68(256))
				{
					func_674(Local_1039[1 /*7*/], Global_35, "arthur", 1);
					func_675(Local_1039[1 /*7*/], (Local_1157.f_690[3 /*12*/])->f_8, "p_knife02x");
					func_675(Local_1039[1 /*7*/], (Local_1157.f_690[4 /*12*/])->f_8, "p_woodWittle01x");
					func_675(Local_1039[1 /*7*/], (Local_1157.f_690[6 /*12*/])->f_8, "p_foldedBill01x");
					func_674(Local_1039[1 /*7*/], *iParam0, "U_M_M_BIVFOREMAN_01", 1);
					func_675(Local_1039[1 /*7*/], (Local_1157.f_690[0 /*12*/])->f_8, "ITEM");
					func_632(Local_1039[1 /*7*/], "pbl_AgreeToSell", 1);
				}
				else
				{
					func_674(Local_1039[1 /*7*/], Global_35, "player", 1);
					func_675(Local_1039[1 /*7*/], (Local_1157.f_690[6 /*12*/])->f_8, "MONEY");
					func_675(Local_1039[1 /*7*/], (Local_1157.f_690[0 /*12*/])->f_8, "Item");
					func_674(Local_1039[1 /*7*/], *iParam0, "male", 1);
				}
				iLocal_1145 = 13;
			}
			break;
		case 13:
			func_96(uLocal_2499[0]);
			if (func_9(Local_2160.f_136, 4))
			{
				if (!func_19(4096))
				{
					func_379(&(Local_2160.f_35), "LOG_LCMP_INT_a2", *iParam0, Global_35, 0, 0, 1, 1);
				}
				func_676(Local_1039[1 /*7*/]);
				func_216(Local_1039[0 /*7*/]);
				if (!func_68(256))
				{
					func_633(Local_1039[1 /*7*/], "Internal_Loop");
				}
				else if (CAM::DOES_CAM_EXIST(iLocal_1143))
				{
					CAM::SET_CAM_ACTIVE(iLocal_1143, true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
				iLocal_1145 = 14;
			}
			else if (!func_381("LOG_LCMP_INT_b0"))
			{
				func_836(&Local_680);
				func_632(Local_1039[0 /*7*/], "pbl_RefuseToSell", 1);
				func_633(Local_1039[0 /*7*/], "Internal_Loop");
				func_69(16384);
				iLocal_1145 = 14;
			}
			break;
		case 14:
			if ((!ENTITY::IS_ENTITY_DEAD(*iParam0) && ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, -1898385492)) && ENTITY::DOES_ENTITY_EXIST((Local_1157.f_690[0 /*12*/])->f_8))
			{
				OBJECT::DELETE_OBJECT(&((Local_1157.f_690[0 /*12*/])->f_8));
			}
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1898385492) && ENTITY::DOES_ENTITY_EXIST((Local_1157.f_690[6 /*12*/])->f_8))
				{
					OBJECT::DELETE_OBJECT(&((Local_1157.f_690[6 /*12*/])->f_8));
				}
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1376584066))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
					func_80(&Local_2160, 65536);
				}
			}
			if (!TASK::GET_IS_TASK_ACTIVE(Global_35, 3))
			{
				MAP::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
			}
			if (func_360(Local_1039[0 /*7*/]) && (func_68(16384) || func_360(Local_1039[1 /*7*/])))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
				func_80(&Local_2160, 65536);
				MAP::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				func_43(&Local_2160, 128);
				func_304(11, 128);
				if (CAM::DOES_CAM_EXIST(iLocal_1143))
				{
					CAM::DESTROY_CAM(iLocal_1143, false);
				}
				func_475(Local_1039[1 /*7*/], "script@proc@handovers@player_handovers@exchange_item_for_money", "PB_HANDOVER", 0);
				func_126(2048);
				func_330(16384);
				func_842(11);
				func_69(256);
				func_126(536870912);
				func_126(4096);
				func_106(1);
				func_330(67108864);
				func_757(0, 1);
				func_395(0, 1, 0);
				func_756(0, 0, 1);
				func_833(11, 2);
				TASK::CLEAR_PED_TASKS(*iParam0, 1, 0);
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*iParam0, -1398.248f, -210.7696f, 101.8917f, 1.5f, -1, 0, 0, 0, 0);
				func_779(iParam0);
				iLocal_1145 = 15;
			}
			break;
		case 15:
			func_826(11, 1);
			if (func_19(4096))
			{
				func_126(4096);
			}
			break;
	}
	return 0;
}

void func_415(var uParam0, int iParam1)
{
	if ((iLocal_745 % 5) != 0)
	{
		return;
	}
}

int func_416()
{
	return 0;
}

int func_417()
{
	return 0;
}

int func_418(int iParam0)
{
	return 0;
}

int func_419(int iParam0)
{
	return 0;
}

void func_420()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	if (func_51(8192))
	{
		iVar1 = iLocal_2647;
		iVar2 = iLocal_2647 + 4;
		if (iVar2 >= iLocal_2543)
		{
			iVar2 = (iLocal_2543 - 1);
		}
		iLocal_2647 = iVar1;
		while (iLocal_2647 <= iVar2)
		{
			if (!func_155(&(iLocal_2527[iLocal_2647])))
			{
			}
			else
			{
				iVar0 = func_63(&(iLocal_2527[iLocal_2647]));
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					func_242(&(iLocal_2527[iLocal_2647]), 0, 1, 0, 1, 1);
					func_243(iVar0, 1, 1);
					if (!func_129(iVar0, 518218985))
					{
						if (!func_19(32))
						{
							func_755(&iLocal_2647);
						}
						else
						{
							vVar3 = { func_843(&(iLocal_75[4]), 100, 1, 0) };
							TASK::OPEN_SEQUENCE_TASK(&iLocal_735);
							if (!func_241(vVar3))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar3, 2f, -1, MISC::GET_RANDOM_FLOAT_IN_RANGE((30f / 2f), 30f), false, 40000f);
							}
							func_844(0, &(iLocal_2479[0]), -1);
							TASK::TASK_STAND_STILL(0, -1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_735);
							TASK::TASK_PERFORM_SEQUENCE(iVar0, iLocal_735);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_735);
						}
					}
					if (!func_19(32))
					{
						iLocal_2527[iLocal_2647] = -1;
					}
				}
			}
			iLocal_2647++;
		}
		if (iLocal_2647 >= (iLocal_2543 - 1))
		{
			func_50(8192);
			if (!func_19(32))
			{
				iLocal_2543 = 0;
			}
		}
	}
}

int func_421(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_115(1024);
		case 1:
			return func_115(2048);
		case 2:
			return func_115(4096);
		case 3:
			return func_115(8192);
		case 4:
			return func_115(16384);
		default:
			break;
	}
	return 0;
}

int func_422(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_115(32768);
		case 1:
			return func_115(65536);
		case 2:
			return func_115(131072);
		case 3:
			return func_115(262144);
		case 4:
			return func_115(524288);
		default:
			break;
	}
	return 0;
}

float func_423(int iParam0)
{
	if (func_19(64) && iParam0 == 0)
	{
		return 0.592049f;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 0.705277f;
				case 1:
					return 0.592049f;
				case 2:
					return 0.592049f;
				case 3:
					return 0.705277f;
				case 4:
					return 0.592049f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0.592049f;
				case 1:
					return 0.592049f;
				case 2:
					return 0.705277f;
				case 3:
					return 0.705277f;
				case 4:
					return 0.705277f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 0.592049f;
				case 1:
					return 0.705277f;
				case 2:
					return 0.555339f;
				case 3:
					return 0.592049f;
				case 4:
					return 0.592049f;
				default:
					break;
			}
			break;
	}
	return -1f;
}

float func_424(int iParam0)
{
	if (func_19(64) && iParam0 == 0)
	{
		return 0.696462f;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 0.792988f;
				case 1:
					return 0.696462f;
				case 2:
					return 0.696462f;
				case 3:
					return 0.792988f;
				case 4:
					return 0.696462f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0.696462f;
				case 1:
					return 0.696462f;
				case 2:
					return 0.792988f;
				case 3:
					return 0.792988f;
				case 4:
					return 0.792988f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 0.696462f;
				case 1:
					return 0.792988f;
				case 2:
					return 0.674548f;
				case 3:
					return 0.696462f;
				case 4:
					return 0.696462f;
				default:
					break;
			}
			break;
	}
	return -1f;
}

void func_425()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		iVar2 = ENTITY::_0x886171A12F400B89(&(iLocal_75[3]), iVar1, 1);
		iVar0 = 0;
		while (iVar0 < iVar2)
		{
			iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iVar1);
			if (MISC::_GET_SCRIPT_HANDLE_TYPE(iVar3) == 9)
			{
				iVar4 = MISC::_0x3FFB15534067DCD4(iVar3);
				if ((func_19(32) && !func_22(&Local_2160, 2)) && iVar4 == &iLocal_2479[0])
				{
				}
				else
				{
					func_128(iVar4, 0, 0);
				}
			}
			iVar0++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
}

int func_426(int iParam0)
{
	float fVar0;
	int iVar1;

	fVar0 = func_513(func_428(iParam0), 1);
	if (fVar0 <= 15f)
	{
		return 255;
	}
	iVar1 = BUILTIN::CEIL(((-4.25f * (fVar0 - 15f)) + 255f));
	return iVar1;
}

void func_427(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < iLocal_2543)
	{
		if (!func_155(&(iLocal_2527[iVar1])))
		{
		}
		else
		{
			iVar0 = func_63(&(iLocal_2527[iVar1]));
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				func_242(&(iLocal_2527[iVar1]), 0, 1, 0, 1, 1);
				func_243(iVar0, 1, 1);
			}
		}
		iVar1++;
	}
}

Vector3 func_428(int iParam0)
{
	if (func_19(64) && iParam0 == 0)
	{
		return -1387.583f, -272.6812f, 98.8f;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1458.54f, -256.597f, 105.987f;
				case 1:
					return -1415.835f, -186.908f, 99.722f;
				case 2:
					return -1456.845f, -196.8082f, 104.6f;
				case 3:
					return -1468.877f, -228.5962f, 106.9087f;
				case 4:
					return -1419.583f, -199.3359f, 100.7483f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1387.583f, -272.6812f, 98.8f;
				case 1:
					return -1450.445f, -165.3257f, 106.4f;
				case 2:
					return -1472.47f, -253.4789f, 109.4271f;
				case 3:
					return -1424.774f, -283.7422f, 105.2652f;
				case 4:
					return -1424.774f, -283.7422f, 105.2652f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1402.2f, -292.7f, 102.7f;
				case 1:
					return -1514.524f, -243.7657f, 118.7613f;
				case 2:
					return -1453.848f, -127.2335f, 107.7073f;
				case 3:
					return -1502.6f, -203.7f, 111f;
				case 4:
					return -1402.2f, -292.7f, 102.7f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_429(int iParam0)
{
	if (func_19(64) && iParam0 == 0)
	{
		return -1402.82f, -270.8668f, 98.5505f;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1446.31f, -249.5183f, 101.6165f;
				case 1:
					return -1421.7f, -190.4f, 99.7097f;
				case 2:
					return -1467.4f, -185.8f, 104.3577f;
				case 3:
					return -1454.5f, -226.7f, 102.8009f;
				case 4:
					return -1429.321f, -195.9762f, 100.5673f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1402.82f, -270.8668f, 98.5505f;
				case 1:
					return -1463.685f, -173.1668f, 106.0101f;
				case 2:
					return -1457.906f, -252.8943f, 104.7849f;
				case 3:
					return -1410.153f, -285.7408f, 100.6772f;
				case 4:
					return -1410.153f, -285.7408f, 100.6772f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1413.484f, -292.4594f, 101.7033f;
				case 1:
					return -1517.31f, -234.5498f, 115.9662f;
				case 2:
					return -1470f, -127f, 118f;
				case 3:
					return -1514.101f, -202.0088f, 110.2915f;
				case 4:
					return -1413.484f, -292.4594f, 101.7033f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_430(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_431(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	if (!func_213(Global_35, Global_1898092->f_26.f_5, 1, 0))
	{
		return 1;
	}
	if (func_138(Global_1898092->f_26.f_2) && func_9(Global_1898092->f_26.f_2, 33554432))
	{
		return 1;
	}
	return 0;
}

int func_432()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_524298)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_433(int iParam0)
{
	if (!func_98(iParam0))
	{
		return -1;
	}
	return func_845(func_601(iParam0));
}

bool func_434(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_435(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_436(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

int func_437(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_0x8451E87D3C2B0286(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1571304986:
			case -1342123354:
			case -1269216817:
			case -1212338017:
			case -803716508:
			case 768224943:
			case 1245139812:
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_438(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_0x8451E87D3C2B0286(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1946266312:
			case -1817199644:
			case -1604045519:
			case -857108408:
			case -431793961:
			case -17417813:
			case 37578405:
			case 459745161:
			case 653987431:
			case 1107105323:
			case 1135757916:
			case 1442115297:
			case 1548023642:
			case 1911907177:
				return 1;
		}
	}
	return 0;
}

void func_439(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;

	if (!func_138(iParam0))
	{
		return;
	}
	iVar0 = (iParam1 - (Global_40.f_9096[iParam0 /*12*/])->f_3);
	*uParam2 = (iVar0 / 86400);
	iVar0 = (iVar0 - (*uParam2 * 86400));
	*uParam3 = (iVar0 / 3600);
	iVar0 = (iVar0 - *uParam3 * 3600);
	*uParam4 = (iVar0 / 60);
	iVar0 = (iVar0 - *uParam4 * 60);
	*uParam5 = iVar0;
}

bool func_440(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_441(int iParam0)
{
	if (!func_440(iParam0))
	{
		return 0;
	}
	return func_140(iParam0, 33554432);
}

int func_442(int iParam0)
{
	if (!func_440(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 32:
			return 1;
		case 35:
			return 1;
		case 65:
			return 1;
		case 95:
			return 1;
	}
	return 0;
}

int func_443(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return 1;
		case 65:
			return 1;
		case 66:
			return 1;
		case 67:
			return 1;
		case 68:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_444()
{
	return &Global_1899515;
}

int func_445(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_446(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
	}
	return 0;
}

float func_447(int iParam0, vector3 vParam1)
{
	if (func_846(iParam0))
	{
		return BUILTIN::VDIST(VEHICLE::_0x1E8A921112891651(((*Global_1425371)[iParam0 /*373*/])->f_1), vParam1);
	}
	return 1E+08f;
}

void func_448(int iParam0)
{
	if (!func_155(iParam0))
	{
		return;
	}
	(Global_24886[iParam0 /*2*/])->f_1 = func_444();
	if (_NAMESPACE48::_0x800DF3FC913355F3(func_167(iParam0)))
	{
		_NAMESPACE48::_0x0B3A99AB6713AA52(func_167(iParam0));
	}
}

float func_449(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_450(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_847(vVar0, vVar3, 0f) };
	vVar9 = { func_848(vVar0, vVar3, 0f) };
	if (iParam4 == 1)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, iParam5, 1);
	}
	else if (iParam6 == 5)
	{
		PATHFIND::SET_ROADS_IN_AREA(vVar6, vVar9, iParam4, 1, iParam5);
	}
	else
	{
		PATHFIND::_0xAFE2AE66F6251C66(vVar6, vVar9, iParam6, 1);
	}
}

int func_451()
{
	return joaat("a_m_m_bivworker_01");
}

void func_452(var uParam0)
{
	func_478(uParam0, 4);
}

void func_453(var uParam0)
{
	func_478(uParam0, 64);
}

void func_454(var uParam0)
{
	func_478(uParam0, 8);
}

void func_455(var uParam0)
{
	func_478(uParam0, 128);
}

void func_456(var uParam0)
{
	func_478(uParam0, 1);
}

void func_457(int iParam0)
{
	func_461(&((Global_40.f_9096[Local_2160.f_136 /*12*/])->f_6), func_7(iParam0));
}

bool func_458(int iParam0)
{
	return func_390((Global_40.f_9096[Local_2160.f_136 /*12*/])->f_6, func_7(iParam0));
}

void func_459(int iParam0)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { func_849(*iParam0) };
	fVar3 = func_850(*iParam0);
	iLocal_1026[*iParam0] = TASK::CREATE_SCENARIO_POINT(func_683(), vVar0, fVar3, 0f, 0f, 0);
	TASK::_0xE69FDA40AAC3EFC0(&(iLocal_1026[*iParam0]), 0);
	TASK::_0xA7479FB665361EDB(&(iLocal_1026[*iParam0]), 0);
	TASK::_0x5AF19B6CC2115D34(&(iLocal_1026[*iParam0]), 19, 1);
	iLocal_736[*iParam0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, 0f, 0f, 0f, 2f, 2f, 2f, "Appleseed - volTreeBlock");
	POPULATION::_0x18262CAFEBB5FBE1(&(iLocal_736[*iParam0]), 534496, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(&(iLocal_736[*iParam0]), 534496, 0, 0, -1, -1, 0);
	if (!func_851(iLocal_2311[*iParam0]))
	{
		iLocal_2311[*iParam0] = GRAPHICS::_0xFA50F79257745E74(vVar0, 3f, 1, 36, 0);
	}
}

int func_460(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(&(iLocal_1014[iParam0])))
	{
		iLocal_1020[iParam0] = ENTITY::_0x6F3068258A499E52(func_852(iParam0), func_429(iParam0), 9);
		iLocal_1014[iParam0] = OBJECT::GET_RAYFIRE_MAP_OBJECT(func_429(iParam0), 5f, func_853(iParam0));
	}
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(&(iLocal_1014[iParam0])))
	{
		iLocal_1020[iParam0] = &iLocal_1020[iParam0];
		if (((!func_854(iParam0) && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(&(iLocal_1014[iParam0])) != 4) && !func_421(iParam0)) && !func_458(iParam0))
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(&(iLocal_1014[iParam0]), 4);
		}
		else if (func_19(64))
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(&(iLocal_1014[iParam0]), 4);
		}
		else if (func_458(iParam0))
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(&(iLocal_1014[iParam0]), 9);
			func_855(iParam0);
			func_695(iParam0);
		}
		if (func_854(iParam0))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_461(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_462(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_143(uParam0, 268435456);
	}
	else
	{
		func_199(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_143(uParam0, 1073741824);
	}
	else
	{
		func_199(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_143(uParam0, 536870912);
	}
	else
	{
		func_199(uParam0, 536870912);
	}
}

void func_463(var uParam0, var uParam1)
{
	uParam0->f_27 = uParam1;
}

void func_464(vector3 vParam0, float fParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_847(vVar0, vVar3, 0f) };
	vVar9 = { func_848(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, 0, 1);
	}
	else
	{
		PATHFIND::_0x6C3F12ECEB6D2E2A(vVar6, vVar9, iParam4, 1);
	}
}

void func_465(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_241(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
			if (func_856(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2f, 0, iParam3, 16384))
				{
					VOLUME::_0xFDFECC6EE4491E11(iVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

void func_466(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return;
	}
	if (TASK::_0x841475AC96E794D1(&(iLocal_1026[iParam0])))
	{
		TASK::_0x81948DFE4F5A0283(&(iLocal_1026[iParam0]));
		func_109(&(iLocal_736[iParam0]));
	}
	if (bParam1)
	{
		func_857(iLocal_2311[iParam0], 1);
	}
}

void func_467(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1392194)[uParam0->f_136 /*10*/])->f_6))
	{
		VOLUME::_0x6D5F9E69BA1BE783(((*Global_1392194)[uParam0->f_136 /*10*/])->f_6);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1392194)[uParam0->f_136 /*10*/])->f_5))
	{
		VOLUME::_0x6D5F9E69BA1BE783(((*Global_1392194)[uParam0->f_136 /*10*/])->f_5);
	}
}

void func_468()
{
	CAM::_0x88544C0E3291DCAE(1);
	func_858();
}

int func_469(int iParam0)
{
	if (((func_470(iParam0, 1) && func_470(iParam0, 2)) && func_470(iParam0, 8)) && func_470(iParam0, 512))
	{
		return 1;
	}
	return 0;
}

bool func_470(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

float func_471()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_472(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_473(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

char* func_474(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			if (func_19(64))
			{
				return "PBL_ENTER";
			}
			else
			{
				return "";
			}
			break;
		case 3:
			if (iLocal_98 == 3)
			{
				return "PBL_MAIN";
			}
			else
			{
				return "PBL_MAIN";
			}
			break;
		case 0:
			if (func_19(64))
			{
				return "PB_L_ENTER";
			}
			else if (func_19(262144))
			{
				if ((iLocal_98 > 1 && func_9(1, 2)) && !func_9(Local_2160.f_136, 16384))
				{
					return "PBL_FOREMAN_STAGE2_TALK_INTRO";
				}
				else if (func_324())
				{
					return "PBL_ENTER_LOOPS";
				}
				else
				{
					return "PBL_ENTER_LOOPS";
				}
			}
			else
			{
				switch (iLocal_98)
				{
					case 1:
						if (func_19(16))
						{
							if (func_324())
							{
								return "PBL_SITTING_IDLE";
							}
							else
							{
								return "pbl_Inside_Standing_Arthur_Rebuffed";
							}
						}
						else
						{
							return "pbl_LeadoutToDecision";
						}
						break;
					case 2:
						if (func_19(16))
						{
							if (func_324())
							{
								return "PBL_SITTING_IDLE";
							}
							else
							{
								return "pbl_Inside_Standing_Arthur_Rebuffed";
							}
						}
						else
						{
							return "PBL_FOREMAN_STAGE2_TALK_INTRO";
						}
						break;
					case 3:
						if (!func_5(Local_2160.f_136, 64))
						{
							return "PBL_FOREMAN_ORDERS_LOOPS";
						}
						else
						{
							return "PB_ENTER_N_OFFER";
						}
						break;
				}
			}
			break;
		case 1:
			switch (iLocal_98)
			{
				case 1:
					return "pbl_AgreeToSell";
				case 3:
					return "PBL_ENTER";
				default:
					break;
			}
			break;
		case 4:
			return "PBL_MAIN";
		case 5:
			switch (iLocal_98)
			{
				case 1:
					return "pl_Callover_Look_Greet";
				default:
					break;
			}
			return "";
		case 6:
			return "PBL_HOOKUP";
		case 7:
			return "PBL_LIFT";
		case 8:
			return "PBL_LIFT";
		case 9:
			return "PBL_MAIN";
		case 10:
			return "PBL_MAIN";
	}
	return "";
}

void func_475(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	func_859(uParam0, sParam1, sParam2, iParam3);
	func_713(uParam0);
}

void func_476()
{
	func_18(5, &Local_2160, 5);
	if (func_19(64))
	{
		iLocal_1147 = 2;
	}
	else if (func_22(&Local_2160, 256))
	{
		iLocal_1147 = 2;
	}
	else if (func_356())
	{
		iLocal_1147 = 0;
	}
	else
	{
		iLocal_1147 = 2;
	}
}

Vector3 func_477()
{
	return -1400.29f, -207.08f, 100.64f;
}

void func_478(var uParam0, int iParam1)
{
	func_461(uParam0, iParam1);
}

Vector3 func_479()
{
	return -1392.202f, -270.137f, 96.51328f;
}

Vector3 func_480(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
		case default:
			switch (iParam0)
			{
				case 0:
				case default:
					return -1375.342f, -317.4534f, 100.8851f;
				case 1:
					return -1378.65f, -317.2836f, 100.986f;
				case 2:
					return -1381.161f, -321.5669f, 101.6531f;
				case 3:
					return -1392.285f, -331.5669f, 104.1264f;
				case 4:
					return -1401.689f, -338.5281f, 104.3909f;
				case 5:
					return -1411.78f, -346.1456f, 105.0925f;
				case 6:
					return -1420.203f, -351.6165f, 106.4329f;
				case 7:
					return -1426.14f, -354.4086f, 107.5771f;
				case 8:
					return -1437.277f, -359.1299f, 110.5854f;
				case 9:
					return -1441.922f, -360.4134f, 111.6311f;
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
						case default:
							return -1374.965f, -314.8146f, 100.6431f;
						case 1:
							return -1376.802f, -320.7141f, 101.263f;
						case 2:
							return -1380.237f, -322.0409f, 101.6534f;
						case 3:
							return -1393.833f, -333.3949f, 104.4031f;
						case 4:
							return -1402.033f, -337.2408f, 104.2141f;
						case 5:
							return -1414.284f, -346.9185f, 105.2396f;
						case 6:
							return -1419.447f, -350.5371f, 106.1471f;
						case 7:
							return -1430.102f, -356.533f, 108.7939f;
						case 8:
							return -1436.11f, -357.8445f, 110.1643f;
						case 9:
							return -1441.878f, -360.5837f, 111.6306f;
							break;
					}
					return 0f, 0f, 0f;
				}

Vector3 func_481(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1421.283f, -204.5069f, 101.8864f;
				case 1:
					return -1437.858f, -232.6483f, 101.4767f;
				case 2:
					return -1346.592f, -223.6519f, 102.188f;
				case 3:
					return -1357.959f, -211.2741f, 100.8586f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1471.427f, -212.0286f, 107.1219f;
				case 1:
					return -1449.6f, -209.5491f, 105.0148f;
				case 2:
					return -1346.592f, -223.6519f, 102.188f;
				case 3:
					return -1357.959f, -211.2741f, 100.8586f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1471.427f, -212.0286f, 107.1219f;
				case 1:
					return -1449.6f, -209.5491f, 105.0148f;
				case 2:
					return -1346.592f, -223.6519f, 102.188f;
				case 3:
					return -1357.959f, -211.2741f, 100.8586f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_482(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 179.55f;
				case 1:
					return 51.9f;
				case 2:
					return 135.96f;
				case 3:
					return -57.96f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 6.16f;
				case 1:
					return 138.91f;
				case 2:
					return 135.96f;
				case 3:
					return -57.96f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 6.16f;
				case 1:
					return 138.91f;
				case 2:
					return 135.96f;
				case 3:
					return -57.96f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

Vector3 func_483(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1421.44f, -207.25f, 101.2044f;
				case 1:
					return -1440.13f, -230.94f, 101.25f;
				case 2:
					return -1348.581f, -225.7415f, 101.7857f;
				case 3:
					return -1355.598f, -209.7169f, 100.3746f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1471.914f, -209.3468f, 106.1706f;
				case 1:
					return -1451.512f, -211.5973f, 104.6684f;
				case 2:
					return -1348.581f, -225.7415f, 101.7857f;
				case 3:
					return -1355.598f, -209.7169f, 100.3746f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1471.914f, -209.3468f, 106.1706f;
				case 1:
					return -1451.512f, -211.5973f, 104.6684f;
				case 2:
					return -1348.581f, -225.7415f, 101.7857f;
				case 3:
					return -1355.598f, -209.7169f, 100.3746f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_484(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1f, 0f, 0f;
				case 1:
					return 0f, 0f, -128.1f;
				case 2:
					return 0f, 0f, -43.6f;
				case 3:
					return -1.5f, 0f, 122.5f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 4.4f, 0f, -176.64f;
				case 1:
					return -1.5f, 0f, -40.56f;
				case 2:
					return 0f, 0f, -43.6f;
				case 3:
					return -1.5f, 0f, 122.5f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 4.4f, 0f, -176.64f;
				case 1:
					return -1.5f, 0f, -40.56f;
				case 2:
					return 0f, 0f, -43.6f;
				case 3:
					return -1.5f, 0f, 122.5f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_485(char* sParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY((*uParam1)[iVar0 /*8*/]))
		{
			StringCopy((*uParam1)[iVar0 /*8*/], sParam0, 64);
			STREAMING::REQUEST_ANIM_DICT((*uParam1)[iVar0 /*8*/]);
			return;
		}
		iVar0++;
	}
}

char* func_486()
{
	if (func_324())
	{
		return "SCRIPT_PROC@EVENT_AREA@APPLESEED@NO_OUTDOOR_JOB";
	}
	return "SCRIPT_PROC@EVENT_AREA@APPLESEED@NO_INDOOR_JOB";
}

Vector3 func_487()
{
	return -1442.024f, -359.4506f, 111.622f;
}

int func_488(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (((*uParam0)[iVar0 /*12*/])->f_7 != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(((*uParam0)[iVar0 /*12*/])->f_7))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_489(var uParam0)
{
	if (!func_249(uParam0->f_1))
	{
		return 0;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_249(uParam0->f_12))
		{
			return 0;
		}
	}
	if (uParam0->f_3 != 41788943)
	{
		if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			uParam0->f_5 = PED::_REQUEST_METAPED_OUTFIT(uParam0->f_1, uParam0->f_3);
			if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
			{
				uParam0->f_3 = 41788943;
			}
			return 0;
		}
		else if (!PED::_0x610438375E5D1801(uParam0->f_5))
		{
			return 0;
		}
	}
	return 1;
}

int func_490(var uParam0, var uParam1)
{
	vector3 vVar0;

	vVar0 = { *uParam0 };
	if (func_860(&uParam1))
	{
		return 1;
	}
	if (!func_861(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

int func_491(var uParam0)
{
	if (uParam0->f_3 != 41788943)
	{
		if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			if (PED::_0x610438375E5D1801(uParam0->f_5))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_492(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_862(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_493(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_0x772A1969F649E902(iVar0);
}

bool func_494(var uParam0)
{
	return func_501(*uParam0, 4);
}

bool func_495(var uParam0)
{
	return func_501(*uParam0, 64);
}

bool func_496(var uParam0)
{
	return func_501(*uParam0, 8);
}

bool func_497(var uParam0)
{
	return func_501(*uParam0, 128);
}

bool func_498(var uParam0)
{
	return func_501(*uParam0, 2048);
}

void func_499(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam1);
}

bool func_500(var uParam0)
{
	return func_501(*uParam0, 1024);
}

bool func_501(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_502(var uParam0)
{
	return func_501(*uParam0, 256);
}

void func_503(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 148, !bParam1);
}

bool func_504(var uParam0)
{
	return func_501(*uParam0, 512);
}

bool func_505(var uParam0)
{
	return func_501(*uParam0, 4096);
}

void func_506(int iParam0, int iParam1)
{
	if (!func_155(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_1 = iParam1;
}

int func_507(int iParam0)
{
	if (!func_155(iParam0))
	{
		return 0;
	}
	if (!func_23(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_508(int iParam0, bool bParam1)
{
	if (!func_155(iParam0))
	{
		return 0;
	}
	if ((func_23(iParam0, 1) && !func_509(iParam0)) && func_522(iParam0))
	{
		return 0;
	}
	if (!func_23(iParam0, 2))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (!func_239(iParam0, 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_509(int iParam0)
{
	if (!func_155(iParam0))
	{
		return false;
	}
	return ((*Global_1895087)[iParam0 /*3*/])->f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_510(int iParam0)
{
	if (!func_155(iParam0))
	{
		return;
	}
	((*Global_1895087)[iParam0 /*3*/])->f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_511(var uParam0, bool bParam1)
{
	vector3 vVar0;

	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + 5f);
	if (bParam1)
	{
		if (!func_861(&vVar0, 50, 10, 0))
		{
		}
		else
		{
			*uParam0 = { vVar0 };
		}
	}
}

float func_512(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fParam0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

float func_513(vector3 vParam0, bool bParam3)
{
	return func_430(Global_35, vParam0, bParam3);
}

int func_514(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (func_501(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_501(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_501(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_501(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_501(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_501(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_501(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_501(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_515(int iParam0, float fParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0) && ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
		{
			if (func_377(PLAYER::PLAYER_PED_ID(), iParam0, 1) < (fParam1 * fParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_516(vector3 vParam0, int iParam3, var uParam4, var uParam5, var uParam6, float fParam7, float fParam8, bool bParam9, int iParam10)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam3))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam3);
			if (!PED::_0x5102307CE88798EB(iVar1))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
			}
			if (CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
				fVar2 = func_863(iParam10);
				if (fVar2 < 0f)
				{
					if (PED::IS_TRACKED_PED_VISIBLE(iVar1))
					{
						bVar0 = true;
					}
				}
				else if (PED::_0x164CECC59E70DF86(iVar1, fVar2))
				{
					bVar0 = true;
				}
			}
		}
		else
		{
			bVar0 = func_864(uParam4, PLAYER::PLAYER_PED_ID(), iParam3);
		}
	}
	else
	{
		bVar0 = func_865(uParam4, PLAYER::PLAYER_PED_ID(), vParam0);
	}
	if (bVar0)
	{
		*uParam6 = 1;
		if (*uParam5 != 0f)
		{
		}
		if (*uParam5 <= 0f)
		{
			*uParam5 = func_471();
		}
		else if ((func_471() - *uParam5) > fParam7)
		{
			*uParam5 = 0f;
			return 1;
		}
	}
	else if (*uParam4 == 2 && uParam4->f_4)
	{
		if (!bParam9)
		{
			*uParam5 = 0f;
		}
	}
	else
	{
		*uParam6 = 1;
	}
	return 0;
}

int func_517(int iParam0, int iParam1)
{
	if (func_251(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (iParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return 0;
}

int func_518(float fParam0)
{
	if (func_866(1))
	{
		return 1;
	}
	if (func_658(&uLocal_0) && !func_223(&uLocal_0, (7.5f + fParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_519(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0);
}

int func_520(var uParam0)
{
	return uParam0;
}

int func_521(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x34D6AC1157C8226C(iParam0, -1805387726))
	{
		return 1;
	}
	return 0;
}

bool func_522(int iParam0)
{
	if (!func_155(iParam0))
	{
		return false;
	}
	return SCRIPTS::_DOES_THREAD_EXIST(((*Global_1895087)[iParam0 /*3*/])->f_2);
}

void func_523(int iParam0)
{
	int iVar0;

	if (!func_155(iParam0))
	{
		return;
	}
	iVar0 = func_244(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	((*Global_1895087)[iParam0 /*3*/])->f_2 = 0;
}

int func_524(int iParam0, bool bParam1)
{
	if (!func_155(iParam0))
	{
		return 0;
	}
	if (!func_23(iParam0, 2))
	{
		return 0;
	}
	if (func_236(iParam0) == 0)
	{
		return 1;
	}
	if (!_NAMESPACE48::_0x800DF3FC913355F3(func_167(iParam0)))
	{
		return 1;
	}
	if (func_23(iParam0, 1) && !bParam1)
	{
		func_24(iParam0, 128);
		return 1;
	}
	func_169(iParam0, 129);
	func_523(iParam0);
	_NAMESPACE48::_0xFC77C5B44D5FF7C0(func_167(iParam0));
	func_506(iParam0, 0);
	return 1;
}

int func_525(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_shotgun_sawedoff_charles"):
		case joaat("weapon_shotgun_sawedoff"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_526(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
	{
		Var0 = { func_867(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_868((375 + iVar28), 1);
			if (func_869(iParam0, &Var0, iVar5, 0))
			{
				if (func_870(iParam0, &Var6, iVar5))
				{
					Var29 = { func_871(iParam0, Var0, iVar5, 0) };
					func_872(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_873(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
					{
						return 0;
					}
					func_874(WEAPON::_0x5C2EA6C44F515F34(iParam0), iParam1, iParam6);
					func_875(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}

void func_527(int iParam0, int iParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((*iParam1 == joaat("weapon_revolver_cattleman_mexican") || *iParam1 == joaat("weapon_revolver_cattleman_pig")) || *iParam1 == joaat("weapon_revolver_doubleaction_exotic")) || *iParam1 == joaat("weapon_revolver_schofield_calloway")) || *iParam1 == joaat("weapon_revolver_schofield_golden")) || *iParam1 == joaat("weapon_pistol_mauser_drunk")) || *iParam1 == joaat("weapon_shotgun_doublebarrel_exotic")) || *iParam1 == joaat("weapon_sniperrifle_rollingblock_exotic"))
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
	{
		case joaat("g_m_m_uniduster_03"):
		case joaat("u_m_m_unidusterhenchman_03"):
		case joaat("g_m_m_uniduster_04"):
		case joaat("u_m_m_unidusterhenchman_02"):
		case joaat("g_m_m_uniduster_02"):
		case joaat("u_m_m_fatduster_01"):
		case joaat("u_m_m_unidusterhenchman_01"):
		case joaat("g_m_m_uniduster_01"):
		case joaat("cs_disguisedduster_01"):
		case joaat("g_f_m_uniduster_01"):
		case joaat("u_m_m_unidusterleader_01"):
		case joaat("cs_disguisedduster_03"):
		case joaat("g_m_m_uniduster_05"):
		case joaat("cs_disguisedduster_02"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("g_m_y_uniexconfeds_02"):
		case joaat("g_m_y_uniexconfeds_01"):
		case joaat("g_m_o_uniexconfeds_01"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("u_m_m_uniexconfedsbounty_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		case joaat("g_m_m_uniinbred_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		case joaat("u_m_m_bht_skinnersearch"):
		case joaat("g_m_m_unimountainmen_01"):
		case joaat("u_m_m_bht_skinnerbrother"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		case joaat("g_m_m_uniranchers_01"):
		case joaat("cs_laramie"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		case joaat("u_m_m_bht_banditoshack"):
		case joaat("u_m_m_bht_banditomine"):
		case joaat("g_m_m_unibanditos_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("u_m_m_nbxbrontegoon_01"):
		case joaat("u_m_m_nbxbrontesecform_01"):
		case joaat("u_m_m_nbxbronteasc_01"):
		case joaat("g_m_m_unibrontegoons_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
	}
}

bool func_528(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

int func_529(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1077541120;
		case 1:
			return -1514157174;
		case 2:
			return -1379967731;
		default:
			break;
	}
	return 0;
}

int func_530(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1652537076;
		case 1:
			return 1776245965;
		case 2:
			return -228594924;
		default:
			break;
	}
	return 0;
}

int func_531(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1654713063;
		case 1:
			return 111316232;
		case 2:
			return -96966750;
		default:
			break;
	}
	return 0;
}

int func_532(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1904459580;
		case 1:
			return -1989725258;
		case 2:
			return -487631996;
		default:
			break;
	}
	return 0;
}

int func_533()
{
	return 676312963;
}

int func_534(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -207723122;
		case 1:
			return -109837334;
		case 2:
			return -1451721831;
		default:
			break;
	}
	return 0;
}

int func_535()
{
	return -886879462;
}

char* func_536(int iParam0)
{
	if (!func_138(iParam0))
	{
		return "";
	}
	switch (iParam0)
	{
		case 0:
			return "LCMP";
		case 1:
			return "EACAS";
		case 2:
			return "EACUR";
		default:
			break;
	}
	return "EA_DEFAULT";
}

var func_537(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		sParam0 = "ROB_TOAST_BODY";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "ROB_TOAST_BODY";
	}
	if (iParam2 == -1)
	{
		iParam2 = -1234289408;
	}
	if (iParam3 == -1)
	{
		iParam3 = 1531758713;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		sParam5 = "INPUT_FEED_INTERACT_GENERIC";
	}
	if (iParam6 == -1)
	{
		iParam6 = 138119161;
	}
	if (!bParam14)
	{
		return func_876(sParam0, sParam1, iParam2, iParam3, iParam4, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13);
	}
	return func_877(sParam0, sParam1, iParam2, iParam3, iParam4, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13);
}

bool func_538(int iParam0)
{
	return func_9(iParam0, 1);
}

void func_539(int iParam0, bool bParam1)
{
	if (Global_1572887->f_10 && func_1() == 0)
	{
		return;
	}
	if (func_878(128))
	{
		return;
	}
	if (!func_879(iParam0))
	{
		return;
	}
	if (func_140(iParam0, 32))
	{
		return;
	}
	func_141(iParam0, 32);
	func_322(Global_1935630, 8192);
	func_881(func_880(-1532769513, -36357794), 1);
	switch (func_882(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_881(func_880(-1532769513, 213519508), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_881(func_880(-1532769513, 242571679), 1);
			break;
		case 3:
		case 10:
			func_881(func_880(-1532769513, 1349449307), 1);
			break;
		case 4:
		case 9:
			func_881(func_880(-1532769513, 1140362070), 1);
			break;
		case 8:
			func_881(func_880(-1532769513, -172330899), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_881(func_880(-1532769513, -910218296), 1);
			break;
	}
	switch (iParam0)
	{
		case 0:
			MAP::_0xD8C7162AB2E2AF45(1822876181);
			break;
		case 1:
			MAP::_0xD8C7162AB2E2AF45(1092217275);
			break;
		case 2:
			MAP::_0xD8C7162AB2E2AF45(1855549007);
			MAP::_0xD8C7162AB2E2AF45(1542246539);
			break;
		case 6:
			MAP::_0xD8C7162AB2E2AF45(-237206861);
			break;
		case 7:
			MAP::_0xD8C7162AB2E2AF45(276890716);
			break;
		case 9:
			MAP::_0xD8C7162AB2E2AF45(-353968602);
			break;
		case 10:
			MAP::_0xD8C7162AB2E2AF45(-1354901649);
			MAP::_0xD8C7162AB2E2AF45(-1354901649);
			break;
		case 11:
			MAP::_0xD8C7162AB2E2AF45(-496244122);
			break;
		case 12:
			MAP::_0xD8C7162AB2E2AF45(-678676588);
			break;
		case 15:
			MAP::_0xD8C7162AB2E2AF45(-732274047);
			break;
		case 16:
			MAP::_0xD8C7162AB2E2AF45(-12216052);
			break;
		case 17:
			MAP::_0xD8C7162AB2E2AF45(-1456731677);
			break;
		case 21:
			MAP::_0xD8C7162AB2E2AF45(-2086563810);
			break;
		case 22:
			MAP::_0xD8C7162AB2E2AF45(221661572);
			break;
		case 24:
			MAP::_0xD8C7162AB2E2AF45(222265732);
			break;
		case 25:
			MAP::_0xD8C7162AB2E2AF45(-1484929764);
			break;
		case 26:
			MAP::_0xD8C7162AB2E2AF45(1104975149);
			break;
		case 27:
			MAP::_0xD8C7162AB2E2AF45(235472255);
			break;
		case 28:
			MAP::_0xD8C7162AB2E2AF45(-1337880478);
			break;
		case 29:
			MAP::_0xD8C7162AB2E2AF45(-1813267128);
			break;
		case 30:
			MAP::_0xD8C7162AB2E2AF45(-1941572412);
			break;
		case 31:
			MAP::_0xD8C7162AB2E2AF45(1006072805);
			break;
		case 121:
			MAP::_0xD8C7162AB2E2AF45(929640770);
			break;
		case 122:
			MAP::_0xD8C7162AB2E2AF45(1603579970);
			break;
		case 124:
			MAP::_0xD8C7162AB2E2AF45(-1332669948);
			break;
		case 123:
			MAP::_0xD8C7162AB2E2AF45(-1807212021);
			break;
		case 34:
			MAP::_0xD8C7162AB2E2AF45(-1347759053);
			break;
		case 36:
			MAP::_0xD8C7162AB2E2AF45(-918096609);
			break;
		case 114:
			MAP::_0xD8C7162AB2E2AF45(1728445882);
			break;
		case 37:
			MAP::_0xD8C7162AB2E2AF45(-507075109);
			break;
		case 40:
			MAP::_0xD8C7162AB2E2AF45(462373845);
			break;
		case 42:
			MAP::_0xD8C7162AB2E2AF45(-1727895786);
			break;
		case 43:
			MAP::_0xD8C7162AB2E2AF45(1826504111);
			break;
		case 44:
			MAP::_0xD8C7162AB2E2AF45(1714554710);
			break;
		case 45:
			MAP::_0xD8C7162AB2E2AF45(-91026072);
			break;
		case 54:
			MAP::_0xD8C7162AB2E2AF45(893855320);
			break;
		case 55:
			MAP::_0xD8C7162AB2E2AF45(326709244);
			break;
		case 49:
			MAP::_0xD8C7162AB2E2AF45(653799702);
			break;
		case 62:
			MAP::_0xD8C7162AB2E2AF45(415864829);
			break;
		case 64:
			MAP::_0xD8C7162AB2E2AF45(-1836330842);
			break;
		case 65:
			MAP::_0xD8C7162AB2E2AF45(648073069);
			break;
		case 66:
			MAP::_0xD8C7162AB2E2AF45(770074951);
			break;
		case 68:
			MAP::_0xD8C7162AB2E2AF45(-1276637644);
			break;
		case 71:
			MAP::_0xD8C7162AB2E2AF45(-431488293);
			break;
		case 72:
			MAP::_0xD8C7162AB2E2AF45(-1101810198);
			break;
		case 74:
			MAP::_0xD8C7162AB2E2AF45(-1344767066);
			break;
		case 77:
			MAP::_0xD8C7162AB2E2AF45(1472232821);
			break;
		case 79:
			MAP::_0xD8C7162AB2E2AF45(-1368676121);
			break;
		case 63:
			MAP::_0xD8C7162AB2E2AF45(-33677540);
			break;
		case 80:
			MAP::_0xD8C7162AB2E2AF45(1602161184);
			MAP::_0xD8C7162AB2E2AF45(-443207523);
			MAP::_0xD8C7162AB2E2AF45(-683043834);
			break;
		case 82:
			MAP::_0xD8C7162AB2E2AF45(147256338);
			MAP::_0xD8C7162AB2E2AF45(-134804027);
			MAP::_0xD8C7162AB2E2AF45(2027689141);
			break;
		case 83:
			MAP::_0xD8C7162AB2E2AF45(-161135375);
			break;
		case 85:
			MAP::_0xD8C7162AB2E2AF45(1625008147);
			break;
		case 86:
			MAP::_0xD8C7162AB2E2AF45(121074776);
			break;
		case 87:
			MAP::_0xD8C7162AB2E2AF45(1876184276);
			break;
		case 89:
			MAP::_0xD8C7162AB2E2AF45(458479023);
			break;
		case 91:
			MAP::_0xD8C7162AB2E2AF45(85299473);
			break;
		case 96:
			MAP::_0xD8C7162AB2E2AF45(-1150244084);
			break;
		case 98:
			MAP::_0xD8C7162AB2E2AF45(759314201);
			break;
		case 99:
			MAP::_0xD8C7162AB2E2AF45(2063457042);
			break;
		case 100:
			MAP::_0xD8C7162AB2E2AF45(1877776161);
			break;
		case 102:
			MAP::_0xD8C7162AB2E2AF45(2143316225);
			break;
		case 104:
			MAP::_0xD8C7162AB2E2AF45(-1623232489);
			MAP::_0xD8C7162AB2E2AF45(-1393093729);
			break;
		case 106:
			MAP::_0xD8C7162AB2E2AF45(1354284392);
			break;
		case 107:
			MAP::_0xD8C7162AB2E2AF45(-1430883057);
			break;
		case 109:
			MAP::_0xD8C7162AB2E2AF45(820139809);
			break;
		case 112:
			MAP::_0xD8C7162AB2E2AF45(1561007383);
			MAP::_0xD8C7162AB2E2AF45(-960425936);
			break;
	}
	if (bParam1)
	{
		func_141(iParam0, 64);
	}
}

void func_540(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_883(iParam0);
	if (iVar0 != 0 && func_9(iParam0, 1))
	{
		vVar1 = { func_884(iParam0) };
		if (iParam1 < 1)
		{
			iParam1 = func_4(iParam0);
		}
		func_885(iParam0, iParam1);
		iParam1 = (iParam1 - 1);
		if (func_9(iParam0, 67108864))
		{
			MAP::_0xE057FEA9A22EB3EE(iVar0);
		}
		MAP::_0x1392105DA88BBFFB(iVar0, vVar1.x, vVar1.y, 0, iParam1);
		func_10(iParam0, 67108864);
	}
}

int func_541(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = uParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_8(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_542()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_543(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_1() != -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_544(int iParam0)
{
	return func_886(iParam0, 6);
}

int func_545(int iParam0)
{
	var uVar0;

	uVar0 = func_887(iParam0, 6);
	return uVar0;
}

bool func_546(int iParam0)
{
	return func_886(iParam0, 7);
}

int func_547(int iParam0)
{
	var uVar0;

	uVar0 = func_887(iParam0, 7);
	return uVar0;
}

bool func_548(int iParam0)
{
	return (func_886(iParam0, 4) || func_886(iParam0, 5));
}

int func_549(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = func_887(iParam0, 4);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		uVar1 = func_887(iParam0, 5);
		return uVar1;
	}
	return iVar0;
}

void func_550(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	if (bParam2)
	{
		iVar2 = 0;
		while (iVar2 <= (iParam1 - 1))
		{
			(*uParam0)[iVar2] = iVar2;
			iVar2++;
		}
	}
	iVar2 = (iParam1 - 1);
	iVar2 = (iParam1 - 1);
	while (iVar2 >= 0)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
		uVar0 = uParam0[iVar2];
		(*uParam0)[iVar2] = uParam0[iVar1];
		(*uParam0)[iVar1] = uVar0;
		iVar2 = (iVar2 + -1);
	}
}

int func_551(bool bParam0, var uParam1, var uParam2)
{
	if (Global_1935630->f_18)
	{
		if ((uParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (uParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (uParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (uParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_552(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (iParam4 < 0 || iParam4 >= *uParam0)
	{
		iParam4 = (*uParam0 - 1);
	}
	iVar0 = iParam3;
	while (iVar0 <= iParam4)
	{
		if (func_357(uParam0[iVar0], uParam1, uParam2, 0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_553(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				return PED::IS_PED_IN_VEHICLE(iParam0, iParam1, bParam2);
			}
		}
	}
	return 0;
}

char* func_554()
{
	return "LOG_HONOR_WAGON_STEAL";
}

void func_555(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_1() != -1)
	{
		return;
	}
	if ((Global_36615 && func_888(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_889(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_890(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, iParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (&Global_1347477->f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_891(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_890(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_556(var uParam0, bool bParam1, int iParam2)
{
	func_892(iParam2);
	if (Global_1572887->f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1935630->f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225638->f_11)
		{
			return;
		}
		if (Global_1225638->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		uParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		uParam0->f_13 = func_893(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == joaat("weapon_thrown_dynamite"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_143(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_894(1))
						{
							func_143(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_894(1) || *uParam0 & 8192 != 0))
				{
					func_199(uParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (func_895(uParam0))
			{
				uParam0->f_15 = func_575();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_575() - uParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	func_896(uParam0);
}

int func_557(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return 0;
	}
	switch (iVar0)
	{
		case -196899787:
		case 178452260:
		case 869302489:
		case 1589923363:
			iVar1 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return 0;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return 0;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return 0;
			}
			if (iVar2 == Global_1935630->f_33)
			{
				return 0;
			}
			if (iVar2 == Global_1935630->f_32)
			{
				return 0;
			}
			if (!func_897(iParam0, uParam1, iVar2))
			{
				return 0;
			}
			if (func_898(iParam0, iVar2) <= func_899(uParam1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_558(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_900(iParam2, 1, 1, 1, 0))
	{
		func_143(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_584(uParam1, 1);
	func_858();
}

int func_559(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_382(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_901(uParam1);
			if (func_902(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_903(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_584(uParam1, 1);
						return 1;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_584(uParam1, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_560(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	float fVar1;

	if (iParam1 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	fVar0 = 85f;
	if (func_904(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_901(uParam2);
		if (func_902(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_903(uParam2)
				{
					func_584(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_561(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return 0;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (iVar2 == iVar0)
		{
			return 0;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return 0;
	}
	if (Global_1935630->f_40 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1935630->f_40, 1) == iParam0)
		{
			return 0;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_897(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_903(uParam1)
		{
			fVar3 = func_901(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_562(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_575();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return 1;
	}
	return 0;
}

int func_563(var uParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_905(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("weapon_unarmed"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630->f_46))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) || Global_1935630->f_46 == joaat("weapon_unarmed")) || (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::_0x285D36C5C72B0569(uParam0) <= fVar2)
		{
			if (func_571(uParam2, iParam1))
			{
				func_584(uParam2, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_564(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_906(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && !WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_571(uParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_584(uParam2, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_565(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_907(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, uParam2->f_22))
				{
					func_584(uParam2, 1);
					return 1;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(956330317, vVar0, uParam2->f_27))
				{
					func_584(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar4, 0, 0);
					if (func_908(iParam1, vVar0, vVar4))
					{
						func_584(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(217247011, vVar0, uParam2->f_22))
				{
					func_584(uParam2, 1);
					return 1;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-966930978, vVar0, uParam2->f_22))
				{
					MISC::_GET_PROJECTILE_NEAR_PED_COORDS(iParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &vVar7, 0, 0);
					if (func_908(iParam1, vVar0, vVar7))
					{
						func_584(uParam2, 1);
						return 1;
					}
				}
				break;
		}
	}
	return 0;
}

int func_566(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_897(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_909(&(Global_1935630->f_34[iVar0]));
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_910(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
						*(vVar2[1 /*3*/]) = { vVar9 };
						uParam1->f_10 = iParam0;
						return 1;
					}
				}
			}
			if (func_911(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_912(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
			else if (func_913(uParam1, iParam0, fVar1, iVar0))
			{
				*(vVar2[0 /*3*/]) = { ENTITY::GET_ENTITY_COORDS(&(Global_1935630->f_34[iVar0]), false, false) };
				*(vVar2[1 /*3*/]) = { vVar9 };
				uParam1->f_10 = iParam0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_567(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return 0;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*iParam0, 0, 0);
	switch (iVar0)
	{
		case -1695849405:
		case 2044016570:
			iVar1 = EVENT::_0x822A001BCEA5BD81(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			return 1;
	}
	return 0;
}

int func_568(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_575();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

int func_569(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1, 1))
			{
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PED::GET_MOUNT(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_914(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(iParam0) || PED::_0x947E43F544B6AB34(iParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_915(iVar0, iParam0))
	{
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(PLAYER::PLAYER_PED_ID()) == iParam0)
	{
		if (PED::_0x0E99E3BF11BB6367(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0))
		{
			if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_570(var uParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

int func_571(var uParam0, int iParam1)
{
	if (func_916(uParam0))
	{
		return 1;
	}
	if (PED::_0x29FCE825613FEFCA(iParam1, 400))
	{
		return 1;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return 0;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return 0;
	}
	if (PED::_0xB65A4DAB460A19BD(Global_35) != 0)
	{
		return 1;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_572(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return 1;
		}
		if (func_358(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_573()
{
}

int func_574(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		if (func_917(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_575();
			return 1;
		}
		else if (VEHICLE::_0xA19447D83294E29F(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return 0;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = VEHICLE::_0xA8BA0BAE0173457B(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_430(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_9 = func_575();
								return 1;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return 0;
}

int func_575()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_576()
{
	if (Global_1935630->f_42 == 0)
	{
		return 0;
	}
	if (Global_1935630->f_42 == Global_1935630->f_40)
	{
		return 0;
	}
	if (Global_1935630->f_43 <= 0)
	{
		return 0;
	}
	if ((func_575() - Global_1935630->f_43) >= 10000)
	{
		return 0;
	}
	return 1;
}

int func_577(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return 0;
	}
	fVar0 = func_899(uParam0);
	if (uParam0->f_12 > func_918(uParam0) && uParam0->f_12 > fVar0)
	{
		return 0;
	}
	iVar2 = func_919(iParam1);
	iVar1 = func_920(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, Global_35, 1, 0) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, uParam0->f_14, 17)) && PED::_0x7F9B9791D4CB71F6(iParam1, uParam0->f_14, 1, 0) == 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_578(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_921(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

int func_579(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (*uParam1 & 67108864 != 0)
	{
		return 1;
	}
	if (Global_1935630->f_24)
	{
		return 1;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_922(iParam0, uParam1, 1))
		{
			return 1;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17)) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, 1, 0) == 1)
		{
			return 1;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return 0;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return 0;
	}
	switch (iVar1)
	{
		case -2027383723:
		case -870494873:
		case 73464052:
		case 1201762715:
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			return 1;
		case -1601932249:
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return 0;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!func_923(uParam1, iParam0))
					{
						if (func_430(iVar4, Global_36, 1) < 7f)
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_580(int iParam0, var uParam1)
{
	if (!func_924(0))
	{
		return 0;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_581(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return 1;
	}
	iVar0 = func_575();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_582(int iParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_583(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_575();
	}
	else if (func_575() - uParam1->f_4) > func_925(uParam1)
	{
		return func_299(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

void func_584(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(uParam0, 134217728);
	}
	else
	{
		func_199(uParam0, 134217728);
	}
}

int func_585(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[0])))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(&(Global_1935630->f_34[0])) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(&(Global_1935630->f_34[0]), true))
	{
		return 1;
	}
	iVar0 = func_352(&(Global_1935630->f_34[0]), 0);
	if (func_155(iVar0))
	{
		if (uParam0->f_136 == 1)
		{
			func_160(&iVar1, &iVar2, 0);
		}
		else
		{
			func_161(uParam0->f_137, &iVar1, &iVar2, 0, 0);
		}
		if (iVar0 >= iVar1 && iVar0 <= iVar2)
		{
			return 1;
		}
	}
	return 0;
}

int func_586(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, Global_35, 0, 0))
	{
		return 0;
	}
	if (!ENTITY::_0x3EC28DA1FFAC9DDD(*iParam0, Global_35, 0, 0))
	{
		return 0;
	}
	if (!func_514(*iParam0, 75))
	{
		return 1;
	}
	iVar0 = func_349(Global_35, 0, 1, 0);
	if (func_343(iVar0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(*iParam0, iVar0, 250))
		{
			return 1;
		}
	}
	iVar0 = func_349(Global_35, 1, 1, 0);
	if (func_343(iVar0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(*iParam0, iVar0, 250))
		{
			return 1;
		}
	}
	return 0;
}

int func_587()
{
	if (func_19(32))
	{
		return 1;
	}
	if (func_9(1, 2))
	{
		return 1;
	}
	if (!func_19(262144))
	{
		return 1;
	}
	if (func_19(4096))
	{
		return 1;
	}
	if (func_263(Local_2160.f_138, 0))
	{
		return 1;
	}
	return 0;
}

int func_588(var uParam0, var uParam1)
{
	if (!PED::IS_PED_FLEEING(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_589(var uParam0)
{
	if (((uParam0->f_16 == 3 || uParam0->f_16 == 1) || uParam0->f_16 == 6) || uParam0->f_16 == 5)
	{
		return 1;
	}
	return 0;
}

float func_590(var uParam0)
{
	switch (uParam0->f_16)
	{
		case 1:
		case 3:
			return 180f;
		case 5:
		case 6:
			return 120f;
		default:
			break;
	}
	return 90f;
}

int func_591(var uParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6, float fParam7)
{
	int iVar0[9];
	var uVar10;
	int iVar41;
	int iVar42;

	uVar10 = 30;
	Stack.Push(&uVar10);
	Call_Loc(uParam1);
	iVar41 = func_703(&iVar0, &uVar10, 9, vParam2, fParam5, 0, 1, 0, -1, 1, 0, -1082130432, 0, 0);
	if (iVar41 <= 0)
	{
		return 0;
	}
	iVar42 = func_926(&iVar0, vParam2, 0, 1, 0, -1);
	if (iVar42 < 0)
	{
		return 0;
	}
	*uParam0 = &iVar0[iVar42];
	if (bParam6)
	{
		while (!PED::IS_PED_FACING_PED(&(iVar0[iVar42]), Global_35, fParam7))
		{
			iVar0[iVar42] = 0;
			iVar42 = func_926(&iVar0, vParam2, 0, 1, 0, -1);
			if (iVar42 < 0)
			{
			}
		else
		{
			}
		}
	}
	return 1;
}

int func_592(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return 2;
		case 9:
			return 2;
		case 7:
			return 2;
		case 0:
			return 3;
		case 3:
			return 4;
		default:
			break;
	}
	return 0;
}

int func_593(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = func_927(iParam0, 4, iParam2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		*uParam1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		return 1;
	}
	iVar1 = func_927(iParam0, 5, iParam2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam1 = ENTITY::GET_ENTITY_MODEL(iVar1);
		return 1;
	}
	return 0;
}

int func_594(int iParam0)
{
	return iParam0;
}

void func_595(int iParam0)
{
	if (!func_928(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1945938)[iParam0 /*18*/])->f_3);
	}
	((*Global_1945938)[iParam0 /*18*/])->f_4 = 0;
	(*Global_1945938)[iParam0 /*18*/] = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = 0f;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_2 = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_15 = -1f;
}

bool func_596()
{
	return VOLUME::_0x92A78D0BEDB332A3((Global_1914319->f_3[11 /*446*/])->f_25);
}

void func_597(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_155((Global_1914319->f_3[iParam0 /*446*/])->f_21) && func_509((Global_1914319->f_3[iParam0 /*446*/])->f_21))
	{
		func_264((Global_1914319->f_3[iParam0 /*446*/])->f_21, 0, 1, 0, 0);
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_11 = { 0f, 0f, 0f };
	(Global_1914319->f_3[iParam0 /*446*/])->f_21 = -1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_22 = -1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_17 = 0;
	(Global_1914319->f_3[iParam0 /*446*/])->f_1 = 0;
	if (PED::_0x91A5F9CBEBB9D936((Global_1914319->f_3[iParam0 /*446*/])->f_34))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA((Global_1914319->f_3[iParam0 /*446*/])->f_34, false);
	}
	func_929((Global_1914319->f_3[iParam0 /*446*/])->f_10, 0);
	func_304(iParam0, 536870912);
	iVar1 = func_930(iParam0);
	if (iVar1 >= 15)
	{
		(Global_1914319->f_3[iParam0 /*446*/])->f_408 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_931(&((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/]));
			(Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/] = 0;
			((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/])->f_1 = { 0f, 0f, 0f };
			((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/])->f_4 = 0f;
			((Global_1914319->f_3[iParam0 /*446*/])->f_317[iVar0 /*6*/])->f_5 = 0;
			iVar0++;
		}
		(Global_1914319->f_3[iParam0 /*446*/])->f_408 = 0;
	}
	if ((Global_1914319->f_3[iParam0 /*446*/])->f_440 != 0)
	{
		_NAMESPACE71::_0x2F901291EF177B02((Global_1914319->f_3[iParam0 /*446*/])->f_440, 0);
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_23 = 0;
	func_932(iParam0);
	(Global_1914319->f_3[iParam0 /*446*/])->f_10 = -1;
	(Global_1914319->f_3[iParam0 /*446*/])->f_9 = -1;
	func_933(iParam0, 0);
}

void func_598(int iParam0, bool bParam1)
{
	if (!func_934(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_935(iParam0, 1);
	}
	else
	{
		func_936(iParam0, 1);
	}
	func_938(func_937(iParam0), bParam1);
}

bool func_599(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

int func_600(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

int func_601(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12105[iParam0 /*7*/]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0 /*2*/]);
}

int func_602(int iParam0)
{
	return iParam0 & 31;
}

int func_603(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		case 59:
			return 6;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

int func_604(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return 0;
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
		case 115:
		case 116:
			return 3;
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	}
	return -1;
}

void func_605(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_606()
{
	float fVar0;

	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_607(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 29:
			return 27;
		case 49:
			return 28;
		case 30:
			return 29;
		case 31:
			return 30;
		case 32:
			return 31;
		case 120:
			return 32;
		case 124:
			return 33;
		case 125:
			return 34;
		case 33:
			return 35;
		case 83:
			return 40;
		case 35:
			return 42;
		case 36:
			return 43;
		case 89:
			return 44;
		case 115:
			return 46;
		case 37:
			return 47;
		case 38:
			return 48;
		case 39:
			return 49;
		case 40:
			return 50;
		case 50:
			return 51;
		case 42:
			return 52;
		case 52:
			return 53;
		case 43:
			return 54;
		case 45:
			return 57;
		case 48:
			return 61;
		case 56:
			return 63;
		case 57:
			return 64;
		case 58:
			return 65;
		case 59:
			return 66;
		case 60:
			return 67;
		case 61:
			return 68;
		case 126:
			return 69;
		case 127:
			return 70;
		case 62:
			return 71;
		case 77:
			return 72;
		case 64:
			return 73;
		case 65:
			return 74;
		case 67:
			return 76;
		case 68:
			return 78;
		case 69:
			return 79;
		case 70:
			return 80;
		case 71:
			return 81;
		case 72:
			return 82;
		case 75:
			return 84;
		case 76:
			return 85;
		case 117:
			return 86;
		case 78:
			return 87;
		case 79:
			return 88;
		case 80:
			return 90;
		case 81:
			return 91;
		case 82:
			return 92;
		case 87:
			return 96;
		case 88:
			return 97;
		case 91:
			return 98;
		case 92:
			return 99;
		case 93:
			return 100;
		case 94:
			return 101;
		case 95:
			return 102;
		case 96:
			return 103;
		case 97:
			return 104;
		case 98:
			return 105;
		case 99:
			return 106;
		case 100:
			return 107;
		case 104:
			return 114;
		case 105:
			return 115;
		case 107:
			return 118;
		case 109:
			return 119;
		case 110:
			return 120;
		case 111:
			return 121;
		case 112:
			return 122;
		case 128:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_608(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_609(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_12105[iParam0 /*7*/])->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_939(iParam0);
	}
	else
	{
		func_940(iParam0, iParam1);
	}
	func_941();
}

bool func_610(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_942(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

int func_611(int iParam0)
{
	if (!func_98(iParam0))
	{
		return 0;
	}
	switch (func_309(iParam0))
	{
		case 1:
			switch (func_433(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return 1;
			}
			break;
		case 8:
			switch (func_433(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return 1;
			}
			break;
	}
	return 0;
}

void func_612(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_943(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_944(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_946(func_945(iParam0), 6);
}

void func_613(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_943(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_944(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_947(func_945(iParam0), 6);
}

int func_614(int iParam0)
{
	int iVar0;

	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1898164->f_1[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_615(int iParam0)
{
	struct<5> Var0;

	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 1)
	{
		Global_1898164->f_162 = 0;
		*(Global_1898164->f_1[0 /*5*/]) = { Var0 };
		return 1;
	}
	*(Global_1898164->f_1[iParam0 /*5*/]) = { Var0 };
	Global_1898164->f_162 = (Global_1898164->f_162 - 1);
	func_948(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_616(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::_0x6F1F0B17109309DA(*uParam0, sParam1);
}

int func_617(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_618(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return 1;
}

int func_618(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == Global_1900383[iVar0 /*45*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_619(int iParam0)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_950(iParam0, 32);
	func_951();
}

void func_620(int iParam0)
{
	int iVar0;

	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_621(iParam0);
	if (!SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		func_623(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_623(iParam0);
	}
}

int func_621(int iParam0)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_3;
}

int func_622(int iParam0)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_2;
}

void func_623(int iParam0)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_2 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_3 = 0;
}

void func_624(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;

	if (!func_138(iParam0))
	{
		return;
	}
	if (!bParam6)
	{
		*uParam1 = (Global_40.f_9096[iParam0 /*12*/])->f_3;
	}
	iVar0 = ((((iParam2 * 86400) + iParam3 * 3600) + iParam4 * 60) + iParam5);
	if ((*uParam1 + iVar0) < 0)
	{
		*uParam1 = 0;
	}
	else
	{
		*uParam1 = (*uParam1 + iVar0);
	}
}

void func_625(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(uParam0, 64);
	}
	else
	{
		func_199(uParam0, 64);
	}
}

void func_626(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_143(uParam0, 1048576);
	}
	else
	{
		func_199(uParam0, 1048576);
	}
}

bool func_627()
{
	return (Global_1894899 & 1 != 0 && func_952() != -1);
}

int func_628(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return 0;
	}
	if (fParam2 > 25f)
	{
		return 0;
	}
	if (iParam1 == Global_35)
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_629(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_953(iParam0, &Var0);
}

float func_630(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return 0f;
	}
	return ANIMSCENE::_0x3FBC3F51BF12DFBF(*uParam0);
}

void func_631(var uParam0, var uParam1, var uParam2)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return;
	}
	ANIMSCENE::_0xADF1D53F3B1FE0A7(*uParam0, uParam1, uParam2, 2);
}

void func_632(var uParam0, char* sParam1, bool bParam2)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return;
	}
	if (!func_954(uParam0, sParam1))
	{
		return;
	}
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, sParam1, bParam2);
}

void func_633(var uParam0, char* sParam1)
{
	func_955(uParam0, sParam1, 1);
}

bool func_634(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::_0x1F0E401031E20146(*uParam0, sParam1);
}

int func_635(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_956(iParam0, vVar0, fParam2);
}

char* func_636(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return "PB_PRE_BRKOUT_BACK";
				case 0:
					return "PB_PRE_BRKOUT_N";
				case 3:
					return "PB_PRE_BRKOUT_L";
				case 2:
					return "PB_PRE_BRKOUT_R";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 1:
					return "PB_SAW_BRKOUT_A_BACK";
				case 0:
					return "PB_SAW_BRKOUT_A_N";
				case 3:
					return "PB_SAW_BRKOUT_A_L";
				case 2:
					return "PB_SAW_BRKOUT_A_R";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 1:
					return "PB_SAW_B_BRKOUT_BACK";
				case 0:
					return "PB_SAW_B_BRKOUT_N";
				case 3:
					return "PB_SAW_B_BRKOUT_L";
				case 2:
					return "PB_SAW_B_BRKOUT_R";
				default:
					break;
			}
			break;
	}
	return "";
}

int func_637(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;

	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_161(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_957(iParam0, uVar0, iVar1, bParam2);
}

int func_638(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = func_958(uParam1);
	if (uParam1->f_12 > (fVar0 + 5f))
	{
		return 0;
	}
	if (!PED::_0x5102307CE88798EB(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	}
	if (uParam1->f_12 < fVar0 || PED::IS_TRACKED_PED_VISIBLE(iParam0))
	{
		fVar1 = -1f;
		fVar2 = func_959(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar2, -1f, fVar1) && PED::_0x7F9B9791D4CB71F6(iParam0, Global_35, 1, 0) == 1)
		{
			return 1;
		}
		else if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
		{
			if (WEAPON::_0x79407D33328286C6(Global_1935630->f_44) || WEAPON::_0x506F1DE1BFC75304(Global_1935630->f_44))
			{
				if (uParam1->f_12 <= 5f)
				{
					if (func_960())
					{
						if (PED::IS_PED_FACING_PED(Global_35, iParam0, 110f))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_639(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (func_961(iParam0))
	{
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.25f);
	}
	if (((PED::_0xD5FE956C70FF370B(Global_35) || PED::IS_PED_IN_COVER(Global_35, 0, 0)) || PED::IS_PED_GOING_INTO_COVER(Global_35)) || *uParam1 & 2097152 != 0)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	if (PED::_0x0EA9EACBA3B01601(Global_35, iParam0, iVar1) && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 4f)
	{
		if (*uParam1 & 512 != 0)
		{
			if (PED::IS_PED_IN_COVER(Global_35, 0, 0) || PED::IS_PED_GOING_INTO_COVER(Global_35))
			{
				return 0;
			}
			if (PED::_0xD5FE956C70FF370B(Global_35) || ((PED::_0xA29FD00D45311EB7(Global_35, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) < 8f) && *uParam1 & 2097152 != 0))
			{
				return 0;
			}
		}
		if (PED::_0xA29FD00D45311EB7(Global_35, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 8f)
		{
		}
		iVar0 = 1;
	}
	return iVar0;
}

int func_640(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_641(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

var func_642(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_59(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_643(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_644(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_645(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

void func_646(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_962(uParam0, iParam6);
	func_963(uParam0, iParam5);
	func_964(uParam0, iParam4);
	func_965(uParam0, iParam3);
	func_966(uParam0, iParam2);
	func_967(uParam0, iParam1);
}

bool func_647(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_365(iParam1) || !func_365(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_648(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= 16777216;
	if (iParam1 != 0)
	{
		iVar0 = (iVar0 || iParam1);
	}
	if (iParam2 != 0)
	{
		iVar0 = (iVar0 - (iVar0 && iParam2));
	}
	return iVar0;
}

var func_649(var uParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	var uVar1;

	iVar0 = iParam9;
	func_968(&iVar0);
	if (func_368(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	uVar1 = func_969(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_368(iVar0, 134217728))
	{
		func_970(iParam1, uParam3, uParam0);
	}
	if (!*iParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_971(558))
				{
					func_972(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return uVar1;
}

char* func_650(int iParam0)
{
	if (func_973(iParam0))
	{
		switch (iParam0)
		{
			case 0:
				return "GREET_POS";
			case 1:
				return "GREET_NEG";
			case 2:
				return "GREET_SPOS";
			case 3:
				return "GREET_SNEG";
			case 4:
				return "GREET_ACC";
			case 5:
				return "GREET_REJ";
			case 6:
				return "BEAT_GRT_NEG";
			case 7:
				return "INTERACT_GREET";
			case 8:
				return "INTERACT_DEFUSE";
			case 9:
				return "INTERACT_LET_GO";
			case 10:
				return "INTERACT_INSULT";
			case 11:
				return "INTERACT_THREATEN";
			case 12:
				return "INTERACT_ROB";
			case 13:
				return "INTERACT_ROB_GRAPPLE_LET_GO";
			case 14:
				return "INTERACT_ROB_ACCEPT";
			case 15:
				return "INTERACT_ROB_REJECT_MELEE";
			case 16:
				return "INTERACT_STOP_WITNESS";
			case 17:
				return "INTERACT_STOP_VEHICLE";
			case 18:
				return "INTERACT_STOP_HORSE";
			case 19:
				return "INTERACT_REQUEST_RIDE";
			case 20:
				return "INTERACT_STEAL_HORSE";
			case 21:
				return "INTERACT_STEAL_VEHICLE";
			case 22:
				return "INTERACT_HORSE";
			case 23:
				return "INTERACT_CALLOUT";
			case 24:
				return "INTERACT_QUESTION";
			case 25:
				return "INTERACT_ENCOURAGE";
			case 26:
				return "INTERACT_INTERVENE";
			case 27:
				return "INTERACT_CONFRONT";
			case 28:
				return "RE_INTER_TRUTH";
			case 29:
				return "RE_INTER_LIE";
			case 30:
				return "INTERACT_QUIT";
			case 31:
				return "RE_INTER_DIRECT";
			case 32:
				return "INTERACT_SCOLD";
			case 33:
				return "INTERACT_PRAISE";
			case 34:
				return "INTERACT_ASSIST";
			case 35:
				return "INTERACT_MISLEAD";
			case 36:
				return "INTERACT_ASK";
			case 37:
				return "INTERACT_DEMAND";
			default:
				break;
		}
	}
	return "PED_INTERACT_PROMPT_LABEL_ERROR";
}

void func_651(int* iParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = uParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_301(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_974(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_975(iParam0->f_6, iParam0->f_5, 0);
			}
			func_828(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_976(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_652(int* iParam0, int iParam1, bool bParam2)
{
	if (iParam1 && !func_977(iParam0, 13))
	{
		func_978(iParam0, 0);
	}
	else
	{
		func_979(iParam0, 0);
	}
	if (func_301(iParam0->f_6))
	{
		if (bParam2)
		{
			func_302(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_653(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_977(iParam0, 4))
		{
			func_302(&(iParam0->f_6), 1, 1);
			func_978(iParam0, 4);
		}
	}
	else if (func_977(iParam0, 4))
	{
		func_979(iParam0, 4);
		func_978(iParam0, 14);
	}
}

void func_654(int iParam0, int iParam1)
{
	iParam0->f_14 = iParam1;
}

void func_655(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_978((*uParam0)[iVar0 /*17*/], 9);
		iVar0++;
	}
}

char* func_656(int iParam0)
{
	char cVar0[32];
	char cVar4[32];

	switch (iParam0->f_15)
	{
		case 0:
			if (func_132(iParam0, 16))
			{
				return "DEFUSE_LEFT_PROPERTY_KEEP_GOING";
			}
			switch (iParam0->f_16)
			{
				case 0:
					return "DEFUSE_ARGUMENT";
				default:
					break;
			}
			return "DEFUSE_ARGUMENT_TOUGH";
		case 1:
			if (func_132(iParam0, 16))
			{
				return "KEEP_GOING_ANTAGONZIZE_RESPONSE";
			}
			switch (iParam0->f_16)
			{
				case 0:
					StringCopy(&cVar4, "INSULT_MALE_CONV", 32);
					StringConCat(&cVar4, "_PART", 32);
					MISC::_INT_TO_STRING(1, "%d", &cVar0);
					StringConCat(&cVar4, &cVar0, 32);
					return func_663(cVar4);
				case 8:
					return "LAW_LOW_SEVERITY_ANTAGONIZE";
			}
			return "LAW_LOW_SEVERITY_ANTAGONIZE";
	}
	return "DEFUSE_ARGUMENT_TOUGH";
}

char* func_657(int iParam0)
{
	switch (iParam0->f_15)
	{
		case 0:
			if (func_132(iParam0, 16))
			{
				return "GUARD_PLAYER_LOITERING";
			}
			switch (iParam0->f_16)
			{
				case 0:
					return "DEFUSE_RESPONSE";
				case 8:
					return "WON_DISPUTE";
				default:
					break;
			}
			return "DEFUSE_RESPONSE";
		case 1:
			if (func_132(iParam0, 16))
			{
				return "GUARD_PLAYER_LOITERING";
			}
			switch (iParam0->f_16)
			{
				case 0:
					return "DEFUSE_RESPONSE";
				case 8:
					return "WON_DISPUTE_ESCALATED_ARMED";
				default:
					break;
			}
			return "DEFUSE_RESPONSE";
	}
	return "DEFUSE_RESPONSE";
}

bool func_658(var uParam0)
{
	return func_980(*uParam0, 1);
}

bool func_659(var uParam0)
{
	return func_980(*uParam0, 2);
}

float func_660(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_661(char* sParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(sParam0))
	{
		AUDIO::START_PRELOADED_CONVERSATION(sParam0);
		return 1;
	}
	return 0;
}

bool func_662(var uParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!AUDIO::_0xD89504D9D7D5057D(&cParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_981(cParam1, uParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

var func_663(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

var func_664(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_665(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_982(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

void func_666(int iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_983(iParam0);
		func_984(iParam1, uParam2);
	}
	func_243(*iParam0, 1, bParam4);
}

void func_667(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (&iLocal_1149[iParam4] > 3 && &iLocal_1149[iParam4] < 8)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(*iParam2) && !TASK::GET_IS_TASK_ACTIVE(*iParam2, 3)) || (!ENTITY::IS_ENTITY_DEAD(*iParam3) && !TASK::GET_IS_TASK_ACTIVE(*iParam3, 3)))
		{
			iVar0 = -1;
			if (!func_132(&Local_972, 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*iParam2) && !TASK::GET_IS_TASK_ACTIVE(*iParam2, 3))
				{
					Local_972 = func_63(func_326(9, 0, *iParam0));
					iVar0 = 0;
				}
				if (!ENTITY::IS_ENTITY_DEAD(*iParam2) && !TASK::GET_IS_TASK_ACTIVE(*iParam3, 3))
				{
					Local_972 = *iParam3;
					iVar0 = 1;
				}
				if (func_985(func_63(func_326(9, iVar0, *iParam0)), Global_35, 0, 5f, 0))
				{
					func_292(&Local_972, &Local_2160, 2048, 54304/*func_291*/, 0, 0);
				}
			}
			func_327(Local_1039[(9 + iParam4) /*7*/], *iParam2, "PED1");
			func_679(9, 0, *iParam0, 0 == iVar0);
			func_327(Local_1039[(9 + iParam4) /*7*/], *iParam3, "PED2");
			func_679(9, 1, *iParam0, 1 == iVar0);
			if (ENTITY::DOES_ENTITY_EXIST((Local_1157.f_690[(15 + *iParam1) /*12*/])->f_8))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED((Local_1157.f_690[(15 + *iParam1) /*12*/])->f_8, -1984935666))
				{
					ENTITY::FREEZE_ENTITY_POSITION((Local_1157.f_690[(15 + *iParam1) /*12*/])->f_8, true);
				}
				else
				{
					func_327(Local_1039[(9 + iParam4) /*7*/], (Local_1157.f_690[(15 + *iParam1) /*12*/])->f_8, "SAW");
					ENTITY::FREEZE_ENTITY_POSITION((Local_1157.f_690[(15 + *iParam1) /*12*/])->f_8, false);
					PHYSICS::ACTIVATE_PHYSICS((Local_1157.f_690[(15 + *iParam1) /*12*/])->f_8);
				}
			}
			func_216(Local_1039[(9 + iParam4) /*7*/]);
			iLocal_1149[iParam4] = 10;
		}
	}
}

void func_668(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam1, -137640087))
	{
		iVar0 = 0;
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam1, -1300850144))
	{
		iVar0 = 1;
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam1, -1011860333))
	{
		iVar0 = 2;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (iVar1 == iVar0)
		{
			if (!func_954(Local_1039[(9 + iParam0) /*7*/], func_636(iVar1, iVar2)) && !func_986(Local_1039[(9 + iParam0) /*7*/], func_636(iVar1, iVar2)))
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					func_726(Local_1039[(9 + iParam0) /*7*/], func_636(iVar1, iVar2));
					iVar2++;
				}
			}
		}
		else if (func_954(Local_1039[(9 + iParam0) /*7*/], func_636(iVar1, iVar2)))
		{
			iVar2 = 0;
			while (iVar2 < 4)
			{
				func_987(Local_1039[(9 + iParam0) /*7*/], func_636(iVar1, iVar2));
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_669(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;

	if (ENTITY::IS_ENTITY_DEAD(*iParam0) || ENTITY::IS_ENTITY_DEAD(*iParam1))
	{
		return;
	}
	if (func_325(Local_1039[(9 + iParam2) /*7*/]))
	{
		func_988(iParam0, iParam1, iParam2);
		if (PED::_0xA454D234E45BB6E5(*iParam0, PLAYER::GET_PLAYER_INDEX()))
		{
			iVar0 = *iParam0;
			bVar1 = true;
			PED::SET_PED_CONFIG_FLAG(*iParam0, 330, true);
		}
		else if (PED::_0x9337183FDA2E9035(*iParam0, PLAYER::GET_PLAYER_INDEX()))
		{
			iVar0 = *iParam0;
		}
		else if (PED::_0xA454D234E45BB6E5(*iParam1, PLAYER::GET_PLAYER_INDEX()))
		{
			iVar0 = *iParam1;
			bVar1 = true;
			PED::SET_PED_CONFIG_FLAG(*iParam1, 330, true);
		}
		else if (PED::_0x9337183FDA2E9035(*iParam1, PLAYER::GET_PLAYER_INDEX()))
		{
			iVar0 = *iParam1;
		}
		if (Local_972 == *iParam0 || Local_972 == *iParam1)
		{
			func_339(iParam2);
			iLocal_1149[iParam2] = 8;
			return;
		}
		if (func_68(func_989(iParam2)))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&((Local_1039[(9 + iParam2) /*7*/])->f_1)) && func_763(Local_1039[(9 + iParam2) /*7*/]))
			{
				func_764(Local_1039[(9 + iParam2) /*7*/], 1, 1);
				StringCopy(&((Local_1039[(9 + iParam2) /*7*/])->f_1), "", 24);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				func_330(func_989(iParam2));
			}
		}
		else
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				func_69(func_989(iParam2));
			}
			if (func_68(func_989(iParam2)))
			{
				vVar2 = { func_990(iParam0, &(iLocal_1033[iParam2]), bVar1) };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar2))
				{
					func_813(Local_1039[(9 + iParam2) /*7*/], &vVar2);
				}
			}
		}
	}
}

int func_670(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_592(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		iVar1 = func_326(iParam0, iVar0, iParam1);
		func_62(iVar1, 1, 1);
		iVar0++;
	}
	return iVar0;
}

Vector3 func_671(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1420.942f, -208.586f, 101.032f;
				case 1:
					return -1438.671f, -232.235f, 100.8f;
				case 2:
					return -1341.562f, -241.489f, 102.385f;
				case 3:
					return -1357.351f, -210.654f, 100.106f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1471.529f, -213.686f, 106.224f;
				case 1:
					return -1458.017f, -203.588f, 104.849f;
				case 2:
					return -1341.562f, -241.489f, 102.385f;
				case 3:
					return -1357.351f, -210.654f, 100.106f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1471.529f, -213.686f, 106.224f;
				case 1:
					return -1458.017f, -203.588f, 104.849f;
				case 2:
					return -1341.562f, -241.489f, 102.385f;
				case 3:
					return -1357.351f, -210.654f, 100.106f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_672(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1.325f, 0.462f, 0.828f;
				case 1:
					return -3.665f, -3.93f, -126.538f;
				case 2:
					return 0.108f, 4.907f, 65.588f;
				case 3:
					return -1.141f, -1.304f, 121.306f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 2.356f, -4.206f, -176.376f;
				case 1:
					return 0.695f, 11.828f, 47.142f;
				case 2:
					return 0.108f, 4.907f, 65.588f;
				case 3:
					return -1.141f, -1.304f, 121.306f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 2.356f, -4.206f, -176.376f;
				case 1:
					return 0.695f, 11.828f, 47.142f;
				case 2:
					return 0.108f, 4.907f, 65.588f;
				case 3:
					return -1.141f, -1.304f, 121.306f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_673(var uParam0, vector3 vParam1, vector3 vParam4)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, vParam1, vParam4, 2);
}

void func_674(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return;
	}
	if (iParam3 && ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (!func_616(uParam0, sParam2))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sParam2, iParam1, 0);
}

void func_675(var uParam0, int iParam1, char* sParam2)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return;
	}
	if (!func_616(uParam0, sParam2))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sParam2, iParam1, 0);
}

void func_676(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return;
	}
	ANIMSCENE::START_ANIM_SCENE(*uParam0);
}

int func_677(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_430(iParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return 1;
		}
	}
	if (fVar0 < fParam1)
	{
		if (PED::_0x5102307CE88798EB(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (PED::_0x164CECC59E70DF86(iParam0, fParam4))
				{
					return 1;
				}
			}
			else if (PED::IS_TRACKED_PED_VISIBLE(iParam0))
			{
				return 1;
			}
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_678(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, int iParam6)
{
	if (func_991(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, iParam6 == 0))
	{
		return 1;
	}
	return 0;
}

void func_679(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_326(iParam0, iParam1, iParam2);
	if (!bParam3)
	{
		func_75(iVar0, 1);
		func_992(1, &Local_1157);
	}
}

void func_680()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_115(func_682(iVar0)))
		{
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar0 >= 4)
	{
		return;
	}
	iVar1 = (810 + iVar0);
	iVar2 = func_63(iVar1);
	if (func_993(&iVar2, iVar1))
	{
		func_75(iVar1, 1);
		func_466(func_681(iVar0), 0);
		func_684(func_682(iVar0));
	}
}

int func_681(int iParam0)
{
	if ((!func_19(64) && func_5(Local_2160.f_136, 536870912)) && iParam0 == func_6())
	{
		iParam0 = 4;
	}
	else if ((iLocal_98 == 1 && iParam0 == 1) && func_19(262144))
	{
		iParam0 = 4;
	}
	return iParam0;
}

int func_682(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16;
		case 1:
			return 32;
		case 2:
			return 64;
		case 3:
			return 128;
		default:
			break;
	}
	return 0;
}

int func_683()
{
	return -1939316457;
}

void func_684(int iParam0)
{
	iLocal_102 = (iLocal_102 - (iLocal_102 && iParam0));
}

void func_685()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = func_681(iVar0);
		if (func_421(iVar1) && (!func_19(64) || iVar1 != 0))
		{
			func_994(iVar0);
		}
		iVar0++;
	}
}

int func_686(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16777216;
		case 1:
			return 33554432;
		case 2:
			return 67108864;
		case 3:
			return 134217728;
		default:
			break;
	}
	return 0;
}

void func_687(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar0 = (810 + iParam0);
	iVar1 = func_63(iVar0);
	iVar2 = func_681(iParam0);
	if (func_995(iVar2, &iVar1))
	{
		if (func_854(iVar2))
		{
			bVar3 = true;
		}
		else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(&(iLocal_1014[iVar2])) == 4)
		{
		}
		else
		{
			func_460(iVar2);
			return;
		}
	}
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(&(iLocal_1014[iVar2])))
	{
		func_460(iVar2);
		return;
	}
	if (func_996(iParam0, bVar3))
	{
		OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(&(iLocal_1014[iVar2]), 6);
		if (!func_421(iVar2))
		{
			func_855(iVar2);
		}
		if (!(func_19(64) && iVar2 == 0))
		{
			func_114(iVar1, Global_35, "LOG_TIMBER", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_684(func_682(iParam0));
		}
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::TRIGGER_SONAR_BLIP(348490638, func_429(iVar2));
		if (!((iLocal_98 == 1 && func_19(64)) && iParam0 == 0))
		{
			func_457(iVar2);
		}
		return;
	}
	bVar3 = false;
}

void func_688(int iParam0)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(*iParam0, "interactNeg"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(*iParam0, "interactNeg");
	}
	if (iVar0 > 0)
	{
		PED::SET_PED_CONFIG_FLAG(*iParam0, 330, true);
	}
}

void func_689(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 > 5)
	{
		return;
	}
	iVar0 = (810 + iParam0);
	if (!func_155(iVar0))
	{
		return;
	}
	iVar1 = func_63(iVar0);
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return;
	}
	iVar2 = func_681(iParam0);
	if (func_422(iVar2))
	{
		return;
	}
	if (func_421(iVar2))
	{
		return;
	}
	if (!TASK::_0x841475AC96E794D1(&(iLocal_1026[iVar2])))
	{
		return;
	}
	if (!func_129(iVar1, 1435919172))
	{
		TASK::_TASK_USE_SCENARIO_POINT(iVar1, &(iLocal_1026[iVar2]), 0, -1, 1, 0, 0, 0, -1082130432, 0);
	}
}

void func_690(int iParam0, int iParam1)
{
	float fVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (!func_115(func_997(iParam1)))
	{
		if (PED::_0x9337183FDA2E9035(*iParam0, PLAYER::GET_PLAYER_INDEX()) || PED::_0xA454D234E45BB6E5(*iParam0, PLAYER::GET_PLAYER_INDEX()))
		{
			func_35(func_997(iParam1));
		}
	}
	else if (!(PED::_0x9337183FDA2E9035(*iParam0, PLAYER::GET_PLAYER_INDEX()) || PED::_0xA454D234E45BB6E5(*iParam0, PLAYER::GET_PLAYER_INDEX())))
	{
		fVar0 = func_375(vLocal_1117[0 /*3*/]);
		if ((60f - fVar0) < 15f)
		{
			if (fVar0 >= 60f)
			{
				fVar0 = (60f - 15f);
			}
			else
			{
				fVar0 = (fVar0 - 15f);
			}
			func_222(vLocal_1117[0 /*3*/], fVar0);
		}
		func_684(func_997(iParam1));
	}
}

int func_691(int iParam0, var uParam1, var uParam2, int iParam3)
{
	bool bVar0;
	float fVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(*iParam0) && !DECORATOR::DECOR_EXIST_ON(*iParam0, "bChopDown"))
	{
		if (TASK::_0x2D0571BB55879DA2(*iParam0) != func_683())
		{
			return 0;
		}
		if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(*iParam0, 0))
		{
			return 0;
		}
		bVar0 = func_19(524288);
		if (iParam3 == func_6() && func_5(Local_2160.f_136, 1073741824))
		{
			func_13(524288, bVar0);
			func_684(256);
			return 1;
		}
		if (func_19(64) && !func_422(0))
		{
			return 0;
		}
		if (func_115(func_997(iParam3)))
		{
			return 0;
		}
		if (func_658(vLocal_1117[0 /*3*/]))
		{
			fVar1 = func_375(vLocal_1117[0 /*3*/]);
			if (func_115(256))
			{
				fVar2 = 90f;
			}
			else if (func_279(*iParam0, 1, 1) < 5f)
			{
				fVar2 = 7.5f;
			}
			else if (!func_998())
			{
				fVar2 = 15f;
			}
			else
			{
				fVar2 = 60f;
			}
			if (fVar1 < fVar2)
			{
				return 0;
			}
		}
		if (func_19(32))
		{
			return 0;
		}
		else if (func_19(64) && iParam3 == 0)
		{
			return 0;
		}
		else if (((iLocal_98 == 1 && iParam3 == 1) && !func_51(4096)) && !func_19(262144))
		{
			return 0;
		}
		if (func_5(Local_2160.f_136, 536870912) && iParam3 == func_6())
		{
			return 0;
		}
		if (func_252(*iParam0, uParam1, uParam2, &bVar0, 1f, 45f, 0f, 0, 25f, 1))
		{
			func_13(524288, bVar0);
			func_684(256);
			return 1;
		}
		func_13(524288, bVar0);
	}
	return 0;
}

void func_692(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;

	if (func_251(*iParam0, 0, 1) && !DECORATOR::DECOR_EXIST_ON(*iParam0, "bChopDown"))
	{
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::_0x0C7A2289A5C4D7C9(1515458263, *iParam0);
		if (!(func_19(64) && iParam1 == 0))
		{
			func_114(*iParam0, Global_35, func_999(), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		iVar0 = func_681(iParam1);
		func_1000(iParam1);
		iLocal_75[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_428(iVar0), func_1001(iVar0), 5f, 30f, 5f, "volTreeFall");
		POPULATION::_0xB56D41A694E42E86(&(iLocal_75[2]), 534496, 0, 0, -1, -1, 2);
		func_1002(iVar0);
		POPULATION::_0xB56D41A694E42E86(&(iLocal_75[2]), 0, 0, 0, -1, -1, 2);
		DECORATOR::DECOR_SET_BOOL(*iParam0, "bChopDown", true);
		PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
		PED::SET_PED_CONFIG_FLAG(*iParam0, 389, true);
		vVar1 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true, false) };
	}
}

bool func_693(var uParam0)
{
	return (ANIMSCENE::_0x25557E324489393C(uParam0->f_156) && ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_156, 0));
}

void func_694()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = (810 + iVar0);
		func_1003(iVar1);
		iVar0++;
	}
}

void func_695(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_35(32768);
			return;
		case 1:
			func_35(65536);
			return;
		case 2:
			func_35(131072);
			return;
		case 3:
			func_35(262144);
			return;
		case 4:
			func_35(524288);
			return;
	}
}

void func_696()
{
	int iVar0;
	bool bVar1;

	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_422(iVar0))
		{
			bVar1 = false;
		}
		else
		{
			iVar0++;
		}
	}
	if (bVar1)
	{
		func_35(512);
	}
}

void func_697(int iParam0, int iParam1)
{
	func_762(iParam0, 0, iParam1);
	func_762(iParam0, 1, iParam1);
	func_762(iParam0, 2, iParam1);
}

bool func_698()
{
	return (Global_1935689->f_1 || &Global_1935689 == 1);
}

var func_699()
{
	return Global_1935689->f_1;
}

var func_700()
{
	return &Global_1357517;
}

char* func_701()
{
	return "INSULT_RESPONSE";
}

var func_702()
{
	char cVar0[32];
	char cVar4[32];

	StringCopy(&cVar4, "INSULT_MALE_CONV", 32);
	StringConCat(&cVar4, "_PART", 32);
	MISC::_INT_TO_STRING(1, "%d", &cVar0);
	StringConCat(&cVar4, &cVar0, 32);
	return func_663(cVar4);
}

var func_703(var uParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	int iVar0;
	var uVar1;

	if (fParam13 <= 0f)
	{
		iVar0 = VOLUME::_0xB3FB80A32BAE3065(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	}
	else
	{
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam13);
	}
	uVar1 = func_1004(uParam0, uParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, iParam11, bParam12, bParam14, bParam15);
	func_109(iVar0);
	return uVar1;
}

int func_704(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	switch (uParam0->f_17)
	{
		case 0:
			if (uParam0->f_25 >= *iParam1)
			{
				uParam0->f_25 = 0;
			}
			if (uParam0->f_24 >= uParam0->f_26 || uParam0->f_23 >= uParam0->f_26)
			{
				uParam0->f_17 = 4;
				return 0;
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2[uParam0->f_23])))
			{
				uParam0->f_17 = 4;
				return 0;
			}
			if (uParam0->f_23 < uParam0->f_26 && uParam0->f_24 < uParam0->f_26)
			{
				if (func_1005(uParam0, iParam1[uParam0->f_25], uParam2))
				{
					if ((ENTITY::IS_ENTITY_ON_SCREEN(iParam1[uParam0->f_25]) && !ENTITY::IS_ENTITY_OCCLUDED(iParam1[uParam0->f_25])) && PED::_0x7F9B9791D4CB71F6(Global_35, iParam1[uParam0->f_25], 0, 0) == 1)
					{
						uParam0->f_31 = iParam1[uParam0->f_25];
						uParam0->f_17 = 1;
					}
					else
					{
						uParam0->f_25++;
						Jump @1215; //curOff = 254
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_31) && func_985(uParam0->f_31, Global_35, 0, uParam0->f_32, 0))
						{
							func_1006(&(uParam0->f_18));
							vVar1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_31, true, false) };
							if (!&uParam0->f_7[uParam0->f_24])
							{
								TASK::TASK_LOOK_AT_ENTITY(uParam0->f_31, Global_35, 7500, 48, 41, 0);
								if (func_368(uParam0->f_34, 8))
								{
									TASK::_0xE7FA07624574B79A(uParam0->f_31, Global_35, 2, 1, 100f, 1, 0, 0, 0);
									func_143(&(uParam0->f_34), 16);
								}
								else if (!func_368(uParam0->f_34, 4) && !PED::_0x84D0BF2B21862059(uParam0->f_31))
								{
									if (!MISC::IS_STRING_NULL_OR_EMPTY(*uParam0))
									{
										TASK::OPEN_SEQUENCE_TASK(&iVar0);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 11000, -1082130432, -1082130432, -1082130432);
										TASK::TASK_ACHIEVE_HEADING(0, 90f, 0);
										TASK::TASK_PLAY_ANIM(0, *uParam0, uParam0->f_1, 1090519040, -1056964608, -1, 0, 0, 0, 0, 0, 0, 0);
										TASK::CLOSE_SEQUENCE_TASK(iVar0);
										TASK::TASK_PERFORM_SEQUENCE(uParam0->f_31, iVar0);
										TASK::CLEAR_SEQUENCE_TASK(&iVar0);
									}
									else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2[uParam0->f_23])))
									{
										uParam0->f_30 = TASK::_0xDF7993356F52359A(uParam0->f_31, 0);
										TASK::OPEN_SEQUENCE_TASK(&iVar0);
										if (func_430(uParam0->f_31, Global_36, 0) > 12f)
										{
											TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, Global_35, 0f, 0f, 0f, 1f, 1000, 5f, 1, 1, 0, 0, 1);
										}
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 11000, -1082130432, -1082130432, -1082130432);
										if (bParam3)
										{
											if (TASK::_0x841475AC96E794D1(uParam0->f_30))
											{
												TASK::_TASK_USE_SCENARIO_POINT(0, uParam0->f_30, 0, 0, 1, 0, 0, 0, -1082130432, 0);
											}
											else
											{
												TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vVar1, 30f, 0, 0, 0, 0, 0);
											}
										}
										TASK::CLOSE_SEQUENCE_TASK(iVar0);
										TASK::TASK_PERFORM_SEQUENCE(uParam0->f_31, iVar0);
										TASK::CLEAR_SEQUENCE_TASK(&iVar0);
									}
									else
									{
										TASK::OPEN_SEQUENCE_TASK(&iVar0);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 11000, -1082130432, -1082130432, -1082130432);
										if (bParam3)
										{
											TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vVar1, 30f, 0, 0, 0, 0, 0);
										}
										TASK::CLOSE_SEQUENCE_TASK(iVar0);
										TASK::TASK_PERFORM_SEQUENCE(uParam0->f_31, iVar0);
										TASK::CLEAR_SEQUENCE_TASK(&iVar0);
									}
								}
							}
							DECORATOR::DECOR_SET_BOOL(uParam0->f_31, "bNoticePlayer", false);
							uParam0->f_17 = 2;
						}
						else if (uParam0->f_18.f_4)
						{
							func_1006(&(uParam0->f_18));
							uParam0->f_17 = 0;
						}
						if (uParam0->f_17 == 0)
						{
							uParam0->f_31 = 0;
							if (uParam0->f_25 == (*iParam1 - 1))
							{
								uParam0->f_25 = 0;
							}
							else
							{
								uParam0->f_25++;
							}
						}
						Jump @1215; //curOff = 885
						if (func_368(uParam0->f_34, 1))
						{
							func_108(0);
						}
						func_759(&(uParam0->f_31), 2000, Global_35, 0, 0, 0, 0, 1);
						if ((!func_1007() && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_2[uParam0->f_23]))) && func_253(0, 1, uParam0->f_31, 1))
						{
							if (func_368(uParam0->f_34, 2))
							{
							}
							else
							{
								if (bParam4 && uParam0->f_23 == 0)
								{
									uParam0->f_23++;
								}
								func_114(uParam0->f_31, Global_35, &(uParam0->f_2[uParam0->f_23]), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							uParam0->f_23++;
							uParam0->f_17 = 3;
							func_48(&(uParam0->f_27));
							return 1;
						}
						Jump @1215; //curOff = 1078
						if ((func_368(uParam0->f_34, 16) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_31)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_31))
						{
							TASK::_0x541E5B41DCA45828(uParam0->f_31, 1, 0);
							func_199(&(uParam0->f_34), 16);
						}
						if (func_385(&(uParam0->f_27), uParam0->f_33))
						{
							iVar4 = func_352(uParam0->f_31, 0);
							if ((bParam3 && iVar4 != -1) && func_263(iVar4, 0))
							{
								func_264(iVar4, 0, 1, 0, 0);
							}
							uParam0->f_17 = 0;
						}
					}
					return 0;
				}
			}
		}

int func_705()
{
	if (func_19(16))
	{
		return 1;
	}
	switch (iLocal_98)
	{
		case 3:
			break;
	}
	return 0;
}

void func_706()
{
	if (!VOLUME::_0x92A78D0BEDB332A3(&(iLocal_75[7])))
	{
		iLocal_75[7] = VOLUME::_CREATE_VOLUME_BOX(*(Local_1157.f_690[2 /*12*/]), 0f, 0f, ((Local_1157.f_690[2 /*12*/])->f_3 + 90f), 5.768971f, 0.631176f, 3f);
		PED::_0x7C00CFC48A782DC0(&(iLocal_75[7]), (Local_1157.f_690[2 /*12*/])->f_8, 0f, -0.5f, 0f, 0f, 0f, 90f, 2, 1);
		PATHFIND::_0x19C7567D2F2287D6(&(iLocal_75[7]), 7);
	}
}

void func_707(var uParam0)
{
	int iVar0;

	if (func_325(Local_1039[6 /*7*/]) && ((iLocal_1152 > 2 && iLocal_1152 < 6) || (iLocal_1152 > 6 && iLocal_1152 < 9)))
	{
		if ((!ENTITY::IS_ENTITY_DEAD(func_63(func_326(6, 0, 0))) && !TASK::GET_IS_TASK_ACTIVE(func_63(func_326(6, 0, 0)), 3)) || (!ENTITY::IS_ENTITY_DEAD(func_63(func_326(6, 1, 0))) && !TASK::GET_IS_TASK_ACTIVE(func_63(func_326(6, 1, 0)), 3)))
		{
			iVar0 = -1;
			if (!func_132(&Local_972, 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(func_63(func_326(6, 0, 0))) && !TASK::GET_IS_TASK_ACTIVE(func_63(func_326(6, 0, 0)), 3))
				{
					Local_972 = func_63(func_326(6, 0, 0));
					iVar0 = 0;
				}
				if (!ENTITY::IS_ENTITY_DEAD(func_63(func_326(6, 1, 0))) && !TASK::GET_IS_TASK_ACTIVE(func_63(func_326(6, 1, 0)), 3))
				{
					Local_972 = func_63(func_326(6, 1, 0));
					iVar0 = 1;
				}
				if (func_985(func_63(func_326(6, iVar0, 0)), Global_35, 0, 5f, 0))
				{
					func_292(&Local_972, &Local_2160, 2048, 54304/*func_291*/, 0, 0);
				}
			}
			func_327(Local_1039[6 /*7*/], func_63(func_326(6, 0, 0)), "PED1");
			func_679(6, 0, 0, 0 == iVar0);
			func_327(Local_1039[6 /*7*/], func_63(func_326(6, 1, 0)), "PED2");
			func_679(6, 1, 0, 1 == iVar0);
			if (ENTITY::DOES_ENTITY_EXIST((Local_1157.f_690[23 /*12*/])->f_8))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED((Local_1157.f_690[23 /*12*/])->f_8))
				{
					ENTITY::DETACH_ENTITY((Local_1157.f_690[23 /*12*/])->f_8, true, true);
					PHYSICS::ACTIVATE_PHYSICS((Local_1157.f_690[23 /*12*/])->f_8);
				}
			}
			if (PHYSICS::DOES_ROPE_EXIST(&(iLocal_1036[0])))
			{
				PHYSICS::DELETE_ROPE(iLocal_1036[0]);
			}
			if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
			}
			func_216(Local_1039[6 /*7*/]);
			iLocal_1152 = 12;
		}
	}
}

void func_708(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	iParam2 = func_1008(iParam2, 0, 100);
	if (func_1009(iParam1, &uVar0))
	{
		ATTRIBUTE::_0xC6258F41D86676E0(iParam0, uVar0, iParam2);
	}
}

Vector3 func_709()
{
	return 2.087f, 0f, -45.186f;
}

Vector3 func_710()
{
	return -1365.597f, -217.639f, 99.727f;
}

Vector3 func_711(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1368.462f, -219.3623f, 100.6008f;
	}
	else
	{
		return -1365.734f, -216.5983f, 100.7423f;
	}
	return 0f, 0f, 0f;
}

float func_712(int iParam0)
{
	if (iParam0 == 0)
	{
		return -114.06f;
	}
	else
	{
		return -156.72f;
	}
	return 0f;
}

void func_713(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return;
	}
	ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
}

Vector3 func_714()
{
	switch (iLocal_98)
	{
		case 1:
			return -1398.155f, -247.5334f, 98.20095f;
		case 2:
			return -1414.83f, -210f, 101.26f;
		case 3:
			return -1414.83f, -210f, 101.26f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_715()
{
	switch (iLocal_98)
	{
		case 1:
			return 89.01f;
		case 2:
			return 88.1f;
		case 3:
			return 88.1f;
		default:
			break;
	}
	return 0f;
}

int func_716()
{
	if (iLocal_98 == 1)
	{
		return 1;
	}
	return 0;
}

Vector3 func_717()
{
	return -1399.61f, -246.8489f, 99.33929f;
}

Vector3 func_718()
{
	return -1402.82f, -270.8668f, 98.5585f;
}

void func_719()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_51(8388608) && VOLUME::_0x92A78D0BEDB332A3(&(iLocal_75[4])))
	{
		iVar0 = ITEMSET::CREATE_ITEMSET(false);
		ITEMSET::_0x20A4BF0E09BEE146(iVar0);
		iVar1 = ENTITY::_0x886171A12F400B89(&(iLocal_75[4]), iVar0, 2);
		if (iVar1 > 0)
		{
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return;
		}
		ITEMSET::_0x20A4BF0E09BEE146(iVar0);
		iVar1 = ENTITY::_0x886171A12F400B89(&(iLocal_75[4]), iVar0, 1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			iVar3 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0));
			if (func_493(iVar3))
			{
				ITEMSET::DESTROY_ITEMSET(iVar0);
				return;
			}
			iVar2++;
		}
		func_58(8388608);
		func_172();
		ITEMSET::DESTROY_ITEMSET(iVar0);
	}
}

void func_720()
{
	if (ENTITY::DOES_ENTITY_EXIST((Local_1157.f_690[5 /*12*/])->f_8))
	{
		if (!ENTITY::_0x083D497D57B7400F((Local_1157.f_690[5 /*12*/])->f_8))
		{
			if (!func_51(65536))
			{
				ENTITY::FREEZE_ENTITY_POSITION((Local_1157.f_690[5 /*12*/])->f_8, true);
			}
		}
		else if (func_51(65536))
		{
			ENTITY::FREEZE_ENTITY_POSITION((Local_1157.f_690[5 /*12*/])->f_8, false);
			PHYSICS::ACTIVATE_PHYSICS((Local_1157.f_690[5 /*12*/])->f_8);
		}
	}
}

void func_721()
{
	if (!func_51(16777216))
	{
		if (func_1010())
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_1001))
			{
				func_1011(&Local_1001, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			func_1012(iLocal_2413, 0);
			func_58(16777216);
		}
	}
	else if (!func_1010())
	{
		func_1012(iLocal_2413, 1);
		func_201();
		func_50(16777216);
	}
}

void func_722()
{
	if (iLocal_2317 >= 2 && (iLocal_2317 < 5 || func_19(512)))
	{
		if (!func_19(512))
		{
			func_1013();
		}
		if (func_213(Global_35, &(iLocal_75[4]), 1, 0))
		{
			func_1014(0);
			if (!func_68(512))
			{
				func_1016(512, func_1015(Global_35, &iLocal_1156, func_246(), &(iLocal_75[4]), 1097859072, 2, 1, 129, 0, 0, 1071644672));
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1156))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_1156, 136, true);
				}
			}
		}
		else
		{
			func_106(0);
		}
	}
}

void func_723(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	var uVar0[5];
	int iVar6;

	uVar0[iVar6] = *uParam0;
	iVar6++;
	uVar0[iVar6] = *uParam1;
	iVar6++;
	uVar0[iVar6] = *iParam2;
	iVar6++;
	uVar0[iVar6] = *uParam3;
	iVar6++;
	uVar0[iVar6] = *uParam4;
	iVar6++;
	func_1017(&uVar0, 0, (iVar6 - 1), 1, 1, 1, 1);
}

void func_724(int iParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 263, !bParam1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 138, bParam1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 488, bParam1);
	}
}

void func_725(int iParam0, bool bParam1)
{
	func_1018(&iParam0, !bParam1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, bParam1);
	AUDIO::STOP_PED_SPEAKING(iParam0, bParam1);
}

bool func_726(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam0, sParam1);
}

int func_727(var uParam0, char* sParam1, int iParam2)
{
	vector3 vVar0[24];
	bool bVar3;

	StringCopy(&cVar0, sParam1, 24);
	if (iParam2 > 0)
	{
		bVar3 = true;
	}
	if (AUDIO::_0xD89504D9D7D5057D(sParam1))
	{
		return 1;
	}
	else if (func_662(uParam0, cVar0, bVar3, iParam2, 1, 0))
	{
		return 1;
	}
	return 0;
}

char* func_728()
{
	return "desk_loop_book";
}

char* func_729()
{
	return "script_proc@event_area@appleseed@foreman_stage2";
}

int func_730(var uParam0, int iParam1)
{
	if (!func_51(8388608))
	{
		return 0;
	}
	if (func_19(4096))
	{
		return 0;
	}
	if (!func_251(*uParam0, 0, 1))
	{
		return 0;
	}
	if (!func_325(Local_1039[2 /*7*/]))
	{
		return 0;
	}
	if (func_513(func_429(iParam1), 1) > 63f)
	{
		return 0;
	}
	if ((MISC::GET_FRAME_COUNT() % 3) == 0)
	{
		if (func_460(iParam1))
		{
			return 1;
		}
	}
	else if (func_854(iParam1))
	{
		return 1;
	}
	return 0;
}

Vector3 func_731(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return vVar0;
	}
	vVar6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	func_1019(vVar6);
	vVar6 = { FtoV((ENTITY::GET_ENTITY_SPEED(iParam0) * fParam1)) * vVar6 };
	vVar3 = { vVar0 + vVar6 };
	return vVar3;
}

int func_732(float fParam0, int iParam1, bool bParam2, int iParam3)
{
	float fVar0;

	if (Global_1935630->f_12)
	{
		return 1;
	}
	if (!PED::_0x50F124E6EF188B22(Global_35))
	{
		return 1;
	}
	fVar0 = func_1020();
	if (fVar0 <= fParam0)
	{
		return 1;
	}
	if (bParam2)
	{
		if (fParam0 < 0.5f)
		{
			func_1021(0);
		}
		else
		{
			func_1021(1);
		}
		return 1;
	}
	if (fParam0 < 0.5f)
	{
		func_1021(0);
	}
	else
	{
		func_1021(1);
	}
	return 0;
}

void func_733(var uParam0)
{
	if (!func_658(uParam0))
	{
	}
	if (func_659(uParam0))
	{
		uParam0->f_1 = (func_471() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_473(uParam0, 2);
	}
}

void func_734(var uParam0)
{
	if (!func_658(uParam0))
	{
	}
	if (!func_659(uParam0))
	{
		uParam0->f_2 = (func_471() - uParam0->f_1);
		func_472(uParam0, 2);
	}
}

void func_735(var uParam0, char* sParam1)
{
	func_955(uParam0, sParam1, 0);
}

void func_736()
{
	func_42(Local_2160.f_136, 64);
	func_10(Local_2160.f_136, 512);
}

int func_737(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(&(iLocal_75[iParam0])))
	{
		return VOLUME::_0xF256A75210C5C0EB(&(iLocal_75[iParam0]), Global_36);
	}
	return 0;
}

int func_738(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return ANIMSCENE::GET_ANIM_SCENE_BOOL(*uParam0, sParam1);
	}
	return 0;
}

void func_739(var uParam0, var uParam1)
{
	if (func_213(Global_35, &(iLocal_75[17]), 1, 0))
	{
		if (func_301(*uParam0) && func_1022(*uParam0, 0))
		{
			func_828(*uParam0, 0, 1);
		}
		if (func_301(*uParam1) && func_1022(*uParam1, 0))
		{
			func_828(*uParam1, 0, 1);
		}
	}
	else if (Global_36.f_1 < func_744())
	{
		if (!MAP::DOES_BLIP_EXIST(iLocal_2413))
		{
			func_1023(func_740(), &iLocal_2413, 1631143573, 0, "LOG_BLIP_TRUNK", 0);
		}
		if (func_301(*uParam0) && !func_1022(*uParam0, 0))
		{
			func_828(*uParam0, 1, 1);
			MAP::SET_BLIP_COORDS(iLocal_2413, func_740());
		}
		if (func_301(*uParam1) && func_1022(*uParam1, 0))
		{
			func_828(*uParam1, 0, 1);
		}
	}
	else
	{
		if (func_301(*uParam0) && func_1022(*uParam0, 0))
		{
			func_828(*uParam0, 0, 1);
		}
		if (!MAP::DOES_BLIP_EXIST(iLocal_2413))
		{
			func_1023(func_742(), &iLocal_2413, 1631143573, 0, "LOG_BLIP_TRUNK", 0);
		}
		if (func_301(*uParam1) && !func_1022(*uParam1, 0))
		{
			func_828(*uParam1, 1, 1);
			MAP::SET_BLIP_COORDS(iLocal_2413, func_742());
		}
	}
}

Vector3 func_740()
{
	return -1391.3f, -271.25f, 98.57f;
}

int func_741(var uParam0, char* sParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, int iParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, int iParam18, bool bParam19)
{
	int iVar0;

	if (!func_301(*uParam0))
	{
		iVar0 = 0;
		if (bParam17)
		{
			iVar0 = 5;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			*uParam0 = func_1024(sParam1, iParam6, iParam5, iParam10, iParam9, 0, iParam15, iVar0, 1070386381, 570, 4000, 10, 1073741824, 0, iParam18, 0, 0);
			func_1025(*uParam0, fParam7, 1);
		}
		else if (iParam13 != 0)
		{
			*uParam0 = func_1026(sParam1, iParam6, iParam13, iParam10, iParam9, iParam15, iVar0, 570, 4000, 10, 1073741824, 0, iParam18, 0);
		}
		else
		{
			if (func_241(vParam2))
			{
				return 0;
			}
			*uParam0 = func_1027(sParam1, iParam6, vParam2, fParam7, iParam10, iParam9, iParam15, iVar0, 570, 4000, 10, 1073741824, 0, iParam18, 0);
		}
		if (fParam8 != 0f)
		{
			func_974(*uParam0, sParam1, BUILTIN::CEIL(MISC::ABSF(fParam8)), 1);
			if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > func_1028(1))
			{
				func_828(*uParam0, 0, 1);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		{
		}
		if (bParam19)
		{
			func_834(*uParam0, 0, 1);
		}
		return 0;
	}
	if (!bParam16)
	{
		if (func_1022(*uParam0, 0))
		{
			if (PED::_0xA911EE21EDF69DAF(Global_35))
			{
				func_828(*uParam0, 0, 1);
			}
		}
		else if (!PED::_0xA911EE21EDF69DAF(Global_35))
		{
			func_828(*uParam0, 1, 1);
		}
	}
	if (fParam8 != 0f)
	{
		if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > func_1028(1))
		{
			func_828(*uParam0, 0, 1);
		}
	}
	if (bParam12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam5) && ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			if (func_301(*uParam0))
			{
				func_302(uParam0, 1, 1);
				return 0;
			}
		}
	}
	if ((!bParam17 && func_1029(*uParam0, 1)) || (bParam17 && func_753(*uParam0, 1)))
	{
		if (!bParam14)
		{
			if (fParam8 < 0f)
			{
				func_766(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0f)
			{
				func_1030(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 1065353216, 1, 0, 0, 1, 752097756);
			}
		}
		func_302(uParam0, 1, 1);
		return 1;
	}
	return 0;
}

Vector3 func_742()
{
	return -1392.7f, -269.93f, 98.65f;
}

void func_743()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < iLocal_2543)
	{
		iVar1 = func_63(&(iLocal_2527[iVar0]));
		PED::_0x935CF6E42BAF7F4D(iVar1);
		iVar0++;
	}
}

float func_744()
{
	return -270.6f;
}

void func_745(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 256;
	uParam0->f_4 = 0;
	func_265(&(uParam0->f_5));
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = 0.25f;
	uParam0->f_18 = 0.25f;
	uParam0->f_19 = 40000f;
	uParam0->f_20 = 10f;
	uParam0->f_21 = 1f;
	uParam0->f_22 = 0f;
	uParam0->f_23 = 0;
	uParam0->f_25 = 0;
	StringCopy(&(uParam0->f_30), "", 24);
	StringCopy(&(uParam0->f_26), "", 32);
}

Vector3 func_746(var uParam0, char* sParam1, char* sParam2)
{
	vector3 vVar0;
	bool bVar12;

	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return 0f, 0f, 0f;
	}
	bVar12 = !MISC::IS_STRING_NULL_OR_EMPTY(sParam2);
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(*uParam0, sParam1, &vVar0, bVar12, sParam2, 2))
	{
		return vVar0;
	}
	return 0f, 0f, 0f;
}

float func_747(var uParam0, char* sParam1, char* sParam2)
{
	vector3 vVar0;

	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return 40000f;
	}
	vVar0 = { func_1031(uParam0, sParam1, sParam2) };
	if (!func_241(vVar0))
	{
		return vVar0.z;
	}
	return 40000f;
}

int func_748(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1) && !func_368(uParam0->f_23, 4))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_1, 179, true);
	}
	switch (*uParam0)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
			{
				func_48(&(uParam0->f_5));
				if (PED::IS_PED_A_PLAYER(uParam0->f_1))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, uParam0->f_3, 0);
					if (func_368(uParam0->f_23, 2048))
					{
						HUD::_0x8BC7C1F929D07BF3(724769646);
					}
				}
				if (uParam0->f_24 == 0)
				{
					PED::_0x7DE9692C6F64CFE8(Global_35, false, 0, 0);
				}
				if (!func_368(uParam0->f_23, 4))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(uParam0->f_1);
				}
				if (!func_368(uParam0->f_23, 2))
				{
					uParam0->f_2 = PED::_0x4C8B59171957BCF7(uParam0->f_1);
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2) && func_374(uParam0->f_1))
					{
						func_1032(uParam0->f_1);
						iVar0 = func_956(uParam0->f_1, uParam0->f_8, 1f);
						switch (iVar0)
						{
							case 3:
								iVar1 = 131072;
								break;
							case 2:
								iVar1 = 262144;
								break;
						}
						TASK::TASK_DISMOUNT_ANIMAL(uParam0->f_1, iVar1, 0, 0, 0, 0);
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1, true))
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_1, true);
						VEHICLE::BRING_VEHICLE_TO_HALT(iVar2, 5f, -1, false);
						iVar3 = func_956(uParam0->f_1, uParam0->f_8, 1f);
						switch (iVar3)
						{
							case 3:
								iVar4 = 131072;
								break;
							case 2:
								iVar4 = 262144;
								break;
						}
						TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_1, 0, iVar4);
					}
					else
					{
						func_143(&(uParam0->f_23), 2);
					}
				}
				if (func_241(uParam0->f_14))
				{
					uParam0->f_14 = { uParam0->f_8 };
				}
				func_1033(uParam0, 1, iParam1);
			}
			else
			{
				func_1033(uParam0, 6, iParam1);
			}
			break;
		case 1:
			if (func_1034(uParam0, iParam1))
			{
				func_48(&(uParam0->f_5));
				if (!func_1035(uParam0, iParam1))
				{
					func_1036();
				}
				func_1033(uParam0, 2, iParam1);
			}
			break;
		case 2:
			if (func_1035(uParam0, iParam1))
			{
				func_48(&(uParam0->f_5));
				if (!func_368(uParam0->f_23, 4))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("weapon_unarmed"), false, 0, false, false);
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("weapon_unarmed"), false, 1, false, false);
					TASK::TASK_SWAP_WEAPON(uParam0->f_1, 1, func_368(uParam0->f_23, 512), 0, 0);
				}
				func_1033(uParam0, 3, iParam1);
			}
			break;
		case 3:
			if (func_1037(uParam0, iParam1))
			{
				func_48(&(uParam0->f_5));
				if (!PED::_0xA911EE21EDF69DAF(uParam0->f_1))
				{
					func_143(&(uParam0->f_23), 256);
				}
				if (func_368(uParam0->f_23, 4096) && !PED::_0xA911EE21EDF69DAF(uParam0->f_1))
				{
					func_143(&(uParam0->f_23), 256);
					iVar6 = PED::_0x4C8B59171957BCF7(uParam0->f_1);
					if (func_358(iVar6, uParam0->f_1, 1, 1) < 5f)
					{
						iVar5 = func_1038(iVar6);
						TASK::TASK_PICKUP_CARRIABLE_ENTITY(uParam0->f_1, iVar5);
					}
				}
				else if (!func_368(uParam0->f_23, 256))
				{
					iVar5 = PED::_0xD806CD2A4F2C2996(uParam0->f_1);
					TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(uParam0->f_1, iVar5, uParam0->f_14, uParam0->f_21, uParam0->f_4);
				}
				func_1033(uParam0, 4, iParam1);
			}
			break;
		case 4:
			if (func_1039(uParam0, iParam1))
			{
				func_48(&(uParam0->f_5));
				if (func_368(uParam0->f_23, 8192))
				{
					if (func_368(uParam0->f_23, 1024))
					{
						iVar7 = 64;
					}
					else
					{
						iVar7 = 2;
					}
					TASK::TASK_ENTER_ANIM_SCENE(uParam0->f_1, uParam0->f_25, &(uParam0->f_30), &(uParam0->f_26), uParam0->f_21, 0, iVar7, 20000, -1082130432);
				}
				else
				{
					if (!func_241(uParam0->f_11))
					{
					}
					bVar8 = false;
					if (!func_368(uParam0->f_23, 1024))
					{
						bVar8 = (bVar8 || 1);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar9);
					if (!func_241(uParam0->f_11))
					{
						if (func_368(uParam0->f_23, 16))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam0->f_11, uParam0->f_21, func_59(!func_368(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_21, func_59(!func_368(uParam0->f_23, 128), 20000, -1), uParam0->f_17, bVar8, uParam0->f_19);
						}
					}
					if (func_368(uParam0->f_23, 16))
					{
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam0->f_8, uParam0->f_21, func_59(!func_368(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_8, uParam0->f_21, func_59(!func_368(uParam0->f_23, 128), 20000, -1), uParam0->f_17, bVar8, uParam0->f_19);
					}
					if (func_368(uParam0->f_23, 1))
					{
						TASK::TASK_ACHIEVE_HEADING(0, uParam0->f_19, 0);
					}
					func_1040(uParam0->f_1, &iVar9, 0, 0, 1, 1);
				}
				func_1033(uParam0, 5, iParam1);
			}
			break;
		case 5:
			if (func_368(uParam0->f_23, 8192))
			{
				if (ANIMSCENE::_0x337F1CC8EE895601(uParam0->f_25, &(uParam0->f_30)))
				{
					iVar10 = 1;
				}
			}
			else if (!func_368(uParam0->f_23, 1))
			{
				uParam0->f_19 = ENTITY::GET_ENTITY_HEADING(uParam0->f_1);
			}
			if (!func_368(uParam0->f_23, 128) && func_223(&(uParam0->f_5), 15f))
			{
				iVar10 = 1;
			}
			if (!func_368(uParam0->f_23, 8192))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1, 242628503, 1) == 8)
				{
					iVar10 = 1;
				}
				if ((func_241(uParam0->f_11) || !func_129(uParam0->f_1, 242628503)) || TASK::GET_SEQUENCE_PROGRESS(uParam0->f_1) > 0)
				{
					iVar11 = 1;
				}
				if (func_1041(uParam0->f_1, uParam0->f_8, uParam0->f_19, uParam0->f_18, uParam0->f_20, func_368(uParam0->f_23, 8)) && (!func_368(uParam0->f_23, 64) || MISC::ABSF(func_1042(uParam0->f_1, uParam0->f_8)) < uParam0->f_22))
				{
					iVar12 = 1;
				}
			}
			if ((iVar11 && iVar12) || iVar10)
			{
				if (func_368(uParam0->f_23, 32))
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(uParam0->f_1, uParam0->f_8, 0);
				}
				func_265(&(uParam0->f_5));
				func_1033(uParam0, 6, iParam1);
				return 1;
			}
			break;
		case 6:
			return 1;
	}
	return 0;
}

int func_749(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_1043(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_1044(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

var func_750(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_0x049D5C615BD38BAD(&Var0, &Var13, iParam5);
	return uVar15;
}

bool func_751(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_301(iParam0))
	{
		return false;
	}
	iVar0 = func_594(iParam0);
	return HUD::_UIPROMPT_HAS_MASH_MODE_FAILED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_752(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_301(iParam0))
	{
		return;
	}
	iVar0 = func_594(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_753(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_301(iParam0))
	{
		return false;
	}
	iVar0 = func_594(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_754(int iParam0)
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(1, iParam0, 0);
}

void func_755(int iParam0)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(func_63(&(iLocal_2527[*iParam0]))))
	{
		iVar0 = func_63(&(iLocal_2527[*iParam0]));
	}
	else
	{
		return;
	}
	PED::_0x935CF6E42BAF7F4D(iVar0);
	func_1045(&iVar0, 0);
	if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
	{
		TASK::_0x541E5B41DCA45828(iVar0, 1, 0);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
		if (func_1046(&(iLocal_2527[*iParam0])))
		{
			func_1003(&(iLocal_2527[*iParam0]));
		}
		else
		{
			func_264(&(iLocal_2527[*iParam0]), 0, 1, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iVar0, 178, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 130, false);
		}
	}
	func_243(iVar0, 1, 1);
}

void func_756(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1047(iParam0, 0, func_650(7));
	((*Local_814[iParam0 /*52*/])[0 /*17*/])->f_14 = 0;
	func_979((*Local_814[iParam0 /*52*/])[0 /*17*/], 1);
	func_762(iParam0, 0, !func_51(1073741824));
	func_1047(iParam0, 1, func_650(10));
	func_762(iParam0, 1, bParam2);
	func_762(iParam0, 2, bParam1);
	func_1048(iParam0, 2, !bParam1);
	if (iParam0 == 0)
	{
		func_58(268435456);
	}
	else if (iParam0 == 1)
	{
		func_69(524288);
	}
}

void func_757(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_58(-2147483648);
		func_54(134217728, bParam1);
	}
	else
	{
		func_50(-2147483648);
		func_54(134217728, bParam1);
	}
}

void func_758(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1047(iParam0, 0, func_650(7));
	((*Local_814[iParam0 /*52*/])[0 /*17*/])->f_14 = 0;
	func_979((*Local_814[iParam0 /*52*/])[0 /*17*/], 1);
	func_762(iParam0, 0, 0);
	func_1047(iParam0, 1, func_650(10));
	func_762(iParam0, 1, 1);
	func_762(iParam0, 2, bParam1);
	func_1048(iParam0, 2, !bParam1);
	if (iParam0 == 0)
	{
		func_58(268435456);
	}
	else if (iParam0 == 1)
	{
		func_69(524288);
	}
}

void func_759(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	struct<14> Var0;

	if (iParam2 == 0)
	{
		iParam2 = Global_35;
	}
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_4 = 21030;
	Var0.f_3 = iParam2;
	Var0.f_8 = 4;
	if (bParam7)
	{
		Var0.f_17 = 4;
		Var0.f_18 = 1;
	}
	else
	{
		Var0.f_17 = 0;
		Var0.f_18 = 0;
	}
	Var0.f_19 = 4;
	Var0.f_20 = 2;
	Var0.f_21 = 4;
	Var0.f_22 = 3;
	Var0 = { iParam4, iParam5, iParam6 };
	Var0.f_12 = 0;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	if (bParam3)
	{
		func_478(&(Var0.f_5), 1);
	}
	Var0.f_13 = 0;
	Var0.f_7 = iParam1;
	func_1049(&(Var0.f_5), 1);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(*uParam0, &Var0);
	}
}

void func_760(var uParam0)
{
	if (!func_1050((*Local_814[1 /*52*/])[1 /*17*/], 0, 0))
	{
		if ((func_253(0, 1, *uParam0, 1) && !func_381("LCMPF_IG_TFRSH")) && !func_381("LCMPF_IG_TFRSN"))
		{
			func_1051(1, 0);
		}
	}
	else if (func_1050((*Local_814[1 /*52*/])[0 /*17*/], 0, 0))
	{
		if (!func_213(Global_35, &(iLocal_75[19]), 1, 0))
		{
			func_762(1, 0, 0);
		}
	}
	else if (func_213(Global_35, &(iLocal_75[19]), 1, 1))
	{
		func_762(1, 0, 1);
	}
}

void func_761(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;
	var uVar10;
	var uVar11;
	float fVar12;
	float fVar13;
	float fVar14;

	vVar0 = { func_746(Local_1039[2 /*7*/], "player", "PB_HANDOVER_L") };
	uVar9 = func_747(Local_1039[2 /*7*/], "player", "PB_HANDOVER_L");
	vVar3 = { func_746(Local_1039[2 /*7*/], "player", "PB_HANDOVER_R") };
	uVar10 = func_747(Local_1039[2 /*7*/], "player", "PB_HANDOVER_R");
	vVar6 = { func_746(Local_1039[2 /*7*/], "player", "PB_HANDOVER_N") };
	uVar11 = func_747(Local_1039[2 /*7*/], "player", "PB_HANDOVER_N");
	fVar12 = func_513(vVar0, 1);
	fVar13 = func_513(vVar3, 1);
	fVar14 = func_513(vVar6, 1);
	if (fVar13 <= fVar14 && fVar13 <= fVar12)
	{
		*uParam0 = { vVar3 };
		*uParam1 = uVar10;
		func_813(Local_1039[2 /*7*/], "PB_HANDOVER_R");
	}
	else if (fVar12 <= fVar13 && fVar12 <= fVar14)
	{
		*uParam0 = { vVar0 };
		*uParam1 = uVar9;
		func_813(Local_1039[2 /*7*/], "PB_HANDOVER_L");
	}
	else
	{
		*uParam0 = { vVar6 };
		*uParam1 = uVar11;
		func_813(Local_1039[2 /*7*/], "PB_HANDOVER_N");
	}
}

void func_762(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	func_652((*Local_814[iParam0 /*52*/])[iParam1 /*17*/], bParam2, 0);
}

int func_763(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1)))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, &(uParam0->f_1)))
	{
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_764(var uParam0, bool bParam1, bool bParam2)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return;
	}
	if (func_954(uParam0, &(uParam0->f_1)))
	{
		func_632(uParam0, &(uParam0->f_1), bParam2);
		if (bParam1)
		{
			func_633(uParam0, &(uParam0->f_4));
		}
	}
}

void func_765(var uParam0)
{
	func_735(uParam0, &(uParam0->f_4));
}

void func_766(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1052(iParam0);
	if (bParam3)
	{
		func_1053(iParam0, sParam1, iParam2);
	}
}

bool func_767(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_1054(iParam0);
		return func_1055(iParam0, 2084597891, iParam1, iVar0);
	}
	return DECORATOR::DECOR_SET_INT(iParam0, "loot_money", iParam1);
}

char* func_768(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (iLocal_2646)
			{
				case 0:
					return "LCMPF_IG_TFR1P";
				case 1:
					return "LCMPF_IG_TFR2P";
				default:
					break;
			}
			break;
		case 1:
			switch (iLocal_2646)
			{
				case 0:
					return "LCMPF_IG_TFR1N";
				case 1:
					return "LCMPF_IG_TFR2N";
				default:
					break;
			}
			break;
	}
	return "";
}

Vector3 func_769()
{
	return -1397.791f, -214.2272f, 101.3653f;
}

Vector3 func_770()
{
	return -1406.475f, -213.2691f, 101.3333f;
}

bool func_771(float fParam0)
{
	return !func_253(fParam0, 1, 0, 0);
}

void func_772(char* sParam0, bool bParam1)
{
	StringCopy(&Local_1001, sParam0, 32);
	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_1001))
		{
			func_1011(&Local_1001, 7500, 0, 1, 0, 0, -1, -1, 0);
		}
	}
}

int func_773(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 0;
	}
	iVar0 = 1;
	if (bParam1 && iLocal_98 == 1)
	{
		iVar0 = 0;
	}
	if (iVar0 && func_213(*uParam0, &(iLocal_75[0]), 1, 0))
	{
		if (func_213(Global_35, &(iLocal_75[0]), 1, 0))
		{
			return 1;
		}
	}
	else if (func_358(Global_35, *uParam0, 1, 1) < func_1056(bParam1, 18f, 12.5f) && (!bParam2 || PED::IS_PED_FACING_PED(*uParam0, Global_35, 165f)))
	{
		return 1;
	}
	return 0;
}

int func_774(var uParam0)
{
	if (!func_658(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_659(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_575() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

void func_775(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1047(iParam0, 0, "LOG_CTXTBUY");
	((*Local_814[0 /*52*/])[0 /*17*/])->f_14 = func_778();
	func_978((*Local_814[iParam0 /*52*/])[0 /*17*/], 1);
	func_974(((*Local_814[iParam0 /*52*/])[0 /*17*/])->f_6, "LOG_CTXTBUY", ((*Local_814[iParam0 /*52*/])[0 /*17*/])->f_14, 0);
	func_762(iParam0, 0, 1);
	func_1047(iParam0, 1, func_650(1));
	func_762(iParam0, 1, 1);
	func_762(iParam0, 2, 0);
	func_1048(iParam0, 2, 1);
	func_58(268435456);
	func_330(536870912);
}

void func_776(var uParam0)
{
	if (!func_138(uParam0->f_136))
	{
		return;
	}
	func_42(uParam0->f_136, 128);
	func_10(uParam0->f_136, 65536);
	func_43(uParam0, 128);
	func_1057(30, 0, 1);
}

Vector3 func_777()
{
	return -1398.998f, -208.266f, 101.8822f;
}

int func_778()
{
	var uVar0;

	if (func_9(1, 2) && iLocal_98 > 1)
	{
		uVar0 = func_1058(1795814421);
	}
	else if (iLocal_98 == 1)
	{
		uVar0 = func_1058(1121724679);
	}
	return uVar0;
}

void func_779(var uParam0)
{
	var uVar0[1];

	uVar0[0] = Global_35;
	PED::_0x34EDDD59364AD74A(*uParam0, &uVar0);
}

int func_780(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!func_658(&(uParam1->f_133)))
	{
		func_48(&(uParam1->f_133));
	}
	else if (func_774(&(uParam1->f_133)) > iParam2)
	{
		func_265(&(uParam1->f_133));
		if (func_263(iParam0, 0))
		{
			func_75(iParam0, bParam3);
			return 1;
		}
	}
	return 0;
}

void func_781()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		vVar1 = { func_1059(iVar0) };
		func_1060(&vVar1, 0);
		iVar0++;
	}
}

int func_782()
{
	return -1426662425;
}

int func_783()
{
	return joaat("u_m_m_bivforeman_01");
}

int func_784()
{
	return -1597025878;
}

Vector3 func_785()
{
	return -1399.903f, -211.2283f, 102.3423f;
}

int func_786()
{
	return 752173188;
}

int func_787()
{
	return -538947018;
}

Vector3 func_788()
{
	return -1402.626f, -207.791f, 101.897f;
}

char* func_789()
{
	return "PROP_HUMAN_SEAT_CHAIR_GENERIC_MALE_A";
}

char* func_790()
{
	return "WORLD_HUMAN_LEAN_POST_RIGHT_HAND_PLANTED_MALE_B";
}

char* func_791(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

Vector3 func_792(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (bParam0)
	{
		return vParam1;
	}
	return vParam4;
}

int func_793()
{
	switch (iLocal_1147)
	{
		case 2:
		case 3:
			return 277874648;
		case 0:
			return 1550315122;
		case 1:
			return -1006870375;
	}
	return 0;
}

char* func_794()
{
	switch (iLocal_1147)
	{
		case 2:
		case 3:
			return "EAFOR_A_L";
		case 0:
			return "EAFOR_GOOD_TO_SEE";
		case 1:
			return "EAFOR_MORE_TIME";
	}
	return "";
}

int func_795(var uParam0, int iParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	if (func_1061(*uParam0, iParam1, fParam2, iParam3, sParam4, iParam5, 106) && (iParam6 == 0 || ENTITY::HAS_ANIM_EVENT_FIRED(*uParam0, iParam6)))
	{
		return 1;
	}
	return 0;
}

char* func_796(bool bParam0)
{
	if (iLocal_1147 == 2)
	{
		if (bParam0)
		{
			return "action_02_fm";
		}
		else
		{
			return "action_01b_fm";
		}
	}
	else if (iLocal_1147 == 3)
	{
		return "clockwork_fm";
	}
	return "";
}

int func_797(var uParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 0;
	}
	if (func_51(-2147483648))
	{
		return 0;
	}
	if (func_866(1))
	{
		return 0;
	}
	if (!func_253(-3.5f, 1, *uParam0, 1))
	{
		return 0;
	}
	return 1;
}

int func_798(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	switch (iLocal_1147)
	{
		case 2:
		case 3:
			return 277874648;
		case 0:
		case 1:
			vVar1 = { func_731(Global_35, 2f) };
			iVar0 = func_956(*uParam0, vVar1, 1060437492);
			switch (iVar0)
			{
				case 0:
					return -1619253850;
				case 2:
					return 1888479052;
				case 3:
					return -925583064;
			}
			break;
	}
	return 0;
}

void func_799(var uParam0, int iParam1, int iParam2)
{
	struct<23> Var0;

	if (iParam2 == 0)
	{
		iParam2 = Global_35;
	}
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_4 = 21030;
	Var0.f_3 = iParam2;
	Var0.f_8 = 4;
	Var0.f_17 = 4;
	Var0.f_18 = 4;
	Var0.f_19 = 4;
	Var0.f_20 = 4;
	Var0.f_21 = 4;
	Var0.f_22 = 4;
	func_478(&(Var0.f_5), 1);
	Var0.f_13 = 3;
	Var0.f_7 = iParam1;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(*uParam0, &Var0);
	}
}

void func_800(var uParam0)
{
	int iVar0;

	if (func_51(65536))
	{
		if (!func_263(Local_2160.f_138, 0))
		{
			func_62(Local_2160.f_138, 1, 1);
		}
		if (!func_68(2097152))
		{
			func_69(2097152);
			PED::_0xAAB050DA48B57978(*uParam0, "Default_Angry", Global_35, -1, 4);
			if (iLocal_103 == 3)
			{
				func_69(1048576);
			}
		}
		if (func_658(vLocal_1117[3 /*3*/]))
		{
			func_265(vLocal_1117[3 /*3*/]);
		}
		if (func_253(-3.5f, 1, 0, 0) && !func_658(vLocal_1117[5 /*3*/]))
		{
			func_48(vLocal_1117[5 /*3*/]);
		}
		if (func_223(vLocal_1117[5 /*3*/], 10f))
		{
			func_379(&(Local_2160.f_35), func_1062(), *uParam0, Global_35, 0, 0, 1, 1);
			TASK::CLEAR_PED_TASKS(*uParam0, 1, 0);
			switch (iLocal_103)
			{
				case 1:
					TASK::OPEN_SEQUENCE_TASK(&iLocal_735);
					TASK::TASK_CONFRONT(0, Global_35, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 5000, -1082130432, -1082130432, -1082130432);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_735);
					TASK::_TASK_PERFORM_SEQUENCE_2(*uParam0, iLocal_735, 2f, 7.5f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_735);
					Local_104 = 0;
					break;
				case 2:
					iVar0 = func_118(131072, 1056964608, 1065353216);
					WEAPON::_GIVE_WEAPON_TO_PED_2(*uParam0, iVar0, 99, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, iVar0, false, 0, false, false);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_735);
					TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, 0, 1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_735);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, iLocal_735);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_735);
					Local_104 = 0;
					break;
				case 3:
					func_69(1048576);
					break;
			}
			iLocal_103++;
		}
	}
	else
	{
		if (func_658(vLocal_1117[5 /*3*/]))
		{
			func_265(vLocal_1117[5 /*3*/]);
		}
		if (func_68(2097152))
		{
			if (!func_658(vLocal_1117[3 /*3*/]))
			{
				func_48(vLocal_1117[3 /*3*/]);
			}
			if (func_223(vLocal_1117[3 /*3*/], 15f))
			{
				if (iLocal_103 == 3)
				{
					TASK::CLEAR_PED_TASKS(*uParam0, 1, 0);
					PED::_0x935CF6E42BAF7F4D(*uParam0);
					func_75(Local_2160.f_138, 1);
					func_76(Local_750[0 /*21*/], 0);
				}
				func_330(2097152);
			}
		}
	}
	if (func_68(2097152))
	{
		if (!func_129(*uParam0, 242628503))
		{
			func_1063(&Local_104, 0);
		}
	}
}

void func_801(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	if (func_9(Local_2160.f_136, 1024))
	{
		func_1064(uParam0);
	}
	if (!func_51(32))
	{
		return;
	}
	if (func_132(&Local_972, 1) && Local_972 == *uParam0)
	{
		func_97();
	}
	(Global_1914319->f_3[11 /*446*/])->f_23 = *uParam0;
	if (func_837(11))
	{
		if (!func_19(67108864))
		{
			func_732(1048576000, 1028443341, 1, 106);
			func_14(67108864);
			func_14(1073741824);
			if (func_1065(11, 1))
			{
				func_1066(11, 1);
			}
		}
	}
	else if (func_19(67108864) && func_1067(11) == 0)
	{
		if (!func_325(Local_1039[0 /*7*/]))
		{
			TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
		}
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
			func_80(&Local_2160, 65536);
		}
		func_126(67108864);
		func_126(134217728);
		func_126(4096);
	}
	if (func_19(67108864))
	{
		if (!func_263(Local_2160.f_138, 0))
		{
			func_62(Local_2160.f_138, 0, 1);
		}
		if (((!func_325(Local_1039[0 /*7*/]) && !func_19(536870912)) && func_263(Local_2160.f_138, 0)) && !func_19(134217728))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 4224, 0);
			func_43(&Local_2160, 65536);
			vVar0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
			func_1068(&vVar0, 1088421888);
			func_673(Local_1039[1 /*7*/], vVar0, 0f, 0f, func_1069(vVar0, Global_36));
			PED::_0xEC6935EBE0847B90(*uParam0, Global_36);
			TASK::CLEAR_PED_TASKS(*uParam0, 1, 0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam0, Global_35, -1, -1082130432, -1082130432, -1082130432);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, *uParam0, -1, -1082130432, -1082130432, -1082130432);
			func_14(4096);
			func_14(134217728);
		}
	}
	if ((((!func_19(2048) && !func_837(11)) && func_1067(11) != 0) && func_519(Local_1039[1 /*7*/])) && func_1070(*uParam0, Global_35, 0.8f))
	{
		func_42(Local_2160.f_136, 32);
		func_96(uLocal_2499[0]);
		func_10(Local_2160.f_136, 4);
		func_43(&Local_2160, 128);
		func_14(2048);
		if (!func_5(Local_2160.f_136, 128))
		{
			func_776(&Local_2160);
		}
		if (func_68(256))
		{
			STREAMING::REQUEST_MODEL(func_838(), false);
			STREAMING::REQUEST_MODEL(func_839(), false);
			vVar3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
			func_1068(&vVar3, 1088421888);
			func_673(Local_1039[1 /*7*/], vVar3, 0f, 0f, ENTITY::GET_ENTITY_HEADING(*uParam0));
			if (!CAM::DOES_CAM_EXIST(iLocal_1143))
			{
				vVar9 = { 19.1f, 0f, (ENTITY::GET_ENTITY_HEADING(*uParam0) - 96.8f) };
				vVar6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, ENTITY::GET_ENTITY_HEADING(*uParam0), -1f, 0.6f, 1.29f) };
				iLocal_1143 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vVar6, vVar9, 37.2f, false, 2);
			}
			func_745(&Local_698);
			Local_698.f_1 = Global_35;
			Local_698.f_8 = { func_746(Local_1039[1 /*7*/], "player", "PB_HANDOVER") };
			Local_698.f_19 = func_747(Local_1039[1 /*7*/], "player", "PB_HANDOVER");
			Local_698.f_25 = &Local_1039[1 /*7*/];
			StringCopy(&(Local_698.f_30), "player", 24);
			StringCopy(&(Local_698.f_26), "PB_HANDOVER", 32);
			func_143(&(Local_698.f_23), 25600);
			func_43(&Local_2160, 65536);
			func_748(&Local_698, 129);
			func_293(&Local_972, 4);
			iLocal_1145 = 10;
		}
	}
}

void func_802()
{
	if (iLocal_1145 > 2 && iLocal_1145 <= 8)
	{
		if (func_213(Global_35, &(iLocal_75[11]), 1, 0))
		{
			func_1014(0);
			if (!func_68(512))
			{
				if (!func_374(Global_35))
				{
					func_1016(512, func_1015(Global_35, &iLocal_1156, -1390.416f, -226.6055f, 99.35344f, &(iLocal_75[11]), 1097859072, 2, 1, 129, 0, 0, 1071644672));
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1156))
					{
						PED::SET_PED_CONFIG_FLAG(iLocal_1156, 136, true);
					}
				}
			}
		}
		else
		{
			func_106(0);
		}
	}
}

int func_803(var uParam0)
{
	func_842(11);
	if (!func_51(32))
	{
		func_1072(*uParam0, func_1071(), 0, &(iLocal_75[4]), 1084227584, 1084227584, 1084227584, 12296, 1095237632, 0);
		func_1073();
		Local_398 = { (Global_1914319->f_3[11 /*446*/])->f_35 };
		func_1074(&((Global_1914319->f_3[11 /*446*/])->f_35), 2085633299, 1.15f, -1);
		func_1074(&((Global_1914319->f_3[11 /*446*/])->f_35), -562345805, 1.15f, -1);
		func_1075(&((Global_1914319->f_3[11 /*446*/])->f_35), 2085633299, 1.15f, -1);
		func_1075(&((Global_1914319->f_3[11 /*446*/])->f_35), -562345805, 1.15f, -1);
		func_58(32);
	}
	return 1;
}

int func_804()
{
	bool bVar0;

	bVar0 = true;
	switch (iLocal_98)
	{
		case 1:
			if (!func_9(Local_2160.f_136, 1024))
			{
				if (!func_263(Local_2160.f_138, 0))
				{
					func_62(Local_2160.f_138, 1, 1);
				}
				switch (iLocal_1142)
				{
					case 0:
						if (!ENTITY::DOES_ENTITY_EXIST((Local_1157.f_690[3 /*12*/])->f_8))
						{
							bVar0 = false;
						}
						if (!ENTITY::DOES_ENTITY_EXIST((Local_1157.f_690[4 /*12*/])->f_8))
						{
							bVar0 = false;
						}
						if (!ENTITY::DOES_ENTITY_EXIST((Local_1157.f_690[2 /*12*/])->f_8))
						{
							bVar0 = false;
						}
						if (!ENTITY::DOES_ENTITY_EXIST((Local_1157.f_690[14 /*12*/])->f_8))
						{
							bVar0 = false;
						}
						if (ENTITY::IS_ENTITY_DEAD(func_63(Local_2160.f_138)))
						{
							bVar0 = false;
						}
						if (ENTITY::IS_ENTITY_DEAD(func_63(func_326(6, 0, 0))))
						{
							bVar0 = false;
						}
						if (ENTITY::IS_ENTITY_DEAD(func_63(func_326(6, 1, 0))))
						{
							bVar0 = false;
						}
						if (ENTITY::IS_ENTITY_DEAD(func_63(Local_2160.f_138)))
						{
							bVar0 = false;
						}
						if (ENTITY::IS_ENTITY_DEAD(&(iLocal_2505[0])))
						{
							bVar0 = false;
						}
						if (bVar0)
						{
							iLocal_1142 = 1;
						}
						break;
					case 1:
						func_1076(&Local_156, func_63(Local_2160.f_138), "U_M_M_BIVFOREMAN_01", 0, 0, 0);
						func_1076(&Local_156, Global_35, "Arthur", 0, 0, 0);
						func_1076(&Local_156, func_63(func_326(6, 0, 0)), "Worker2", 0, 0, 0);
						func_1076(&Local_156, func_63(func_326(6, 1, 0)), "Worker1", 0, 0, 0);
						func_1076(&Local_156, &(iLocal_2505[0]), "Horse_01", 0, 0, 0);
						func_1077(&Local_156, (Local_1157.f_690[3 /*12*/])->f_8, "P_KNIFE02X", 0, 0, 0);
						func_1077(&Local_156, (Local_1157.f_690[4 /*12*/])->f_8, "P_WOODWHITTLE01X", 0, 0, 0);
						func_1077(&Local_156, (Local_1157.f_690[2 /*12*/])->f_8, "s_aplsd_log", 0, 0, 0);
						func_1077(&Local_156, (Local_1157.f_690[14 /*12*/])->f_8, "s_aplsd_hrsatt", 0, 0, 0);
						func_1078(&Local_156, 15f);
						func_1079(&Local_156, (15f + 5f));
						func_1080(&Local_156);
						func_1081(&(Local_156.f_212), 1);
						iLocal_1142 = 2;
						break;
					case 2:
						return 1;
				}
			}
			break;
	}
	return 0;
}

int func_805(var uParam0)
{
	if (!func_68(4096))
	{
		func_1016(4096, STREAMING::_0x19A6BE7D9C6884D3(func_259(), 15, func_245(Local_2160.f_138), func_1082()));
	}
	return 1;
}

void func_806(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1047(iParam0, 0, func_650(7));
	((*Local_814[iParam0 /*52*/])[0 /*17*/])->f_14 = 0;
	func_979((*Local_814[iParam0 /*52*/])[0 /*17*/], 1);
	func_762(iParam0, 0, 1);
	func_1047(iParam0, 1, func_650(10));
	func_762(iParam0, 1, 0);
	func_762(iParam0, 2, 0);
	func_1048(iParam0, 2, 1);
	func_58(268435456);
}

int func_807(bool bParam0)
{
	switch (iLocal_98)
	{
		case 1:
			return func_1084(&Local_156, func_1083(), bParam0, 1);
	}
	return 1;
}

void func_808(var uParam0)
{
}

bool func_809(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_810()
{
	PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1499911466, false);
	PAD::DISABLE_CONTROL_ACTION(0, -209515122, false);
}

void func_811(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_812(int iParam0, var uParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11, bool bParam12, int iParam13, float fParam14)
{
	if (func_1085(&(uParam1->f_3), 1))
	{
		func_1086(uParam1);
		if (func_1087(iParam0, fParam7, fParam11, bParam12, iParam13, fParam14))
		{
			func_468();
		}
	}
	if (func_1088(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), uParam1, fParam7))
	{
		CAM::SET_GAMEPLAY_PED_HINT(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		func_1089(uParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam6, iParam9);
	}
}

int func_813(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return 0;
	}
	StringCopy(&(uParam0->f_1), sParam1, 24);
	return func_726(uParam0, &(uParam0->f_1));
}

Vector3 func_814()
{
	return -1400.648f, -215.0589f, 102.3835f;
}

float func_815()
{
	return -24.8f;
}

void func_816(var uParam0)
{
	func_633(uParam0, &(uParam0->f_4));
}

void func_817(var uParam0)
{
	if (func_1090(uParam0, Global_35, "Arthur", joaat("player_zero"), 1, 1))
	{
		func_69(32768);
		func_674(Local_1039[0 /*7*/], Global_35, "arthur", 1);
		func_675(Local_1039[0 /*7*/], (Local_1157.f_690[3 /*12*/])->f_8, "p_knife02x");
		func_675(Local_1039[0 /*7*/], (Local_1157.f_690[4 /*12*/])->f_8, "p_woodWittle01x");
		func_675(Local_1039[0 /*7*/], (Local_1157.f_690[6 /*12*/])->f_8, "p_foldedBill01x");
		func_674(Local_1039[0 /*7*/], func_63(Local_2160.f_138), "U_M_M_BIVFOREMAN_01", 1);
		func_726(Local_1039[0 /*7*/], "pbl_RefuseToSell");
		func_726(Local_1039[0 /*7*/], "pbl_SEARCHENTER");
		func_676(Local_1039[0 /*7*/]);
		func_215((Local_1157.f_690[3 /*12*/])->f_8, 0, 0);
		func_215((Local_1157.f_690[4 /*12*/])->f_8, 0, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 0, 0);
		func_43(&Local_2160, 65536);
		MAP::DISPLAY_RADAR(false);
		func_10(Local_2160.f_136, 1024);
		func_43(&Local_2160, 128);
		func_48(vLocal_1117[3 /*3*/]);
	}
}

void func_818(var uParam0, int iParam1)
{
	uParam0->f_149 = iParam1;
	func_1091(uParam0, 2);
}

void func_819(var uParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	uParam0->f_217 = { vParam1 };
	uParam0->f_220 = fParam4;
	if (func_241(vParam1))
	{
		func_1092(uParam0, 2048, 1);
	}
	else
	{
		func_1093(uParam0, 2048);
		if (bParam5)
		{
			func_1093(uParam0, -2147483648);
		}
	}
}

void func_820(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<4> func_821()
{
	char cVar0[32];

	StringCopy(&cVar0, "LCMP_INT", 32);
	return cVar0;
}

int func_822(char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;

	func_1094(uParam4, &sParam0);
	if (func_1095(uParam4, 2) && !func_1095(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -842734359, false);
	}
	if (func_1096(uParam4) != 1)
	{
		func_1097(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (func_1096(uParam4))
	{
		case 1:
			if (ANIMSCENE::_0x25557E324489393C(uParam4->f_156) && ANIMSCENE::_0x477122B8D05E7968(uParam4->f_156, 1, 0))
			{
				if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam4->f_156, 0))
				{
					func_1098(uParam4, &sParam0);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156))
				{
					func_1099(uParam4, 4);
					return 0;
				}
				else if (func_1100(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_149);
				}
				func_1099(uParam4, 3);
			}
			else if (!ANIMSCENE::_0x25557E324489393C(uParam4->f_156))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_158)) && func_1095(uParam4, 134217728))
				{
				}
				else
				{
					func_1101(uParam4);
				}
				func_48(&(uParam4->f_1));
				func_1099(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_1102(uParam4);
				if (!func_658(&(uParam4->f_1)))
				{
					func_1103(&(uParam4->f_1), 0);
				}
				else if (func_375(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_0x25557E324489393C(uParam4->f_156))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_156);
					}
					func_1099(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_0x25557E324489393C(uParam4->f_156) || !ANIMSCENE::_0x477122B8D05E7968(uParam4->f_156, 1, 0))
			{
				if (func_1084(uParam4, &sParam0, 1, 1))
				{
					if (!ANIMSCENE::_0x477122B8D05E7968(uParam4->f_156, 1, 0))
					{
						func_1099(uParam4, 4);
					}
					else if (!func_241(func_1104(uParam4)) && !func_1105(Global_35, func_1104(uParam4), 100f, 1, 1))
					{
						func_1106(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), func_1104(uParam4), 0f, 1, 1, 1, 0);
					}
				}
				else if (func_375(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_0x25557E324489393C(uParam4->f_156))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_156);
					}
					func_1099(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::_0xA565FAC215CBC77D();
					func_1107(1, 0);
					func_1098(uParam4, &sParam0);
					func_1099(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (func_375(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_0x25557E324489393C(uParam4->f_156))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_156);
				}
				func_1099(uParam4, 4);
			}
			break;
		case 3:
			func_1108(uParam4);
			if (func_1100(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_149);
			}
			if ((ANIMSCENE::_0x25557E324489393C(uParam4->f_156) && ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam4->f_156, 0)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156) || func_1095(uParam4, 512)))
			{
				if (!func_1095(uParam4, 1024) && func_1109(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!func_1095(uParam4, 512))
				{
					func_48(&(uParam4->f_1));
					func_1093(uParam4, 512);
					func_1099(uParam4, 4);
				}
				else if (func_1095(uParam4, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
					}
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				func_1097(uParam4);
			}
			if (func_1095(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((func_1110(uParam4) - func_1111(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::_0x25557E324489393C(uParam4->f_156))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (func_1112(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && func_1111(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (func_1113(uParam4))
			{
				if (!ANIMSCENE::_0x25557E324489393C(uParam4->f_156))
				{
				}
				func_1114(uParam4);
				func_1115(uParam4);
				return 1;
			}
			else
			{
				if (func_1095(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_156) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_156);
						}
						func_48(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						func_1093(uParam4, 512);
						func_1092(uParam4, 67108864, 1);
						func_1099(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!func_1095(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156)) && CAM::IS_SCREEN_FADED_OUT()) && func_1111(uParam4) <= 5000) && func_1111(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!func_1095(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					func_1116(&(uParam4->f_213), 0);
					func_1093(uParam4, 536870912);
				}
				if (func_1111(uParam4) >= 5000 && func_1111(uParam4) <= (func_1110(uParam4) - 5000))
				{
					func_1117();
				}
			}
			break;
		case 6:
			if (func_1113(uParam4))
			{
				func_1114(uParam4);
				func_1115(uParam4);
				return 1;
			}
			break;
		case 4:
			if (func_1095(uParam4, 524288))
			{
				ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
					if (ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_156))
					{
						func_1093(uParam4, 1073741824);
					}
				}
			}
			else
			{
				if (ANIMSCENE::_0x25557E324489393C(uParam4->f_156))
				{
					if (!ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_156))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_156, 1);
						if (_NAMESPACE71::_0xC17F69E1418CD11F(9) != 0)
						{
							_NAMESPACE71::_0xDD1232B332CBB9E7(9, 1, 0);
						}
						return 0;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_156))
					{
						return 0;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_1100(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_150);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::_0x25557E324489393C(uParam4->f_156) && ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_156))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_156, 0);
						}
						func_1099(uParam4, 3);
					}
					else if (func_375(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_0x25557E324489393C(uParam4->f_156) && ANIMSCENE::_0x4B4038796F0D6566(uParam4->f_156))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_156, 0);
						}
						func_1099(uParam4, 3);
					}
				}
				if (func_1096(uParam4) == 3)
				{
					if (func_1095(uParam4, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		case 5:
			func_1099(uParam4, 4);
			break;
	}
	return 0;
}

void func_823()
{
	int iVar0;
	int iVar1;

	if (func_421(1))
	{
		return;
	}
	if (func_51(4096))
	{
		return;
	}
	iVar0 = 810 + 1;
	iVar1 = func_63(iVar0);
	if (PED::_0x34D6AC1157C8226C(iVar1, func_683()))
	{
		func_692(&iVar1, 1);
	}
}

void func_824(int iParam0, int iParam1)
{
	if (!func_599(iParam0))
	{
		return;
	}
	(Global_1914319->f_3[iParam0 /*446*/])->f_7 = ((Global_1914319->f_3[iParam0 /*446*/])->f_7 || iParam1);
}

void func_825(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8)
{
	if (!uParam0->f_3)
	{
		uParam0->f_13 = sParam7;
		uParam0->f_14 = iParam8;
		if (uParam0->f_13 != -1)
		{
			uParam0->f_7 = MISC::_CREATE_VAR_STRING(2, sParam1, sParam7);
		}
		else
		{
			uParam0->f_7 = sParam1;
		}
		uParam0->f_8 = sParam2;
		uParam0->f_5 = func_1118(uParam0->f_7, -163964935, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -820096546, 0);
		uParam0->f_6 = func_1118(uParam0->f_8, 648122183, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -820096546, 0);
		if (uParam0->f_14 < uParam0->f_13)
		{
			func_1119(uParam0->f_5, 1);
		}
		func_1120(uParam0->f_5, 17, 1, 1);
		func_1120(uParam0->f_6, 17, 1, 1);
		func_1121(uParam0->f_5, 6, 1);
		func_1121(uParam0->f_6, 6, 1);
		*uParam0 = 0;
		uParam0->f_1 = iParam4;
		uParam0->f_10 = iParam3;
		if (iParam5 == 0)
		{
			uParam0->f_11 = MISC::GET_GAME_TIMER();
			uParam0->f_9 = MISC::GET_GAME_TIMER() + 10000;
			uParam0->f_12 = 0;
		}
		else
		{
			uParam0->f_11 = MISC::GET_GAME_TIMER();
			uParam0->f_9 = (MISC::GET_GAME_TIMER() + BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam5) / 2f)));
			uParam0->f_12 = iParam5;
		}
		uParam0->f_16 = 0f;
		uParam0->f_17 = 0f;
		uParam0->f_2 = iParam6;
		uParam0->f_4 = 0;
		uParam0->f_15 = HUD::_0xD9459157EB22C895();
		uParam0->f_3 = 1;
		if (uParam0->f_2 != 0)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("MissionChoice");
		}
		AUDIO::_0x6339C1EA3979B5F7("make_decision", "player_decision_moment_scenes");
	}
}

void func_826(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_599(iParam0))
	{
		return;
	}
	iVar0 = func_1122(iParam1);
	if (iVar0 == 0)
	{
		return;
	}
	func_199(&((Global_1914319->f_3[iParam0 /*446*/])->f_8), iVar0);
}

int func_827(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (func_937(iParam0) == 4 && func_1123(iParam0, -1162387149))
	{
		return 1;
	}
	if (PED::_0xA911EE21EDF69DAF(Global_35))
	{
		iVar2 = ITEMSET::CREATE_ITEMSET(false);
		PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar2);
		if (ITEMSET::IS_ITEMSET_VALID(iVar2))
		{
			iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar2);
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				iVar0 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar2));
				if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
				}
				else
				{
					iVar1 = func_1124(iVar0);
					if (func_1125(iVar1, iParam0))
					{
						ITEMSET::DESTROY_ITEMSET(iVar2);
						return 1;
					}
				}
				iVar4++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar2);
		}
	}
	return func_1123(iParam0, 1084182731);
}

void func_828(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_301(iParam0))
	{
		return;
	}
	iVar0 = func_594(iParam0);
	if (bParam1)
	{
		func_1126(iParam0, 4);
		func_1127(iVar0, 1);
		func_1128(iVar0, 1);
	}
	else
	{
		func_1129(iParam0, 4);
		func_1128(iVar0, 0);
	}
}

bool func_829(var uParam0)
{
	return uParam0->f_3;
}

int func_830(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	if (*uParam0 == 0)
	{
		if (!func_301(uParam0->f_5) || !func_301(uParam0->f_6))
		{
			return 0;
		}
		if ((HUD::_0xB60C9F9ED47ABB76(((*Global_1945938)[uParam0->f_5 /*18*/])->f_3) && func_753(uParam0->f_5, 1)) || func_1029(uParam0->f_5, 1))
		{
			if (func_1130(uParam0->f_5, 1))
			{
				uParam0->f_4 = 1;
			}
			*uParam0 = 1;
			return 1;
		}
		if ((HUD::_0xB60C9F9ED47ABB76(((*Global_1945938)[uParam0->f_6 /*18*/])->f_3) && func_753(uParam0->f_6, 1)) || func_1029(uParam0->f_6, 1))
		{
			if (func_1130(uParam0->f_6, 1))
			{
				uParam0->f_4 = 1;
			}
			*uParam0 = 2;
			return 1;
		}
		iVar0 = MISC::GET_GAME_TIMER();
		if (iVar0 > uParam0->f_9)
		{
			if (uParam0->f_1 == 1 || (uParam0->f_1 == 0 && uParam0->f_10 > 0))
			{
				if (!HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(((*Global_1945938)[uParam0->f_5 /*18*/])->f_3))
				{
					fVar2 = func_1131(uParam0->f_6, 1);
					fVar3 = func_1131(uParam0->f_5, 1);
					if ((fVar2 == 0f || fVar2 < uParam0->f_16) && (fVar3 == 0f || fVar3 < uParam0->f_17))
					{
						func_302(&(uParam0->f_5), 1, 1);
						if (uParam0->f_12 > 0)
						{
							iVar1 = ((uParam0->f_11 + uParam0->f_12) - iVar0 + 20);
							uParam0->f_5 = func_1118(uParam0->f_7, -163964935, 6, 600, iVar1, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 1);
						}
						else
						{
							uParam0->f_5 = func_1118(uParam0->f_7, -163964935, 6, 600, 10000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 1);
						}
						func_302(&(uParam0->f_6), 1, 1);
						uParam0->f_6 = func_1118(uParam0->f_8, 648122183, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
						if (uParam0->f_14 < uParam0->f_13)
						{
							func_1119(uParam0->f_5, 1);
						}
						func_1121(uParam0->f_5, 6, 1);
						func_1121(uParam0->f_6, 6, 1);
						func_1120(uParam0->f_5, 17, 1, 1);
						func_1120(uParam0->f_6, 17, 1, 1);
					}
					else
					{
						uParam0->f_16 = fVar2;
						uParam0->f_17 = fVar3;
					}
				}
			}
			else if (!HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(((*Global_1945938)[uParam0->f_6 /*18*/])->f_3))
			{
				fVar2 = func_1131(uParam0->f_5, 1);
				fVar3 = func_1131(uParam0->f_6, 1);
				if ((fVar2 == 0f || fVar2 < uParam0->f_16) && (fVar3 == 0f || fVar3 < uParam0->f_17))
				{
					func_302(&(uParam0->f_6), 1, 1);
					if (uParam0->f_12 > 0)
					{
						iVar1 = ((uParam0->f_11 + uParam0->f_12) - iVar0 + 20);
						uParam0->f_6 = func_1118(uParam0->f_8, 648122183, 6, 600, iVar1, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 1);
					}
					else
					{
						uParam0->f_6 = func_1118(uParam0->f_8, 648122183, 6, 600, 10000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 1);
					}
					func_302(&(uParam0->f_5), 1, 1);
					uParam0->f_5 = func_1118(uParam0->f_7, -163964935, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
					if (uParam0->f_14 < uParam0->f_13)
					{
						func_1119(uParam0->f_5, 1);
					}
					func_1121(uParam0->f_5, 6, 1);
					func_1121(uParam0->f_6, 6, 1);
					func_1120(uParam0->f_5, 17, 1, 1);
					func_1120(uParam0->f_6, 17, 1, 1);
				}
				else
				{
					uParam0->f_16 = fVar2;
					uParam0->f_17 = fVar3;
				}
			}
		}
		return 0;
	}
	return 1;
}

bool func_831(var uParam0)
{
	return *uParam0 == 1;
}

void func_832(int iParam0, int iParam1)
{
	func_143(&((Global_1914319->f_3[iParam0 /*446*/])->f_5), iParam1);
}

void func_833(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_599(iParam0))
	{
		return;
	}
	iVar0 = func_1122(iParam1);
	if (iVar0 == 0)
	{
		return;
	}
	func_143(&((Global_1914319->f_3[iParam0 /*446*/])->f_8), iVar0);
}

void func_834(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_301(iParam0))
	{
		return;
	}
	iVar0 = func_594(iParam0);
	func_1127(iVar0, iParam1);
}

bool func_835(var uParam0)
{
	return *uParam0 == 2;
}

void func_836(var uParam0)
{
	if (uParam0->f_3)
	{
		switch (*uParam0)
		{
			case 0:
				GRAPHICS::ANIMPOSTFX_STOP("MissionChoice");
				break;
			case 1:
				if (uParam0->f_2 != 0)
				{
					if (uParam0->f_2 != 3 && uParam0->f_1 == 0)
					{
						GRAPHICS::ANIMPOSTFX_STOP("MissionChoice");
						GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorChoiceGood");
					}
					else
					{
						GRAPHICS::_0xC5CB91D65852ED7E("MissionChoice");
					}
				}
				break;
			case 2:
				if (uParam0->f_2 != 0)
				{
					if (uParam0->f_2 != 2 && uParam0->f_1 == 0)
					{
						GRAPHICS::ANIMPOSTFX_STOP("MissionChoice");
						GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorChoiceBad");
					}
					else
					{
						GRAPHICS::_0xC5CB91D65852ED7E("MissionChoice");
					}
				}
				break;
		}
		if (func_301(uParam0->f_5))
		{
			func_302(&(uParam0->f_5), 1, 1);
		}
		if (func_301(uParam0->f_6))
		{
			func_302(&(uParam0->f_6), 1, 1);
		}
		*uParam0 = 0;
		uParam0->f_1 = 0;
		uParam0->f_9 = 0;
		uParam0->f_11 = 0;
		uParam0->f_12 = 0;
		uParam0->f_10 = 0;
		uParam0->f_16 = 0f;
		uParam0->f_17 = 0f;
		uParam0->f_7 = "";
		uParam0->f_8 = "";
		uParam0->f_3 = 0;
		uParam0->f_4 = 0;
		uParam0->f_13 = -1;
		uParam0->f_2 = 0;
		HUD::_0x6095358C4142932A(uParam0->f_15);
		uParam0->f_15 = -1;
		AUDIO::_0x9428447DED71FC7E("player_decision_moment_scenes");
	}
}

int func_837(int iParam0)
{
	if (!func_599(iParam0))
	{
		return 0;
	}
	return func_1132(iParam0, 8388608);
}

int func_838()
{
	return joaat("p_coin01x");
}

int func_839()
{
	return joaat("p_foldedbills01x");
}

int func_840()
{
	if (func_838() != 0 && !STREAMING::HAS_MODEL_LOADED(func_838()))
	{
		return 0;
	}
	if (func_839() != 0 && !STREAMING::HAS_MODEL_LOADED(func_839()))
	{
		return 0;
	}
	return 1;
}

void func_841()
{
	func_1133();
	(Local_1157.f_690[0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT(func_838(), *(Local_1157.f_690[0 /*12*/]), true, true, false, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST((Local_1157.f_690[6 /*12*/])->f_8))
	{
		(Local_1157.f_690[6 /*12*/])->f_8 = OBJECT::CREATE_OBJECT((Local_1157.f_690[6 /*12*/])->f_7, *(Local_1157.f_690[6 /*12*/]), true, true, false, false, true);
	}
}

void func_842(int iParam0)
{
	if (iParam0 >= 25 || iParam0 <= -1)
	{
		return;
	}
	(Global_20709[iParam0 /*45*/])->f_1 = 0;
}

Vector3 func_843(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	int iVar7;
	vector3 vVar8;

	vVar0 = { VOLUME::_0xF70F00013A62F866(iParam0) };
	vVar3 = { VOLUME::_0x3E2A25B2416DD67E(iParam0) };
	fVar6 = (func_449(vVar3.x, func_449(vVar3.y, vVar3.z)) / 2f);
	iVar7 = 0;
	while (iVar7 < iParam1)
	{
		if (!bParam2)
		{
			vVar8 = { func_1134(vVar0, fVar6) };
		}
		else
		{
			vVar8 = { func_1135(vVar0, fVar6, bParam3) };
		}
		if (VOLUME::_0xF256A75210C5C0EB(iParam0, vVar8))
		{
			return vVar8;
		}
		iVar7++;
	}
	return vVar0;
}

int func_844(int iParam0, int iParam1, int iParam2)
{
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, iParam1, iParam2, 3f, 0.25f, -1082130432);
	return 1;
}

int func_845(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_846(int iParam0)
{
	if (func_166(iParam0))
	{
		return VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iParam0 /*373*/])->f_1);
	}
	return 0;
}

Vector3 func_847(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;

	if (vParam0.x < vParam3.x)
	{
		vVar0.x = (vParam0.x - fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x - fParam6);
	}
	if (vParam0.y < vParam3.y)
	{
		vVar0.f_1 = (vParam0.y - fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y - fParam6);
	}
	if (vParam0.z < vParam3.z)
	{
		vVar0.f_2 = (vParam0.z - fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z - fParam6);
	}
	return vVar0;
}

Vector3 func_848(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;

	if (vParam0.x > vParam3.x)
	{
		vVar0.x = (vParam0.x + fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x + fParam6);
	}
	if (vParam0.y > vParam3.y)
	{
		vVar0.f_1 = (vParam0.y + fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y + fParam6);
	}
	if (vParam0.z > vParam3.z)
	{
		vVar0.f_2 = (vParam0.z + fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z + fParam6);
	}
	return vVar0;
}

Vector3 func_849(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1447.046f, -248.2112f, 101.8532f;
				case 1:
					return -1421.375f, -191.8643f, 100.0484f;
				case 2:
					return -1468.509f, -186.8103f, 104.7422f;
				case 3:
					return -1454.64f, -225.2065f, 103.411f;
				case 4:
					return -1428.337f, -197.121f, 100.9558f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 1:
					return -1462.903f, -174.4467f, 105.4205f;
				case 2:
					return -1457.676f, -251.4121f, 104.5611f;
				case 3:
					return -1409.899f, -284.2626f, 100.9278f;
				case 4:
					return -1409.899f, -284.2626f, 100.9278f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1413.63f, -293.9522f, 102.1136f;
				case 1:
					return -1518.762f, -234.9279f, 116.6115f;
				case 2:
					return -1468.601f, -126.4598f, 117.0678f;
				case 3:
					return -1514.415f, -203.4755f, 110.9043f;
				case 4:
					return -1413.63f, -293.9522f, 102.1136f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_850(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 203.3771f;
				case 1:
					return 6.516163f;
				case 2:
					return 306.3405f;
				case 3:
					return 179.3372f;
				case 4:
					return 33.71f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 1:
					return 25.43246f;
				case 2:
					return 165.157f;
				case 3:
					return 164.2261f;
				case 4:
					return 164.2261f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 348.4004f;
				case 1:
					return 278.6f;
				case 2:
					return 105.1105f;
				case 3:
					return 341.899f;
				case 4:
					return 348.4004f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

bool func_851(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

int func_852(int iParam0)
{
	int iVar0;

	if (func_19(64) && iParam0 == 0)
	{
		iVar0 = -926795318;
		return iVar0;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar0 = -408717222;
					break;
				case 1:
					iVar0 = -1839091952;
					break;
				case 2:
					iVar0 = -1839091952;
					break;
				case 3:
					iVar0 = -408717222;
					break;
				case 4:
					iVar0 = -1839091952;
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					iVar0 = -926795318;
					break;
				case 1:
					iVar0 = -1839091952;
					break;
				case 2:
					iVar0 = -408717222;
					break;
				case 3:
					iVar0 = -408717222;
					break;
				case 4:
					iVar0 = -408717222;
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					iVar0 = -1839091952;
					break;
				case 1:
					iVar0 = -408717222;
					break;
				case 2:
					iVar0 = -679945893;
					break;
				case 3:
					iVar0 = -1839091952;
					break;
				case 4:
					iVar0 = -1839091952;
					break;
			}
			break;
	}
	return iVar0;
}

char* func_853(int iParam0)
{
	if (func_19(64) && iParam0 == 0)
	{
		return "DES_treefall_accident";
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return "DES_treefall_up15";
				case 1:
					return "DES_treefall_flat";
				case 2:
					return "DES_treefall_flat";
				case 3:
					return "DES_treefall_up15";
				case 4:
					return "DES_treefall_flat";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return "DES_treefall_accident";
				case 1:
					return "DES_treefall_flat";
				case 2:
					return "DES_treefall_up15";
				case 3:
					return "DES_treefall_up15";
				case 4:
					return "DES_treefall_up15";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return "DES_treefall_flat";
				case 1:
					return "DES_treefall_up15";
				case 2:
					return "DES_treefall_down15";
				case 3:
					return "DES_treefall_flat";
				case 4:
					return "DES_treefall_flat";
				default:
					break;
			}
			break;
	}
	return "";
}

bool func_854(int iParam0)
{
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(&(iLocal_1014[iParam0])))
	{
		return false;
	}
	return OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(&(iLocal_1014[iParam0])) == 5;
}

void func_855(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_35(1024);
			return;
		case 1:
			func_35(2048);
			return;
		case 2:
			func_35(4096);
			return;
		case 3:
			func_35(8192);
			return;
		case 4:
			func_35(16384);
			return;
	}
}

int func_856(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_857(int iParam0, int iParam1)
{
	if (func_851(iParam0))
	{
		GRAPHICS::_0x9CF1836C03FB67A2(iParam0, iParam1);
	}
}

void func_858()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

void func_859(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, iParam3, sParam2, false, true);
}

bool func_860(var uParam0)
{
	return func_501(*uParam0, 1);
}

int func_861(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_1136(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, iParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, iParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

void func_862(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (func_1137(iParam1))
		{
			func_1138(iParam0, 41788943);
		}
		else if (bParam5)
		{
			PED::_0x283978A15512B2FE(iParam0, 1);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(iParam0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_1139(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(iParam0, 0, 0);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_1140(iParam0, 0);
			bVar0 = true;
		}
		func_1141(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

float func_863(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1f;
		case 1:
			return 30f;
		case 2:
			return 80f;
		default:
			break;
	}
	return -1f;
}

int func_864(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	vVar0 = { func_1142(iParam1) };
	vVar3 = { func_1142(iParam2) };
	return func_1143(uParam0, vVar0, vVar3, iParam2);
}

int func_865(var uParam0, int iParam1, vector3 vParam2)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	vVar0 = { func_1142(iParam1) };
	return func_1143(uParam0, vVar0, vParam2, 0);
}

bool func_866(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

struct<5> func_867(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_1144(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_1145(iParam0))
	{
		case -1037537535:
			if (!INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0 = { func_871(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1146(bParam1) };
			if (iParam2 && func_1147(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_869(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_869(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_870(iParam0, &Var5, 1728382685))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -813824107;
			Var0 = { func_1148(bParam1) };
			switch (func_944(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case -2130996531:
			if (func_1149(iParam0, -1823706425))
			{
				Var0 = { func_871(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_1149(iParam0, -1483207246))
			{
				Var0 = { func_871(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_1150(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1328661203);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_868(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
			return -500478573;
			return -806573802;
			return -1109949204;
			return -740156546;
			return -684532710;
			return 1158805436;
			return -559473670;
			return -797147251;
			return -382216265;
			return 1419177114;
			return 1704297235;
			return -1139016418;
			return 897705377;
			return 17961769;
			return 205582207;
			return 900740963;
			return -1369589344;
			return -1695823795;
			return -41453074;
			return 539767227;
			return 1210490314;
			return -399684751;
			return 2138893455;
			return -1617010487;
			return -832377028;
			return -428040245;
			return 1279288897;
			return -594897905;
			return -1360459240;
			return 1838428396;
			return -1467846997;
			return -490610263;
			return -1885413079;
			return 708884155;
			return -134459952;
			return -1912136700;
			return -1268031552;
			return 1177953227;
			return 2130805296;
			return 38093490;
			return -269153218;
			return -1995068011;
			return -164284834;
			return 1446463345;
			return 1501315823;
			return -750379482;
			return -929560937;
			return 608323241;
			return 1030796013;
			return 1915057434;
			return -1582276476;
			return 692059311;
			return 2062839241;
			return -1884531872;
			return -866434534;
			return -1252192421;
			return 1243288963;
			return -1953772189;
			return 754411745;
			return 545309006;
			return -1089810811;
			return 1957869400;
			return -241412332;
			return -1548010959;
			return 550150488;
			return 946565453;
			return 434443248;
			return -1709914938;
			return 366686112;
			return -1370063350;
			return 2126829550;
			return 226552910;
			return 721193431;
			return -315672460;
			return 623544501;
			return 259556714;
			return -2125361825;
			return 1078230356;
			return 1885364811;
			return 1630382737;
			return 1738245512;
			return 1540262216;
			return 1016871472;
			return 13829069;
			return 737051352;
			return 1734614610;
			return -208715295;
			return 1435062936;
			return 1483055553;
			return 380335002;
			return -1079385677;
			return 676610411;
			return 2145419552;
			return 657238733;
			return 1850579281;
			return -1923957384;
			return -1142828108;
			return -1400618531;
			return -1433857135;
			return 209987206;
			return 1686943047;
			return -59178517;
			return 2134884601;
			return 651707517;
			return -633788535;
			return 116394463;
			return -1196973875;
			return 801752086;
			return 184475332;
			return -1880922659;
			return -898138634;
			return -2107418444;
			return -679970099;
			return -1531392549;
			return 1612483376;
			return 463930900;
			return -632148238;
			return 55303249;
			return 2108322089;
			return -1358896714;
			return 74475632;
			return -28710953;
			return -1791599168;
			return 1605938169;
			return 1255242276;
			return 636467727;
			return -1567688525;
			return -77886679;
			return -1057900679;
			return -1960888134;
			return -1719717295;
			return -1779244911;
			return -670540863;
			return 223362311;
			return 1150824567;
			return 974471191;
			return 1989683968;
			return 254804477;
			return 192057609;
			return 1553957817;
			return 2099829015;
			return -840300007;
			return -1948423372;
			return 981083654;
			return 1283289876;
			return -606884489;
			return -100418572;
			return 663645231;
			return 1442217033;
			return 1410986244;
			return 847409839;
			return 923926911;
			return 109995826;
			return -747412737;
			return 1114341727;
			return -539456939;
			return 45887121;
			return 913271624;
			return -1652812715;
			return -1791365775;
			return -979299941;
			return 713062001;
			return -575045963;
			return 1852965262;
			return -1398836354;
			return -1829885298;
			return -1773850357;
			return -564258009;
			return 2016532685;
			return -1070563798;
			return -1619221343;
			return -345571691;
			return 544288390;
			return 159578294;
			return -76852849;
			return 1110295244;
			return 2104563477;
			return 1947827651;
			return -933072766;
			return 2104388648;
			return -1677140601;
			return -2133097881;
			return -826678792;
			return -513522325;
			return 1970588249;
			return -2080032591;
			return 1758847745;
			return 895010282;
			return 1786352060;
			return -833319691;
			return 1591329969;
			return 2123222014;
			return -1578397674;
			return 1473261684;
			return -241855024;
			return 12999093;
			return -6796437;
			return -268116367;
			return -636470867;
			return 1737668280;
			return 892807236;
			return -733247890;
			return 24047176;
			return -1561999014;
			return -2052774042;
			return -997150586;
			return -1189569496;
			return 46488141;
			return 1046566686;
			return 325139909;
			return -1585141069;
			return 802754820;
			return 1415981582;
			return -1886147520;
			return 654877947;
			return -415648720;
			return 1221327846;
			return 923162715;
			return 625423581;
			return 326668608;
			return 669530755;
			return 429759982;
			return -2111934838;
			return 1886178087;
			return 1587783573;
			return -279722001;
			return 1310070322;
			return 724026534;
			return 137387616;
			return -653439684;
			return 1376835592;
			return -1824203570;
			return -1654197998;
			return 798987653;
			return 976923323;
			return 1167442289;
			return 986998820;
			return -2119169513;
			return -2015960939;
			return -1287636759;
			return -706917073;
			return -2166805;
			return -1391602433;
			return 1782075221;
			return 1282544585;
			return 1732594027;
			return -1058817012;
			return 1090546265;
			return -1783120823;
			return -1535745896;
			return -2086922122;
			return -1675198649;
			return 1189497682;
			return -1565675519;
			return -268973591;
			return 1039159916;
			return 1111816631;
			return 405591388;
			return 897456793;
			return 104187473;
			return 773808542;
			return -1120669954;
			return -1389278274;
			return 552979403;
			return -1571578784;
			return -708312114;
			return 688823508;
			return -1622147240;
			return 830292162;
			return 226276782;
			return -678416628;
			return -1098528034;
			return 316207340;
			return -1909200748;
			return -939652363;
			return -1990194462;
			return -375447933;
			return 537014919;
			return 1784584921;
			return 1084182731;
			return -1045471300;
			return 1617414719;
			return -787761753;
			return -490616606;
			return 1491346514;
			return -1311702610;
			return -904250715;
			return 1034665895;
			return -101524555;
			return 1419152594;
			return -451359317;
			return -1915385310;
			return 1315162488;
			return -361152079;
			return -2041626192;
			return -2077812539;
			return -1371514637;
			return 1730017037;
			return 892816668;
			return -1994943603;
			return 603133554;
			return -30160144;
			return -1248299493;
			return 727393558;
			return 755611221;
			return -170255458;
			return 1011151573;
			return 1122339631;
			return 454815308;
			return 990701735;
			return -246340825;
			return -1410671073;
			return 1547608292;
			return -714132970;
			return 732290690;
			return 971340545;
			return -234132662;
			return -2143057988;
			return -993947465;
			return -486552269;
			return -1156317860;
			return 1229625803;
			return -388596167;
			return -1204639465;
			return -1384685096;
			return -2026728113;
			return -1228057307;
			return 1835126290;
			return 1890833594;
			return -751549960;
			return -1682270750;
			return -1839865333;
			return -1990383629;
			return 1712094016;
			return 1532953697;
			return 1620318083;
			return -307230331;
			return -1034549620;
			return -1293064293;
			return -1540142553;
			return -1769886012;
			return -1983081126;
			return -1106117124;
			return -1873108338;
			return -2097543219;
			return 155413195;
			return -1162387149;
			return 1728382685;
			return -649335959;
			return -1876502240;
			return -2107032155;
			return 619103418;
			return 1355448197;
			return 1681762005;
			return 1026887814;
			return 354352628;
			return 1519366642;
			return -82757515;
			return 386306655;
			return 1243962119;
			return 756214903;
			return -718417579;
			return -1445516411;
			return -672392892;
			return 1465341584;
			return -427758369;
			return -735647142;
			return 1535838048;
			return -602272282;
			return 2051264661;
			return 487172188;
			return 282270687;
			return 1607708943;
			return 1686264939;
			return 314786149;
			return 1402841185;
			return 1099170772;
			return 2125676786;
			return -363896735;
			return -468790222;
			return -1779133048;
			return 1732537631;
			return 1755095401;
			return 835771095;
			return 1963317232;
			return 259627919;
			return 1299075397;
			return -1509094230;
			return 61132362;
			return 1549741908;
			return 288484254;
			return -1877032947;
			return -1395676456;
			return 1136146715;
			return 468034421;
			return 1079459546;
			return -140369351;
			return 1822341990;
			return 1219701681;
			return 1601295268;
			return -1692460667;
			return 1471419228;
			return 907446160;
			return -1126482585;
			return 1911050315;
			return -1343525599;
			return 1261891225;
			return 763162704;
			return 1335861197;
			return 526744654;
			return -1177461517;
			return -241638635;
			return 1024262875;
			return 853355463;
			return -337288221;
			return 361381308;
			return -1264898804;
			return -585289073;
			return 1423542233;
			return -948489286;
			return 2063859257;
			return -1652627327;
			return -1959697839;
			return -1532267859;
			return -1410062763;
			return -901428716;
			return -1628873469;
			return 144855571;
			return -617589883;
			return -1306457086;
			return 1713542477;
			return -305542365;
			return 1985390213;
			return -2145069367;
			return -1674390752;
			return -2117214398;
			return 1880805647;
			return -62390436;
			return 1815288415;
			return 196214097;
			return -201958220;
			return 1400281261;
			return 1601515402;
			return -940704970;
			return -548371721;
			return -1022384613;
			return -357406394;
			return 1077068189;
			return -782241404;
			return 1669853467;
			return 1592019450;
			return 635273153;
			return -1559225678;
			return -266425508;
			return 1117400455;
			return 454332195;
			return -1328061889;
			return 561650932;
			return 256105670;
			return 1976779618;
			return -269095126;
			return 2145617267;
			return 1150213537;
			return 1598825281;
			return -712527121;
			return 1308553072;
			return 852866398;
			return -1794417972;
			return 293062146;
			return 95360094;
			return 807631773;
			return 1603958275;
			return 860052020;
			return -1885979781;
			return 746147970;
			return 666663006;
			return -2096186453;
			return 859409444;
			return -671427187;
			return 100192478;
			return 307812616;
			return 1670843243;
			return 899615863;
			return -298901850;
			return 1379186917;
			return -817206030;
			return -1150323212;
			return -247466821;
			return 427124242;
			return 855418120;
			return -777015093;
			return -722462870;
			return -937454324;
			return -339438116;
			return 2135639035;
			return 1254273765;
			return -792172668;
			return 1905987493;
			return 495693044;
			return -1693422950;
			return -205873076;
			return -2143114654;
			return -1420574021;
			return -1959250381;
			return -1088328663;
			return 513602003;
			return 359221401;
			return 1005272;
			return 1583044470;
			return 348853959;
			return 1045621973;
			return 1084576580;
			return 1651573695;
			return 1463321587;
			return -997505963;
			return -1649851713;
			return -386012962;
			return 1386101789;
			return 1227915917;
			return -218846335;
			return -352578118;
			return 1426626782;
			return -714081520;
			return 74547781;
			return 1271463052;
			return 1983140194;
			return 677262775;
			return -832337898;
			return -319249747;
			return -16955722;
			return -1360128126;
			return -1535425646;
			return -1063641743;
			return -1041133401;
			return 1380479304;
			return 600890828;
			return 733333190;
			return 1843035435;
			return -304127320;
			return 122470371;
			return 0;
			return -1591664384;
			return -673000374;
			return -1150938404;
			return -1756997214;
			return -813824107;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}

bool func_869(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1151(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_870(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_1152(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_871(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_1153(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_943(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_872(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_1154(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1150(*uParam1, &Var0, bParam6, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_873(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_943(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_873(bool bParam0)
{
	if (func_1() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_943(bParam0));
}

int func_874(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_1155(iParam0))
	{
		return 0;
	}
	if (!func_873(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_875(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar1 = func_298(WEAPON::_0xD3750CCC00635FC2(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

var func_876(char* sParam0, char* sParam1, int iParam2, int iParam3, var uParam4, char* sParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam7;
	Var0.f_1 = uParam8;
	Var0.f_2 = uParam9;
	Var0.f_3 = uParam11;
	Var0.f_4 = uParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = uParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

var func_877(char* sParam0, char* sParam1, int iParam2, int iParam3, var uParam4, char* sParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam7;
	Var0.f_1 = uParam8;
	Var0.f_2 = uParam9;
	Var0.f_3 = uParam11;
	Var0.f_4 = uParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = uParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x18D6869FBFFEC0F8(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

bool func_878(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_879(int iParam0)
{
	int iVar0;

	if (func_1156(iParam0))
	{
		if (!func_1157(45))
		{
			return 0;
		}
	}
	iVar0 = func_882(iParam0);
	if (func_1158())
	{
		if (!func_206(((*Global_1835011)[3 /*74*/])->f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return 1;
}

struct<2> func_880(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_881(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

int func_882(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 116)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

int func_883(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1439010767;
		case 1:
			return -888900898;
		case 2:
			return 1252459247;
		default:
			break;
	}
	return 0;
}

Vector3 func_884(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1400f, -200f, 0f;
		case 1:
			return -440f, 500f, 0f;
		case 2:
			return 2100f, 770f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_885(int iParam0, int iParam1)
{
	int iVar0;

	func_1159(iParam0);
	iVar0 = func_1160(iParam0, iParam1);
	if (iVar0 != 0 && !MAP::_0x3F81EA4275D39D6F(iVar0))
	{
		MAP::_0xD8C7162AB2E2AF45(iVar0);
	}
}

int func_886(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

int func_887(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 0);
	if (iVar4 != 0)
	{
		return uVar0;
	}
	return 0;
}

int func_888(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 2139774588:
			return 1;
		case 1142025875:
			return 2;
		case 1587891565:
			return 4;
		case 1877013492:
			return 32;
		case -643014279:
			return 64;
		case -597116214:
			return 128;
		case 551416228:
			return 256;
		case 1022576842:
			return 512;
		case 953325896:
			return 1024;
		case 508358508:
			return 2048;
		case -735200598:
			return 4096;
		case -856432278:
			return 8192;
		case -2010847721:
			return 16384;
		case 446961221:
			return 32768;
		case -1972216640:
			return 65536;
		case 530833824:
			return 131072;
		case 1682361219:
			return 262144;
		case 158959085:
			return 524288;
		case 1919819559:
			return 1048576;
		case 1461411082:
			return 2097152;
		case -549508280:
			return 4194304;
		default:
			break;
	}
	return 0;
}

int func_889(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_890(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> Var8;

	iVar0 = func_1161();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1162(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_1157(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_1163())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != 446961221)
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_1008(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1161();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || iParam7)
	{
		iVar6 = func_1164(iVar1);
		func_1166(func_1165(), 0, 4000);
		func_1167(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_1168(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_881(func_1169(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_889(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_1170(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_1171(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1171(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_881(func_1169(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_889(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_1170(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_1171(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1171(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_1169(-1990689970) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_0xE6B763C7F4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_1172(10, 1);
	}
}

void func_891(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0 /*6*/] = iParam1;
	(Global_1347477->f_155[iParam0 /*6*/])->f_2 = iParam2;
	(Global_1347477->f_155[iParam0 /*6*/])->f_3 = iParam3;
	(Global_1347477->f_155[iParam0 /*6*/])->f_4 = iParam4;
	(Global_1347477->f_155[iParam0 /*6*/])->f_5 = bParam5;
	(Global_1347477->f_155[iParam0 /*6*/])->f_1 = MISC::GET_GAME_TIMER() + 500;
}

void func_892(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_1173();
	if (Global_1935630->f_27)
	{
		Global_1935630->f_28 = MISC::GET_GAME_TIMER();
	}
	if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630->f_44;
			}
			Global_1935630->f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_1174(&(Global_1935630->f_34), &(Global_1935630->f_39));
			Global_1935630->f_38 = iParam0;
			break;
		case 1:
			Global_1935630->f_30 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1935630->f_30)
			{
				if (Global_1935630->f_44 == joaat("weapon_lasso"))
				{
					Global_1935630->f_30 = PED::_0xB65A4DAB460A19BD(Global_35) != 0;
				}
			}
			break;
		case 2:
			switch (Global_1935630->f_46)
			{
				case joaat("weapon_lasso"):
					Global_1935630->f_25 = 0;
					break;
				default:
					if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630->f_46))
					{
						Global_1935630->f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 3f;
					}
					else
					{
						Global_1935630->f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 1f;
					}
					if (Global_1935630->f_25)
					{
						Global_1935630->f_29 = MISC::GET_FRAME_COUNT();
					}
					break;
			}
			break;
		default:
			Global_1935630->f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

var func_893(int iParam0)
{
	return &(Global_1109400->f_275[iParam0 /*3*/]);
}

int func_894(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_1175(bParam0, &uVar0, &uVar1))
	{
		return 1;
	}
	return 0;
}

int func_895(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630->f_40;
	if (func_1() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_1176(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_1176(uParam0);
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_920(iVar0) == -1)
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return 0;
	}
	uParam0->f_14 = iVar0;
	return 1;
}

void func_896(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_1177(uParam0);
	}
}

int func_897(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_HUMAN(iParam2))
	{
		iVar1 = func_920(iParam2);
	}
	else
	{
		iVar1 = func_919(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_920(iParam0);
	}
	else
	{
		iVar0 = func_919(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return 1;
		}
	}
	if (func_368(*uParam1, 8388608))
	{
		return 1;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam2);
	switch (iVar2)
	{
		case -1976316465:
		case -1505548114:
		case -350651841:
		case -50399569:
		case 106566339:
		case 707888648:
		case 841021282:
			switch (iVar3)
			{
				case -1976316465:
				case -1505548114:
				case -350651841:
				case 841021282:
					return 1;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return 1;
	}
	return 0;
}

float func_898(int iParam0, int iParam1)
{
	return func_358(iParam0, iParam1, 1, 1);
}

float func_899(var uParam0)
{
	return uParam0->f_26;
}

int func_900(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return 1;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return 0;
}

var func_901(var uParam0)
{
	return uParam0->f_17;
}

int func_902(var uParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return 0;
	}
	fVar0 = -1f;
	if (!func_368(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return 1;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17))
		{
			return 1;
		}
	}
	return 0;
}

int func_903(var uParam0)
{
	return uParam0->f_18;
}

int func_904(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, 0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_664(iVar0, 0)))
		{
			if (func_982(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_905(var uParam0)
{
	return uParam0->f_23;
}

int func_906(var uParam0)
{
	return uParam0->f_21;
}

int func_907(var uParam0)
{
	int iVar0;

	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (uParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (uParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (uParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*uParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_908(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_1178(iParam0, vParam4, 0.5f))
	{
		if (ENTITY::_0x0C9DBF48C6BA6E4C(iParam0, vParam4, 17))
		{
			return 1;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
	{
		return 1;
	}
	return 0;
}

int func_909(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1935630->f_44 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_46))
		{
			if (WEAPON::_0x959383DCD42040DA(Global_1935630->f_46) || WEAPON::_0xC4DEC3CA8C365A5D(Global_1935630->f_46))
			{
				return 1;
			}
		}
	}
	if (func_1179(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_910(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_0x772A1969F649E902(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_911(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_961(iParam1))
		{
			return 0;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_912(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return 0;
	}
	if (bParam4)
	{
		if (func_961(iParam1))
		{
			return 0;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return 1;
	}
	return 0;
}

int func_913(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_961(iParam1))
	{
		return 0;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, &(Global_1935630->f_34[iParam3]), 17))
		{
			if (PED::_0x06087579E7AA85A9(iParam1, &(Global_1935630->f_34[iParam3]), -1f, -1f, -1f, -1f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_914(int iParam0, var uParam1)
{
	if (!TASK::_0xEFC4303DDC6E60D3(iParam0))
	{
		return 0;
	}
	*uParam1 = TASK::_0xED1F514AF4732258(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*uParam1, true))
	{
		return 0;
	}
	if (!PED::_0x2D64376CF437363E(*uParam1))
	{
		return 0;
	}
	return 1;
}

int func_915(int iParam0, int iParam1)
{
	if (PED::_0xB65A4DAB460A19BD(iParam0) == iParam1)
	{
		return 1;
	}
	if (func_1180(iParam0, 1, 0, 0) != joaat("weapon_lasso"))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(iParam0) == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_916(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

int func_917(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_430(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

float func_918(var uParam0)
{
	return uParam0->f_24;
}

int func_919(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_920(int iParam0)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_921(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1935630->f_40 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1935630->f_40, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_914(Global_35, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (PED::IS_PED_RAGDOLL(iParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_358(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_358(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630->f_40, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_922(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_1175(1, &iVar0, &iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!bParam2 || !func_923(uParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
			{
				if (!bParam2 || !func_923(uParam1, iVar1))
				{
					if (func_430(iVar1, Global_36, 1) < 5f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_923(var uParam0, int iParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam1, "bIsCriminal"))
	{
		return 1;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 4, false))
	{
		return 1;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam1);
	switch (iVar0)
	{
		case -1996978098:
		case -1448293989:
		case -350226955:
		case 266218800:
		case 555364152:
		case 1078461828:
		case 1222652248:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_924(int iParam0)
{
	if (func_1163())
	{
		return 0;
	}
	return func_206(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

int func_925(var uParam0)
{
	return uParam0->f_20;
}

int func_926(int iParam0, vector3 vParam1, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar1 = -1;
	if (iParam7 == -1 || iParam7 >= *iParam0)
	{
		iParam7 = (*iParam0 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (iParam4 != iParam0[iVar0] && (!bParam5 || (!ENTITY::IS_ENTITY_DEAD(iParam0[iVar0]) && !FIRE::IS_ENTITY_ON_FIRE(iParam0[iVar0]))))
		{
			fVar3 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0[iVar0], true, false), vParam1);
			if (iVar1 < 0 || fVar3 < fVar2)
			{
				fVar2 = fVar3;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 < 0)
	{
	}
	return iVar1;
}

int func_927(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, iParam2);
	if (iVar4 == 3 || iVar4 == 4)
	{
		return uVar0;
	}
	return 0;
}

bool func_928(int iParam0)
{
	return func_1043(iParam0, 2);
}

void func_929(int iParam0, bool bParam1)
{
	if (!func_934(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_1181(iParam0, 1024))
		{
			func_936(iParam0, 1024);
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_1181(iParam0, 1024))
	{
		func_935(iParam0, 1024);
		INVENTORY::_0x9B4E793B1CB6550A();
	}
	func_1182(iParam0);
}

var func_930(int iParam0)
{
	return (Global_1914319->f_3[iParam0 /*446*/])->f_408;
}

void func_931(int iParam0)
{
	if (func_1183(iParam0) && func_1184())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

void func_932(int iParam0)
{
	(Global_1914319->f_3[iParam0 /*446*/])->f_7 = 0;
}

void func_933(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_599(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (bParam1)
	{
		MISC::SET_BIT(Global_1914319->f_15924[iVar1], iVar2);
	}
	else
	{
		MISC::CLEAR_BIT(Global_1914319->f_15924[iVar1], iVar2);
	}
}

bool func_934(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

void func_935(int iParam0, int iParam1)
{
	if (!func_934(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_936(int iParam0, int iParam1)
{
	if (!func_934(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

int func_937(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		case 22:
			return 17;
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		case 17:
		case 47:
			return 7;
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		case 9:
		case 37:
		case 69:
			return 8;
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		case 136:
			return 5;
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		case 48:
			return 12;
		case 49:
			return 13;
		case 50:
			return 14;
		case 62:
		case 79:
			return 20;
		case 101:
			return 11;
		case 149:
			return 23;
		case 150:
			return 24;
		case 151:
			return 25;
		case 12:
		case 54:
			return 21;
		case 127:
			return 34;
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		case 152:
			return 24;
		default:
			break;
	}
	return -1;
}

void func_938(int iParam0, bool bParam1)
{
	if (!func_599(iParam0))
	{
		return;
	}
	if ((bParam1 && func_1132(iParam0, 512)) || (!bParam1 && !func_1132(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_824(iParam0, 512);
	}
	else
	{
		func_304(iParam0, 512);
	}
	if (func_1185(iParam0))
	{
		INVENTORY::_0x9B4E793B1CB6550A();
	}
}

int func_939(int iParam0)
{
	int iVar0;

	iVar0 = func_600(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1186(iVar0);
}

int func_940(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (Global_1058888->f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888->f_40501 == 0)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888->f_40501)
	{
		if (iParam0 == &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
		else if (iParam0 > &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			iVar2++;
		}
		else if (iParam0 < &Global_1058888->f_40501.f_1[iVar2 /*2*/])
		{
			func_1187(iVar2);
			*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888->f_40501 < 31)
	{
		iVar2 = Global_1058888->f_40501;
		*(Global_1058888->f_40501.f_1[iVar2 /*2*/]) = { Var0 };
		Global_1058888->f_40501++;
		if (Global_1058888->f_40501 > 32)
		{
			Global_1058888->f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_941()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_942(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case -2066272360:
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case -1861414976:
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case -1610966108:
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case -1455998786:
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case -1340339190:
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case -1296807958:
			return 320;
		case -1283202000:
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case -911126844:
			return 336;
		case -897750037:
			return 334;
		case -895073533:
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case -851626677:
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case -781631220:
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case -734416508:
			return 340;
		case -699277634:
			return 4;
		case -693828600:
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case -524787708:
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case -502473159:
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case -355531636:
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case -108780030:
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case -61411516:
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case 74872959:
			return 348;
		case 93964309:
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case 229371495:
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case 509781469:
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case 582380806:
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case 747514327:
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case 784360470:
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case 885378256:
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case 1159471771:
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case 1166612791:
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case 1238086793:
			return 313;
		case 1250636944:
			return 259;
		case 1302228510:
			return 315;
		case 1306158345:
			return 202;
		case 1321892118:
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case 1549124796:
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case 1703398561:
			return 332;
		case 1703426636:
			return 43;
		case 1708045337:
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case 1744443559:
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case 1932172605:
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case 2113625508:
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
			return 87;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_943(bool bParam0)
{
	if (func_1() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

int func_944(int iParam0)
{
	struct<2> Var0;

	if (!func_1153(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_945(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		case -1719060085:
			return 16;
		case -999503751:
			return 1;
		case -525676072:
			return 4;
		case 81053684:
			return 8;
		case -413129408:
			return 32;
		default:
			break;
	}
	return 0;
}

void func_946(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && uParam0));
}

void func_947(var uParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || uParam0);
}

void func_948(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_1188((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1188(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_98(&(Global_1898164->f_1[0 /*5*/])))
	{
		func_315(&(Global_1898164->f_1[0 /*5*/]), 3);
	}
}

int func_949(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_950(int iParam0, int iParam1)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_24 = (((*Global_1900383)[iParam0 /*45*/])->f_24 - (((*Global_1900383)[iParam0 /*45*/])->f_24 && iParam1));
}

void func_951()
{
	if (func_1189(0))
	{
		func_1190(0);
	}
	if (func_1189(1))
	{
		func_1190(1);
	}
	if (func_1189(5))
	{
		func_1190(5);
	}
	if (func_1189(6))
	{
		func_1191(6);
	}
}

int func_952()
{
	return Global_1894899->f_2;
}

var func_953(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

int func_954(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return 0;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, sParam1))
	{
		return 1;
	}
	return 0;
}

void func_955(var uParam0, char* sParam1, bool bParam2)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, sParam1, bParam2, false);
}

int func_956(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_1192(vVar3, vVar6);
	if (MISC::ABSF(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_1193(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_957(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) && !bParam3)
	{
		return -1;
	}
	iVar0 = _NAMESPACE48::_0x32A1E3B83D501096(iParam0);
	if (!_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
	{
		return -1;
	}
	iVar1 = uParam1;
	iVar1 = uParam1;
	while (iVar1 <= iParam2)
	{
		iVar2 = iVar1;
		if (func_236(iVar2) != 0 && _NAMESPACE48::_0x800DF3FC913355F3(func_167(iVar2)))
		{
			if (func_167(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

float func_958(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_918(uParam0);
	}
	if (GRAPHICS::_0x25CA89B2A39DCC69() > 0.833f)
	{
		return func_1194(uParam0);
	}
	return func_918(uParam0);
}

float func_959(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_960()
{
	int iVar0;
	int iVar1;

	iVar0 = func_445(func_444());
	iVar1 = func_641(func_444());
	if (iVar0 >= 21)
	{
		return 1;
	}
	else if (iVar0 < 5)
	{
		return 1;
	}
	else if (iVar0 >= 20)
	{
		if (iVar1 >= 20)
		{
			return 1;
		}
	}
	else if (iVar0 < 6)
	{
		if (iVar1 <= 20)
		{
			return 1;
		}
	}
	return 0;
}

int func_961(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return 0;
	}
	iVar0 = TASK::_0x2D0571BB55879DA2(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if ((((((((iVar0 == -1689755873 || iVar0 == 1690225020) || iVar0 == 1774730608) || iVar0 == 309374745) || iVar0 == -363194080) || iVar0 == 640190094) || iVar0 == -1085971095) || iVar0 == 49488831) || iVar0 == 343112864)
	{
		return 1;
	}
	if (iVar0 == -2016812721 || iVar0 == 1097070152)
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(iParam0);
		if (iVar0 == 970972795)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

void func_962(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_963(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_964(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_643(*uParam0);
	iVar1 = func_642(*uParam0);
	if (iParam1 < 1 || iParam1 > func_645(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_965(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_966(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_967(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_968(var uParam0)
{
	if (*uParam0 & 1 != 0)
	{
		*uParam0 |= 64 | 16 | 16777216;
	}
}

int func_969(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_968(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_0x92A78D0BEDB332A3(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_1056(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_48(&(iParam1->f_13));
		}
		if (func_1195(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_1196(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_969(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_983(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_1197(*uParam0, 1, 1);
						}
					}
					else if (func_809(iParam1, 22))
					{
						func_1197(*uParam0, 0, 1);
					}
				}
				if (func_1198(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_1199(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_1200(iParam8);
					if (func_1201(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET(uParam3[iParam1->f_1 /*17*/], 20))
								{
									func_1202(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_1203(iParam1, uParam3, fVar8);
					if (func_1204(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_107(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_1205(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_1198(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_1206(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_1201(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_1199(uParam0, func_1198(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_1200(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_107(uParam3, 0, 0, 1, 1);
					}
					func_1207(iParam1, 1);
				}
				func_1203(iParam1, uParam3, fVar8);
				if (func_1205(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			func_984(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_970(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;

	iVar0 = func_1208(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = ((*uParam1)[iVar0 /*17*/])->f_13;
		iVar2 = ((*uParam1)[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_114(Global_35, *uParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_971(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_1() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_972(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_1209(iParam0, &iVar0, &iVar1);
	if (!func_1210(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_1211(iVar0, iVar1);
}

int func_973(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return 1;
	}
	return 0;
}

void func_974(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_301(iParam0))
	{
		return;
	}
	iVar0 = func_594(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}

void func_975(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_301(iParam0))
	{
		return;
	}
	iVar0 = func_594(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, sParam1);
}

void func_976(int* iParam0, char* sParam1)
{
	if (func_301(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_975(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_979(iParam0, 1);
}

bool func_977(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_978(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_979(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_980(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_981(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam3[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam3[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, uParam3[iVar0 /*4*/], &(((*uParam3)[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

int func_982(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_983(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_984(int* iParam0, var uParam1)
{
	int iVar0;
	struct<17> Var1;
	struct<10> Var22;

	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	func_1212(iParam0, uParam1, 1);
	func_107(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY((*uParam1)[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

bool func_985(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4)
{
	if (bParam2)
	{
		if (!func_1070(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_1213(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (iParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::_0x9D9473CB82D83A30(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0) == 1;
	}
	return PED::_0x7F9B9791D4CB71F6(iParam0, iParam1, bParam2, 0) == 1;
}

bool func_986(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam0, sParam1);
}

bool func_987(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return false;
	}
	return ANIMSCENE::_0xAE6ADA8FE7E84ACC(*uParam0, sParam1);
}

void func_988(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		iVar0 = *uParam0;
	}
	else if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		iVar0 = *uParam1;
	}
	else
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -137640087))
	{
		iLocal_1033[iParam2] = 0;
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -1300850144))
	{
		iLocal_1033[iParam2] = 1;
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -1011860333))
	{
		iLocal_1033[iParam2] = 2;
	}
	else
	{
		iLocal_1033[iParam2] = -1;
	}
}

int func_989(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1073741824;
		case 1:
			return -2147483648;
		default:
			break;
	}
	return 0;
}

Vector3 func_990(var uParam0, int iParam1, bool bParam2)
{
	vector3 vVar0[24];
	int iVar3;

	StringCopy(&cVar0, "PB_", 24);
	switch (iParam1)
	{
		case 0:
			StringConCat(&cVar0, "PRE_", 24);
			break;
		case 1:
			StringConCat(&cVar0, "SAW_A_", 24);
			break;
		case 2:
			StringConCat(&cVar0, "SAW_B_", 24);
			break;
		default:
			StringCopy(&cVar0, "", 24);
			return cVar0;
	}
	StringConCat(&cVar0, "ILO_", 24);
	if (bParam2)
	{
		StringConCat(&cVar0, "NEG_", 24);
	}
	else
	{
		StringConCat(&cVar0, "POS_", 24);
	}
	iVar3 = func_635(*uParam0, Global_35, 1060437492);
	switch (iVar3)
	{
		case 0:
			StringConCat(&cVar0, "N", 24);
			break;
		case 3:
			StringConCat(&cVar0, "L", 24);
			break;
		case 2:
			StringConCat(&cVar0, "R", 24);
			break;
		case 1:
			StringConCat(&cVar0, "BACK", 24);
			break;
	}
	return cVar0;
}

int func_991(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, var uParam5, bool bParam6)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0) && uParam5)
	{
		return 1;
	}
	if (!ANIMSCENE::_0x25557E324489393C(iParam1))
	{
		return 1;
	}
	if (ANIMSCENE::_0xD8254CB2C586412B(iParam1, 0))
	{
		return 1;
	}
	if (!ANIMSCENE::_0x95531A4A20CCE7BC(iParam1, 0))
	{
		return 1;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (bParam6)
		{
			if (ANIMSCENE::_0x73616E64696C616E(iParam1, sParam2, 1, 0))
			{
				return 1;
			}
		}
		if (ANIMSCENE::_0x005E6F28DD7ED58D(iParam1, sParam2) || ANIMSCENE::_0xB89FCFF19DAFFF28(iParam1, sParam2))
		{
			return 1;
		}
	}
	if (iParam3 != 0 && ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, iParam3))
	{
		return 1;
	}
	if (fParam4 > 0f && ANIMSCENE::_0x3FBC3F51BF12DFBF(iParam1) >= fParam4)
	{
		return 1;
	}
	return 0;
}

void func_992(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = PED::_0x62DE46F061CAA468();
	if (iParam0 > iVar0)
	{
		iParam0 = iVar0;
	}
	PED::_0x7D4E70A67A651C71(iParam0);
	uParam1->f_3 = (uParam1->f_3 - iParam0);
}

int func_993(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return 0;
	}
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(*iParam0, 1))
	{
		return 0;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, 1407243653))
	{
		return 0;
	}
	if (func_1214(iParam1))
	{
		return 0;
	}
	return 1;
}

void func_994(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_681(iParam0);
	if (!func_115(func_1215(iParam0)) && !func_422(iVar0))
	{
		iVar1 = (810 + iParam0);
		iVar2 = func_63(iVar1);
		if (!ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			if (!func_115(func_686(iParam0)) && ENTITY::HAS_ANIM_EVENT_FIRED(iVar2, 2009491632))
			{
				func_1061(iVar2, 31267307, 10f, 0, "EXIT_TREE_FALL", 1, 129);
				TASK::CLEAR_PED_TASKS(iVar2, 1, 0);
				PED::_0x2208438012482A1A(iVar2, false, false);
				func_35(func_686(iParam0));
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar2, 1407243653))
			{
				PED::SET_PED_CONFIG_FLAG(iVar2, 146, false);
				PED::SET_PED_CONFIG_FLAG(iVar2, 234, true);
				PED::SET_PED_CONFIG_FLAG(iVar2, 178, true);
				PED::SET_PED_CONFIG_FLAG(iVar2, 389, false);
				func_35(func_1215(iParam0));
				func_35(func_682(iParam0));
			}
		}
	}
}

int func_995(int iParam0, int iParam1)
{
	if (func_421(iParam0))
	{
		return 0;
	}
	if (!func_251(*iParam1, 0, 1))
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(*iParam1, "bChopDown"))
	{
		return 0;
	}
	return 1;
}

int func_996(int iParam0, bool bParam1)
{
	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(&(iLocal_1014[iParam0])))
	{
		return 0;
	}
	if (!bParam1)
	{
		return 0;
	}
	if (func_19(64))
	{
		return 1;
	}
	if (!func_658(vLocal_1117[0 /*3*/]))
	{
		return 0;
	}
	if (func_774(vLocal_1117[0 /*3*/]) <= 5000)
	{
		return 0;
	}
	return 1;
}

int func_997(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1048576;
		case 1:
			return 2097152;
		case 2:
			return 4194304;
		case 3:
			return 8388608;
		default:
			break;
	}
	return 0;
}

int func_998()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_421(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

char* func_999()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	switch (iVar0)
	{
		case 0:
			return "LOG_WARN01";
		case 1:
			return "LOG_WARN02";
		case 2:
			return "LOG_WARN03";
		case 3:
			return "LOG_WARN04";
		default:
			break;
	}
	return "LOG_WARN01";
}

void func_1000(int iParam0)
{
	int iVar0[30];
	int iVar31;
	int iVar32;
	int iVar33;

	iVar31 = 0;
	iVar31 = func_291(&iVar0);
	iVar32 = (810 + iParam0);
	iVar33 = func_63(iVar32);
	if (!ENTITY::IS_ENTITY_DEAD(iVar33))
	{
		iVar0[iVar31] = iVar33;
		iVar31++;
	}
	if (!func_19(32))
	{
		func_1216(&iVar0, &iParam0, 1);
	}
	else
	{
		func_1217(&(iLocal_2479[0]), &iVar0);
	}
}

Vector3 func_1001(int iParam0)
{
	if (func_19(64) && iParam0 == 0)
	{
		return 0f, 0f, 79.04118f;
	}
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -15f, 0f, -60.62425f;
				case 1:
					return 0f, 0f, 102.5155f;
				case 2:
					return 0f, 0f, 42.34158f;
				case 3:
					return -15f, 0f, -84.66344f;
				case 4:
					return 0f, 0f, 60.87f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, 79.04118f;
				case 1:
					return 0f, 0f, 121.4344f;
				case 2:
					return -15f, 0f, -98.84385f;
				case 3:
					return -15f, 0f, -99.77609f;
				case 4:
					return -15f, 0f, -99.77609f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, 84.4f;
				case 1:
					return -15f, 0f, 14.6f;
				case 2:
					return 15f, 0f, -158.89f;
				case 3:
					return 0f, 0f, 77.9f;
				case 4:
					return 0f, 0f, 84.4f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_1002(int iParam0)
{
	switch (iLocal_98)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					if (func_19(64))
					{
						iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1390.31f, -272.9292f, 100.524f, -80.4691f, 83.58102f, -92.52708f, 1.284743f, 0.828f, 12.42189f, "volTreeKill 0");
					}
					else
					{
						iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1455.782f, -255.1657f, 106.2708f, 176.1422f, 74.22754f, -157.1033f, 1.284743f, 0.828f, 11.23116f, "volTreeKill 0");
					}
					break;
				case 1:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1408.708f, -186.5688f, 101.067f, 76.65434f, 86.72099f, -88.83711f, 1.284743f, 0.828f, 12.79663f, "volTreeKill 1");
					break;
				case 2:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1458.914f, -194.3228f, 105.2989f, -89.76711f, 89.07716f, -136.2797f, 1.284743f, 0.828f, 11.93199f, "volTreeKill 2");
					break;
				case 3:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1465.396f, -227.6279f, 107.1113f, -173.9405f, 77.34332f, -173.0002f, 1.284743f, 0.828f, 10.89174f, "volTreeKill 3");
					break;
				case 4:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1417.96f, -200.7522f, 101.8687f, 116.2321f, 86.72099f, -88.83711f, 1.284743f, 0.828f, 10.74282f, "volTreeKill 1");
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1390.31f, -272.9292f, 100.524f, -80.4691f, 83.58102f, -92.52708f, 1.284743f, 0.828f, 12.42189f, "volTreeKill 0");
					break;
				case 1:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1453.148f, -166.5273f, 107.2447f, 77.26909f, 87.1385f, -72.74516f, 1.284743f, 0.828f, 11.9518f, "volTreeKill 1");
					break;
				case 2:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1468.958f, -251.1458f, 108.5803f, -163.4203f, 76.80013f, -175.8395f, 1.284743f, 0.828f, 11.48762f, "volTreeKill 2");
					break;
				case 3:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1421.089f, -284.0165f, 104.972f, -160.3766f, 74.96647f, -172.5704f, 1.284743f, 0.828f, 11.23799f, "volTreeKill 3");
					break;
				case 4:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1421.089f, -284.0165f, 104.972f, -160.3766f, 74.96647f, -172.5704f, 1.284743f, 0.828f, 11.23799f, "volTreeKill 3");
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1402.123f, -292.1445f, 102.0348f, -0.864238f, -86.31268f, 0f, 1.926056f, 1f, 10.36427f, "volTreeKill 0");
					break;
				case 1:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1513.435f, -244.4112f, 120.048f, 76.4277f, 4.506001f, 14.70511f, 1.139303f, 2.028264f, 10.8445f, "volTreeKill 1");
					break;
				case 2:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1473.797f, -116.0985f, 116.5509f, 78.37471f, 4.515922f, 12.70869f, 2.082363f, 2.176558f, 10.8445f, "volTreeKill 2");
					break;
				case 3:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1503.689f, -203.0762f, 110.4443f, 173.4138f, -89.01738f, -180f, 2.334879f, 1f, 10.34734f, "volTreeKill 3");
					break;
				case 4:
					iLocal_75[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1402.123f, -292.1445f, 102.0348f, -0.864238f, -86.31268f, 0f, 1.926056f, 1f, 10.36427f, "volTreeKill 0");
					break;
			}
			break;
	}
}

void func_1003(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_63(iParam0);
	iVar1 = func_1218(iParam0);
	if (iVar1 < 0 || iVar1 > 3)
	{
		return;
	}
	iVar2 = func_681(iVar1);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if ((func_164(64) && !PED::_0x34D6AC1157C8226C(iVar0, func_683())) && !func_458(iVar2))
		{
			if (!func_263(iParam0, 0))
			{
				func_62(iParam0, 1, 1);
			}
			func_459(&iVar2);
			TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("weapon_unarmed"), false, 0, false, false);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_735);
			TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
			if (TASK::_0x841475AC96E794D1(&(iLocal_1026[iVar1])))
			{
				TASK::_TASK_USE_SCENARIO_POINT(0, &(iLocal_1026[iVar1]), 0, 0, 1, 0, 0, 0, -1082130432, 0);
			}
			else
			{
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, func_1219(iVar1), 5f, 0, 0, 0, 0, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(iLocal_735);
			TASK::_TASK_PERFORM_SEQUENCE_2(iVar0, iLocal_735, 1f, 3f);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_735);
		}
		else
		{
			TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("weapon_unarmed"), false, 0, false, false);
			func_75(iParam0, 1);
			func_466(iVar2, 0);
		}
	}
}

int func_1004(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, var uParam8, bool bParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(iParam3, iVar0, 1);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			uVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
			iVar2 = uVar1;
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar4 < *uParam0) && iVar4 < iParam2)
			{
				if (func_1220(iVar2, bParam4, bParam6, uParam8, bParam9, bParam10) && !DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreThisPed"))
				{
					if (!func_351(iVar2, uParam1))
					{
						bVar3 = false;
						if (iParam7 != -1)
						{
							iVar7 = 0;
							iVar7 = 0;
							while (iVar7 < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(iParam7))
							{
								if (PED::IS_PED_MODEL(iVar2, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(iParam7, iVar7)))
								{
									bVar3 = true;
								}
								else
								{
									iVar7++;
								}
							}
						}
						else
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							if (!bParam11)
							{
								if (!ENTITY::IS_ENTITY_DEAD(iVar2))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, bParam5);
								}
							}
							(*uParam0)[iVar4] = iVar2;
							iVar4++;
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (iVar4 >= (iParam2 - 1) && iVar6 >= iParam2)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar4;
}

int func_1005(var uParam0, int iParam1, var uParam2)
{
	if (!func_251(iParam1, 0, 1))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bNoticePlayer"))
	{
		return 0;
	}
	if (!func_1221(iParam1))
	{
		return 0;
	}
	if (func_358(iParam1, Global_35, 1, 1) > uParam0->f_32)
	{
		return 0;
	}
	if (func_351(iParam1, uParam2))
	{
		return 0;
	}
	if (func_1222(iParam1, &(uParam0->f_12)))
	{
		return 0;
	}
	return 1;
}

void func_1006(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

bool func_1007()
{
	return func_1223(_NAMESPACE71::_0xC17F69E1418CD11F(3));
}

int func_1008(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_1009(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 0;
			break;
		case 1:
			*uParam1 = 1;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_1010()
{
	if (!func_213(Global_35, &(iLocal_75[10]), 1, 0))
	{
		return 0;
	}
	if (iLocal_2317 != 5 && iLocal_2317 != 6)
	{
		return 0;
	}
	return 1;
}

var func_1011(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_1224(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1225(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_1224(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_1012(int iParam0, bool bParam1)
{
	if (!MAP::DOES_BLIP_EXIST(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		return MAP::_0x662D364ABF16DE2F(iParam0, -1186550032);
	}
	return MAP::_0xB059D7BD3D78C16F(iParam0, -1186550032);
}

void func_1013()
{
	int iVar0;

	iVar0 = PED::_0x4C8B59171957BCF7(Global_35);
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (func_213(iVar0, &(iLocal_75[4]), 1, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
		}
		else if (func_213(iVar0, &(iLocal_75[10]), 1, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.25f);
		}
		else if (func_213(iVar0, &(iLocal_75[9]), 1, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.501f);
		}
	}
}

void func_1014(bool bParam0)
{
	if (bParam0)
	{
		func_1226(4);
	}
	func_1226(2);
	MISC::SET_BIT(&(Global_1956578->f_1), 0);
}

int func_1015(int iParam0, int iParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11, float fParam12)
{
	int iVar0;
	var uVar1;
	struct<11> Var2;
	int iVar13;

	if (!func_374(iParam0))
	{
		if (bParam11)
		{
			iVar0 = func_1227(7);
		}
		else
		{
			iVar0 = PED::_0x4C8B59171957BCF7(iParam0);
		}
		if (!func_514(iVar0, 1) || (!(VOLUME::_0x92A78D0BEDB332A3(iParam5) && func_213(iVar0, iParam5, 1, 0)) && func_358(iParam0, iVar0, 1, 1) > fParam6))
		{
			return 1;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (func_617(iVar0) && func_618(iVar0) != 1)
			{
				Var2.f_10 = 7;
				Var2.f_1 = 1;
				*iParam1 = func_1228(&uVar1, &Var2);
				if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
				{
					*iParam1 = iVar0;
				}
			}
			else
			{
				*iParam1 = iVar0;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			return 1;
		}
		if (func_514(*iParam1, 1))
		{
			if (!(func_129(*iParam1, 518218985) || func_129(*iParam1, 713668775)))
			{
				TASK::CLEAR_PED_TASKS(*iParam1, 1, 0);
				iVar13 = 0;
				if (!bParam10)
				{
					iVar13 = 16640;
				}
				FLOCK::_0xFF1E339CE40EAAAF(*iParam1, 0);
				POPULATION::_0xF74E134F40192884(*iParam1, 2);
				if (!func_241(vParam2))
				{
					bParam8 = false;
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, vParam2, fParam12, -1, 0.25f, false, 40000f);
				}
				if (VOLUME::_0x92A78D0BEDB332A3(iParam5))
				{
					POPULATION::_0xB56D41A694E42E86(iParam5, 2048, 0, 0, -1, -1, 2);
					if (bParam8)
					{
						TASK::_TASK_SMART_FLEE_STYLE_COORD(*iParam1, VOLUME::_0xF70F00013A62F866(iParam5), iParam7, iVar13, fParam6, 6000, 0);
					}
				}
				if (!bParam8 && func_241(vParam2))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(*iParam1, iParam0, iParam7, iVar13, fParam6, 6000, 0);
				}
			}
		}
	}
	return 0;
}

void func_1016(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_69(iParam0);
	}
	else
	{
		func_330(iParam0);
	}
}

void func_1017(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;

	if (iParam1 >= *uParam0 || iParam1 < 0)
	{
		iParam1 = 0;
	}
	if (iParam2 >= *uParam0 || iParam2 < iParam1)
	{
		iParam2 = (*uParam0 - 1);
	}
	iVar1 = iParam1;
	while (iVar1 <= iParam2)
	{
		if (func_1229((*uParam0)[iVar1], iParam3, iParam4, iParam5, 0, bParam6, 0, 0))
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar0)
	{
		func_1230();
	}
}

void func_1018(var uParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 301, !bParam1);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 315, !bParam1);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 178, bParam1);
}

Vector3 func_1019(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

var func_1020()
{
	return Global_1935436->f_9;
}

void func_1021(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

bool func_1022(int iParam0, bool bParam1)
{
	if (bParam1 && !func_301(iParam0))
	{
		return false;
	}
	return !func_1043(iParam0, 4);
}

void func_1023(vector3 vParam0, int* iParam3, int iParam4, int iParam5, char* sParam6, int iParam7)
{
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	*iParam3 = MAP::_0x554D9D53F696D002(iParam4, vParam0);
	if (iParam7 != 0)
	{
		MAP::_0x662D364ABF16DE2F(*iParam3, iParam7);
	}
	if (iParam5 != 0)
	{
		MAP::SET_BLIP_SPRITE(*iParam3, iParam5, true);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam3, sParam6);
	}
}

int func_1024(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_1043(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == ((*Global_1945938)[iVar0 /*18*/])->f_11 && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
				{
					if (iParam3 <= Global_1945938[iVar0 /*18*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_1044(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

void func_1025(int iParam0, float fParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_301(iParam0))
	{
		return;
	}
	if (fParam1 <= 0f)
	{
		return;
	}
	iVar0 = func_594(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	((*Global_1945938)[iVar0 /*18*/])->f_9 = fParam1;
	HUD::_UIPROMPT_CONTEXT_SET_SIZE(((*Global_1945938)[iVar0 /*18*/])->f_3, fParam1);
}

int func_1026(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_1043(iVar0, 2))
		{
			if (iParam2 == ((*Global_1945938)[iVar0 /*18*/])->f_10 && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
			{
				return iVar0;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_1044(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

int func_1027(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	if (func_241(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_1043(iVar0, 2))
		{
			if (func_856(vParam2, ((*Global_1945938)[iVar0 /*18*/])->f_6, 0.01f, 1) && iParam1 == ((*Global_1945938)[iVar0 /*18*/])->f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_1044(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, iParam15, bParam16);
		return iVar1;
	}
	return 0;
}

int func_1028(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_1029(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_301(iParam0))
	{
		return false;
	}
	iVar0 = func_594(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_1030(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_1231(iParam0, sParam4, iParam5);
	}
	func_1232(iParam0, bParam1, fParam2, iParam3, iParam7);
}

Vector3 func_1031(var uParam0, char* sParam1, char* sParam2)
{
	struct<4> Var0;
	bool bVar12;

	if (!ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		return 0f, 0f, 0f;
	}
	bVar12 = !MISC::IS_STRING_NULL_OR_EMPTY(sParam2);
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(*uParam0, sParam1, &Var0, bVar12, sParam2, 2))
	{
		return Var0.f_3;
	}
	return 0f, 0f, 0f;
}

void func_1032(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_ON_MOUNT(iParam0))
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
	TASK::TASK_STAND_STILL(iVar0, -1);
}

void func_1033(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = iParam1;
}

int func_1034(var uParam0, var uParam1)
{
	if (func_223(&(uParam0->f_5), 5f))
	{
		return 1;
	}
	if (func_368(uParam0->f_23, 2))
	{
		return 1;
	}
	if (((!func_374(uParam0->f_1) && !func_129(uParam0->f_1, 501393341)) && !PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1, true)) && !func_129(uParam0->f_1, -828834893))
	{
		return 1;
	}
	return 0;
}

int func_1035(var uParam0, var uParam1)
{
	var uVar0;

	if (func_223(&(uParam0->f_5), 4f))
	{
		return 1;
	}
	if (!func_368(uParam0->f_23, 16384))
	{
		return 1;
	}
	if (uParam0->f_1 != Global_35)
	{
		return 1;
	}
	if (!func_1233(&uVar0))
	{
		return 1;
	}
	return 0;
}

int func_1036()
{
	int iVar0;

	if (!func_1234())
	{
		return 0;
	}
	if (!func_1235(&iVar0))
	{
		return 0;
	}
	if (!func_1236(iVar0))
	{
		return 0;
	}
	return func_1237(iVar0, 0);
}

int func_1037(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (func_223(&(uParam0->f_5), 4f))
	{
		return 1;
	}
	if (func_368(uParam0->f_23, 4))
	{
		return 1;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &iVar0, true, 0, false);
	WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &iVar1, true, 1, false);
	if (func_368(uParam0->f_23, 512) || (iVar0 == joaat("weapon_unarmed") && iVar1 == joaat("weapon_unarmed")))
	{
		return 1;
	}
	return 0;
}

int func_1038(int iParam0)
{
	int iVar0;

	iVar0 = func_383(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::_0x3AA24CCC0D451379(iVar0))
	{
		return iVar0;
	}
	return 0;
}

int func_1039(var uParam0, var uParam1)
{
	if (func_223(&(uParam0->f_5), 15f))
	{
		return 1;
	}
	if (func_368(uParam0->f_23, 4096) && func_129(uParam0->f_1, 1245594896))
	{
		return 0;
	}
	if (func_368(uParam0->f_23, 256))
	{
		return 1;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1, -208384378, 1) == 8)
	{
		return 1;
	}
	return 0;
}

void func_1040(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

int func_1041(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, bool bParam7)
{
	float fVar0;

	fVar0 = func_512(ENTITY::GET_ENTITY_HEADING(iParam0));
	fParam4 = func_512(fParam4);
	if (ENTITY::IS_ENTITY_AT_COORD(iParam0, vParam1, fParam5, fParam5, 2f, false, bParam7, 0) && MISC::ABSF((fVar0 - fParam4)) <= fParam6)
	{
		return 1;
	}
	return 0;
}

float func_1042(int iParam0, vector3 vParam1)
{
	vector3 vVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	return (vVar0.z - vParam1.z);
}

bool func_1043(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

void func_1044(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	((*Global_1945938)[iParam0 /*18*/])->f_4 = iParam1;
	(*Global_1945938)[iParam0 /*18*/] = iParam4;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	((*Global_1945938)[iParam0 /*18*/])->f_2 = iParam5;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { vParam6 };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = fParam9;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = iParam10;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = iParam11;
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_5 = iParam12;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 2;
	((*Global_1945938)[iParam0 /*18*/])->f_17 = -1;
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	((*Global_1945938)[iParam0 /*18*/])->f_3 = iVar0;
	func_1127(iParam0, 1);
	func_1128(iParam0, 1);
	func_1129(iParam0, 128);
}

void func_1045(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
		PED::_0x20C5459379D75C1C(*iParam0, "LOG_WRK_ACC_OBS");
		PED::_0xA3C53CDE922BC78B(*iParam0, "LOG_WRK_ACC_OBS");
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(*iParam0, 178, true);
		PED::_0x20C5459379D75C1C(*iParam0, "");
		PED::_0xA3C53CDE922BC78B(*iParam0, "");
	}
	PED::_0x8AF46E5159A5B620(*iParam0, 291934926);
	func_243(*iParam0, 1, 1);
}

int func_1046(int iParam0)
{
	switch (iParam0)
	{
		case 810:
		case 811:
		case 812:
		case 813:
			return 1;
	}
	return 0;
}

void func_1047(int iParam0, int iParam1, char* sParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	func_975(((*Local_814[iParam0 /*52*/])[iParam1 /*17*/])->f_6, sParam2, 0);
	((*Local_814[iParam0 /*52*/])[iParam1 /*17*/])->f_5 = sParam2;
}

void func_1048(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	func_653((*Local_814[iParam0 /*52*/])[iParam1 /*17*/], bParam2);
}

void func_1049(int iParam0, int iParam1)
{
	func_8(iParam0, iParam1);
}

int func_1050(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_301(uParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*uParam0, 0))
		{
			if (!bParam2)
			{
				return 1;
			}
			if (func_1022(uParam0->f_6, bParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1051(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1047(iParam0, 0, "LOG_CTXTGIVE");
	((*Local_814[iParam0 /*52*/])[0 /*17*/])->f_14 = 500;
	func_978((*Local_814[iParam0 /*52*/])[0 /*17*/], 1);
	func_974(((*Local_814[iParam0 /*52*/])[0 /*17*/])->f_6, "LOG_CTXTGIVE", ((*Local_814[iParam0 /*52*/])[0 /*17*/])->f_14, 0);
	func_762(iParam0, 0, 1);
	func_1047(iParam0, 1, func_650(10));
	func_762(iParam0, 1, 1);
	func_762(iParam0, 2, bParam1);
	func_1048(iParam0, 2, !bParam1);
	func_69(524288);
}

void func_1052(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1028(1) < iParam0)
	{
		iParam0 = func_1028(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_1169(1644987397) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_1053(int iParam0, char* sParam1, var uParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_1171(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

int func_1054(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			if (PED::IS_PED_HUMAN(iVar0))
			{
				if (PED::IS_PED_MALE(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

var func_1055(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<13> Var0;
	int iVar23;

	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = uParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

float func_1056(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_1057(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_4)
	{
		func_1238(iParam0, iParam1, bParam2);
	}
	else
	{
		iVar0 = (iVar0 / 2);
		if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479->f_5)
		{
			Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + iVar0);
		}
	}
}

int func_1058(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	if (func_1239())
	{
		return 0;
	}
	if (!func_1240(3, &Var0))
	{
	}
	Var0.f_1 = 0;
	Var0.f_2 = -2017996124;
	Var0.f_3 = iParam0;
	Var0.f_4 = 0;
	if (DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0))
	{
	}
	return uVar5;
}

Vector3 func_1059(int iParam0)
{
	vector3 vVar0[24];

	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "LCMP_IG_NIACT1", 24);
			break;
		case 1:
			StringCopy(&cVar0, "LCMP_IG_NIBA", 24);
			break;
		case 2:
			StringCopy(&cVar0, "LCMP_IG_NOG", 24);
			break;
		case 3:
			StringCopy(&cVar0, "LCMP_IG_NOTI", 24);
			break;
		case 4:
			StringCopy(&cVar0, "LCMP_IG_NIACTB", 24);
			break;
		case 5:
			StringCopy(&cVar0, "LCMP_IG_NICL", 24);
			break;
		case 6:
			StringCopy(&cVar0, "LCMP_IG_NIACT2", 24);
			break;
		case 7:
			StringCopy(&cVar0, "LCMP_IG_NIFM", 24);
			break;
		case 8:
			StringCopy(&cVar0, "LCMP_IG_NOSEE", 24);
			break;
		case 9:
			StringCopy(&cVar0, "LCMP_IG_NOAIN", 24);
			break;
		case 10:
			StringCopy(&cVar0, "LCMP_IG_NI2N", 24);
			break;
		case 11:
			StringCopy(&cVar0, "LCMP_IG_NIFN", 24);
			break;
		case 12:
			StringCopy(&cVar0, "LCMP_IG_NI2N", 24);
			break;
		case 13:
			StringCopy(&cVar0, "LCMP_IG_NIFN", 24);
			break;
	}
	return cVar0;
}

void func_1060(char* sParam0, int iParam1)
{
	func_1241(sParam0, iParam1, 0);
}

int func_1061(int iParam0, int iParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	if (func_251(iParam0, 0, 1))
	{
		PED::_0xD65FDC686A031C83(iParam0, iParam1, fParam2);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
		{
		}
		if ((PED::_0x68821369A2CEADD5(iParam0, iParam1) && (iParam5 || !TASK::_0x02EBBB3989B7E695(iParam0))) && (iParam3 == 0 || PED::_0x569F1E1237508DEB(iParam0) == iParam3))
		{
			return 1;
		}
	}
	return 0;
}

char* func_1062()
{
	switch (iLocal_103)
	{
		case 0:
			return "LCMPF_IG1_R";
		case 1:
			return "LCMPF_IG1_ALTR";
		case 2:
			return "LCMP_ANGR_2";
		default:
			break;
	}
	return "";
}

void func_1063(int iParam0, bool bParam1)
{
	if (*iParam0 != 3)
	{
		if (!func_251(iParam0->f_40, 0, 1))
		{
			*iParam0 = 3;
		}
	}
	switch (*iParam0)
	{
		case 0:
			func_1242(iParam0->f_40, Global_35, &(iParam0->f_1), iParam0->f_41, 0, 0, iParam0->f_43, iParam0->f_44, 1, 8, 0, 0, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
			if (!VOLUME::_0x92A78D0BEDB332A3(iParam0->f_39))
			{
				iParam0->f_39 = VOLUME::_CREATE_VOLUME_CYLINDER(Global_36, 0f, 0f, 0f, 5f, 5f, 5f);
			}
			*iParam0 = 1;
			break;
		case 1:
			if (func_1243(iParam0))
			{
				if (bParam1)
				{
					TASK::CLEAR_PED_TASKS(iParam0->f_40, 1, 0);
				}
				func_1242(iParam0->f_40, Global_35, &(iParam0->f_1), iParam0->f_41, 0, 0, iParam0->f_43, iParam0->f_44, 1, 8, 0, 0, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
				func_1244(iParam0->f_40, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				*iParam0 = 2;
			}
			break;
		case 2:
			func_1244(iParam0->f_40, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			if (!func_1243(iParam0))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0->f_40, Global_35, -1, -1082130432, -1082130432, -1082130432);
				*iParam0 = 1;
			}
			break;
		case 3:
			break;
	}
}

int func_1064(var uParam0)
{
	if (iLocal_1144 != 5 && func_961(*uParam0))
	{
		func_97();
		iLocal_1144 = 5;
	}
	switch (iLocal_1144)
	{
		case 0:
			if (func_279(*uParam0, 0, 1) < 20f)
			{
				func_759(uParam0, 0, 0, 0, 0, 0, 0, 1);
				iLocal_1144 = 7;
			}
			break;
		case 7:
			func_759(uParam0, 0, 0, 0, 0, 0, 0, 1);
			if (func_279(*uParam0, 0, 1) < (15f + 1f))
			{
				if (func_19(2097152))
				{
					func_14(2);
					func_379(&(Local_2160.f_35), "LOG_BUY_RET", *uParam0, Global_35, 0, 0, 1, 1);
				}
				iLocal_1144 = 1;
			}
			break;
		case 1:
			func_759(uParam0, 0, 0, 0, 0, 0, 0, 1);
			if (func_279(*uParam0, 0, 1) > 20f || func_253(-3.5f, 1, 0, 0))
			{
				func_779(uParam0);
				iLocal_1144 = 15;
			}
			break;
		case 15:
			return 1;
		case 5:
			if (!func_961(*uParam0) && func_803(uParam0))
			{
				iLocal_1144 = 0;
			}
			break;
	}
	return 0;
}

bool func_1065(int iParam0, int iParam1)
{
	return func_368((Global_1914319->f_3[iParam0 /*446*/])->f_5, iParam1);
}

void func_1066(int iParam0, int iParam1)
{
	func_199(&((Global_1914319->f_3[iParam0 /*446*/])->f_5), iParam1);
}

int func_1067(int iParam0)
{
	if (iParam0 >= 25 || iParam0 <= -1)
	{
		return 0;
	}
	return (Global_20709[iParam0 /*45*/])->f_1;
}

int func_1068(var uParam0, float fParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + fParam1);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0))
	{
		uParam0->f_2 = uVar3;
		return 1;
	}
	return 0;
}

float func_1069(vector3 vParam0, vector3 vParam3)
{
	vector3 vVar0;

	vVar0 = { vParam3 - vParam0 };
	if (vVar0.y == 0f)
	{
		if (vVar0.x < 0f)
		{
			return -90f;
		}
		else
		{
			return 90f;
		}
	}
	return MISC::ATAN2(vVar0.x, vVar0.y);
}

bool func_1070(int iParam0, int iParam1, float fParam2)
{
	return func_1178(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

char* func_1071()
{
	switch (func_952())
	{
		case 11:
			return "LOG_CTXT1";
		default:
			break;
	}
	return "INVALID";
}

void func_1072(int iParam0, char* sParam1, int iParam2, int iParam3, float fParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;

	if (func_1245(iParam0))
	{
		return;
	}
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_597(11);
	(Global_1914319->f_3[11 /*446*/])->f_21 = -1;
	(Global_1914319->f_3[11 /*446*/])->f_22 = -1;
	(Global_1914319->f_3[11 /*446*/])->f_23 = iParam0;
	(Global_1914319->f_3[11 /*446*/])->f_11 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	(Global_1914319->f_3[11 /*446*/])->f_10 = 101;
	(Global_1914319->f_3[11 /*446*/])->f_8 = iParam7;
	(Global_1914319->f_3[11 /*446*/])->f_409 = iParam9;
	(Global_1914319->f_3[11 /*446*/])->f_19 = iParam8;
	if (VOLUME::_0x92A78D0BEDB332A3(iParam3))
	{
		(Global_1914319->f_3[11 /*446*/])->f_25 = iParam3;
	}
	else
	{
		(Global_1914319->f_3[11 /*446*/])->f_25 = VOLUME::_0x10157BC3247FF3BA(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0f, 0f, 0f, fParam4, fParam5, fParam6, func_1246());
		PED::_0x7C00CFC48A782DC0((Global_1914319->f_3[11 /*446*/])->f_25, iParam0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "SHOP_DYNAMIC";
	}
	StringCopy(&(Global_1914319->f_17378.f_1006), sParam1, 24);
	if (iParam2 == 0)
	{
		func_1247(101, 4);
	}
	else
	{
		func_1249((Global_1914319->f_3[11 /*446*/])->f_9, func_1248(11), (Global_1914319->f_3[11 /*446*/])->f_11, -1);
		func_824(11, 8);
	}
	Global_1914319->f_17378.f_1009 = iParam2;
	iVar0 = 0;
	while (iVar0 < 200)
	{
		Global_1914319->f_17378.f_1010[iVar0] = 0;
		iVar0++;
	}
	Global_1914319->f_17378.f_1010.f_201 = 0;
	func_304(11, 16);
	func_824(11, 4);
	func_936(101, 256);
	func_598(101, 1);
}

void func_1073()
{
	func_1250(1533677103);
	func_1250(992551415);
	func_1250(-2044540391);
	func_1250(785091089);
	func_1250(925643953);
	func_1250(516844411);
	func_1250(-930855373);
	func_1250(-951828978);
	func_1250(338147422);
	func_1250(-601932535);
	func_1250(-947702135);
	func_1250(-1429211481);
	func_1250(1613651027);
	func_1250(2036955137);
	func_1250(1627068364);
	func_1250(-2076104686);
	func_1250(23610856);
	func_1250(1177324828);
	func_1250(230530039);
	func_1250(-1994237933);
	func_1250(335540214);
	func_1250(-227505011);
	func_1250(1209486044);
	func_1250(-594879984);
	func_1250(1851034588);
	func_1250(-801397594);
	func_1250(-755485480);
	func_1250(-486559882);
	func_1250(730856618);
	func_1250(1831763320);
	func_1250(2044006195);
	func_1250(-653299524);
	func_1250(-486559882);
	func_1250(-223790555);
	func_1250(747460826);
	func_1250(-1080874779);
	func_1250(-1976480343);
	func_1250(-650786154);
	func_1250(-953313786);
	func_1250(688258043);
	func_1250(-221280702);
	func_1250(1483206625);
}

void func_1074(var uParam0, int iParam1, float fParam2, int iParam3)
{
	int iVar0;

	if (iParam1 == 0)
	{
		return;
	}
	if (func_1251(uParam0, iParam3))
	{
		func_1252(uParam0, iParam3, fParam2);
		return;
	}
	iVar0 = -1;
	if (!func_1253(uParam0, &iVar0))
	{
		return;
	}
	if (iVar0 < 0 || iVar0 >= 20)
	{
		return;
	}
	(*uParam0)[iVar0 /*7*/] = iParam3;
	((*uParam0)[iVar0 /*7*/])->f_1 = 2;
	((*uParam0)[iVar0 /*7*/])->f_3 = iParam1;
	((*uParam0)[iVar0 /*7*/])->f_2 = 0;
	((*uParam0)[iVar0 /*7*/])->f_6 = fParam2;
}

void func_1075(var uParam0, int iParam1, float fParam2, int iParam3)
{
	int iVar0;

	if (iParam1 == 0)
	{
		return;
	}
	if (func_1254(uParam0, iParam3))
	{
		func_1255(uParam0, iParam3, fParam2);
		return;
	}
	iVar0 = -1;
	if (!func_1256(uParam0, &iVar0))
	{
		return;
	}
	if (iVar0 < 0 || iVar0 >= 20)
	{
		return;
	}
	uParam0->f_141[iVar0 /*7*/] = iParam3;
	(uParam0->f_141[iVar0 /*7*/])->f_1 = 2;
	(uParam0->f_141[iVar0 /*7*/])->f_3 = iParam1;
	(uParam0->f_141[iVar0 /*7*/])->f_2 = 0;
	(uParam0->f_141[iVar0 /*7*/])->f_6 = fParam2;
}

void func_1076(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_1077(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5);
}

void func_1077(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (iParam3 == 0 && !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (iParam3 == 0 && (ENTITY::IS_ENTITY_DEAD(iParam1) && !bParam5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_1257(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1258(uParam0, iParam1);
	if (iVar0 != -1)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&((uParam0->f_13[iVar0 /*12*/])->f_1), sParam2))
		{
		}
		else if ((uParam0->f_13[iVar0 /*12*/])->f_9 != iParam3)
		{
		}
		else if ((uParam0->f_13[iVar0 /*12*/])->f_10 != iParam4)
		{
		}
		else
		{
			return;
		}
	}
	else
	{
		iVar1 = func_1259(uParam0, sParam2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != iParam1)
		{
			func_1260(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1261(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0 /*12*/] = iParam1;
		StringCopy(&((uParam0->f_13[iVar0 /*12*/])->f_1), sParam2, 64);
		(uParam0->f_13[iVar0 /*12*/])->f_9 = iParam3;
		(uParam0->f_13[iVar0 /*12*/])->f_10 = iParam4;
		if (bParam5)
		{
			func_1262(uParam0->f_13[iVar0 /*12*/], 2);
		}
		else
		{
			func_1263(uParam0->f_13[iVar0 /*12*/], 2);
		}
	}
}

void func_1078(var uParam0, float fParam1)
{
	uParam0->f_146 = fParam1;
}

void func_1079(var uParam0, float fParam1)
{
	uParam0->f_147 = fParam1;
}

void func_1080(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_1264() };
	func_1265(uParam0, &Var0);
}

void func_1081(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_1082()
{
	return 370405588;
}

char* func_1083()
{
	return "LCMP_INT";
}

int func_1084(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar3;
	struct<8> Var4;
	int iVar12;
	bool bVar13;
	int iVar14;
	struct<8> Var15;

	if (bParam3)
	{
		uParam0->f_223++;
		if (uParam0->f_223 < 10)
		{
			return (func_1095(uParam0, 256) && !func_1095(uParam0, 4194304));
		}
		uParam0->f_223 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	func_1094(uParam0, sParam1);
	if (!func_1095(uParam0, 64))
	{
		if (!func_241(func_1104(uParam0)))
		{
			func_1093(uParam0, 64);
		}
		else
		{
			vVar0 = { func_1266(uParam0) };
			if (!func_241(vVar0))
			{
				func_1267(uParam0, vVar0);
			}
		}
		return 0;
	}
	fVar3 = func_430(Global_35, func_1104(uParam0), 1);
	if (func_1095(uParam0, 128) || func_1095(uParam0, 256))
	{
		if ((fVar3 >= func_1268(uParam0) && !bParam2) || !ANIMSCENE::_0x25557E324489393C(uParam0->f_156))
		{
			if (uParam0->f_241)
			{
				func_1269();
				uParam0->f_241 = 0;
			}
			func_1270(uParam0);
			if (ANIMSCENE::_0x25557E324489393C(uParam0->f_156))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_156);
			}
			func_1271(uParam0);
			func_1092(uParam0, 128, 1);
			func_1092(uParam0, 256, 1);
			func_1092(uParam0, 4096, 1);
			func_1092(uParam0, 32768, 1);
			func_1092(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_1272(uParam0) || bParam2)
	{
		if (!func_1095(uParam0, 128))
		{
			if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_156))
			{
				if (func_1272(uParam0) >= func_1268(uParam0))
				{
				}
				Var4 = { func_1273(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					func_1080(uParam0);
				}
				Var4 = { func_1273(uParam0) };
				iVar12 = 256;
				if (!func_1095(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_156 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_152), iVar12, &Var4, false, true);
				func_1274(uParam0, 0, 0, 0, 0);
				func_1093(uParam0, 128);
			}
		}
	}
	if (func_1095(uParam0, 128))
	{
		if (func_1095(uParam0, 256) && !func_1095(uParam0, 4194304))
		{
			return 1;
		}
		func_1102(uParam0);
		if (!uParam0->f_241)
		{
			if (func_1275())
			{
				func_1276(4096);
				uParam0->f_241 = 1;
			}
		}
		if (ANIMSCENE::_0x477122B8D05E7968(uParam0->f_156, 1, 0))
		{
			bVar13 = true;
			Var15 = { func_1277(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_174[iVar14 /*9*/]))
				{
					if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_174[iVar14 /*9*/], &Var15))
					{
						if (!(uParam0->f_174[iVar14 /*9*/])->f_8)
						{
							(uParam0->f_174[iVar14 /*9*/])->f_8 = 1;
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_156, uParam0->f_174[iVar14 /*9*/]);
							bVar13 = false;
						}
						else if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, uParam0->f_174[iVar14 /*9*/]))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!func_1095(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_156, &Var15))
				{
					if (!func_1095(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_156, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_156, &Var15))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_156, &Var15);
						}
						func_1093(uParam0, 16777216);
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return 0;
			}
			func_1093(uParam0, 256);
			func_1092(uParam0, 4194304, 1);
			return 1;
		}
	}
	return 0;
}

bool func_1085(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_1086(var uParam0)
{
	if (func_1085(&(uParam0->f_3), 4))
	{
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if ((!func_1278(uParam0) || func_1085(&(uParam0->f_3), 4)) && !func_1085(&(uParam0->f_3), 256))
		{
			PAD::DISABLE_CONTROL_ACTION(0, -1450761377, false);
			PAD::DISABLE_CONTROL_ACTION(0, -771458680, false);
			PAD::DISABLE_CONTROL_ACTION(0, -1722177808, false);
			PAD::DISABLE_CONTROL_ACTION(1, -1450761377, false);
			PAD::DISABLE_CONTROL_ACTION(1, -771458680, false);
			PAD::DISABLE_CONTROL_ACTION(1, -1722177808, false);
			PAD::DISABLE_CONTROL_ACTION(2, -1450761377, false);
			PAD::DISABLE_CONTROL_ACTION(2, -771458680, false);
			PAD::DISABLE_CONTROL_ACTION(2, -1722177808, false);
		}
		PAD::DISABLE_CONTROL_ACTION(2, 2139949496, false);
	}
	if (func_1279(uParam0))
	{
		func_468();
	}
	if (!func_1085(&(uParam0->f_3), 16))
	{
		if (func_658(uParam0))
		{
			if (func_774(uParam0) < uParam0->f_4)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
		}
	}
}

int func_1087(int iParam0, float fParam1, float fParam2, bool bParam3, var uParam4, float fParam5)
{
	if (uParam4 && PED::IS_PED_INJURED(iParam0))
	{
		return 1;
	}
	if (func_1280(iParam0, fParam1, fParam2, bParam3, uParam4, fParam5))
	{
		return 1;
	}
	return 0;
}

int func_1088(vector3 vParam0, var uParam3, float fParam4)
{
	float fVar0;

	if (!func_1281(uParam3->f_7, uParam3->f_8))
	{
		return 0;
	}
	if (func_1085(&(uParam3->f_3), 1))
	{
		return 0;
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		return 0;
	}
	fVar0 = func_430(Global_35, vParam0, 1);
	if (fVar0 > fParam4)
	{
		return 0;
	}
	if (!func_1282(vParam0, uParam3))
	{
		return 0;
	}
	if (!func_1085(&(uParam3->f_3), 2))
	{
		if (!CAM::IS_SPHERE_VISIBLE(vParam0, 0.5f))
		{
			return 0;
		}
		if (!func_1283(vParam0, uParam3))
		{
			return 0;
		}
	}
	return 1;
}

void func_1089(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		return;
	}
	CAM::SET_GAMEPLAY_HINT_FOV(fParam4);
	fVar0 = func_1284(vParam1, 1);
	if (!func_1085(&(uParam0->f_3), 32))
	{
		if (fVar0 > 60f)
		{
			iVar1 = 4000;
			iVar2 = 3500;
		}
		else if (fVar0 > 40f)
		{
			iVar1 = 3750;
			iVar2 = 3250;
		}
		else if (fVar0 > 20f)
		{
			iVar1 = 3500;
			iVar2 = 3000;
		}
		else if (fVar0 > 10f)
		{
			iVar1 = 3250;
			iVar2 = 2750;
		}
		else
		{
			iVar1 = 3000;
			iVar2 = 2500;
		}
		if (iParam5 > iVar1)
		{
			uParam0->f_4 = iVar1;
		}
		else if (iParam5 < iVar2)
		{
			uParam0->f_4 = iVar2;
		}
		else
		{
			uParam0->f_4 = iParam5;
		}
		CAM::_0x1F6EBD94680252CE(iVar1, -1082130432);
		CAM::_0xF48664E9C83825E3(iVar2, -1082130432);
	}
	else
	{
		uParam0->f_4 = iParam5;
	}
	func_48(uParam0);
	func_811(&(uParam0->f_3), 1);
}

bool func_1090(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	return func_1285(uParam0, iParam1, sParam2, iParam3, iParam4, iParam5);
}

void func_1091(var uParam0, int iParam1)
{
	uParam0->f_151 = (uParam0->f_151 || iParam1);
}

void func_1092(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && iParam2) && ANIMSCENE::_0x25557E324489393C(uParam0->f_156)) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_156))
	{
		ANIMSCENE::_0x8A8208AE92BF87A5(uParam0->f_156);
	}
}

void func_1093(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

void func_1094(var uParam0, char* sParam1)
{
	int iVar0;

	if (func_1095(uParam0, 8192))
	{
		return;
	}
	if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "cutscene@"))
	{
		iVar0 = MISC::_0x94E8CA3DEE952789(sParam1, "@");
		if (MISC::_0x94E8CA3DEE952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_152), {func_1286("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 4);
		}
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		MemCopy(&(uParam0->f_152), {func_1286("cutscene@", sParam1, 1, 63)}, 4);
	}
	func_1093(uParam0, 8192);
}

bool func_1095(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

int func_1096(var uParam0)
{
	return *uParam0;
}

void func_1097(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (((!ANIMSCENE::_0x25557E324489393C(uParam0->f_156) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_156, 0)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_156)) || func_1095(uParam0, 512))
	{
		if (!func_1287(uParam0->f_213, 128))
		{
			func_1288();
		}
		return;
	}
	if ((func_1112(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_156, func_1289(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_156, func_1289(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_156))
	{
		if (!func_1287(uParam0->f_213, 128))
		{
			func_1288();
		}
		return;
	}
	iVar0 = 1;
	iVar1 = _NAMESPACE71::_0xC17F69E1418CD11F(9);
	if (iVar1 != 0)
	{
		if (func_1290(iVar1))
		{
			if (func_1022(Global_43800, 0))
			{
				iVar0 = 0;
			}
		}
	}
	bVar2 = false;
	if (func_1287(uParam0->f_213, 512))
	{
		bVar2 = true;
	}
	if (func_1291(iVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_156);
		func_1288();
	}
}

void func_1098(var uParam0, char* sParam1)
{
	struct<8> Var0;
	char cVar8[32];

	if (func_1096(uParam0) == 2 && (func_1292(uParam0->f_212, 16384) || func_1095(uParam0, 268435456)))
	{
		Var0 = { func_1277(uParam0) };
		func_1293(uParam0, &Var0);
	}
	func_1294(uParam0, sParam1);
	if (func_1095(uParam0, 131072))
	{
		func_1295(uParam0, 0);
	}
	if (func_1296())
	{
		PED::SET_PED_RESET_FLAG(Global_35, 265, true);
		func_1297();
	}
	if (func_1298())
	{
		func_1299(1);
	}
	func_1274(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	func_1300(uParam0, cVar8);
	func_1107(1, 0);
	func_1270(uParam0);
	if (func_1100(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_148);
	}
	func_1301(uParam0);
	func_1302(uParam0, 1);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_156);
	Global_43799 = uParam0->f_156;
	StringCopy(&Global_43801, sParam1, 24);
}

void func_1099(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_48(&(uParam0->f_1));
}

bool func_1100(var uParam0, int iParam1)
{
	return (uParam0->f_151 && iParam1) != 0;
}

void func_1101(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_1277(uParam0) };
	func_1265(uParam0, &Var0);
}

void func_1102(var uParam0)
{
	if ((!func_1095(uParam0, 32768) && ANIMSCENE::_0x25557E324489393C(uParam0->f_156)) && ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_156, 0))
	{
		func_1303(uParam0);
		func_1302(uParam0, 0);
		if (!ANIMSCENE::_0x59606519FF9D3EC2(uParam0->f_156, 1))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_156);
		}
		func_1093(uParam0, 32768);
	}
}

void func_1103(var uParam0, int iParam1)
{
	if (iParam1 || !func_658(uParam0))
	{
		func_48(uParam0);
	}
}

Vector3 func_1104(var uParam0)
{
	return uParam0->f_5;
}

int func_1105(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return 1;
		}
	}
	else if (func_660(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

void func_1106(int iParam0)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), iParam0, 0, 256);
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
}

void func_1107(bool bParam0, int iParam1)
{
	if (func_1007())
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_1304())
		{
			func_754(1);
		}
	}
	AUDIO::_0x36559148B78853B3(0, iParam1, 0);
}

void func_1108(var uParam0)
{
	vector3 vVar0;

	if (!func_1095(uParam0, 4))
	{
		if (func_1292(uParam0->f_212, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { func_1305(uParam0) };
		if (!func_1292(uParam0->f_212, 524288))
		{
			func_1306(&(uParam0->f_224));
		}
		func_1307(&(uParam0->f_212), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_1308(uParam0, 0f, 0f, 0f);
		func_1309(uParam0);
		func_1310(uParam0);
		func_819(uParam0, 0f, 0f, 0f, 0, 0);
		func_1311(uParam0);
		func_1093(uParam0, 4);
		func_1312(uParam0, 0);
		func_1313(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_225)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_225));
		}
	}
}

int func_1109(var uParam0, int iParam1)
{
	if (func_1095(uParam0, 262144))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_156))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_156, "ExportCamera"))
	{
		return 0;
	}
	if ((ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_156, "ExportCamera") || (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_156, "ExportCamera") && iParam1)) || ANIMSCENE::_0xCDC5512A407CF08D(uParam0->f_156))
	{
		func_1093(uParam0, 262144);
		func_1312(uParam0, 1);
		return 1;
	}
	return 0;
}

int func_1110(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_156) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_156, 0))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_0x49F1D143ADE32656(uParam0->f_156) * 1000f));
}

int func_1111(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_156) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_156, 0))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_156) * 1000f));
}

int func_1112(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && &uParam0->f_13[iVar0 /*12*/] == iParam1) && func_1314(uParam0->f_13[iVar0 /*12*/], iParam2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1113(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_156))
	{
		return 1;
	}
	if (ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_156, 0))
	{
		if (func_1095(uParam0, 524288))
		{
			ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
		}
		return 1;
	}
	if (ANIMSCENE::_0xCDC5512A407CF08D(uParam0->f_156) && func_1095(uParam0, 1048576))
	{
		return 1;
	}
	return 0;
}

void func_1114(var uParam0)
{
	if (((func_1095(uParam0, 1073741824) && !func_1095(uParam0, 524288)) && func_1095(uParam0, 512)) && CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(1000);
	}
}

void func_1115(var uParam0)
{
	if (!func_1095(uParam0, 536870912))
	{
		func_1312(uParam0, 1);
		func_1116(&(uParam0->f_213), uParam0->f_224);
		func_1269();
		func_1093(uParam0, 536870912);
	}
	if (func_1095(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_1315(uParam0);
	func_1099(uParam0, 1);
	func_1271(uParam0);
	func_1316(uParam0);
	func_1317(uParam0);
	func_1318(uParam0, 4);
	func_1080(uParam0);
	func_1295(uParam0, 1);
	func_1270(uParam0);
	func_265(&(uParam0->f_1));
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_156) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_156))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_156);
	}
	func_1319(!func_1287(uParam0->f_213, 128));
	if (!func_1287(uParam0->f_213, 128))
	{
		func_1288();
	}
}

void func_1116(var uParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_1320(2000);
	Global_16 = 0;
	func_1321();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, func_1287(*uParam0, 8));
	if (!func_1287(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0, 0);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (func_1287(*uParam0, 2) || func_1287(*uParam0, 4))
	{
		HUD::_0x4CC5F2FC1332577F(-1679307491);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(-1679307491);
	}
	if (!func_1287(*uParam0, 16))
	{
		func_1322(1);
	}
	if (func_1287(*uParam0, 32))
	{
		func_1323(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_1324(-1623728698, 0);
	}
	func_1313(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_1117()
{
	Global_1935630->f_52 = 1;
}

int func_1118(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_1043(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_1044(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_1119(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_301(iParam0))
	{
		return;
	}
	iVar0 = func_594(iParam0);
	HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iVar0 /*18*/])->f_3, !bParam1);
}

void func_1120(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 && !func_301(iParam0))
	{
		return;
	}
	iVar0 = func_594(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_1121(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 && !func_301(iParam0))
	{
		return;
	}
	iVar0 = func_594(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_0xF4A5C4509BF923B1(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1);
}

int func_1122(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 4;
		case 2:
			return 8;
		case 3:
			return 16;
		case 4:
			return 32;
		case 5:
			return 64;
		case 6:
			return 128;
		case 7:
			return 256;
		case 10:
			return 32768;
		case 11:
			return 65536;
		case 12:
			return 131072;
		case 13:
			return 262144;
	}
	return 0;
}

int func_1123(int iParam0, int iParam1)
{
	struct<10> Var0;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;

	Var0.f_9 = -1591664384;
	iVar17 = 0;
	if (!func_1325("ALL", &iVar14, &iVar15, iParam1, 0))
	{
		return 0;
	}
	iVar16 = 0;
	while (iVar16 < iVar15)
	{
		if (func_1326(&Var0, iVar16, iVar14, iVar15))
		{
			if (Var0.f_4 != 0)
			{
				if (func_1125(Var0.f_4, iParam0))
				{
					iVar17 = 1;
				}
				else
				{
					iVar16++;
				}
				func_1327(iVar14);
				return iVar17;
			}
		}
	}

int func_1124(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::_0x9A100F1CF4546629(iParam0) || ENTITY::_0xC346A546612C49A9(iParam0))
	{
		iVar0 = func_1328(iParam0);
		if (!func_1153(iVar0, 0))
		{
			iVar0 = func_1329(iParam0);
		}
	}
	else
	{
		iVar0 = func_1329(iParam0);
	}
	return iVar0;
}

int func_1125(int iParam0, int iParam1)
{
	if (iParam1 == 101)
	{
		return func_1330(iParam0);
	}
	if (func_1331(iParam0, iParam1))
	{
		return 0;
	}
	return func_1332(iParam0, iParam1);
}

void func_1126(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 - (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1));
}

void func_1127(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_1043(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_1128(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_1129(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

bool func_1130(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_301(iParam0))
	{
		return false;
	}
	iVar0 = func_594(iParam0);
	if (!HUD::_0xB60C9F9ED47ABB76(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return PAD::IS_CONTROL_PRESSED(2, ((*Global_1945938)[iVar0 /*18*/])->f_4);
	}
	return HUD::_UIPROMPT_IS_HOLD_MODE_RUNNING(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

float func_1131(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_301(iParam0))
	{
		return 0f;
	}
	iVar0 = func_594(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_0x81801291806DBC50(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_1132(int iParam0, int iParam1)
{
	if (!func_599(iParam0))
	{
		return false;
	}
	return ((Global_1914319->f_3[iParam0 /*446*/])->f_7 && iParam1) != 0;
}

void func_1133()
{
	int iVar0;
	struct<6> Var1;
	int iVar7;

	func_1333(func_63(Local_2160.f_138));
	iVar0 = func_245(Local_2160.f_138);
	MISC::_0x94FCADCF9F0C368E(iVar0);
	iVar7 = func_1067(11);
	if (func_1153(iVar7, 0))
	{
		Var1 = iVar7;
		Var1.f_3 = 4;
		Var1.f_1 = 1f;
		Var1.f_4 = 1;
		Var1.f_5 = 1;
		MISC::_0xAF3A84C7DE6A1DC5(iVar0, &Var1);
	}
}

Vector3 func_1134(vector3 vParam0, float fParam3)
{
	vector3 vVar0;

	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f) };
	return vParam0 + func_1334(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3));
}

Vector3 func_1135(vector3 vParam0, float fParam3, bool bParam4)
{
	float fVar0;
	vector3 vVar1;

	if (bParam4)
	{
		fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f);
	}
	else
	{
		fVar0 = 0f;
	}
	vVar1 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), fVar0 };
	return vParam0 + func_1334(vVar1, fParam3);
}

bool func_1136(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_1137(int iParam0)
{
	switch (iParam0)
	{
		case joaat("cs_sistercalderon"):
		case joaat("cs_strsheriff_01"):
		case joaat("cs_mud2bigguy"):
		case joaat("cs_rainsfall"):
		case joaat("cs_penelopebraithwaite"):
		case joaat("cs_swampweirdosonny"):
		case joaat("cs_unidusterjail_01"):
		case joaat("cs_iangray"):
		case joaat("cs_tinyhermit"):
		case joaat("cs_timothydonahue"):
		case joaat("cs_princessisabeau"):
		case joaat("cs_leviticuscornwall"):
		case joaat("cs_didsbury"):
		case joaat("cs_featherstonchambers"):
		case joaat("cs_featsofstrength"):
		case joaat("cs_bandpianist"):
		case joaat("cs_escapeartistassistant"):
		case joaat("cs_garethbraithwaite"):
		case joaat("cs_creoleguy"):
		case joaat("cs_leighgray"):
		case joaat("cs_strawberryoutlaw_02"):
		case joaat("cs_gloria"):
		case joaat("cs_warvet"):
		case joaat("cs_jockgray"):
		case joaat("cs_davidgeddes"):
		case joaat("cs_guidomartelli"):
		case joaat("cs_duncangeddes"):
		case joaat("cs_dusterinformant_01"):
		case joaat("cs_pinkertongoon"):
		case joaat("cs_mickey"):
		case joaat("cs_twinbrother_02"):
		case joaat("cs_hestonjameson"):
		case joaat("cs_strdeputy_01"):
		case joaat("cs_abe"):
		case joaat("cs_oddfellowspinhead"):
		case joaat("cs_swampfreak"):
		case joaat("cs_mradler"):
		case joaat("cs_aberdeenpigfarmer"):
		case joaat("cs_hobartcrawley"):
		case joaat("cs_formyartbigwoman"):
		case joaat("cs_norrisforsythe"):
		case joaat("cs_jules"):
		case joaat("cs_tomdickens"):
		case joaat("cs_geraldbraithwaite"):
		case joaat("cs_paytah"):
		case joaat("cs_cancan_03"):
		case joaat("cs_grizzledjon"):
		case joaat("cs_wrobel"):
		case joaat("cs_meredith"):
		case joaat("cs_creepyoldlady"):
		case joaat("cs_nbxreceptionist_01"):
		case joaat("cs_nbxpolicechiefformal"):
		case joaat("cs_cornwalltrainconductor"):
		case joaat("cs_rhodeputy_01"):
		case joaat("cs_drmalcolmmacintosh"):
		case joaat("cs_leon"):
		case joaat("cs_sheriffowens"):
		case joaat("cs_sddoctor_01"):
		case joaat("cs_scottgray"):
		case joaat("cs_cancan_01"):
		case joaat("cs_creolecaptain"):
		case joaat("cs_brontesbutler"):
		case joaat("cs_janson"):
		case joaat("cs_forgivenwife_01"):
		case joaat("cs_tigerhandler"):
		case joaat("cs_frenchartist"):
		case joaat("cs_genstorymale"):
		case joaat("cs_clay"):
		case joaat("cs_strdeputy_02"):
		case joaat("cs_famousgunslinger_03"):
		case joaat("cs_bivcoachdriver"):
		case joaat("cs_braithwaitebutler"):
		case joaat("cs_cleet"):
		case joaat("cs_joe"):
		case joaat("cs_slavecatcher"):
		case joaat("cs_braithwaitemaid"):
		case joaat("cs_twingroupie_02"):
		case joaat("cs_mrsgeddes"):
		case joaat("cs_samaritan"):
		case joaat("cs_exconfedinformant"):
		case joaat("cs_frenchman_01"):
		case joaat("cs_bandsinger"):
		case joaat("cs_baptiste"):
		case joaat("cs_angusgeddes"):
		case joaat("cs_mysteriousstranger"):
		case joaat("cs_famousgunslinger_01"):
		case joaat("cs_bartholomewbraithwaite"):
		case joaat("cs_mixedracekid"):
		case joaat("cs_beatenupcaptain"):
		case joaat("cs_edgarross"):
		case joaat("cs_twingroupie_01"):
		case joaat("cs_mrsweathers"):
		case joaat("cs_jamie"):
		case joaat("cs_karensjohn_01"):
		case joaat("cs_thomasdown"):
		case joaat("cs_obediahhinton"):
		case joaat("cs_agnesdowd"):
		case joaat("cs_cavehermit"):
		case joaat("cs_brynntildon"):
		case joaat("cs_germanson"):
		case joaat("cs_brendacrawley"):
		case joaat("cs_colfavours"):
		case joaat("cs_rhodeskidnapvictim"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("cs_cancan_04"):
		case joaat("cs_towncrier"):
		case joaat("cs_famousgunslinger_04"):
		case joaat("cs_dalemaroney"):
		case joaat("cs_angryhusband"):
		case joaat("cs_lillianpowell"):
		case joaat("cs_andershelgerson"):
		case joaat("cs_poorjoe"):
		case joaat("cs_braithwaiteservant"):
		case joaat("cs_brotherdorkins"):
		case joaat("cs_albertmason"):
		case joaat("cs_famousgunslinger_05"):
		case joaat("cs_balloonoperator"):
		case joaat("cs_albertcakeesquire"):
		case joaat("cs_mrsfellows"):
		case joaat("cs_cancanman_01"):
		case joaat("cs_poisonwellshaman"):
		case joaat("cs_cancan_02"):
		case joaat("cs_meredithsmother"):
		case joaat("cs_angel"):
		case joaat("cs_archerfordham"):
		case joaat("cs_disguisedduster_01"):
		case joaat("cs_chelonianmaster"):
		case joaat("cs_twinbrother_01"):
		case joaat("cs_germandaughter"):
		case joaat("cs_lemiuxassistant"):
		case joaat("cs_creoledoctor"):
		case joaat("cs_crackpotrobot"):
		case joaat("cs_bandbassist"):
		case joaat("cs_genstoryfemale"):
		case joaat("cs_marylinton"):
		case joaat("cs_valprayingman"):
		case joaat("cs_johnthebaptisingmadman"):
		case joaat("cs_mrs_calhoun"):
		case joaat("cs_theodorelevin"):
		case joaat("cs_nicholastimmins"):
		case joaat("cs_disguisedduster_03"):
		case joaat("cs_dinoboneslady"):
		case joaat("cs_beaugray"):
		case joaat("cs_strawberryoutlaw_01"):
		case joaat("cs_crackpotinventor"):
		case joaat("cs_hercule"):
		case joaat("cs_gavin"):
		case joaat("cs_levisimon"):
		case joaat("cs_londonderryson"):
		case joaat("cs_captainmonroe"):
		case joaat("cs_famousgunslinger_02"):
		case joaat("cs_mrslondonderry"):
		case joaat("cs_soothsayer"):
		case joaat("cs_tavishgray"):
		case joaat("cs_joebutler"):
		case joaat("cs_banddrummer"):
		case joaat("cs_lillymillet"):
		case joaat("cs_ansel_atherton"):
		case joaat("cs_rhodeputy_02"):
		case joaat("cs_edmundlowry"):
		case joaat("cs_disguisedduster_02"):
		case joaat("cs_magnifico"):
		case joaat("cs_artappraiser"):
		case joaat("cs_forgivenhusband_01"):
		case joaat("cs_reverendfortheringham"):
		case joaat("cs_daveycallender"):
		case joaat("cs_desmond"):
		case joaat("cs_adamgray"):
		case joaat("cs_jimcalloway"):
		case joaat("cs_sdsaloondrunk_01"):
		case joaat("cs_nbxdrunk"):
		case joaat("cs_germanmother"):
		case joaat("cs_ringmaster"):
		case joaat("cs_lucanapoli"):
		case joaat("cs_rhodesassistant"):
		case joaat("cs_aberdeensister"):
		case joaat("cs_nbxexecuted"):
		case joaat("cs_famousgunslinger_06"):
		case joaat("cs_johnweathers"):
		case joaat("cs_professorbell"):
		case joaat("cs_rhodessaloonbouncer"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_1138(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_1335(iParam0, iParam1))
		{
			if (func_1336(iParam0, iParam1))
			{
				if (func_1337(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_1338(iParam0);
				}
			}
			else
			{
				PED::_0x1902C4CFCC5BE57C(iParam0, iParam1);
				PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
			}
			PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, 1, 1);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 9);
		}
	}
}

void func_1139(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::_0xD710A5007C2AC539(iParam0, -1725579161, 1);
	if (bParam2)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_1140(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_0x1902C4CFCC5BE57C(iParam0, 1268180497);
	if (bParam1)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
	}
}

void func_1141(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_0x5653AB26C82938CF(iParam0, 41611, 0f);
	}
	else
	{
		PED::_0x5653AB26C82938CF(iParam0, 41611, 1f);
	}
}

Vector3 func_1142(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	int iVar10;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			vVar0 = { PED::GET_PED_BONE_COORDS(iVar9, 21030, 0f, 0f, 0f) };
			vVar0.f_2 = (vVar0.z + 0.25f);
		}
		else
		{
			iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
			MISC::GET_MODEL_DIMENSIONS(iVar10, &vVar3, &vVar6);
			vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar3) };
			vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar6) };
			vVar0.x = ((vVar3.x + vVar6.x) / 2f);
			vVar0.f_1 = ((vVar3.y + vVar6.y) / 2f);
			vVar0.f_2 = func_1339(vVar3.z, vVar6.z, 0.75f);
		}
	}
	if (func_241(vVar0))
	{
	}
	return vVar0;
}

int func_1143(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	var uVar0;
	var uVar3;
	var uVar6;

	uParam0->f_4 = 0;
	switch (*uParam0)
	{
		case 0:
			func_1006(uParam0);
			uParam0->f_1 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, vParam4, 83, iParam7, 7);
			SHAPETEST::_0x04AA59CA40571C2E(uParam0->f_1, 15);
			*uParam0 = 1;
			break;
		case 1:
			if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_1, &(uParam0->f_2), &uVar0, &uVar3, &uVar6) == 2)
			{
				if (uParam0->f_2 == 0)
				{
					*uParam0 = 3;
					return 1;
				}
				else
				{
					uParam0->f_4 = 1;
					*uParam0 = 0;
					return 0;
				}
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_1, &(uParam0->f_2), &uVar0, &uVar3, &uVar6) == 0)
			{
				*uParam0 = 3;
			}
			break;
		case 3:
			*uParam0 = 0;
			break;
	}
	return 0;
}

struct<4> func_1144(bool bParam0)
{
	return func_871(1328661203, func_1340(), -1591664384, bParam0);
}

int func_1145(int iParam0)
{
	vector3 vVar0;

	if (!func_1153(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_1146(bool bParam0)
{
	int iVar0;

	iVar0 = func_943(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_871(923904168, func_1144(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_871(923904168, func_1144(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_871(923904168, func_1144(bParam0), -740156546, 0);
}

int func_1147(int iParam0, bool bParam1)
{
	if (func_944(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_1341(-1185145312, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_1148(bool bParam0)
{
	int iVar0;

	iVar0 = func_943(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_871(271701509, func_1144(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_871(271701509, func_1144(bParam0), 12999093, 0);
}

int func_1149(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_944(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &uVar0))
		{
			if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, uVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_1150(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_943(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_1151(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_1153(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_871(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_943(bParam6), &Var0, 0);
	return uVar4;
}

int func_1152(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_943(0);
	*uParam1 = { func_871(iParam0, func_1146(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return 0;
	}
	return 1;
}

int func_1153(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_1154(var uParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_1155(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_1156(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 63:
			return 1;
	}
	return 0;
}

int func_1157(int iParam0)
{
	if (!func_1342(iParam0))
	{
		return 0;
	}
	return func_1343(iParam0);
}

int func_1158()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

void func_1159(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < func_1344(iParam0))
	{
		iVar1 = func_1160(iParam0, iVar0);
		if (iVar1 != 0 && MAP::_0x3F81EA4275D39D6F(iVar1))
		{
			MAP::_0xDA98246C7A3C2189(iVar1);
		}
		iVar0++;
	}
}

int func_1160(int iParam0, int iParam1)
{
	if (iParam0 == 2)
	{
		switch (iParam1)
		{
			case 1:
				return 1028223611;
			case 2:
				return 730222325;
			case 3:
				return -597970767;
		}
	}
	return 0;
}

int func_1161()
{
	int iVar0;

	iVar0 = func_1345();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_1162(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_1() != -1)
	{
		return iParam0;
	}
	if (Global_1347477->f_2 + 120000) < MISC::GET_GAME_TIMER()
	{
		Global_1347477->f_3 = 1;
		Global_1347477->f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477->f_2 = MISC::GET_GAME_TIMER();
	Global_1347477->f_3++;
	if (Global_1347477->f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477->f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (BUILTIN::TO_FLOAT(iParam0) * fVar0);
	fVar1 = func_1056(MISC::ABSF(fVar1) < 1f, func_1056(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_1163()
{
	if (func_1() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

int func_1164(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_1165()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_1166(int iParam0, bool bParam1, int iParam2)
{
	func_1346((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1347(iParam0);
}

void func_1167(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[2]), 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[2]), 1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[2]), func_1348(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[2]), "pausemenu_player");
}

void func_1168(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_1349(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1350(iVar5, &iVar2, &iVar0))
			{
				if (!func_1153(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1351(iVar2);
					if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar1))
					{
						if (bParam0)
						{
							UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_1145(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1161() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1161() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1352();
							}
							if (bVar3)
							{
								UNLOCK::_UNLOCK_SET_UNLOCKED(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}

struct<2> func_1169(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

char* func_1170(int iParam0)
{
	switch (iParam0)
	{
		case 2139774588:
			return "HONOR_EVENT_LOOT_INNOCENT";
		case 1142025875:
			return "HONOR_EVENT_AMBIENT_KILL";
		case 1587891565:
			return "HONOR_EVENT_AMBIENT_KO";
		case 1877013492:
			return "HONOR_EVENT_SCARE";
		case -643014279:
			return "HONOR_EVENT_KILL_VERMIN";
		case -597116214:
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case 551416228:
			return "HONOR_EVENT_KILL_HORSE";
		case 1022576842:
			return "HONOR_EVENT_STEAL_HORSE";
		case 953325896:
			return "HONOR_EVENT_STEAL_DONKEY";
		case 508358508:
			return "HONOR_EVENT_STEAL_MULE";
		case -856432278:
			return "HONOR_EVENT_STEAL_WAGON";
		case -735200598:
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case -2010847721:
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case 446961221:
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case -1972216640:
			return "HONOR_EVENT_ANTAGONIZE";
		case 530833824:
			return "HONOR_EVENT_THEFT";
		case 1682361219:
			return "HONOR_EVENT_INTERVENED";
		case 158959085:
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case 1919819559:
			return "HONOR_EVENT_DONATED_GAME";
		case 1461411082:
			return "HONOR_EVENT_ITEM_REQUEST";
		case -549508280:
			return "HONOR_EVENT_LONG_ABSENCE";
		case -1787248475:
			return "HONOR_EVENT_CRUEL_DEATH";
		case 932872355:
			return "HONOR_EVENT_JUSTICE_SERVED";
		case -1091304842:
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

var func_1171(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _NAMESPACE71::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_1353(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_1172(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_1354(iParam0))
	{
		return 0;
	}
	if (!func_1158())
	{
		return 0;
	}
	if (!func_1355(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
	return 1;
}

int func_1173()
{
	if (func_1356())
	{
		return 0;
	}
	if (Global_1572887->f_12 == -1)
	{
		if (Global_1935630->f_44 == joaat("weapon_lasso"))
		{
			return PAD::IS_CONTROL_PRESSED(0, 130948705);
		}
		return PED::GET_PED_RESET_FLAG(Global_35, 311);
	}
	else
	{
		return &(Global_1955569->f_992[2]);
	}
	return 0;
}

void func_1174(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::PLAYER_ID();
	if (!PLAYER::_0x72AD59F7B7FB6E24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (PLAYER::_0x1A6E84F13C952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0[iVar1]))
			{
			}
			else if (!PED::IS_PED_HUMAN(uParam0[iVar1]) && !(DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(uParam0[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

int func_1175(bool bParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_32))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630->f_32))
		{
			*uParam1 = Global_1935630->f_32;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_33))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630->f_33))
		{
			if (PED::_0x3AA24CCC0D451379(Global_1935630->f_33) || ENTITY::IS_ENTITY_DEAD(Global_1935630->f_33))
			{
				*uParam2 = Global_1935630->f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630->f_30 && !PED::IS_PED_INJURED(Global_35))
	{
		iVar1 = PED::_0xB65A4DAB460A19BD(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(iVar1))
			{
				*uParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_1176(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, -171675621))
		{
			if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (uParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630->f_12)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_0xB65A4DAB460A19BD(Global_35);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_0x772A1969F649E902(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_1177(var uParam0)
{
	int iVar0;

	if (Global_1935630->f_38 == 0)
	{
		func_199(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(Global_1935630->f_34[iVar0])))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(&(Global_1935630->f_34[iVar0])))
				{
					func_143(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}

bool func_1178(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_1179(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, joaat("weapon_unarmed"), iParam1))
		{
			return 1;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1935630->f_44))
			{
				if (WEAPON::_0x959383DCD42040DA(Global_1935630->f_44) || Global_1935630->f_44 == joaat("weapon_melee_knife"))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, Global_1935630->f_44, iParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_1180(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("weapon_unarmed");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

bool func_1181(int iParam0, int iParam1)
{
	if (!func_934(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_15614[iParam0] && iParam1) != 0;
}

void func_1182(int iParam0)
{
	func_1357(func_937(iParam0));
}

int func_1183(int iParam0)
{
	if (func_1358(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

int func_1184()
{
	return 1;
}

int func_1185(int iParam0)
{
	if (func_1359())
	{
		if (Global_1914319->f_16855 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1186(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = iParam0;
	while (iVar0 < Global_1058888->f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888->f_40501 < 32)
	{
		*(Global_1058888->f_40501.f_1[Global_1058888->f_40501 /*2*/]) = { Var1 };
	}
	Global_1058888->f_40501 = (Global_1058888->f_40501 - 1);
	if (Global_1058888->f_40501 < 0)
	{
		Global_1058888->f_40501 = 0;
	}
	return 1;
}

int func_1187(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = (Global_1058888->f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 + 1 /*2*/]) = { *(Global_1058888->f_40501.f_1[iVar0 /*2*/]) };
		}
		iVar0 = (iVar0 - 1);
	}
	*(Global_1058888->f_40501.f_1[iParam0 /*2*/]) = { Var1 };
	Global_1058888->f_40501++;
	if (Global_1058888->f_40501 > 32)
	{
		Global_1058888->f_40501 = 32;
	}
	return 1;
}

void func_1188(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { *(Global_1898164->f_1[iParam0 /*5*/]) };
	*(Global_1898164->f_1[iParam0 /*5*/]) = { *(Global_1898164->f_1[iParam1 /*5*/]) };
	*(Global_1898164->f_1[iParam1 /*5*/]) = { Var0 };
}

int func_1189(int iParam0)
{
	iParam0 = func_949(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
	{
		return 1;
	}
	return 0;
}

void func_1190(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	vector3 vVar12;
	float fVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = func_1227(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		bVar1 = true;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iVar0))
	{
		return;
	}
	if (func_1360(iParam0, 64))
	{
		func_1191(iParam0);
		return;
	}
	bVar2 = false;
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26) && !MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		if (!MAP::GET_BLIP_FROM_ENTITY(iVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = func_1157(42);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
		{
			MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
		}
		if (iVar0 == PLAYER::_0xB48050D326E9A2F3(PLAYER::PLAYER_ID()) && bVar3)
		{
			if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
			{
				((*Global_1900383)[iParam0 /*45*/])->f_27 = MAP::_0x23F74C2FDA6E7C61(-515518185, iVar0);
				MAP::SET_BLIP_SPRITE(((*Global_1900383)[iParam0 /*45*/])->f_27, -1327110633, true);
				func_1361(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
		{
			MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
		}
		return;
	}
	else if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
	}
	bVar4 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (Global_1935630->f_40 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26) && bVar4)
	{
		func_1191(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if ((Global_40.f_1095.f_1[iParam0 /*436*/])->f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = -1925605092;
	}
	else if (iParam0 == 1)
	{
		iVar5 = -1230993421;
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (func_1362(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
			{
				MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
			}
			return;
		}
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		((*Global_1900383)[iParam0 /*45*/])->f_26 = MAP::_0x23F74C2FDA6E7C61(iVar5, iVar0);
		((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
		func_1363(&(((*Global_1900383)[iParam0 /*45*/])->f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1360(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_1364(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar11))
		{
			if (PED::GET_MOUNT(iVar11) == iVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar15 = func_1365(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1366(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 3)
		{
			iVar17 = -401963276;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = PED::_0xEBE89623EB861271(iVar0, 1);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 9)
				{
					iVar17 = 430539302;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 10)
				{
					iVar17 = -995247980;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 11)
				{
					iVar17 = -25056193;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 11;
				}
			}
			else if (fVar19 <= 1f)
			{
				if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 12)
				{
					iVar17 = -264630352;
					iVar18 = 1313031610;
					((*Global_1900383)[iParam0 /*45*/])->f_25 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 5)
			{
				iVar17 = 430539302;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 6)
			{
				iVar17 = -995247980;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 7)
			{
				iVar17 = -25056193;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 7;
			}
		}
		else if (fVar19 <= 1f)
		{
			if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 8)
			{
				iVar17 = -264630352;
				iVar18 = -1012863186;
				((*Global_1900383)[iParam0 /*45*/])->f_25 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 4)
		{
			iVar17 = -1380599892;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 4;
		}
	}
	else if (bVar16)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 2)
		{
			iVar17 = 1313031610;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 2;
		}
	}
	else if (!bVar16)
	{
		if (((*Global_1900383)[iParam0 /*45*/])->f_25 != 1)
		{
			iVar17 = -1012863186;
			((*Global_1900383)[iParam0 /*45*/])->f_25 = 1;
		}
	}
	if (iVar17 != 0)
	{
		func_1367(((*Global_1900383)[iParam0 /*45*/])->f_26);
		func_1368(((*Global_1900383)[iParam0 /*45*/])->f_26);
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar17);
		if (iVar17 == -401963276)
		{
			MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, 231194138);
		}
	}
	if (iVar18 != 0)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar18);
	}
	if ((PLAYER::_0xB48050D326E9A2F3(PLAYER::PLAYER_ID()) == iVar0 && bVar3) && !bVar9)
	{
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, 673950256);
	}
	else
	{
		MAP::_0xB059D7BD3D78C16F(((*Global_1900383)[iParam0 /*45*/])->f_26, 673950256);
	}
	if (func_521(iVar0) && !bVar9)
	{
		if (iVar5 == -1925605092)
		{
			iVar20 = 561559387;
		}
		else if (iVar5 == -1230993421)
		{
			iVar20 = -201249929;
		}
		MAP::_0x662D364ABF16DE2F(((*Global_1900383)[iParam0 /*45*/])->f_26, iVar20);
	}
	else
	{
		MAP::_0xB059D7BD3D78C16F(((*Global_1900383)[iParam0 /*45*/])->f_26, 561559387);
		MAP::_0xB059D7BD3D78C16F(((*Global_1900383)[iParam0 /*45*/])->f_26, -201249929);
	}
	iVar21 = func_1362(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = -217389439;
				break;
			case 1:
				iVar22 = 13992470;
				break;
			case 2:
				iVar22 = 396341162;
				break;
			case 3:
				iVar22 = 623069873;
				break;
			case 4:
				iVar22 = -637422489;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = 937553910;
				break;
			case 1:
				iVar22 = 489732756;
				break;
			case 2:
				iVar22 = 195204984;
				break;
			case 3:
				iVar22 = -103418913;
				break;
			case 4:
				iVar22 = -815685893;
				break;
		}
	}
	if (iVar22 == 0)
	{
		MAP::_0x44813684F72B563C(iVar0, ((*Global_1900383)[iParam0 /*45*/])->f_26);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(iVar0, ((*Global_1900383)[iParam0 /*45*/])->f_26);
		MAP::_0x7563CBCA99253D1A(iVar0, iVar22);
	}
}

void func_1191(int iParam0)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
	}
	((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
}

float func_1192(vector3 vParam0, vector3 vParam3)
{
	float fVar0;

	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = BUILTIN::VMAG(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_1193(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

var func_1194(var uParam0)
{
	return uParam0->f_25;
}

int func_1195(int iParam0, var uParam1, var uParam2)
{
	if (uParam1->f_11 != 0)
	{
		if (func_1369(iParam0, uParam1))
		{
			if (!func_368(uParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_107(uParam2, 0, 0, 1, 0);
				func_143(&(uParam1->f_10), 1);
			}
			return 1;
		}
		else if (func_368(uParam1->f_10, 1))
		{
			func_1370(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_199(&(uParam1->f_10), 1);
		}
	}
	return 0;
}

int func_1196(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;

	if (fParam7 > (fParam3 + 5f))
	{
		return 0;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		bVar4 = func_368(iParam4, 32);
		func_1212(iParam1, uParam2, 0);
		iVar5 = func_1371(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return 1;
		}
		func_107(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_368(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_368(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_368(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_368(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_368(iParam4, 8388608) || func_368(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_368(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_368(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_809(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_809(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_368(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_1372(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_0xFCA8FB9E15FA80D3(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
			if (func_368(iParam4, 268435456))
			{
				iVar8 = func_1373(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_1374(iParam1, (*uParam2)[iVar8 /*17*/]);
				}
			}
			if (func_809(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
			if (func_368(iParam4, 2) || func_368(iParam4, 16))
			{
				func_1197(*uParam0, 1, 1);
			}
			else
			{
				func_1197(*uParam0, 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

void func_1197(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

int func_1198(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = (!VOLUME::_0x92A78D0BEDB332A3(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return 1;
		}
		if (func_1375(*uParam0, bParam3, bVar2, bVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_1199(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;

	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT((*uParam4)[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			func_1376(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_368(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_1200(int iParam0)
{
	if (func_368(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -128997553, true);
		PAD::DISABLE_CONTROL_ACTION(0, 130948705, true);
		PAD::DISABLE_CONTROL_ACTION(0, 42190210, true);
		PAD::DISABLE_CONTROL_ACTION(0, 1632043089, true);
		PAD::DISABLE_CONTROL_ACTION(0, 1623727326, true);
		PAD::DISABLE_CONTROL_ACTION(0, -922478227, true);
		PAD::DISABLE_CONTROL_ACTION(0, -674562833, true);
		PAD::DISABLE_CONTROL_ACTION(0, -197984200, true);
		PAD::DISABLE_CONTROL_ACTION(0, -238861894, true);
	}
	if (func_368(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -485697785, false);
	}
	if (func_368(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
		PAD::DISABLE_CONTROL_ACTION(0, 578288361, false);
	}
}

bool func_1201(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;

	iVar1 = func_1028(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::_0xA911EE21EDF69DAF(Global_35) || func_548(Global_35)) || func_546(Global_35)) || func_544(Global_35));
	fVar12 = -1f;
	if (func_658(&(iParam1->f_13)))
	{
		fVar12 = func_375(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (((*uParam4)[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = ((*uParam4)[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_301(((*uParam4)[iVar0 /*17*/])->f_6);
		func_1377(*uParam0, (*uParam4)[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_1378(*uParam0, iParam1, (*uParam4)[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_1379(iParam12, ((*uParam4)[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_107(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_1380(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET(uParam4[iVar0 /*17*/], 11))
					{
						func_1212(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET(uParam4[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(((*uParam4)[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(((*uParam4)[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, ((*uParam4)[iVar0 /*17*/])->f_11, ((*uParam4)[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0, 0, 0, 0, 0, 0);
							}
						}
					}
					if (func_1381(iParam1, fParam6, iParam1->f_9))
					{
						func_48(&(iParam1->f_18));
						if (bVar6)
						{
							func_1380(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_1382(iParam1, fParam2);
	}
	return bVar5;
}

void func_1202(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 20))
		{
			if (!MISC::IS_BIT_SET(uParam0[iVar0 /*17*/], 21))
			{
				MISC::CLEAR_BIT((*uParam0)[iVar0 /*17*/], 20);
				MISC::CLEAR_BIT((*uParam0)[iVar0 /*17*/], 21);
			}
		}
		iVar0++;
	}
}

void func_1203(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_1383((*uParam1)[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET(uParam1[iVar0 /*17*/], 20))
			{
				func_1382(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

int func_1204(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, -124244224))
		{
			if (func_1384(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_1385(iParam1, 0);
				func_1212(iParam1, uParam2, func_809(iParam1, 6));
				return 1;
			}
		}
	}
	return 0;
}

int func_1205(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_48(&(iParam1->f_18));
			return 0;
		}
		else if (func_658(&(iParam1->f_18)))
		{
			func_265(&(iParam1->f_18));
			return 0;
		}
	}
	if (!func_658(&(iParam1->f_18)))
	{
		return 1;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return 0;
		}
	}
	return func_223(&(iParam1->f_18), fParam2);
	return 1;
}

void func_1206(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_1377(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_1207(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_1208(int* iParam0)
{
	if (func_809(iParam0, 0))
	{
		if (func_1386(iParam0))
		{
			func_1207(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_1209(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_1210(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_1387(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_1388(iParam0))
	{
		return 0;
	}
	if (func_1389(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_1390(iParam0, 1)) || func_878(32768))
	{
		if (!func_1390(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_1391())
	{
		return 0;
	}
	return 1;
}

void func_1211(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_1212(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_302(&(((*uParam1)[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_76(iParam0, 0);
		}
	}
}

int func_1213(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return 1;
	}
	return 0;
}

int func_1214(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_2543)
	{
		if (iParam0 == &iLocal_2527[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1215(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		default:
			break;
	}
	return 0;
}

void func_1216(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	func_161(Local_2160.f_137, &iVar4, &iVar5, 0, 0);
	iVar6 = (810 + *iParam1);
	iVar8 = func_63(iVar6);
	if (iVar4 == -1 || iVar5 == -1)
	{
		return;
	}
	EVENT::ADD_SHOCKING_EVENT_AT_POSITION(-23350179, func_429(*iParam1), -1f, 100f, 100f, -1082130432, (30f + 5f), -1, -1);
	if (ENTITY::IS_ENTITY_DEAD(iVar8))
	{
		return;
	}
	iVar9 = (iVar5 - iVar4);
	iVar3 = iVar4;
	while (iVar3 <= iVar5)
	{
		if (!func_155(iVar3) || iVar3 == -1)
		{
		}
		else
		{
			iVar7 = func_63(iVar3);
			if (func_351(iVar7, iParam0))
			{
			}
			else
			{
				if ((func_239(iVar3, 0) && !ENTITY::IS_ENTITY_DEAD(iVar7)) && PED::IS_PED_HUMAN(iVar7))
				{
					func_242(iVar3, 0, 1, 0, 1, 1);
					func_243(iVar7, 1, 1);
					if ((iParam2 && func_213(iVar7, &(iLocal_75[2]), 1, 0)) && func_251(iVar7, 0, 1))
					{
						PED::SET_PED_CONFIG_FLAG(iVar7, 168, true);
						func_1392(iVar3, -1);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar7, 0, 1);
						PED::_0xEEED8FAFEC331A70(iVar7, func_428(*iParam1), 1);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_735);
						TASK::_TASK_SMART_FLEE_STYLE_COORD(0, func_428(*iParam1), 4, 1, 30f, 8000, 0);
						TASK::TASK_TURN_PED_TO_FACE_COORD(0, func_429(*iParam1), 0);
						TASK::TASK_STAND_STILL(0, -1);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_735);
						TASK::TASK_PERFORM_SEQUENCE(iVar7, iLocal_735);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_735);
					}
					else
					{
						fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
						fVar2 = func_358(iVar7, iVar8, 1, 1);
						if (func_374(iVar7))
						{
							fVar1 = 0f;
						}
						else if (fVar2 < 35f)
						{
							fVar1 = 1f;
						}
						else if (fVar2 < 65f)
						{
							fVar1 = 0.5f;
						}
						else if (fVar2 < 120f)
						{
							fVar1 = 0.1f;
						}
						else
						{
							fVar1 = 0f;
						}
						if (fVar0 < fVar1 && func_251(iVar7, 0, 1))
						{
							PED::SET_PED_CONFIG_FLAG(iVar7, 168, true);
							func_1392(iVar3, -1);
							if (PED::IS_PED_USING_ANY_SCENARIO(iVar7))
							{
								TASK::_0xE7FA07624574B79A(iVar7, iVar8, 1, 1, 10f, 1, 0, 0, 0);
							}
							else
							{
								PED::_0xEEED8FAFEC331A70(iVar7, func_428(*iParam1), 1);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_735);
								TASK::TASK_TURN_PED_TO_FACE_COORD(0, func_429(*iParam1), 0);
								TASK::TASK_STAND_STILL(0, -1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_735);
								TASK::TASK_PERFORM_SEQUENCE(iVar7, iLocal_735);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_735);
							}
							PED::_0xAAB050DA48B57978(iVar7, func_1393(), iVar7, -1, 4);
						}
					}
				}
				if (iLocal_2543 >= 15)
				{
				}
				else
				{
					iVar10++;
					if (iVar10 > iVar9)
					{
					}
					else
					{
						iVar3++;
					}
				}
			}
		}
	}

void func_1217(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7[15];
	float fVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;

	func_161(Local_2160.f_137, &iVar3, &iVar4, 0, 0);
	iVar5 = 810;
	iVar6 = func_63(iVar5);
	if (ENTITY::IS_ENTITY_DEAD(iVar6))
	{
		return;
	}
	if (iVar3 == -1 || iVar4 == -1)
	{
		return;
	}
	iVar24 = (iVar4 - iVar3);
	iVar2 = iVar3;
	while (iVar2 <= iVar4)
	{
		if (!func_155(iVar2) || iVar2 == -1)
		{
		}
		else
		{
			iVar27 = func_63(iVar2);
			if (func_351(iVar27, iParam1))
			{
			}
			else
			{
				iVar26 = -1;
				if ((func_239(iVar2, 0) && !ENTITY::IS_ENTITY_DEAD(iVar27)) && PED::IS_PED_HUMAN(iVar27))
				{
					func_242(iVar2, 0, 1, 0, 1, 1);
					func_243(iVar27, 1, 1);
					fVar23 = func_358(iVar27, iVar6, 1, 1);
					fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
					if (func_374(iVar27))
					{
						fVar1 = 0f;
					}
					else if (fVar23 < 35f)
					{
						fVar1 = 1f;
					}
					else if (fVar23 < 65f)
					{
						fVar1 = 0.75f;
					}
					else if (fVar23 < 120f)
					{
						fVar1 = 0.3f;
					}
					else if (fVar23 < 200f)
					{
						fVar1 = 0.1f;
					}
					else
					{
						fVar1 = 0f;
					}
					if (iLocal_2543 >= 3)
					{
						if (fVar1 >= 0.9f)
						{
							iVar26 = func_1394(&fVar7);
						}
						else
						{
							fVar1 = -1f;
						}
					}
					if (fVar0 <= fVar1 && !ENTITY::IS_ENTITY_DEAD(iVar27))
					{
						func_1392(iVar2, iVar26);
						if (iVar26 >= 0)
						{
							fVar7[iVar26] = fVar23;
						}
						else
						{
							fVar7[iLocal_2543] = fVar23;
						}
					}
				}
				iVar25++;
				if (iVar25 > iVar24)
				{
				}
				else
				{
					iVar2++;
				}
				if (iLocal_98 == 2 && !func_1395(813))
				{
					iVar26 = func_1394(&fVar7);
					func_1392(813, iVar26);
					func_466(func_681(3), 0);
				}
				iVar28 = 0;
				while (iVar28 < iLocal_2543)
				{
					iVar27 = func_63(&(iLocal_2527[iVar28]));
					PED::_0x62FDAD5E01D2DD47(iVar27, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 2, 0);
					TASK::CLEAR_PED_TASKS(iVar27, 1, 0);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_735);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam0, -1, -1082130432, -1082130432, -1082130432);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_735);
					TASK::_TASK_PERFORM_SEQUENCE_2(iVar27, iLocal_735, 0f, 2.5f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_735);
					PED::_0xAAB050DA48B57978(iVar27, func_1393(), iParam0, -1, 4);
					PED::SET_PED_CONFIG_FLAG(iVar27, 178, false);
					PED::SET_PED_CONFIG_FLAG(iVar27, 130, true);
					func_1045(&iVar27, 1);
					iVar28++;
				}
			}
		}
	}

int func_1218(int iParam0)
{
	switch (iParam0)
	{
		case 810:
			return 0;
		case 811:
			return 1;
		case 812:
			return 2;
		case 813:
			return 3;
		default:
			break;
	}
	return -1;
}

Vector3 func_1219(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1420.47f, -237.82f, 99.06f;
	}
	if (iParam0 == 1)
	{
		return -1419.73f, -237.87f, 99.02f;
	}
	if (iParam0 == 2)
	{
		return -1419.2f, -237.95f, 98.99f;
	}
	if (iParam0 == 3)
	{
		return -1418.34f, -238.03f, 98.95f;
	}
	return 0f, 0f, 0f;
}

int func_1220(int iParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4, bool bParam5)
{
	if (uParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!bParam5 && !PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			return 0;
		}
	}
	if (uParam3 && func_1396(iParam0))
	{
		return 0;
	}
	if (bParam4)
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		if (func_352(iParam0, 0) != -1)
		{
			return 0;
		}
	}
	return 1;
}

int func_1221(int iParam0)
{
	if (func_961(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_1222(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam1[iVar0]))
		{
			if (func_377(uParam1[iVar0], iParam0, 1) < 225f)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_1223(int iParam0)
{
	return iParam0 != 0;
}

var func_1224(char* sParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = uParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_0xCEDBF17EFCC0E4A4(&Var0, &Var13, iParam5);
	return uVar15;
}

char* func_1225(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4);
		case 2:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4, sParam5);
		case 3:
			return MISC::_CREATE_VAR_STRING(10, sParam1, sParam2);
		case 4:
			return MISC::_CREATE_VAR_STRING(42, sParam1, sParam2, sParam3);
	}
	return MISC::_CREATE_VAR_STRING(2, func_1397(sParam1));
}

void func_1226(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

int func_1227(int iParam0)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/];
}

int func_1228(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	struct<6> Var10;
	int iVar16;
	int iVar17;

	uParam1->f_10 = func_949(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*uParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*uParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (func_241(uParam1->f_6))
		{
		}
	}
	bVar0 = func_1158();
	if (*uParam1)
	{
		if (bVar0 && !func_206(((*Global_1835011)[4 /*74*/])->f_1, 1))
		{
			if (func_1398(5))
			{
				func_1399(5);
				func_1400(5);
				func_1401(0);
				func_1402(0);
			}
		}
	}
	if (func_1403(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_206(((*Global_1835011)[37 /*74*/])->f_1, 1)) && !func_206(((*Global_1835011)[43 /*74*/])->f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_206(((*Global_1835011)[43 /*74*/])->f_1, 1)) && !func_206(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_1227(iVar1);
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	if (func_1189(iVar1))
	{
		bVar3 = true;
		if (func_1404(iVar1))
		{
			bVar4 = true;
		}
		if (func_1405(iVar1))
		{
			iVar5 = 1;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (iVar5 && !uParam1->f_5)
			{
				func_1406(uParam1->f_10);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_1398(0) && func_1398(1))
			{
				func_1407(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1408())
			{
				func_1409();
			}
			func_1401(0);
			func_1402(0);
			func_1410(uParam1->f_6);
		}
	}
	if (!func_1189(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1411(uParam1->f_10) == 0 || func_1412(uParam1->f_10) == 0) || func_1413(uParam1->f_10) == 0)
			{
				func_1414(uParam1->f_10);
			}
			func_1415(uParam1->f_10);
			func_1416(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_1227(iVar1);
	bVar3 = false;
	bVar4 = false;
	iVar5 = 0;
	if (func_1189(iVar1))
	{
		bVar3 = true;
		if (func_1404(iVar1))
		{
			bVar4 = true;
		}
		if (func_1405(iVar1))
		{
			iVar5 = 1;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_0x083D497D57B7400F(iVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			}
			if (!func_241(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::_0x9587913B9E772D29(iVar2, 0);
			}
		}
	}
	if (func_1417(uParam1->f_10))
	{
		*uParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (iVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::_0xA0BC8FAED8CFEB3C(iVar2))
			{
				*uParam0 = 0;
				return 0;
			}
			iVar6 = PLAYER::PLAYER_ID();
			iVar7 = PLAYER::_0xB48050D326E9A2F3(iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (iVar7 != iVar2)
				{
					PLAYER::_0xD2CB0FB0FDCB473D(iVar6, 0);
				}
			}
			Var8 = { func_1418(uParam1->f_10) };
			Var10 = { func_1419() };
			func_1420(iVar2, &Var8, &Var10, 0);
			PLAYER::_0xD2CB0FB0FDCB473D(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_622(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		func_1421(uParam1->f_10);
		if (uParam1->f_2 && !func_241(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			PHYSICS::_0x0348469DAA17576C(iVar2);
			ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
			ENTITY::_0x9587913B9E772D29(iVar2, 0);
		}
		*uParam0 = 2;
		return iVar2;
	}
	func_620(uParam1->f_10);
	if (func_622(uParam1->f_10))
	{
		iVar16 = func_621(uParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	*uParam0 = 2;
	return iVar2;
}

int func_1229(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;

	if (((PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar0, iParam6, iParam7) && (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iVar0))) && ENTITY::IS_ENTITY_A_PED(iVar0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == *uParam0)
	{
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), *uParam0, 3, 2, iParam1);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), *uParam0, 4, 2, iParam2);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), *uParam0, 7, 2, iParam3);
		return 1;
	}
	if (bParam4)
	{
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), *uParam0, 3, 2, 0);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), *uParam0, 4, 2, 0);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), *uParam0, 7, 2, 0);
	}
	return 0;
}

void func_1230()
{
	PLAYER::_0x93624B36E8851B42(PLAYER::GET_PLAYER_INDEX());
}

void func_1231(int iParam0, char* sParam1, var uParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_1171(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_1232(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1422())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_1171(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1423(iVar0);
			func_1424(iVar0, 0, 0);
		}
		func_1171(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_881(func_1169(1644987397), iVar1);
	}
}

int func_1233(var uParam0)
{
	if (-1829635046 == func_1425(81053684))
	{
		if (func_1235(uParam0))
		{
			return 1;
		}
	}
	else if (func_1426(-525676072, uParam0))
	{
		if (func_1235(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_1234()
{
	return Global_1946804->f_2792;
}

int func_1235(int iParam0)
{
	if (func_1426(81053684, iParam0))
	{
		return 1;
	}
	if (func_1426(-525676072, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_1236(int iParam0)
{
	if (func_1427())
	{
		return 0;
	}
	if (!func_1153(iParam0, 0))
	{
		return 0;
	}
	if (!func_1428(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return 0;
	}
	return 1;
}

int func_1237(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_1429(iParam0);
	if (func_1430(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_1233(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_1431();
			}
			else
			{
				iVar0 = func_1432();
			}
		}
		else if (func_501(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_1433();
		}
		else
		{
			iVar0 = func_1434();
		}
	}
	else if (func_1235(&iVar2))
	{
		if (func_1430(iVar2, -1303648999))
		{
			iVar0 = func_1431();
		}
		else
		{
			iVar0 = func_1432();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_1433();
	}
	else
	{
		iVar0 = func_1434();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_35, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

void func_1238(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = MISC::GET_GAME_TIMER();
	func_1435(iParam0, iParam1, bParam2);
}

int func_1239()
{
	return 0;
}

int func_1240(int iParam0, var uParam1)
{
	if (!func_1436(iParam0))
	{
		return 0;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return 0;
	}
	return 1;
}

void func_1241(char* sParam0, int iParam1, int iParam2)
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(sParam0, iParam1, iParam2);
}

void func_1242(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, float fParam10, float fParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
{
	struct<7> Var0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_1))
	{
		TASK::TASK_SCRIPTED_ANIMATION(iParam0, uParam2);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), iParam1, -1f);
		Var0.f_1 = 1050253722;
		Var0.f_2 = 1067030938;
		Var0.f_5 = -1082130432;
		Var0.f_6 = -1082130432;
		Var0.f_3 = iParam16;
		Var0.f_1 = iParam14;
		Var0.f_2 = iParam15;
		Var0.f_4 = iParam17;
		Var0.f_5 = iParam20;
		Var0.f_6 = iParam21;
		if (bParam8)
		{
			Var0 = 0;
		}
		else
		{
			Var0 = 1;
		}
		PLAYER::_0xCA59808E51FD67C4(PLAYER::PLAYER_ID(), &Var0);
	}
	else
	{
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam1, iParam4, iParam5, iParam6, fParam7, iParam9, fParam10, fParam11, iParam12, iParam13);
	}
	if (bParam19)
	{
		PED::_0x7DE9692C6F64CFE8(iParam0, false, 0, 0);
	}
	if (bParam22)
	{
		func_1437(iParam0, iParam1, iParam18);
	}
}

int func_1243(var uParam0)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_39))
	{
		return 1;
	}
	if (func_279(uParam0->f_40, 1, 1) < uParam0->f_42)
	{
		return 0;
	}
	if (func_213(Global_35, uParam0->f_39, 1, 0))
	{
		return 1;
	}
	if (!func_213(uParam0->f_40, uParam0->f_39, 1, 0))
	{
		return 0;
	}
	return 1;
}

void func_1244(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (bParam8)
	{
		PED::SET_PED_RESET_FLAG(iParam0, 229, true);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		if (bParam3 && PED::_0xD5FE956C70FF370B(iParam0))
		{
			PED::_0x7DE9692C6F64CFE8(iParam0, false, 0, 0);
		}
		func_1438(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(iParam0, 188, true);
		}
	}
}

int func_1245(int iParam0)
{
	if ((PED::IS_PED_INJURED(iParam0) || PED::IS_PED_FATALLY_INJURED(iParam0)) || ENTITY::GET_ENTITY_HEALTH(iParam0) < ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

char* func_1246()
{
	return "unnamed";
}

void func_1247(int iParam0, int iParam1)
{
	if (!func_934(iParam0))
	{
	}
	else
	{
		Global_20709.f_2246[iParam0] = (Global_20709.f_2246[iParam0] || iParam1);
	}
}

int func_1248(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 3:
			iVar0 = 20;
			break;
		case 4:
			iVar0 = 21;
			break;
		case 0:
			iVar0 = 25;
			break;
		case 6:
			iVar0 = 23;
			break;
		case 7:
			iVar0 = 26;
			break;
		case 2:
			iVar0 = 33;
			break;
		case 1:
			iVar0 = 30;
			break;
		case 8:
			iVar0 = 31;
			break;
		case 9:
			iVar0 = 37;
			break;
		case 10:
			iVar0 = 32;
			break;
		case 17:
			iVar0 = 35;
			break;
		case 5:
			iVar0 = 21;
			break;
		case 33:
			iVar0 = 27;
			break;
		case 18:
			iVar0 = 36;
			break;
		case 19:
			iVar0 = 36;
			break;
		case 22:
			iVar0 = 40;
			break;
		case 20:
			iVar0 = 43;
			break;
		case 15:
			iVar0 = 15;
			break;
		case 12:
			iVar0 = 41;
			break;
		case 13:
			iVar0 = 42;
			break;
		case 14:
			iVar0 = 42;
			break;
		case 21:
			iVar0 = 44;
			break;
		case 11:
			iVar0 = func_1439(Global_1914319->f_17378.f_1009);
			break;
	}
	return iVar0;
}

int func_1249(int iParam0, int iParam1, vector3 vParam2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 0)
	{
		return -1;
	}
	if (func_241(vParam2))
	{
		return -1;
	}
	iVar1 = -1;
	iVar2 = func_1440(vParam2);
	iVar0 = 0;
	while (iVar0 < Global_36307)
	{
		if (func_1441(iVar0) == 0 && iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		else if ((func_1441(iVar0) == iParam1 && func_1442(iVar0) == iParam0) && iVar2 == func_1443(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 250)
	{
		func_1444(iVar1, iParam0);
		func_1445(iVar1, iParam1);
		func_1446(iVar1, iVar2);
		func_1447(iVar1, iParam5);
		func_1448(iVar1);
		MAP::SET_BLIP_FLASH_TIMER(&(Global_36307[iVar1]), iParam1, 0);
		return iVar1;
	}
	return -1;
}

void func_1250(int iParam0)
{
	int iVar0;

	iVar0 = Global_1914319->f_17378.f_1010.f_201;
	if (iParam0 != 0)
	{
		if (iVar0 < 200)
		{
			Global_1914319->f_17378.f_1010[iVar0] = iParam0;
			iVar0++;
			Global_1914319->f_17378.f_1010.f_201 = iVar0;
		}
	}
}

int func_1251(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iParam1 == uParam0[iVar0 /*7*/])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1252(var uParam0, int iParam1, var uParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0[iVar0 /*7*/] == -1)
		{
			if (iParam1 == uParam0[iVar0 /*7*/])
			{
				((*uParam0)[iVar0 /*7*/])->f_6 = uParam2;
			}
		}
		iVar0++;
	}
}

int func_1253(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (((*uParam0)[iVar0 /*7*/])->f_1 == 0)
		{
			*iParam1 = iVar0;
			return 1;
		}
		iVar0++;
	}
	*iParam1 = -1;
	return 0;
}

int func_1254(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&uParam0->f_141[iVar0 /*7*/] != -1)
		{
			if (iParam1 == &uParam0->f_141[iVar0 /*7*/])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_1255(var uParam0, int iParam1, var uParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iParam1 == &uParam0->f_141[iVar0 /*7*/])
		{
			(uParam0->f_141[iVar0 /*7*/])->f_6 = uParam2;
		}
		iVar0++;
	}
}

int func_1256(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((uParam0->f_141[iVar0 /*7*/])->f_1 == 0)
		{
			*iParam1 = iVar0;
			return 1;
		}
		iVar0++;
	}
	*iParam1 = -1;
	return 0;
}

char* func_1257(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return func_1289(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		return func_1449(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		return func_1450(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	return "";
}

int func_1258(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && &uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1259(var uParam0, char* sParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && MISC::ARE_STRINGS_EQUAL(&((uParam0->f_13[iVar0 /*12*/])->f_1), sParam1))
		{
			return &(uParam0->f_13[iVar0 /*12*/]);
		}
		iVar0++;
	}
	return 0;
}

void func_1260(var uParam0, int iParam1)
{
	struct<12> Var0;
	int iVar12;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 11)
	{
		if (&uParam0->f_13[iVar12 /*12*/] == iParam1)
		{
			*(uParam0->f_13[iVar12 /*12*/]) = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_1261(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1262(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_1263(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

struct<8> func_1264()
{
	char cVar0[64];

	StringCopy(&cVar0, "NormalStart", 64);
	return cVar0;
}

void func_1265(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_158), sParam1, 64);
}

Vector3 func_1266(var uParam0)
{
	var uVar0;
	vector3 vVar8;
	var uVar11;
	vector3 vVar14;

	MemCopy(&uVar0, {func_1451(uParam0)}, 8);
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_157))
	{
		uParam0->f_157 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_152), 0, 0, false, true);
	}
	else if (ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_157, 0))
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_157, func_1289(Global_35), &vVar14, false, 0, 2))
		{
			vVar8 = { vVar14 };
		}
		else
		{
			ANIMSCENE::_0xADF1D53F3B1FE0A7(uParam0->f_157, &vVar8, &uVar11, 2);
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_157);
		return vVar8;
	}
	return 0f, 0f, 0f;
}

void func_1267(var uParam0, vector3 vParam1)
{
	if (func_241(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
}

float func_1268(var uParam0)
{
	return uParam0->f_147;
}

void func_1269()
{
	struct<4> Var0;

	Global_1946804->f_858 = (Global_1946804->f_858 - 1);
	if (Global_1946804->f_858 <= 0)
	{
		Var0 = 35;
		func_1452(Var0);
	}
}

void func_1270(var uParam0)
{
	int iVar0;

	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_156))
	{
		return;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_156, 1, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_174[iVar0 /*9*/]) && (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, uParam0->f_174[iVar0 /*9*/]) || ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_156, uParam0->f_174[iVar0 /*9*/])))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_156, uParam0->f_174[iVar0 /*9*/]);
		}
		(uParam0->f_174[iVar0 /*9*/])->f_8 = 0;
		iVar0++;
	}
}

void func_1271(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4))
	{
		if (func_1095(uParam0, 16))
		{
			POPULATION::_0xA1CFB35069D23C23(uParam0->f_4);
			POPULATION::_0x74C2B3DC0B294102(uParam0->f_4);
			func_1453(uParam0);
			PATHFIND::_0xD17672447692478E(uParam0->f_4, 0);
		}
	}
	if (func_1095(uParam0, 8))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_4);
		func_1092(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_1092(uParam0, 16, 1);
}

float func_1272(var uParam0)
{
	return uParam0->f_146;
}

struct<8> func_1273(var uParam0)
{
	return uParam0->f_158;
}

void func_1274(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_1095(uParam0, 16))
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4) && !func_1136(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_1246());
		func_1093(uParam0, 8);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4))
	{
		POPULATION::_0xB56D41A694E42E86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_1454(uParam0, uParam0->f_4, 0, 1);
		PATHFIND::_0xC1799FAFD2FDF52B(uParam0->f_4, 0, 0, iParam2);
		func_1093(uParam0, 16);
	}
}

bool func_1275()
{
	return Global_1946804->f_1497 != Global_1946804->f_2163.f_1;
}

void func_1276(int iParam0)
{
	struct<4> Var0;

	if (func_1455(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1452(Var0);
}

struct<8> func_1277(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_1456(uParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { func_1457() };
	}
	return Var0;
}

int func_1278(var uParam0)
{
	if (!func_1458(*uParam0, uParam0->f_4))
	{
		return 0;
	}
	return 1;
}

int func_1279(var uParam0)
{
	if (!func_1278(uParam0))
	{
		return 0;
	}
	if (func_1459(uParam0->f_7, uParam0->f_8, func_1085(&(uParam0->f_3), 4)))
	{
		return 1;
	}
	if (!func_1085(&(uParam0->f_3), 4))
	{
		if (func_1460())
		{
			return 1;
		}
	}
	return 0;
}

int func_1280(int iParam0, float fParam1, float fParam2, bool bParam3, var uParam4, float fParam5)
{
	if (uParam4 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 1;
	}
	if (!bParam3)
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			return 1;
		}
	}
	if (func_1461(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, 1, fParam5))
	{
		return 1;
	}
	return 0;
}

bool func_1281(float fParam0, float fParam1)
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return ENTITY::GET_ENTITY_SPEED(Global_35) < fParam0;
	}
	return ENTITY::GET_ENTITY_SPEED(Global_35) < fParam1;
}

int func_1282(vector3 vParam0, var uParam3)
{
	if (!func_1085(&(uParam3->f_3), 8))
	{
		return 1;
	}
	if (func_982(vParam0, 0.06f, 0.94f, 0.1f, 0.8f))
	{
		return 1;
	}
	return 0;
}

bool func_1283(vector3 vParam0, var uParam3)
{
	float fVar0;

	fVar0 = func_1284(vParam0, 1);
	return fVar0 < uParam3->f_6;
}

float func_1284(vector3 vParam0, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { func_1462(0) };
	vVar3 = { func_1019(vParam0 - CAM::GET_GAMEPLAY_CAM_COORD()) };
	if (bParam3)
	{
		return MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar3.x, vVar3.y, vVar0.x, vVar0.y));
	}
	return MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar3.x, vVar3.y, vVar0.x, vVar0.y);
}

int func_1285(var uParam0, int iParam1, char* sParam2, int iParam3, var uParam4, var uParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (uParam4 && ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_1257(iParam1);
	}
	if (iParam3 == 0)
	{
		iParam3 = ENTITY::GET_ENTITY_MODEL(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
	}
	if (!func_1112(uParam0, iParam1, 4))
	{
		if (ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_156, sParam2))
		{
			func_1463(uParam0, iParam1, 4);
			return 1;
		}
		else if (uParam5 && ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_156, sParam2))
		{
			func_1463(uParam0, iParam1, 4);
			return 1;
		}
	}
	return 0;
}

struct<8> func_1286(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	char cVar10[64];
	struct<8> Var18;

	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (iVar0 >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(sParam0, (iVar0 - iParam3), iVar0), 64);
	}
	else
	{
		StringCopy(&cVar2, sParam0, 64);
	}
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar2);
	if (iVar1 >= iParam3)
	{
		StringCopy(&cVar10, HUD::_0x806862E5D266CF38(sParam1, (iVar1 - iParam3), iVar1), 64);
	}
	else
	{
		StringCopy(&cVar10, sParam1, 64);
	}
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar10);
	if (bParam2)
	{
		if ((iVar0 + iVar1) >= iParam3)
		{
			StringCopy(&cVar10, HUD::_0x806862E5D266CF38(&cVar10, iVar0, iVar1), 64);
		}
	}
	else if ((iVar0 + iVar1) >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(&cVar2, iVar1, iVar0), 64);
	}
	Var18 = { cVar2 };
	StringConCat(&Var18, &cVar10, 64);
	return Var18;
}

bool func_1287(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1288()
{
	if (func_301(Global_43800))
	{
		func_302(&Global_43800, 0, 0);
	}
}

char* func_1289(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_35)
	{
		if (ENTITY::GET_ENTITY_MODEL(Global_35) == 11966224)
		{
			return "John";
		}
		else
		{
			return "Arthur";
		}
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_1464(iVar0);
}

int func_1290(int iParam0)
{
	int iVar0;

	if (func_1223(iParam0))
	{
		iVar0 = _NAMESPACE71::_0x59FA676177DBE4C9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return 0;
}

int func_1291(int iParam0, bool bParam1)
{
	if (!func_301(Global_43800))
	{
		Global_43800 = func_1118("CUTSCENE_SKIP", -842734359, 5, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, -2018976333, 0);
		((*Global_1945938)[Global_43800 /*18*/])->f_16 = &Global_23[3];
		func_834(Global_43800, 0, 1);
		func_1121(Global_43800, 6, 1);
		if (bParam1)
		{
			func_1121(Global_43800, 14, 1);
		}
	}
	else
	{
		if (!func_1022(Global_43800, 0))
		{
			func_828(Global_43800, 1, 1);
		}
		if (func_1131(Global_43800, 1) != 0f && iParam0)
		{
			func_834(Global_43800, 1, 1);
		}
		else
		{
			func_834(Global_43800, 0, 1);
		}
		return func_753(Global_43800, 1);
	}
	return 0;
}

bool func_1292(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1293(var uParam0, char* sParam1)
{
	int iVar0;
	struct<8> Var1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_156))
	{
		return;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_156, 1, 0))
	{
		return;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_174[iVar0 /*9*/]) && MISC::ARE_STRINGS_EQUAL(sParam1, uParam0->f_174[iVar0 /*9*/]))
		{
			Var1 = { uParam0->f_158 };
			*(uParam0->f_174[iVar0 /*9*/]) = { Var1 };
		}
		iVar0++;
	}
	func_1265(uParam0, sParam1);
	func_1092(uParam0, 2097152, 1);
	func_1093(uParam0, 33554432);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_156, sParam1, true);
}

void func_1294(var uParam0, var uParam1)
{
	if (((!func_1095(uParam0, 32) || func_1465(uParam0)) || func_1095(uParam0, 268435456)) && !func_1095(uParam0, 65536))
	{
		func_1081(&(uParam0->f_212), 256);
	}
}

void func_1295(var uParam0, int iParam1)
{
	var uVar0;

	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 9, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 9, iParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 7, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 7, iParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 8, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 8, iParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 10, false))
	{
		WEAPON::_0x67E21ACC5C0C970C(Global_35, 10, iParam1);
	}
}

bool func_1296()
{
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(130487986) > 0;
}

void func_1297()
{
	int iVar0;

	SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
	iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	while (SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		if (SCRIPTS::_GET_HASH_OF_THREAD(iVar0) == 130487986)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 265, true);
			}
			PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iVar0, 1);
			return;
		}
		iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	}
}

int func_1298()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-92416669) > 0)
	{
		return 1;
	}
	return 0;
}

void func_1299(int iParam0)
{
	if (func_1298())
	{
		Global_1357509 = 1;
	}
	if (func_1466(-92416669))
	{
	}
	if (iParam0 && Global_1935630->f_44 == joaat("weapon_kit_camera"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		Global_1935630->f_44 = joaat("weapon_unarmed");
	}
}

void func_1300(var uParam0, char[16] cParam1)
{
	uParam0->f_152 = { cParam1 };
}

void func_1301(var uParam0)
{
	int iVar0;
	struct<8> Var1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_174[iVar0 /*9*/]))
		{
			func_1467(uParam0, uParam0->f_174[iVar0 /*9*/]);
		}
		iVar0++;
	}
	Var1 = { func_1264() };
	func_1467(uParam0, &Var1);
	Var1 = { func_1277(uParam0) };
	func_1467(uParam0, &Var1);
}

void func_1302(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_13[iVar0 /*12*/])) || func_1314(uParam0->f_13[iVar0 /*12*/], 2))
		{
			if (func_1314(uParam0->f_13[iVar0 /*12*/], 1) || ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_156, &((uParam0->f_13[iVar0 /*12*/])->f_1)))
			{
				func_1468(uParam0, &((uParam0->f_13[iVar0 /*12*/])->f_1), &(uParam0->f_13[iVar0 /*12*/]), (uParam0->f_13[iVar0 /*12*/])->f_9);
				if (iParam1 && ENTITY::IS_ENTITY_A_PED(&(uParam0->f_13[iVar0 /*12*/])))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_13[iVar0 /*12*/]));
					if (iVar1 != Global_35 && !func_1314(uParam0->f_13[iVar0 /*12*/], 16))
					{
						func_1469(iVar1);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1303(var uParam0)
{
	int iVar0;

	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_156))
	{
		return;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_156, 1, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_13[iVar0 /*12*/])) || func_1314(uParam0->f_13[iVar0 /*12*/], 2))
		{
			if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_156, &((uParam0->f_13[iVar0 /*12*/])->f_1)))
			{
				func_1262(uParam0->f_13[iVar0 /*12*/], 1);
			}
		}
		iVar0++;
	}
}

bool func_1304()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

Vector3 func_1305(var uParam0)
{
	return uParam0->f_214;
}

void func_1306(var uParam0)
{
	int iVar0;

	if (func_1233(&iVar0))
	{
		if (func_1153(iVar0, 0))
		{
			if (func_944(iVar0) == -525676072)
			{
				PED::_0xD710A5007C2AC539(Global_35, 1249071452, 0);
				func_1323(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				PED::_0xD710A5007C2AC539(Global_35, 1606587013, 0);
			}
			if (!func_1153(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_1307(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;

	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_1470(0, 0);
		func_1471(-1);
	}
	func_1106(1);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	if (!func_1292(*uParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_1292(*uParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_1292(*uParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_1292(*uParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_1292(*uParam0, 32768))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, iParam1, 1);
	}
	if (!func_1292(*uParam0, 1))
	{
		PAD::_0xF239400E16C23E08(0, 0);
	}
	if (!func_1292(*uParam0, 65536))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!func_1292(*uParam0, 4) && !func_1292(*uParam0, 2))
	{
		HUD::_0x4CC5F2FC1332577F(-1679307491);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(-1679307491);
	}
	if (!func_1292(*uParam0, 2048))
	{
		func_1472(0, 0);
	}
	if (func_1292(*uParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
	}
	if (func_1292(*uParam0, 256))
	{
		WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 1);
	}
	if (func_1292(*uParam0, 8192))
	{
		func_1473();
	}
	if (!func_1292(*uParam0, 262144))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	}
	if (!func_1292(*uParam0, 512))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (!func_1292(*uParam0, 1024))
	{
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	}
	if (iParam2 != 2)
	{
		PED::SET_PED_STEALTH_MOVEMENT(Global_35, iParam2 == 1, 0, 0);
	}
	if (PED::IS_PED_ON_FOOT(Global_35))
	{
		if (bParam6)
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35, 0f);
			PED::SET_PED_DESIRED_HEADING(Global_35, ENTITY::GET_ENTITY_HEADING(Global_35));
			ENTITY::SET_ENTITY_VELOCITY(Global_35, 0f, 0f, 0f);
		}
		if (!func_1292(*uParam0, 16))
		{
			iVar0 = ITEMSET::CREATE_ITEMSET(true);
			bVar1 = false;
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
			{
				iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
				iVar7 = MISC::_0xEE04C0AFD4EFAF0E(iVar6);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (ENTITY::IS_ENTITY_AN_OBJECT(iVar7))
					{
						if (func_1474() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = uParam3;
					vVar3.f_1 = uParam4;
					vVar3.f_2 = uParam5;
					if (func_241(vVar3))
					{
						vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_861(&vVar3, 50, 10, 0);
					}
					PED::_0xED00D72F81CF7278(iVar7, 0, 1);
					ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_1402(2);
						func_1401(-1);
						func_1410(vVar3);
						func_1476(func_1475());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
					PED::_0x2208438012482A1A(Global_35, false, false);
				}
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
		}
	}
	if (bParam6 && PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar9 = PED::GET_MOUNT(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar9))
		{
			TASK::CLEAR_PED_TASKS(iVar9, 1, 0);
			TASK::TASK_STAND_STILL(iVar9, -1);
		}
	}
	if (!func_1292(*uParam0, 4096))
	{
		func_1469(Global_35);
	}
	if (!func_1292(*uParam0, 1048576))
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(7, 1, 0);
	}
	if (!func_1292(*uParam0, 2097152))
	{
		if (func_1477() || PED::_0x50F124E6EF188B22(Global_35))
		{
			func_1478(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*uParam0 = 0;
}

void func_1308(var uParam0, vector3 vParam1)
{
	uParam0->f_214 = { vParam1 };
}

void func_1309(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_1095(uParam0, 2048) && !func_241(func_1479(uParam0)))
	{
		bVar0 = VOLUME::_0x92A78D0BEDB332A3(uParam0->f_4);
		iVar1 = PED::_0x4C8B59171957BCF7(Global_35);
		if ((!ENTITY::IS_ENTITY_DEAD(iVar1) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar1, uParam0->f_4, true, 0)) || func_1095(uParam0, -2147483648))) && PED::GET_MOUNT(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (TASK::IS_PED_IN_WRITHE(iVar1))
			{
				iVar2 |= 32;
			}
			func_262(iVar1, func_1479(uParam0), func_1480(uParam0), iVar2, 1073741824);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || func_1095(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_262(iVar3, func_1479(uParam0), func_1480(uParam0), 2, 1073741824);
		}
	}
}

void func_1310(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	if ((func_1095(uParam0, 268435456) && !func_241(func_1479(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { func_1479(uParam0) };
			func_262(iVar0, vVar1, func_1481(vVar1, Global_36, 1), 2, 1073741824);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1311(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(&(uParam0->f_13[iVar0 /*12*/])) && ENTITY::IS_ENTITY_A_PED(&(uParam0->f_13[iVar0 /*12*/]))) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_13[iVar0 /*12*/])) != Global_35)
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_13[iVar0 /*12*/]));
			if (PED::IS_PED_HUMAN(iVar1))
			{
				if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_156, &((uParam0->f_13[iVar0 /*12*/])->f_1)))
				{
					if (!func_1314(uParam0->f_13[iVar0 /*12*/], 8))
					{
						if (func_343(func_349(iVar1, 0, 1, 0)))
						{
							if (!func_1482(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 0)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("weapon_unarmed"), true, 0, false, false);
							}
						}
						if (func_343(func_349(iVar1, 1, 1, 0)))
						{
							if (!func_1482(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 1)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("weapon_unarmed"), true, 1, false, false);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1312(var uParam0, bool bParam1)
{
	WEAPON::_0x67E21ACC5C0C970C(Global_35, 3, bParam1);
	if (!bParam1)
	{
		if (!Global_17)
		{
			PED::_0xD710A5007C2AC539(Global_35, -1229581779, 0);
			Global_17 = !bParam1;
		}
	}
}

void func_1313(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	bVar4 = func_1() != -1;
	Global_1946804->f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		PED::_0x0BFA1BD465CDFEFD(iParam1);
		if (!bVar4)
		{
			if (Global_1347477->f_189 != 0)
			{
				PED::_0x1902C4CFCC5BE57C(iParam1, Global_1347477->f_189);
			}
			if ((Global_1946804->f_1 == -2125499975 || Global_1946804->f_1 == -449205311) && Global_1347477->f_190 != 0)
			{
				PED::_0x1902C4CFCC5BE57C(iParam1, Global_1347477->f_190);
			}
			func_1483(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1484(iParam1, 29, bVar4, 1, 0);
			func_1484(iParam1, 31, bVar4, 1, 0);
			func_1484(iParam1, 30, bVar4, 1, 0);
			func_1484(iParam1, 22, bVar4, 1, 0);
			func_1484(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_1485(32768) && func_1486(1108822547, 8)) && func_1487(10, iParam3))
	{
		func_1488(iParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = &Global_1946804->f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = func_1489(iVar1, 1);
			if (func_1486(iVar3, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar1 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1 /*3*/];
				if (!func_1487(iVar1, iParam3))
				{
				}
				else if ((func_1486(iVar3, 6) || &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/]) || (uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
				{
					if (!func_1486(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1484(iParam1, iVar1, bVar4, 1, 0);
						}
						if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 289238755)
						{
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = 289238755;
						}
						func_1490(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && &uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_2456[iVar1 /*2*/]) && (uParam0->f_1[iVar1 /*3*/])->f_1 == (Global_1946804->f_2456[iVar1 /*2*/])->f_1)
						{
						}
						else
						{
							if ((Global_1946804->f_57[iVar1 /*11*/])->f_1 > 1)
							{
								func_1484(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1 /*3*/]));
							}
							Global_1946804->f_2456[iVar1 /*2*/] = &uParam0->f_1[iVar1 /*3*/];
							(Global_1946804->f_2456[iVar1 /*2*/])->f_1 = (uParam0->f_1[iVar1 /*3*/])->f_1;
							if (func_1486(iVar3, 1))
							{
								func_1491(iVar3, 1, 6);
							}
							Global_1946804->f_857++;
							PED::_SET_PED_COMPONENT_ENABLED(iParam1, iVar2, false, bVar4, false);
							if ((uParam0->f_1[iVar1 /*3*/])->f_1 != 0)
							{
								PED::_0x66B957AAC2EAAEAB(iParam1, iVar2, (uParam0->f_1[iVar1 /*3*/])->f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804->f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							PED::_0xAAB86462966168CE(iParam1, bVar4);
							PED::_0xCC8CA3E88256E58F(iParam1, 0, 1, 1, 1, iParam5);
						}
					}
				}
			}
		}
	}

bool func_1314(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

void func_1315(var uParam0)
{
	StringCopy(&(uParam0->f_152), "", 32);
	func_1492(uParam0);
	func_1267(uParam0, 0f, 0f, 0f);
	func_1493(uParam0);
}

void func_1316(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		(uParam0->f_13[iVar0 /*12*/])->f_11 = 0;
		iVar0++;
	}
}

void func_1317(var uParam0)
{
	uParam0->f_8 = 0;
}

void func_1318(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_1263(uParam0->f_13[iVar0 /*12*/], iParam1);
		iVar0++;
	}
}

void func_1319(bool bParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(Global_43799))
	{
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(Global_43799))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Global_43799);
		}
	}
	Global_43799 = -1;
	StringCopy(&Global_43801, "", 24);
	Global_16 = 0;
	if (bParam0)
	{
		func_1288();
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
}

void func_1320(int iParam0)
{
	func_1494();
	Global_1911774->f_1 = MISC::GET_GAME_TIMER();
	Global_1911774->f_2 = iParam0;
}

void func_1321()
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
}

void func_1322(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_1495(bParam0);
}

int func_1323(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_867(iParam1, 1, 0) };
		iParam3 = func_1496(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1498(iParam1, iParam2, func_1497(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1499(1, (func_1() == -1 && iParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (iParam8 && iParam1 != &Global_1946804->f_57[func_1497(iParam3, 1) /*11*/])
			{
				func_1500(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1485(32768) && iParam1 != &Global_1946804->f_57[func_1497(iParam3, 1) /*11*/])
			{
				func_1501();
				func_1500(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_1500(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1502(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_1500(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1276(0);
			func_1503(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_1500(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_1324(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_867(iParam0, 0, 0) };
	Var5 = { func_871(iParam0, Var0, Var0.f_4, 0) };
	if (func_1151(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_943(0), &Var5, iParam1);
}

int func_1325(char* sParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_943(bParam4), sParam0, iParam3, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_1326(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return 0;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return 0;
	}
	return 1;
}

int func_1327(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_1328(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_1504(iVar0, &uVar2, &uVar3, &iVar1, &uVar4);
	if (func_1505(&uVar5, iVar0, iVar1, uVar2))
	{
	}
	return uVar5;
}

int func_1329(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::_0x31FEF6A20F00B963(iParam0);
	if (iVar0 == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			iVar0 = func_1506(iVar1);
		}
	}
	return iVar0;
}

int func_1330(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = Global_1914319->f_17378.f_1010.f_201;
	if (iParam0 != 0)
	{
		if (iVar1 < 200)
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (&Global_1914319->f_17378.f_1010[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_1331(int iParam0, int iParam1)
{
	if (func_1() == -1)
	{
		if (iParam1 == 61)
		{
			if (func_1430(iParam0, 1490540191))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1332(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar5;
	int iVar6;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar5 = func_937(iParam1);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_1240(6, &Var0))
	{
		return 0;
	}
	Var0.f_2 = -815325344;
	Var0.f_3 = func_1507(iVar5);
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		iVar6 = iParam0;
		Var0.f_2 = 549615901;
		Var0.f_3 = iVar6;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			return 1;
		}
	}
	return 0;
}

void func_1333(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	PED::_0x6569F31A01B4C097(iVar0, 7, 1);
}

Vector3 func_1334(vector3 vParam0, float fParam3)
{
	float fVar0;

	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

bool func_1335(int iParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

int func_1336(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return 0;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_1337(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_1335(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_1338(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

float func_1339(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

struct<4> func_1340()
{
	struct<4> Var0;

	return Var0;
}

int func_1341(int iParam0, bool bParam1)
{
	if (func_1155(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_943(bParam1), iParam0, 0);
}

int func_1342(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_1343(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

int func_1344(int iParam0)
{
	if (!func_138(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 0:
			return 5 + 1;
		case 1:
			return 5 + 1;
		case 2:
			return 4 + 1;
		case 3:
			return 2 + 1;
	}
	return -1;
}

var func_1345()
{
	return Global_40.f_11095.f_35;
}

void func_1346(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_1508(bParam1);
	}
}

void func_1347(int iParam0)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-156028329, iParam0);
}

char* func_1348(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

int func_1349(var uParam0)
{
	vector3 vVar0;

	if (!func_1240(23, &vVar0))
	{
		return 0;
	}
	vVar0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*uParam0 = DATAFILE::_DATAFILE_GET_NUM_NODES(&vVar0);
		return 1;
	}
	return 0;
}

int func_1350(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1240(23, &Var0))
	{
		return 0;
	}
	Var0.f_2 = 1781729525;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -57097983;
		Var0.f_3 = iParam0;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2027336698;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*uParam1 = uVar5;
			Var0.f_2 = 316053773;
			DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
			*uParam2 = uVar5;
			return 1;
		}
	}
	return 0;
}

int func_1351(int iParam0)
{
	return iParam0;
}

int func_1352()
{
	int iVar0;

	iVar0 = func_1161();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return -608161198;
		case 240:
		case 280:
		case 320:
			return -2132502231;
		default:
			break;
	}
	return -1130204298;
}

void func_1353(char* sParam0, char* sParam1, int iParam2)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_1354(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return 0;
	}
	return 1;
}

int func_1355(int iParam0, var uParam1, var uParam2)
{
	if (!func_1354(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		case 1:
			*uParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		case 2:
			*uParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		case 3:
			*uParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		case 4:
			*uParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		case 5:
			*uParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		case 6:
			*uParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		case 7:
			*uParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		case 8:
			*uParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		case 9:
			*uParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		case 10:
			*uParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		case 11:
			*uParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		case 12:
			*uParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		case 13:
			*uParam1 = -816321659;
			*uParam2 = -1825640214;
			break;
		case 14:
			*uParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		case 15:
			*uParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		case 16:
			*uParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_1356()
{
	switch (Global_1935630->f_44)
	{
		case joaat("weapon_melee_lantern"):
		case joaat("weapon_kit_binoculars"):
		case joaat("weapon_melee_lantern_electric"):
		case joaat("weapon_melee_davy_lantern"):
			return 1;
		default:
			break;
	}
	return 0;
}

void func_1357(var uParam0)
{
	Global_1914319->f_15923 = uParam0;
}

bool func_1358(int iParam0)
{
	return iParam0 != 0;
}

bool func_1359()
{
	return (Global_1914319->f_17369 || Global_1914319->f_18996.f_1);
}

bool func_1360(int iParam0, int iParam1)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (((*Global_1900383)[iParam0 /*45*/])->f_24 && iParam1) != 0;
}

void func_1361(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_0x9CB1A1623062F402(*uParam0, func_1510(func_1509(255), 109029619));
	}
	else if (func_1511())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_1163();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1362(int iParam0)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_372;
}

void func_1363(var uParam0, bool bParam1)
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_0x9CB1A1623062F402(*uParam0, func_1510(func_1509(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_1511())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_1163())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

int func_1364(int iParam0)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return ((*Global_1900383)[iParam0 /*45*/])->f_37;
}

float func_1365(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_1366(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	var uVar12;

	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1411(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1362(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1362(iParam0) + 1;
	fVar6 = func_1512(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	uVar12 = func_1339(fVar3, fVar4, fVar11);
	return uVar12;
}

void func_1367(int iParam0)
{
	MAP::_0xB059D7BD3D78C16F(iParam0, -401963276);
	MAP::_0xB059D7BD3D78C16F(iParam0, 231194138);
	MAP::_0xB059D7BD3D78C16F(iParam0, -1012863186);
	MAP::_0xB059D7BD3D78C16F(iParam0, -272772079);
	MAP::_0xB059D7BD3D78C16F(iParam0, 1313031610);
	MAP::_0xB059D7BD3D78C16F(iParam0, -1814032670);
	MAP::_0xB059D7BD3D78C16F(iParam0, -1380599892);
	MAP::_0xB059D7BD3D78C16F(iParam0, 430539302);
	MAP::_0xB059D7BD3D78C16F(iParam0, -995247980);
	MAP::_0xB059D7BD3D78C16F(iParam0, -25056193);
	MAP::_0xB059D7BD3D78C16F(iParam0, -264630352);
}

void func_1368(int iParam0)
{
	MAP::_0xB059D7BD3D78C16F(iParam0, 673950256);
	MAP::_0xB059D7BD3D78C16F(iParam0, 561559387);
	MAP::_0xB059D7BD3D78C16F(iParam0, -201249929);
}

int func_1369(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;

	if (uParam1->f_11 & 1 != 0)
	{
		if (PED::_0x9682F850056C9ADE(iParam0))
		{
			return 1;
		}
	}
	if (uParam1->f_11 & 2 != 0)
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 1;
		}
	}
	bVar0 = uParam1->f_11 & 4 != false;
	bVar1 = uParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, func_1513((bVar1 && !bVar0), Global_35, 0)))
		{
			return 1;
		}
	}
	return 0;
}

void func_1370(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_1383((*uParam0)[iVar0 /*17*/]))
		{
			func_978((*uParam0)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_1371(int iParam0, var uParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (uParam1->f_3 > -1 && uParam1->f_3 < *uParam2)
	{
		iVar0 = uParam1->f_3;
		((*uParam2)[iVar0 /*17*/])->f_8 = 6;
		func_1514(iParam0, (*uParam2)[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_301(((*uParam2)[iVar0 /*17*/])->f_6))
		{
			func_978((*uParam2)[iVar0 /*17*/], 11);
			return ((*Global_1945938)[((*uParam2)[iVar0 /*17*/])->f_6 /*18*/])->f_3;
		}
	}
	return 0;
}

int func_1372(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1515(*uParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337; /* GXTEntry: "Lemoyne Raider" */
			break;
		case 1:
			iVar1 = 768137552; /* GXTEntry: "Murfree Brood" */
			break;
		case 0:
			iVar1 = 1415388528; /* GXTEntry: "O\'Driscoll Boy" */
			break;
		case 4:
			iVar1 = 1449436544; /* GXTEntry: "Laramie" */
			break;
		case 3:
			iVar1 = -1807204482; /* GXTEntry: "Skinner Brother" */
			break;
		case 5:
			iVar1 = -1096701282; /* GXTEntry: "Del Lobo" */
			break;
	}
	return iVar1;
}

int func_1373(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (((*uParam0)[iVar0 /*17*/])->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1374(int* iParam0, int* iParam1)
{
	if (!func_809(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_978(iParam1, 19);
			func_1385(iParam0, 23);
			func_1516(iParam1, 2);
		}
	}
}

int func_1375(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_1517(16))
	{
		return Global_1935630->f_58 == iParam0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, bParam2, bParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					func_1518(16);
					Global_1935630->f_58 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					if (Global_1935630->f_58 == iParam0)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_1376(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_1514(iParam0, (*uParam1)[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, iParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT((*uParam1)[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_1377(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_1383(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_1514(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

int func_1378(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, var uParam13, float fParam14, bool bParam15, int iParam16)
{
	int iVar0;
	bool bVar1;

	iVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_1519(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, uParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_1022(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_828(iParam2->f_6, 0, 1);
				iVar0 = 0;
			}
		}
		else if (!bVar1)
		{
			func_828(iParam2->f_6, 1, 1);
			iVar0 = 0;
		}
		if (bParam8)
		{
			func_1520(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return iVar0;
}

int func_1379(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_753(iParam1, 1))
		{
			return 1;
		}
	}
	else if (func_1521(iParam1, 1))
	{
		func_1522(iParam1, 1);
		return 1;
	}
	return 0;
}

void func_1380(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_652((*uParam0)[iVar0 /*17*/], iParam1, bParam2);
		iVar0++;
	}
}

int func_1381(int* iParam0, float fParam1, var uParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (uParam2 || fParam1 > 0f)
		{
			return 1;
		}
	}
	return 0;
}

void func_1382(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 1101824977, true);
		PAD::DISABLE_CONTROL_ACTION(0, 966551065, true);
		PAD::DISABLE_CONTROL_ACTION(0, 668058244, true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

int func_1383(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_5))
	{
		return 1;
	}
	return 0;
}

int func_1384(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
			{
				case 1387172233:
					if (SCRIPTS::GET_EVENT_DATA(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (ENTITY::IS_ENTITY_A_PED(vVar3.z))
								{
									if (iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar3.z))
									{
										return 1;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_1385(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_1386(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_1387(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_1388(int iParam0)
{
	if (func_1() != -1)
	{
		if (func_1390(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_1390(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_1389(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_1390(iParam0, 65536) && !func_1390(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1390(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_1390(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_1390(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_1391()
{
	return Global_1905944->f_5694;
}

void func_1392(int iParam0, int iParam1)
{
	if (iParam1 >= 0)
	{
		iLocal_2527[iParam1] = iParam0;
	}
	else
	{
		iLocal_2527[iLocal_2543] = iParam0;
		iLocal_2543++;
	}
}

char* func_1393()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iVar0)
	{
		case 0:
		case default:
			return "Default_Shocked";
		case 1:
			return "Default_Scared";
			return "";
		}

int func_1394(float fParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;

	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < iLocal_2543)
	{
		if (fParam0[iVar0] > fVar2)
		{
			iVar1 = iVar0;
			fVar2 = fParam0[iVar0];
		}
		iVar0++;
	}
	return iVar1;
}

int func_1395(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_2543)
	{
		if (&iLocal_2527[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1396(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_GROUP_MEMBER(iParam0, func_542(), 1))
	{
		return 1;
	}
	return 0;
}

char* func_1397(char* sParam0)
{
	return sParam0;
}

int func_1398(int iParam0)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (func_1413(iParam0) == 0)
	{
		return 0;
	}
	return 1;
}

void func_1399(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1189(iParam0))
	{
		return;
	}
	iVar0 = func_1227(iParam0);
	func_1523(iParam0);
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (PED::_0xAA9F048DCF69B6DC(iVar1))
	{
		if (!func_1524(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&iVar0);
	func_1525(iParam0, 0);
	func_623(iParam0);
}

void func_1400(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;

	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	StringCopy(Global_40.f_1095.f_1[iParam0 /*436*/], "", 64);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_8 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_9 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_10 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_11 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_12 = -1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_13 = -15;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_14 = 0;
	func_1526(&Var0);
	func_1527(iParam0, Var0);
	func_1528(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_15));
	func_1529(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_298));
	func_1530(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_356));
	func_1531(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1532(iVar2, (Global_40.f_1095.f_1[iParam0 /*436*/])->f_398[iVar2 /*4*/]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1533(iVar3, (Global_40.f_1095.f_1[iParam0 /*436*/])->f_407[iVar3 /*4*/]);
		iVar3++;
	}
	func_1534(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_420));
	func_1535(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_422));
	func_1536(&((Global_40.f_1095.f_1[iParam0 /*436*/])->f_425));
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_427 = { 0f, 0f, 0f };
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_430 = 0f;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_431 = -1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_432 = -1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_433 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_434 = 0;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_435 = 0;
	(*Global_1900383)[iParam0 /*45*/] = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_1 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_2 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_3 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_19 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_22 = 0f;
	((*Global_1900383)[iParam0 /*45*/])->f_23 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_24 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_25 = 0;
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_26))
	{
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_26));
	}
	((*Global_1900383)[iParam0 /*45*/])->f_26 = 0;
	if (MAP::DOES_BLIP_EXIST(((*Global_1900383)[iParam0 /*45*/])->f_27))
	{
		MAP::REMOVE_BLIP(&(((*Global_1900383)[iParam0 /*45*/])->f_27));
	}
	((*Global_1900383)[iParam0 /*45*/])->f_27 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_28 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_31 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_34 = 0f;
	((*Global_1900383)[iParam0 /*45*/])->f_35 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_36 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_37 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_38 = { 0f, 0f, 0f };
	((*Global_1900383)[iParam0 /*45*/])->f_41 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_42 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_43 = 0;
	((*Global_1900383)[iParam0 /*45*/])->f_44 = -1;
}

void func_1401(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1402(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_1403(vector3 vParam0)
{
	return func_1537(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

int func_1404(int iParam0)
{
	int iVar0;

	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_1189(iParam0))
	{
		return 0;
	}
	iVar0 = func_1227(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_1405(int iParam0)
{
	int iVar0;

	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_1189(iParam0))
	{
		return 0;
	}
	iVar0 = func_1227(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_1406(int iParam0)
{
	int iVar0;

	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1189(iParam0))
	{
		return;
	}
	iVar0 = func_1227(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::_SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_1407(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	var uVar4;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	func_1191(iParam0);
	func_1191(iParam0);
	func_1538(iParam0, iParam1);
	func_1539(iParam0, iParam1);
	func_1540(iParam0, iParam1);
	iVar1 = func_1227(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1541(iVar1);
		}
		if (iParam0 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			uVar2 = PLAYER::_0x227B06324234FB09(iVar0, iVar1);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar1)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, 0);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == iVar1)
			{
				PLAYER::_0x227B06324234FB09(iVar0, 0);
			}
		}
	}
	iVar3 = func_1227(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1541(iVar3);
		}
		if (iParam1 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar3);
		}
		else if (iParam1 == 1)
		{
			uVar4 = PLAYER::_0x227B06324234FB09(iVar0, iVar3);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar3)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, 0);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == iVar3)
			{
				PLAYER::_0x227B06324234FB09(iVar0, 0);
			}
		}
	}
	func_951();
}

int func_1408()
{
	int iVar0;

	iVar0 = func_1474();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_1409()
{
	int iVar0;

	iVar0 = func_1474();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&iVar0);
	func_1542(0);
}

void func_1410(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_1411(int iParam0)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_9;
}

int func_1412(int iParam0)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_8;
}

int func_1413(int iParam0)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_14;
}

void func_1414(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;

	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1543(&uVar0, &uVar1, &uVar2);
	func_1544(iParam0, uVar0);
	func_1545(iParam0, uVar1);
	func_1546(iParam0, uVar2);
	func_1547(iParam0, 1);
	func_1548(iParam0, 1);
}

void func_1415(int iParam0)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1549(iParam0, 1);
}

void func_1416(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_19 = { vParam1 };
	((*Global_1900383)[iParam0 /*45*/])->f_22 = uParam4;
}

int func_1417(int iParam0)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return func_1360(iParam0, 1);
}

struct<2> func_1418(int iParam0)
{
	struct<2> Var0;
	var uVar2;
	var uVar3;

	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1550(iParam0, &uVar2))
	{
	}
	if (!func_1551(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1419()
{
	struct<6> Var0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_1552(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1552(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1552(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1552(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1552(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1552(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1420(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		return;
	}
	func_1553(iParam0);
	func_1554(iParam0, uParam1);
	func_1555(iParam0);
	func_1556(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1557(iParam0, iParam3, 0);
	}
	PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 1);
}

void func_1421(int iParam0)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_2 = 1;
	((*Global_1900383)[iParam0 /*45*/])->f_3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

int func_1422()
{
	if (func_1558())
	{
		return DLC::_0x1DB9D61E505AE3FC();
	}
	return 0;
}

void func_1423(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1559((Global_40.f_4283.f_325 + iParam0));
}

void func_1424(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1422())
	{
		func_1171(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_1171(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

int func_1425(int iParam0)
{
	int iVar0;

	iVar0 = func_1497(func_1560(iParam0), 1);
	if (iVar0 != 39)
	{
		return (Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1;
	}
	return 0;
}

int func_1426(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_1497(func_1560(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_944(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return 1;
		}
	}
	*uParam1 = 0;
	return 0;
}

int func_1427()
{
	if (Global_1946804->f_2793)
	{
		return 1;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1946804->f_2791)) < 1250)
	{
		return 1;
	}
	if (func_1561())
	{
		return 1;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35))
	{
		return 1;
	}
	return 0;
}

bool func_1428(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_1153(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_1145(iParam0);
	if (iVar0 == -427144552)
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == 307971639)
	{
		if (!func_1562(iParam0, 1))
		{
			return false;
		}
	}
	return func_1563(iParam0, 0, bParam2) >= iParam1;
}

int func_1429(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_1235(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1430(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_1431()
{
	int iVar0;

	iVar0 = 1549701178;
	switch (func_1564())
	{
		case 0:
			iVar0 = 1549701178;
			break;
		case 3:
			iVar0 = 949387044;
			break;
		case 1:
			iVar0 = -22529868;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_1432()
{
	int iVar0;

	iVar0 = 614608656;
	switch (func_1564())
	{
		case 0:
			iVar0 = 614608656;
			break;
		case 3:
			iVar0 = -1290316291;
			break;
		case 1:
			iVar0 = 1918034163;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_1433()
{
	int iVar0;

	iVar0 = -1832677570;
	switch (func_1564())
	{
		case 0:
			iVar0 = -1832677570;
			break;
		case 3:
			iVar0 = -362314920;
			break;
		case 1:
			iVar0 = -1336137422;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_1434()
{
	int iVar0;

	iVar0 = 1623252156;
	switch (func_1564())
	{
		case 0:
			iVar0 = 1623252156;
			break;
		case 3:
			iVar0 = -1469902924;
			break;
		case 1:
			iVar0 = 170763280;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_1435(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1327479->f_9)
	{
		return;
	}
	Global_1327479->f_4 = (Global_1327479->f_4 + iParam0 * 1000);
	if (bParam2)
	{
		Global_1310750->f_16106 = { Global_36 };
	}
	if (iParam1 == 0)
	{
		if (iParam0 > 0)
		{
			Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + ((Global_1327479->f_4 - MISC::GET_GAME_TIMER()) / 2));
		}
		else
		{
			Global_1327479->f_5 = (Global_1327479->f_5 + iParam0 * 500);
		}
	}
	else
	{
		Global_1327479->f_5 = (MISC::GET_GAME_TIMER() + iParam1 * 1000);
	}
}

bool func_1436(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

void func_1437(int iParam0, int iParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (iParam2 == -1)
	{
		if (!PED::IS_PED_A_PLAYER(iParam1))
		{
			iParam2 = 0;
		}
		else
		{
			iParam2 = 1;
		}
	}
	PED::_0xAAC0EE3B4999ABB5(iParam0, iParam1);
	PED::_0xF634E2892220EF34(iParam0, iParam2);
}

void func_1438(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -640622144, false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, -562475458, false);
	PAD::DISABLE_CONTROL_ACTION(0, -128997553, false);
	PAD::DISABLE_CONTROL_ACTION(0, 130948705, false);
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 1632043089, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1623727326, false);
		PAD::DISABLE_CONTROL_ACTION(0, -922478227, false);
	}
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1404316431, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1287709438, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1304887797, false);
	}
	if (bParam3)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1292666904, false);
		PAD::DISABLE_CONTROL_ACTION(0, 578288361, false);
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 440314811, false);
			PAD::DISABLE_CONTROL_ACTION(0, 2028806450, false);
			PAD::DISABLE_CONTROL_ACTION(0, 371916472, false);
		}
	}
	if (bParam4)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -620139643, false);
	}
	func_1014(0);
	if (bParam1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -822242784, false);
	}
	if (!PED::IS_PED_INJURED(Global_35))
	{
		if (bParam2)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
			PED::SET_PED_RESET_FLAG(Global_35, 189, true);
		}
		if (bParam6)
		{
			if (!PED::GET_PED_CONFIG_FLAG(Global_35, 43, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 43, true);
			}
		}
	}
}

int func_1439(int iParam0)
{
	switch (iParam0)
	{
		case 1243830185:
			return 3;
		case 595820042:
			return 1;
		case -1179229323:
			return 7;
		case -1650465405:
			return 2;
		case -1575595762:
			return 59;
		case 1974815632:
			return 4;
		case 1078668923:
			return 5;
		case -1581061148:
			return 8;
		case -48718882:
			return 9;
		case -379108622:
			return 10;
		case 1015604260:
			return 11;
		case 126262516:
			return 12;
		case -997121570:
			return 14;
		case 423351566:
			return 13;
		case -1636832113:
			return 16;
		case 1012165077:
			return 17;
		case -250506368:
			return 18;
		case 2033397166:
			return 19;
		case 249721687:
			return 22;
		case 1475879922:
			return 20;
		case 531267562:
			return 21;
		case -145868367:
			return 23;
		case -1989306548:
			return 24;
		case -1739686743:
			return 25;
		case 1195729388:
			return 26;
		case -758970771:
			return 28;
		case 1542275196:
			return 29;
		case 1861010125:
			return 33;
		case 1475382911:
			return 34;
		case 103490298:
			return 30;
		case -2090472724:
			return 31;
		case -1665418949:
			return 32;
		case -852241114:
			return 35;
		case -1406874050:
			return 36;
		case 1938782895:
			return 37;
		case -1456209806:
			return 38;
		case 469827317:
			return 39;
		case 1364029453:
			return 44;
		case -211556852:
			return 43;
		case 1879260108:
			return 27;
		case 587827268:
			return 40;
		case 819673798:
			return 41;
		case -73168905:
			return 45;
		case 1586273744:
			return 46;
		case -1498696713:
			return 47;
		case 503049244:
			return 49;
		case 305594522:
			return 50;
		case -417940443:
			return 51;
		case -1606321000:
			return 52;
		case 1904459580:
			return 53;
		case -1989725258:
			return 54;
		case -487631996:
			return 55;
		case -1944395098:
			return 56;
		case -428972082:
			return 57;
		case -1258576797:
			return 62;
		default:
			break;
	}
	return 0;
}

int func_1440(struct<2> Param0, var uParam2)
{
	int iVar0;

	iVar0 = (BUILTIN::ROUND(MISC::ABSF(Param0)) & 32767 || BUILTIN::SHIFT_LEFT(BUILTIN::ROUND(MISC::ABSF(Param0.f_1)) & 32767, 15));
	if (Param0 > 0f)
	{
		iVar0 |= 1073741824;
	}
	if (Param0.f_1 > 0f)
	{
		iVar0 |= -2147483648;
	}
	return iVar0;
}

int func_1441(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_7862[iParam0 /*4*/])->f_1;
	}
	return (Global_42605[iParam0 /*4*/])->f_1;
}

int func_1442(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_7862[iParam0 /*4*/]);
	}
	return &(Global_42605[iParam0 /*4*/]);
}

int func_1443(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_7862[iParam0 /*4*/])->f_2;
	}
	return (Global_42605[iParam0 /*4*/])->f_2;
}

void func_1444(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/] = iParam1;
		return;
	}
	Global_42605[iParam0 /*4*/] = iParam1;
	return;
}

void func_1445(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_40.f_7862[iParam0 /*4*/])->f_1 = iParam1;
		return;
	}
	(Global_42605[iParam0 /*4*/])->f_1 = iParam1;
	return;
}

void func_1446(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_40.f_7862[iParam0 /*4*/])->f_2 = iParam1;
		return;
	}
	(Global_42605[iParam0 /*4*/])->f_2 = iParam1;
	return;
}

void func_1447(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		(Global_40.f_7862[iParam0 /*4*/])->f_3 = uParam1;
		return;
	}
	(Global_42605[iParam0 /*4*/])->f_3 = uParam1;
	return;
}

void func_1448(int iParam0)
{
	vector3 vVar0;

	vVar0 = { func_1565(func_1443(iParam0)) };
	Global_36307[iParam0] = MAP::_0x554D9D53F696D002(func_1566(func_1441(iParam0)), vVar0);
	MAP::SET_BLIP_SPRITE(&(Global_36307[iParam0]), func_1567(func_1441(iParam0)), true);
	MAP::SET_BLIP_FLASH_TIMER(&(Global_36307[iParam0]), func_1441(iParam0), iParam0);
}

char* func_1449(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_1568(iVar0);
}

char* func_1450(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("canoe"):
			return "CANOE";
		case joaat("wagon02x"):
			return "WAGON02X";
		case joaat("wagon04x"):
			return "WAGON04X";
		case joaat("wagon05x"):
			return "WAGON05X";
		case joaat("chuckwagon000x"):
			return "CHUCKWAGON000X";
		case joaat("wagoncircus02x"):
			return "WAGONCIRCUS02X";
		case joaat("coach2"):
			return "COACH2";
		case joaat("privatecoalcar01x"):
			return "PRIVATECOALCAR01X";
		case joaat("northpassenger01x"):
			return "NORTHPASSENGER01X";
		case joaat("privatesteamer01x"):
			return "PRIVATESTEAMER01X";
		case joaat("privatedining01x"):
			return "PRIVATEDINING01X";
		case joaat("utilliwag"):
			return "UTILLIWAG";
		case joaat("skiff"):
			return "SKIFF";
		case joaat("handcart"):
			return "HANDCART";
		case joaat("rowboatswamp"):
			return "ROWBOATSWAMP";
		case joaat("rowboatswamp02"):
			return "ROWBOATSWAMP02";
	}
	return "";
}

struct<4> func_1451(var uParam0)
{
	return uParam0->f_152;
}

void func_1452(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_1569(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_1569(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1570(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_1483(8);
}

void func_1453(var uParam0)
{
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_9))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);
	}
}

void func_1454(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_9))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);
	}
	uParam0->f_4 = iParam1;
	iVar0 = 14;
	if (bParam3)
	{
		iVar0 |= 1;
	}
	uParam0->f_9 = PED::_0x4C39C95AE5DB1329(iParam1, iParam2, iVar0);
}

bool func_1455(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

struct<8> func_1456(var uParam0)
{
	return uParam0->f_166;
}

struct<8> func_1457()
{
	char cVar0[64];

	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

int func_1458(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!func_658(&uParam0))
	{
		return 0;
	}
	if (func_774(&uParam0) <= iParam3 + 500)
	{
		return 0;
	}
	return 1;
}

int func_1459(float fParam0, float fParam1, bool bParam2)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	func_1571(&uVar0, &uVar1, &iVar2, &iVar3, 529461124, 1410914475, -1497929239, 665185216, 2);
	if (!bParam2)
	{
		if (iVar2 != 0 || iVar3 != 0)
		{
			return 1;
		}
	}
	if (!func_1281(fParam0, fParam1))
	{
		return 1;
	}
	return 0;
}

int func_1460()
{
	if (((((((((((PAD::IS_CONTROL_PRESSED(0, -1879280170) || PAD::IS_CONTROL_PRESSED(0, 1537201378)) || PAD::IS_CONTROL_PRESSED(0, -1175108432)) || PAD::IS_CONTROL_PRESSED(0, 1520437207)) || PAD::IS_CONTROL_PRESSED(0, -1292666904)) || PAD::IS_CONTROL_PRESSED(0, -640622144)) || PAD::IS_CONTROL_PRESSED(0, -455946723)) || PAD::IS_CONTROL_PRESSED(0, -1242632265)) || PAD::IS_CONTROL_PRESSED(0, -485697785)) || PAD::IS_CONTROL_PRESSED(0, -822242784)) || PAD::IS_CONTROL_PRESSED(0, 782960533)) || PAD::IS_CONTROL_PRESSED(0, -874806616))
	{
		return 1;
	}
	return 0;
}

int func_1461(vector3 vParam0, float fParam3, float fParam4, int iParam5, float fParam6)
{
	float fVar0;

	fVar0 = func_430(Global_35, vParam0, 1);
	if (fVar0 < fParam4 && iParam5)
	{
		return 1;
	}
	if (fVar0 > (fParam3 + fParam6))
	{
		return 1;
	}
	return 0;
}

Vector3 func_1462(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;

	if (!CAM::DOES_CAM_EXIST(iParam0))
	{
		vVar0 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	else
	{
		vVar0 = { CAM::GET_CAM_ROT(iParam0, 2) };
	}
	fVar3 = BUILTIN::SIN(vVar0.z);
	fVar4 = BUILTIN::COS(vVar0.z);
	fVar5 = BUILTIN::SIN(vVar0.x);
	fVar6 = BUILTIN::COS(vVar0.x);
	return func_1019((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

void func_1463(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && &uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			func_1262(uParam0->f_13[iVar0 /*12*/], iParam2);
		}
		iVar0++;
	}
}

char* func_1464(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return "Arthur";
		case joaat("cs_abe"):
			return "Abe";
		case joaat("cs_edmundlowry"):
			return "EdmundLowry";
		case joaat("cs_aberdeenpigfarmer"):
			return "ABERDEENPIGFARMER";
		case joaat("cs_aberdeensister"):
			return "ABERDEENSISTER";
		case joaat("cs_abigailroberts"):
			return "AbigailRoberts";
		case joaat("cs_albertmason"):
			return "AlbertMason";
		case joaat("cs_archiedown"):
			return "ArchieDown";
		case joaat("cs_baptiste"):
			return "Baptiste";
		case joaat("cs_bartholomewbraithwaite"):
			return "BartholomewBraithwaite";
		case joaat("cs_beatenupcaptain"):
			return "CS_BEATENUPCAPTAIN";
		case joaat("cs_beaugray"):
			return "BeauGray";
		case joaat("cs_penelopebraithwaite"):
			return "PenelopeBraithwaite";
		case joaat("cs_billwilliamson"):
			return "BillWilliamson";
		case joaat("cs_braithwaiteservant"):
			return "BraithwaiteServant";
		case joaat("cs_catherinebraithwaite"):
			return "CatherineBraithwaite";
		case joaat("cs_charlessmith"):
			return "CharlesSmith";
		case joaat("cs_cigcardguy"):
			return "CS_CIGCARDGUY";
		case joaat("cs_dinoboneslady"):
			return "CS_DINOBONESLADY";
		case joaat("cs_cleet"):
			return "Cleet";
		case joaat("cs_colmodriscoll"):
			return "ColmODriscoll";
		case joaat("cs_creoleguy"):
			return "CreoleGuy";
		case joaat("cs_sddoctor_01"):
			return "SDDoctor_01";
		case joaat("cs_dalemaroney"):
			return "DaleMaroney";
		case joaat("cs_dutch"):
			return "Dutch";
		case joaat("cs_edithdown"):
			return "EdithDown";
		case joaat("cs_fussar"):
			return "Fussar";
		case joaat("cs_fishcollector"):
			return "cs_fishcollector";
		case joaat("cs_bronte"):
			return "Bronte";
		case joaat("cs_guidomartelli"):
			return "GuidoMartelli";
		case joaat("u_m_m_nbxbrontegoon_01"):
			return "U_M_M_NBXBRONTEGOON_01";
		case joaat("g_m_m_unibrontegoons_01"):
			return "G_M_M_UNIBRONTEGOONS_01";
		case joaat("cs_garethbraithwaite"):
			return "GarethBraithwaite";
		case joaat("cs_genstoryfemale"):
			return "GenStoryFemale";
		case joaat("cs_genstorymale"):
			return "GenStoryMale";
		case joaat("cs_leon"):
			return "Leon";
		case joaat("cs_geraldbraithwaite"):
			return "GeraldBraithwaite";
		case joaat("cs_hoseamatthews"):
			return "HoseaMatthews";
		case joaat("cs_jackmarston"):
			return "JackMarston";
		case joaat("cs_jackmarston_teen"):
			return "JackMarston_Teen";
		case joaat("cs_jamie"):
			return "Jamie";
		case joaat("cs_javierescuella"):
			return "JavierEscuella";
		case joaat("cs_jimcalloway"):
			return "JimCalloway";
		case joaat("cs_joe"):
			return "Joe";
		case joaat("cs_johnmarston"):
			return "JohnMarston";
		case joaat("cs_johnweathers"):
			return "CS_JOHNWEATHERS";
		case joaat("cs_josiahtrelawny"):
			return "JosiahTrelawny";
		case joaat("cs_karen"):
			return "Karen";
		case joaat("cs_mrsadler"):
			return "MrsAdler";
		case joaat("cs_kieran"):
			return "Kieran";
		case joaat("cs_leostrauss"):
			return "LeoStrauss";
		case joaat("cs_londonderryson"):
			return "LondonderrySon";
		case joaat("cs_marybeth"):
			return "MaryBeth";
		case joaat("cs_marylinton"):
			return "MaryLinton";
		case joaat("cs_micahbell"):
			return "MicahBell";
		case joaat("cs_mollyoshea"):
			return "MollyOshea";
		case joaat("cs_mrlinton"):
			return "CS_MrLinton";
		case joaat("cs_mrpearson"):
			return "MrPearson";
		case joaat("cs_mrslondonderry"):
			return "MrsLondonderry";
		case joaat("cs_mud2bigguy"):
			return "Mud2BigGuy";
		case joaat("cs_professorbell"):
			return "ProfessorBell";
		case joaat("cs_revswanson"):
			return "RevSwanson";
		case joaat("cs_samaritan"):
			return "CS_Samaritan";
		case joaat("cs_strdeputy_01"):
			return "StrDeputy_01";
		case joaat("cs_strdeputy_02"):
			return "StrDeputy_02";
		case joaat("cs_strsheriff_01"):
		case joaat("u_m_m_strsherriff_01"):
			return "StrSheriff_01";
		case joaat("cs_susangrimshaw"):
			return "SusanGrimshaw";
		case joaat("cs_tavishgray"):
			return "TavishGray";
		case joaat("cs_theodorelevin"):
			return "TheodoreLevin";
		case joaat("cs_thomasdown"):
			return "ThomasDown";
		case joaat("cs_tilly"):
			return "Tilly";
		case joaat("cs_uncle"):
			return "Uncle";
		case joaat("g_m_m_unicriminals_01"):
			return "G_M_M_UniCriminals_01";
		case joaat("g_m_m_uniduster_01"):
			return "G_M_M_UNIDUSTER_01";
		case joaat("cs_valsheriff"):
			return "CS_VALSHERIFF";
		case joaat("s_m_m_marshallsrural_01"):
			return "S_M_M_MARSHALLSRURAL_01";
		case joaat("u_m_o_vhtexoticshopkeeper_01"):
			return "U_M_O_VHTEXOTICSHOPKEEPER_01";
		case joaat("cs_sean"):
			return "Sean";
		case joaat("cs_lenny"):
			return "Lenny";
		case joaat("cs_hercule"):
			return "Hercule";
		case joaat("cs_creolecaptain"):
			return "CreoleCaptain";
		case joaat("u_m_m_creolecaptain_01"):
			return "U_M_M_CREOLECAPTAIN_01";
		case joaat("cs_ringmaster"):
			return "RingMaster";
		case joaat("u_m_m_valbartender_01"):
			return "U_M_M_VALBARTENDER_01";
		case joaat("a_m_m_emrfarmhand_01"):
			return "A_M_M_EMRFARMHAND_01";
		case joaat("a_m_m_grisurvivalist_01"):
			return "A_M_M_GriSurvivalist_01";
		case joaat("cs_lillymillet"):
			return "LillyMillet";
		case joaat("a_f_m_strtownfolk_01"):
			return "A_F_M_STRTOWNFOLK_01";
		case joaat("a_m_m_strtownfolk_01"):
			return "A_M_M_STRTOWNFOLK_01";
		case joaat("s_m_m_strlumberjack_01"):
			return "S_M_M_STRLUMBERJACK_01";
		case joaat("g_m_m_unicriminals_02"):
			return "G_M_M_UniCriminals_02";
		case joaat("g_m_m_unicornwallgoons_01"):
			return "G_M_M_UNICORNWALLGOONS_01";
		case joaat("a_m_m_nbxupperclass_01"):
			return "A_M_M_NBXUPPERCLASS_01";
		case joaat("a_f_m_nbxupperclass_01"):
			return "A_F_M_NBXUPPERCLASS_01";
		case joaat("a_m_m_valfarmer_01"):
			return "A_M_M_VALFARMER_01";
		case joaat("a_m_m_valtownfolk_01"):
			return "A_M_M_VALTOWNFOLK_01";
		case joaat("a_m_m_valtownfolk_02"):
			return "A_M_M_VALTOWNFOLK_02";
		case joaat("a_f_m_valtownfolk_01"):
			return "A_F_M_VALTOWNFOLK_01";
		case joaat("u_m_m_nbxbartender_01"):
			return "U_M_M_NBXBARTENDER_01";
		case joaat("cs_nbxexecuted"):
			return "NBXExecuted";
		case joaat("cs_rhodeputy_01"):
			return "RHODEPUTY_01";
		case joaat("u_m_m_rhdsheriff_01"):
			return "RHDSHERIFF_01";
		case joaat("cs_leighgray"):
			return "LeighGray";
		case -1038436471:
			return "Horse_01";
		case joaat("u_m_m_strgenstoreowner_01"):
			return "U_M_M_StrGenStoreOwner_01";
		case joaat("cs_tomdickens"):
			return "TomDickens";
		case joaat("cs_davidgeddes"):
			return "DavidGeddes";
		case joaat("cs_ansel_atherton"):
			return "ANSEL_ATHERTON";
		case joaat("cs_wrobel"):
			return "CS_Wrobel";
		case joaat("a_c_cow"):
			return "COW";
		case joaat("a_c_bull_01"):
			return "BULL";
		case joaat("cs_albertcakeesquire"):
			return "ALBERTCAKEESQUIRE";
		case joaat("u_m_o_blwgeneralstoreowner_01"):
			return "U_M_O_BLWGENERALSTOREOWNER_01";
		case joaat("a_c_dogcatahoulacur_01"):
			return "A_C_DOGCATAHOULACUR_01";
		case joaat("a_c_dogrufus_01"):
			return "A_C_DOGRUFUS_01";
		case joaat("a_c_doglion_01"):
			return "A_C_DOGLION_01";
		case joaat("cs_tigerhandler"):
			return "Handler";
		case joaat("cs_valauctionboss_01"):
			return "VALAUCTIONBOSS_01";
		case joaat("cs_nbxreceptionist_01"):
			return "NbxReceptionist_01";
		case joaat("u_m_m_bivforeman_01"):
			return "U_M_M_BiVForeman_01";
		case joaat("u_m_m_racforeman_01"):
			return "U_M_M_RACFOREMAN_01";
		case joaat("cs_chainprisoner_01"):
			return "CHAINPRISONER_01";
		case joaat("cs_chainprisoner_02"):
			return "CHAINPRISONER_02";
		case joaat("u_m_m_valpokerplayer_01"):
			return "U_M_M_ValPokerPlayer_01";
		case joaat("u_m_m_valpokerplayer_02"):
			return "U_M_M_ValPokerPlayer_02";
		case joaat("cs_duncangeddes"):
			return "DUNCANGEDDES";
		case joaat("cs_angusgeddes"):
			return "ANGUSGEDDES";
		case joaat("cs_evelynmiller"):
			return "EvelynMiller";
		case joaat("cs_sistercalderon"):
			return "SISTERCALDERON";
		case joaat("cs_edgarross"):
			return "EDGARROSS";
		case joaat("cs_wintonholmes"):
			return "U_M_M_GriSurvivalist_01";
		case joaat("u_f_m_rkshomesteadtenant_01"):
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case joaat("cs_rockyseven_widow"):
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case joaat("u_m_m_bht_strawberryduel"):
			return "U_M_M_BHT_STRAWBERRYDUEL";
		case joaat("u_m_m_rhdtrainstationworker_01"):
			return "StationWorker";
		case joaat("cs_levisimon"):
			return "LEVISIMON";
		case joaat("s_m_m_fussarhenchman_01"):
			return "S_M_M_GULFUSSARS_01";
		case joaat("a_c_donkey_01"):
			return "A_C_DONKEY_01";
		case joaat("a_m_m_guatownfolk_01"):
			return "S_M_M_ISPWORKER_01";
		case joaat("a_m_o_guatownfolk_01"):
			return "S_M_M_ISPWORKER_02";
		case joaat("u_m_o_valbartender_01"):
			return "U_M_O_ValBartender_01";
		case joaat("u_m_m_nbxbartender_02"):
			return "U_M_M_NBXBARTENDER_02";
		case joaat("cs_unidusterjail_01"):
			return "CS_UNIDUSTERJAIL_01";
		case joaat("a_m_m_rhdtownfolk_01"):
			return "A_M_M_RHDTOWNFOLK_01";
		case joaat("u_m_m_unibountyhunter_01"):
			return "U_M_M_UNIBOUNTYHUNTER_01";
		case joaat("u_m_m_unibountyhunter_02"):
			return "U_M_M_UNIBOUNTYHUNTER_02";
		case joaat("cs_brotherdorkins"):
			return "BrotherDorkins";
		case joaat("g_m_m_unibraithwaites_01"):
			return "G_M_M_UniBraithwaites_01";
		case joaat("a_m_m_gamhighsociety_01"):
			return "A_M_M_GAMHIGHSOCIETY_01";
		case joaat("u_m_m_strfreightstationowner_01"):
			return "U_M_M_STRFREIGHTSTATIONOWNER_01";
		case joaat("cs_eagleflies"):
			return "EagleFlies";
		case joaat("cs_rainsfall"):
			return "CS_RAINSFALL";
		case joaat("a_m_m_wapwarriors_01"):
			return "A_M_M_WapWarriors_01";
		case joaat("a_m_y_nbxstreetkids_01"):
			return "A_M_Y_NBXSTREETKIDS_01";
		case joaat("u_m_m_bht_shackescape"):
			return "U_M_M_BHT_SHACKESCAPE";
		case joaat("a_m_m_htlroughtravellers_01"):
			return "A_M_M_HTLROUGHTRAVELLERS_01";
		case joaat("cs_lemiuxassistant"):
			return "LemiuxAssistant";
		case joaat("p_keys01x"):
			return "p_keys01x";
		case joaat("cs_balloonoperator"):
			return "CS_BALLOONOPERATOR";
		case joaat("a_m_m_bivworker_01"):
			return "Worker1";
		case joaat("u_m_m_bht_mineforeman"):
			return "U_M_M_BHT_MINEFOREMAN";
		case joaat("a_m_m_nbxslums_01"):
			return "A_M_M_NbxSlums_01";
		case joaat("cs_sdpriest"):
			return "U_M_M_NBXPRIEST_01";
		case joaat("a_c_bear_01"):
			return "A_C_BEAR_01";
		case joaat("cs_marshall_thurwell"):
			return "MARSHALL_THURWELL";
		case joaat("cs_famousgunslinger_02"):
			return "CS_FAMOUSGUNSLINGER_02";
		case joaat("cs_sd_streetkid_01"):
			return "cs_sd_streetkid_01";
		case joaat("cs_sd_streetkid_02"):
			return "cs_sd_streetkid_02";
		case joaat("cs_obediahhinton"):
			return "ObediahHinton";
		case joaat("cs_poisonwellshaman"):
			return "PoisonWellShaman";
		case joaat("cs_cooper"):
			return "A_M_M_EMRFARMHAND_01";
		case joaat("u_m_m_bht_benedictallbright"):
			return "u_m_m_bht_benedictallbright";
		case joaat("cs_jules"):
			return "Jules";
		case joaat("cs_mrdevon"):
			return "MRDEVON";
		case joaat("cs_mrwayne"):
			return "MRWAYNE";
		case joaat("cs_paytah"):
			return "PAYTAH";
		case joaat("cs_valdeputy_01"):
			return "CS_VALDEPUTY_01";
		case 167491564:
			return "MES_SADIE5_MALES_01^1";
		case joaat("a_m_m_nbxdockworkers_01"):
			return "A_M_M_NBXDOCKWORKERS_01";
		case joaat("u_m_m_valsheriff_01"):
			return "U_M_M_VALSHERIFF_01";
		case joaat("s_m_m_bankclerk_01"):
			return "S_M_M_BANKCLERK_01";
		case joaat("u_m_m_nbxbronteasc_01"):
			return "U_M_M_NBXBRONTEASC_01";
		case joaat("p_c_horse_01"):
			return "P_C_HORSE_01";
	}
	return "";
}

bool func_1465(var uParam0)
{
	struct<8> Var0;
	struct<8> Var8;

	Var0 = { func_1273(uParam0) };
	Var8 = { func_1277(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(&Var0, &Var8);
}

int func_1466(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(((*Global_1934603)[iVar0 /*16*/])->f_10)))
		{
			func_1572(iVar0);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1467(var uParam0, char* sParam1)
{
	struct<8> Var0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	Var0 = { func_1273(uParam0) };
	if ((!MISC::ARE_STRINGS_EQUAL(&Var0, sParam1) && ANIMSCENE::_0xA9016536015DE29D(uParam0->f_156, sParam1)) && ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, sParam1))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_156, sParam1);
	}
}

void func_1468(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (iParam3 == 1)
	{
		if (ANIMSCENE::_0x9D1ECA9337BE9FC3(uParam0->f_156, sParam1))
		{
			iParam3 = 0;
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_156, sParam1, iParam2, iParam3);
}

void func_1469(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	PED::CLEAR_PED_BLOOD_DAMAGE(iParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		PED::_0x7F5D88333EE8A86F(iParam0, iVar0);
		iVar0++;
	}
}

void func_1470(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (50 * iParam0);
	iVar1 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(Global_35));
	if (iParam1 && iVar0 < 0)
	{
		ENTITY::_0x835F131E7DC8F97A(Global_35, BUILTIN::TO_FLOAT(iVar0), 0, 0);
	}
	else if (iParam0 <= 0 || iVar1 > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0))
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0), 0);
	}
	else
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, iVar1, 0);
	}
}

void func_1471(int iParam0)
{
	int iVar0;

	if (func_1() != -1)
	{
		return;
	}
	if (iParam0 == -1)
	{
		PED::_0x675680D089BFA21F(Global_35, 100f);
	}
	else
	{
		iVar0 = 8;
		PED::_0xC3D4B754C0E86B9E(Global_35, BUILTIN::TO_FLOAT((iParam0 * iVar0)));
	}
}

void func_1472(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_343(iVar3) && WEAPON::_0x705BE297EEBDB95D(iVar3))
			{
				if (bParam0)
				{
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3) < WEAPON::_0xD3750CCC00635FC2(iVar3) * 4)
					{
						WEAPON::_0x106A811C6D3035F3(Global_35, WEAPON::_0x5C2EA6C44F515F34(iVar3), (WEAPON::_0xD3750CCC00635FC2(iVar3) * 4 - WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(Global_35, iVar3))), 752097756);
					}
				}
				iVar0 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3);
				if (iVar0 > WEAPON::_0xD3750CCC00635FC2(iVar3))
				{
					iVar1 = WEAPON::_0xD3750CCC00635FC2(iVar3);
				}
				else
				{
					iVar1 = iVar0;
				}
				if (iVar1 > 0)
				{
					WEAPON::SET_AMMO_IN_CLIP(Global_35, iVar3, iVar1);
				}
				iVar1 = 0;
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	if (iParam1 && PLAYER::_0x21091B4BEB6376EE(PLAYER::GET_PLAYER_INDEX()) == 0)
	{
		func_1573(1);
	}
}

void func_1473()
{
	int iVar0;

	iVar0 = func_349(Global_35, 9, 1, 0);
	if (func_343(iVar0))
	{
		return;
	}
	iVar0 = func_349(Global_35, 7, 1, 0);
	if (func_343(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_349(Global_35, 0, 1, 0);
	if (func_343(iVar0) && WEAPON::_0x0556E9D2ECF39D01(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_349(Global_35, 1, 1, 0);
	if (func_343(iVar0) && WEAPON::_0x0556E9D2ECF39D01(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_349(Global_35, 18, 1, 0);
	if (func_343(iVar0) && WEAPON::_0x0556E9D2ECF39D01(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1574();
	if (func_343(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, 1))
		{
			func_268(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_1575(3072, 0);
	if (func_343(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, 1))
		{
			func_268(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_1474()
{
	return Global_1900383->f_393;
}

var func_1475()
{
	return &Global_1899515;
}

void func_1476(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

var func_1477()
{
	return (func_1576() || func_1577());
}

void func_1478(bool bParam0)
{
	if (bParam0)
	{
		Global_1935436->f_9 = 0f;
	}
	Global_1935436->f_8 = 0f;
	Global_1935436->f_12.f_1 = 0f;
	Global_1935436->f_12 = 0f;
	Global_1935436->f_12.f_3 = 0f;
	Global_1935436->f_12.f_2 = 0f;
	Global_1935436->f_12.f_4 = 0;
	PLAYER::_0x3C4AE8506638C7E2(PLAYER::GET_PLAYER_INDEX(), 1);
	PLAYER::_0x8F44EBB3BA8F6D44(PLAYER::GET_PLAYER_INDEX(), 0);
	PED::_0x06D26A96CA1BCA75(Global_35, 10, 0f, 0);
	AUDIO::SET_PED_IS_DRUNK(Global_35, false);
	PED::_0x406CCF555B04FAD3(Global_35, 0, 0f);
	func_1578(0f);
	Global_1935436->f_11 = 1;
	if (func_1511())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_1579();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

Vector3 func_1479(var uParam0)
{
	return uParam0->f_217;
}

float func_1480(var uParam0)
{
	return uParam0->f_220;
}

float func_1481(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_1482(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_13[iVar0 /*12*/])) && &uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1483(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1484(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_1489(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1580(iParam4);
		}
		else if (iParam4 != &Global_1946804->f_57[iParam1 /*11*/])
		{
			iVar1 = PED::_0x5FF9A878C3D115B8(iParam4, PED::_GET_METAPED_TYPE(iParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < (Global_1946804->f_57[iParam1 /*11*/])->f_1)
		{
			if (&(Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0] != iVar1)
			{
				PED::_0xDF631E4BCE1B1FC4(iParam0, &((Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0]), 0, bParam2);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < (Global_1946804->f_57[iParam1 /*11*/])->f_1)
		{
			if (&(Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0] != iVar1)
			{
				PED::_0xD710A5007C2AC539(iParam0, &((Global_1946804->f_57[iParam1 /*11*/])->f_2[iVar0]), 0);
			}
			iVar0++;
		}
	}
}

bool func_1485(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

bool func_1486(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_1497(iParam0, 1) /*11*/])->f_10 && iParam1) != 0;
}

bool func_1487(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[iParam0 /*11*/])->f_9 && iParam1) != 0;
}

void func_1488(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 10;
	if (func_1486(1108822547, 6))
	{
		if (bParam2)
		{
			func_1484(iParam0, iVar0, func_1() != -1, 0, 0);
			func_1490(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_0xBC6DF00D7A4A6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_1491(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, 0);
}

int func_1489(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		case 1:
			return -1130352927;
		case 2:
			return 389988485;
		case 3:
			return 1780904876;
		case 4:
			return 1367443060;
		case 5:
			return -1506259487;
		case 6:
			return -676503695;
		case 7:
			return 383349088;
		case 8:
			return -1292426046;
		case 9:
			return 1422688607;
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return -1176744536;
		case 25:
			return 673166414;
		case 26:
			return -207860920;
		case 27:
			return 99217379;
		case 28:
			return -735900586;
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_1490(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_1497(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_1497(iParam0, 1) /*11*/])->f_10 || iParam1);
}

void func_1491(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_1497(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_1497(iParam0, 1) /*11*/])->f_10 - ((Global_1946804->f_57[func_1497(iParam0, 1) /*11*/])->f_10 && iParam1));
}

void func_1492(var uParam0)
{
	struct<8> Var0;

	uParam0->f_166 = { Var0 };
}

void func_1493(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(uParam0->f_174[iVar0 /*9*/], "", 64);
		iVar0++;
	}
}

void func_1494()
{
	Global_1911774 = 1;
}

void func_1495(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

int func_1496(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_1489(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_1497(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case -1889597427:
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1506259487:
			return 5;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case -1292426046:
			return 8;
		case -1197751823:
			return 20;
		case -1176744536:
			return 24;
		case -1130865351:
			return 31;
		case -1130352927:
			return 1;
		case -893163968:
			return 17;
		case -735900586:
			return 28;
		case -676503695:
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case -207860920:
			return 26;
		case 99217379:
			return 27;
		case 304805134:
			return 21;
		case 383349088:
			return 7;
		case 389988485:
			return 2;
		case 673166414:
			return 25;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case 1367443060:
			return 4;
		case 1422688607:
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case 1780904876:
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_1498(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_1581();
	if (iParam2 == 39)
	{
		Var0 = { func_867(iParam0, 1, 0) };
		iParam2 = func_1497(func_1496(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_1430(iParam0, 866047851) && func_1582(&(Global_1946804->f_1378)) >= 2)
	{
		return 0;
	}
	if ((func_1485(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2 /*11*/])
	{
		func_1583(func_1489(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1584(iParam2);
	func_1585(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && (Global_1946804->f_57[iParam2 /*11*/])->f_1 > 1)
	{
		func_1586(Global_1946804->f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_1586(Global_1946804->f_1497.f_1[iParam2 /*3*/], 4, 6);
	}
	func_1587(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2 /*3*/] = iParam0;
	(Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1 = func_1588(iParam0, iParam2, iParam1, func_1() != -1);
	if (bParam4)
	{
		func_1589(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1589(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6 /*2*/] >= 0 && &Global_1946804->f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				(Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/])->f_1 = 0;
				func_1491(func_1489(&(Global_1946804->f_2589.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_1499(bool bParam0, bool bParam1, bool bParam2)
{
	func_1590(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

void func_1500(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_1483(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1591(Var0);
}

void func_1501()
{
	func_1592(&(Global_1946804->f_2776));
	func_1593(32768);
	func_1491(1108822547, 8, 6);
}

int func_1502(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_1497(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/] || &Global_1946804->f_1378.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_1503(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1452(Var0);
}

void func_1504(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = PED::_0x88EFFED5FE8B0B4A(iParam0);
	*uParam2 = FLOCK::_0xF8B48A361DC388AE(iParam0);
	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_0x7BCC6087D130312A(iParam0);
		switch (*uParam4)
		{
			case 0:
				*uParam1 = 0;
				break;
			case 1:
				*uParam1 = 1;
				break;
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		}
	}
}

bool func_1505(var uParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;

	iVar0 = uParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = PED::_0x9E7738B291706746(uParam0, iParam1, iParam2);
	return uVar2;
}

int func_1506(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::_0x9A100F1CF4546629(iParam0) && !ENTITY::_0xC346A546612C49A9(iParam0))
	{
		return 0;
	}
	func_1504(iParam0, &uVar1, &uVar2, &iVar0, &uVar3);
	func_1505(&iVar4, iParam0, iVar0, uVar1);
	if (iVar4 != 0)
	{
		return iVar4;
	}
	switch (iVar0)
	{
		case 2:
			return -776155824;
		case 1:
			return 1715058708;
		case 0:
			return -45650221;
		default:
			break;
	}
	return -45650221;
}

int func_1507(int iParam0)
{
	return func_1594(iParam0);
}

void func_1508(bool bParam0)
{
	func_1595(bParam0);
	Global_1955569->f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		HUD::_0x4CC5F2FC1332577F(121713391);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(121713391);
	}
}

char* func_1509(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_1596(37, iParam0))
		{
			return HUD::_0xD8402B858F4DDD88(&(Global_1109400->f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1109400->f_12)));
		}
		else
		{
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!&Global_1225638->f_21[iParam0])
	{
		return sVar0;
	}
	if (func_1596(37, iParam0))
	{
		return HUD::_0xD8402B858F4DDD88(&(((*Global_1108178)[iParam0 /*37*/])->f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(((*Global_1108178)[iParam0 /*37*/])->f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(&(Global_1225638->f_120[iParam0]));
}

char* func_1510(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_1597(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

int func_1511()
{
	if (func_1() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

float func_1512(int iParam0)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1;
}

int func_1513(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_1514(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	char* sVar0;
	int iVar1;

	if (func_301(iParam1->f_6))
	{
		if (iParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_302(&(iParam1->f_6), 0, 1);
	}
	if (!func_301(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_1383(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_1024(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_301(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_1520(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_1120(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_1598(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_974(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_1120(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_828(iParam1->f_6, 0, 1);
				}
				else
				{
					func_828(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_1515(int iParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0);
	switch (iVar0)
	{
		case -1448293989:
			return 3;
		case 555364152:
			return 2;
		case -1996978098:
			return 0;
		case 1078461828:
			return 1;
		case -1535431934:
			return 4;
		case -1663301869:
			return 5;
		default:
			break;
	}
	return -1;
}

void func_1516(int* iParam0, int iParam1)
{
	if (!func_977(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_978(iParam0, 14);
		}
	}
}

bool func_1517(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_1518(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

bool func_1519(int* iParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, var uParam8, float fParam9, bool bParam10, int iParam11)
{
	bool bVar0;
	int iVar1;

	bVar0 = (MISC::IS_BIT_SET(*iParam1, 0) && !MISC::IS_BIT_SET(*iParam1, 4));
	if (MISC::IS_BIT_SET(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (MISC::IS_BIT_SET(*iParam1, 20))
		{
			if (!MISC::IS_BIT_SET(*iParam0, 25))
			{
				MISC::SET_BIT(iParam0, 24);
			}
			return true;
		}
	}
	if (MISC::IS_BIT_SET(*iParam1, 9))
	{
		MISC::CLEAR_BIT(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (MISC::IS_BIT_SET(*iParam1, 6))
		{
			return true;
		}
	}
	else if (MISC::IS_BIT_SET(*iParam1, 5))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 18))
	{
		if (MISC::IS_BIT_SET(*iParam1, 8))
		{
			iVar1 = 0;
			if (fParam9 > -1f)
			{
				if (fParam9 < iParam1->f_3)
				{
					iVar1 = 1;
				}
			}
			if (!bParam7)
			{
				if (uParam8 || iVar1)
				{
					return true;
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 2))
	{
		if (MISC::IS_BIT_SET(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

void func_1520(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (iParam3 && !func_301(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_594(iParam0);
	func_1120(iParam0, 18, 0, 1);
	func_1120(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam4, iParam2);
}

bool func_1521(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_301(iParam0))
	{
		return false;
	}
	iVar0 = func_594(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_1522(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 && !func_301(iParam0))
	{
		return;
	}
	iVar0 = func_594(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_1523(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;

	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_1227(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1599(iVar6);
		if (!PED::_0x608BC6A6AACD5036(&Var2, iVar0, iVar1, 0))
		{
		}
		else
		{
			iVar7 = Var2.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
			}
			else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7) && !ENTITY::_0x88AD6CC10D8D35B2(iVar7))
			{
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar7, true, true);
				}
				ENTITY::_0x0D0DB2B6AF19A987(&iVar7);
			}
		}
		iVar6++;
	}
}

int func_1524(int iParam0)
{
	if (!func_1600(iParam0))
	{
		return 0;
	}
	if (!func_1601())
	{
		return 1;
	}
	return 0;
}

void func_1525(int iParam0, int iParam1)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0 /*45*/] = iParam1;
}

void func_1526(var uParam0)
{
	*uParam0 = -377364164; /* GXTEntry: "Natural" */
	uParam0->f_1 = 357708345; /* GXTEntry: "Natural" */
}

void func_1527(int iParam0, struct<2> Param1)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1602(iParam0, Param1))
	{
	}
	if (!func_1603(iParam0, Param1.f_1))
	{
	}
}

void func_1528(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_1604((*uParam0)[iVar0 /*94*/]);
		iVar0++;
	}
}

void func_1529(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_1530(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		(*uParam0)[iVar0 /*5*/] = 0;
		((*uParam0)[iVar0 /*5*/])->f_1 = 0;
		((*uParam0)[iVar0 /*5*/])->f_2 = 0;
		((*uParam0)[iVar0 /*5*/])->f_3 = 0;
		((*uParam0)[iVar0 /*5*/])->f_4 = 0;
		iVar0++;
	}
}

void func_1531(var uParam0)
{
	int iVar0;

	uParam0->f_1 = 0f;
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			uParam0->f_2[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_1532(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_1533(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 == 2)
	{
		iVar0 = 50;
	}
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_1534(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_1535(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_1536(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_1537(int iParam0)
{
	switch (iParam0)
	{
		case 2025841068:
			return 0;
		case 822658194:
			return 1;
		case 1308232528:
			return 2;
		case 1835499550:
			return 3;
		case 476637847:
			return 4;
		case -120156735:
			return 6;
		case 1645618177:
			return 7;
		case -512529193:
			return 8;
		case 131399519:
			return 9;
		case 178647645:
			return 10;
		case -864275692:
			return 11;
		case 1684533001:
			return 12;
		case -2066240242:
			return 13;
		case -2145992129:
			return 14;
		case -108848014:
			return 15;
		case 892930832:
			return 16;
		default:
			break;
	}
	return -1;
}

void func_1538(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1 /*436*/], 436);
	MISC::_COPY_MEMORY(Global_40.f_1095.f_1[iParam1 /*436*/], Global_40.f_1095.f_1[iParam0 /*436*/], 436);
	MISC::_COPY_MEMORY(Global_40.f_1095.f_1[iParam0 /*436*/], &(Global_1900383->f_508), 436);
}

void func_1539(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383->f_463), (*Global_1900383)[iParam1 /*45*/], 45);
	MISC::_COPY_MEMORY((*Global_1900383)[iParam1 /*45*/], (*Global_1900383)[iParam0 /*45*/], 45);
	MISC::_COPY_MEMORY((*Global_1900383)[iParam0 /*45*/], &(Global_1900383->f_463), 45);
}

int func_1540(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar58;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_1605(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_1605(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_1606(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_1607(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_1608(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_1541(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (func_1609(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
	}
	PED::_0xBCC76708E5677E1D(iParam0, 0);
	PED::_0x931B241409216C1F(Global_35, iParam0, 0);
	PED::_0xB8B6430EAD2D2437(iParam0, 130495496);
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar2 = PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iVar1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iVar2);
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
	POPULATION::_0xF74E134F40192884(iParam0, 1);
	PED::_0xFD6943B6DF77E449(iParam0, false);
	PLAYER::_0xDF93973251FB2CA5(iVar0, 1);
	PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	FLOCK::_0xAEB97D84CDF3C00B(iParam0, 0);
	if (func_617(iParam0))
	{
		iVar3 = func_618(iParam0);
		if (func_1610(iVar3))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 324, true);
		}
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 211, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 208, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 209, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 400, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 136, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 312, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 113, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 277, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 319, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 6, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 25, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 24, false);
}

void func_1542(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

int func_1543(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;

	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_1158())
	{
		if (func_1511())
		{
			bVar0 = false;
			if (!func_206(((*Global_1835011)[15 /*74*/])->f_1, 1) && !func_1157(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_1611();
				*iParam1 = func_1612();
				*uParam2 = func_1613();
				return 1;
			}
			else
			{
				*uParam0 = func_1614();
				*iParam1 = func_1615();
				*uParam2 = func_1616();
				return 1;
			}
		}
		else if (func_1163())
		{
			if (!func_206(((*Global_1835011)[60 /*74*/])->f_1, 1))
			{
				*uParam0 = func_1617();
				*iParam1 = func_1618();
				*uParam2 = func_1619();
				return 1;
			}
			else
			{
				*uParam0 = func_1620();
				*iParam1 = func_1621();
				*uParam2 = func_1622();
				return 1;
			}
		}
	}
	else if (func_1511())
	{
		*uParam0 = func_1623();
		*iParam1 = func_1624();
		*uParam2 = func_1625();
		return 1;
	}
	else if (func_1163())
	{
		*uParam0 = func_1626();
		*iParam1 = func_1627();
		*uParam2 = func_1628();
		return 1;
	}
	return 0;
}

void func_1544(int iParam0, var uParam1)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_8 = uParam1;
}

void func_1545(int iParam0, var uParam1)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_9 = uParam1;
}

void func_1546(int iParam0, var uParam1)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_10 = uParam1;
}

void func_1547(int iParam0, int iParam1)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_14 = iParam1;
}

void func_1548(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_1411(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_1543(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iParam1));
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372 = iParam1;
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1 = fVar4;
	func_1629(iParam1);
	iVar5 = func_1227(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar5) || PED::IS_PED_INJURED(iVar5))
	{
		return;
	}
	iVar6 = BUILTIN::FLOOR((Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar5, 7, iVar6);
	iVar7 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar5, 7);
	(Global_40.f_1095.f_1[iParam0 /*436*/])->f_372 = iVar7;
	PED::_0xA69899995997A63B(iVar5, iVar7);
}

void func_1549(int iParam0, int iParam1)
{
	iParam0 = func_949(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1900383)[iParam0 /*45*/])->f_24 = (((*Global_1900383)[iParam0 /*45*/])->f_24 || iParam1);
}

int func_1550(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -1591664384;
	if (!func_1605(iParam0, &Var0))
	{
		return 0;
	}
	*uParam1 = func_1630(Var0, 1415981582, 0);
	if (!func_1153(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_1551(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -1591664384;
	if (!func_1605(iParam0, &Var0))
	{
		return 0;
	}
	*uParam1 = func_1630(Var0, -2119169513, 0);
	if (!func_1153(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

int func_1552(int iParam0, var uParam1)
{
	struct<4> Var0;

	if (!func_1631(856287005, iParam0))
	{
		return 0;
	}
	Var0 = { func_1632() };
	*uParam1 = func_1630(Var0, iParam0, 0);
	if (!func_1153(*uParam1, 0))
	{
		return 0;
	}
	return 1;
}

void func_1553(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	PED::_0xDF631E4BCE1B1FC4(iParam0, -1442703445, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -1505972720, 0, false);
}

void func_1554(int iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	func_1633(iParam0, *uParam1);
	func_1633(iParam0, uParam1->f_1);
}

void func_1555(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	PED::_0xDF631E4BCE1B1FC4(iParam0, 399422490, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -1163401704, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, 88372018, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -630346294, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -273475295, 0, false);
	PED::_0xDF631E4BCE1B1FC4(iParam0, -2142954459, 0, false);
}

void func_1556(int iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	func_1633(iParam0, *uParam1);
	func_1633(iParam0, uParam1->f_1);
	func_1633(iParam0, uParam1->f_2);
	func_1633(iParam0, uParam1->f_3);
	func_1633(iParam0, uParam1->f_4);
	func_1633(iParam0, uParam1->f_5);
}

int func_1557(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, iVar0))
	{
		return 0;
	}
	PED::_0x1902C4CFCC5BE57C(iParam0, iParam1);
	if (bParam2)
	{
		PED::_0xCC8CA3E88256E58F(iParam0, 1, 1, 1, 1, 0);
	}
	return 1;
}

bool func_1558()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

void func_1559(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_1169(1356759001) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

int func_1560(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_1496(iVar0);
}

bool func_1561()
{
	int iVar0;

	iVar0 = &Global_1946804->f_529[9];
	iVar0 = (&Global_1946804->f_529[4] + iVar0);
	iVar0 = (&Global_1946804->f_529[10] + iVar0);
	iVar0 = (&Global_1946804->f_529[1] + iVar0);
	iVar0 = (&Global_1946804->f_529[2] + iVar0);
	iVar0 = (&Global_1946804->f_529[6] + iVar0);
	iVar0 = (&Global_1946804->f_529[29] + iVar0);
	iVar0 = (&Global_1946804->f_529[26] + iVar0);
	iVar0 = (&Global_1946804->f_529[18] + iVar0);
	iVar0 = (&Global_1946804->f_529[19] + iVar0);
	return iVar0 > 0;
}

int func_1562(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_1153(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_1634(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1325("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1326(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_343(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_1327(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_1327(iVar1);
	}
	return 0;
}

int func_1563(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_1153(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1145(iParam0);
	if (iVar0 == 307971639 || (iParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1634(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1635(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_943(bParam2), iParam0, 0);
	return iVar2;
}

int func_1564()
{
	int iVar0;
	int iVar1;

	if (PED::_0xA911EE21EDF69DAF(Global_35))
	{
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
	{
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == joaat("weapon_unarmed"))
	{
		if (iVar0 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_0x0556E9D2ECF39D01(iVar0)) && !func_1636(iVar0)) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == joaat("weapon_kit_binoculars"))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_1636(iVar0)) || iVar0 == joaat("weapon_lasso"))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == joaat("weapon_unarmed"))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

Vector3 func_1565(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	iVar3 = iParam0 & 32767;
	iVar4 = BUILTIN::SHIFT_RIGHT(iParam0, 15) & 32767;
	vVar0.x = BUILTIN::TO_FLOAT(iVar3);
	vVar0.f_1 = BUILTIN::TO_FLOAT(iVar4);
	if (iParam0 & 1073741824 == 0)
	{
		vVar0.x = (vVar0.x * -1f);
	}
	if (iParam0 & -2147483648 == 0)
	{
		vVar0.f_1 = (vVar0.y * -1f);
	}
	return vVar0;
}

int func_1566(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return -678244495;
		case 1:
			return -678244495;
		case 2:
			return -678244495;
		case 4:
			return -678244495;
		case 5:
			return -678244495;
		case 6:
			return -678244495;
		case 7:
			return -678244495;
		case 8:
			return -678244495;
		case 9:
			return -678244495;
		case 10:
			return -678244495;
		case 11:
			return -678244495;
		case 12:
			return -678244495;
		case 14:
			return -936216634;
		case 13:
			return -936216634;
		case 15:
			return -936216634;
		case 16:
			return -936216634;
		case 17:
			return -936216634;
		case 18:
			return -936216634;
		case 19:
			return -936216634;
		case 20:
			return 168093330;
		case 21:
			return 168093330;
		case 22:
			return 168093330;
		case 23:
			return 168093330;
		case 24:
			return 168093330;
		case 25:
			return 168093330;
		case 26:
			return 168093330;
		case 28:
			return 168093330;
		case 29:
			return 168093330;
		case 33:
			return 168093330;
		case 34:
			return 168093330;
		case 30:
			return 168093330;
		case 32:
			return 168093330;
		case 31:
			return 168093330;
		case 41:
			return 168093330;
		case 42:
			return 168093330;
		case 35:
			return 168093330;
		case 36:
			return 168093330;
		case 37:
			return 168093330;
		case 38:
			return 168093330;
		case 39:
			return 168093330;
		case 27:
			return 168093330;
		case 45:
			return 168093330;
		case 40:
			return 168093330;
		case 43:
			return 168093330;
		case 44:
			return 168093330;
		case 46:
			return -972966383;
		case 47:
			return -972966383;
		case 48:
			return -972966383;
		case 49:
			return -678244495;
		case 50:
			return -678244495;
		case 51:
			return -678244495;
		case 52:
			return 1560611276;
		case 53:
			return -494978356;
		case 54:
			return -494978356;
		case 55:
			return -494978356;
		case 56:
			return -494978356;
		case 57:
			return -507182222;
		case 58:
			return -1337945352;
		case 59:
			return -678244495;
		case 60:
			return -678244495;
		case 61:
			return -678244495;
		case 62:
			return -383696203;
		default:
			break;
	}
	return 0;
}

int func_1567(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1243830185;
		case 1:
			return 595820042;
		case 2:
			return -1650465405;
		case 4:
			return 1974815632;
		case 5:
			return 1078668923;
		case 6:
			return 552659337;
		case 7:
			return -1179229323;
		case 8:
			return -1581061148;
		case 9:
			return -48718882;
		case 10:
			return -379108622;
		case 11:
			return 1015604260;
		case 12:
			return 126262516;
		case 14:
			return -997121570;
		case 13:
			return 423351566;
		case 16:
			return -1636832113;
		case 17:
			return 1012165077;
		case 18:
			return -250506368;
		case 19:
			return 2033397166;
		case 20:
			return 1475879922;
		case 21:
			return 531267562;
		case 22:
			return 249721687;
		case 23:
			return -145868367;
		case 24:
			return -1989306548;
		case 25:
			return -1739686743;
		case 26:
			return 1195729388;
		case 28:
			return -758970771;
		case 29:
			return 1542275196;
		case 33:
			return 1861010125;
		case 34:
			return 1475382911;
		case 30:
			return 103490298;
		case 31:
			return -2090472724;
		case 32:
			return -1665418949;
		case 35:
			return -852241114;
		case 36:
			return -1406874050;
		case 37:
			return 1938782895;
		case 38:
			return -1456209806;
		case 39:
			return 469827317;
		case 27:
			return 1879260108;
		case 40:
			return 587827268;
		case 41:
			return 819673798;
		case 42:
			return 819673798;
		case 43:
			return -211556852;
		case 44:
			return 1364029453;
		case 45:
			return -73168905;
		case 46:
			return 1586273744;
		case 47:
			return -1498696713;
		case 48:
			return 1586273744;
		case 49:
			return 503049244;
		case 50:
			return 305594522;
		case 51:
			return -417940443;
		case 52:
			return -1606321000;
		case 53:
			return 1904459580;
		case 54:
			return -1989725258;
		case 55:
			return -487631996;
		case 56:
			return -1944395098;
		case 57:
			return -428972082;
		case 58:
			return 1586273744;
		case 59:
			return -1575595762;
		case 60:
			return -417940443;
		case 61:
			return -417940443;
		case 62:
			return -1258576797;
		default:
			break;
	}
	return 0;
}

char* func_1568(int iParam0)
{
	switch (iParam0)
	{
		case joaat("p_cs_ledger01x"):
			return "P_CS_LEDGER01X";
		case joaat("p_cs_rope01x"):
			return "P_CS_ROPE01X";
		case joaat("p_door01x"):
			return "P_DOOR01X";
		case joaat("p_door03x"):
			return "P_DOOR03X";
		case joaat("p_door12x"):
			return "p_door12x";
		case joaat("p_door13x"):
			return "P_DOOR13X";
		case joaat("p_door45x"):
			return "p_door45x";
		case joaat("p_chairvictorian01x"):
			return "p_chairvictorian01x";
		case joaat("p_crate03x"):
			return "p_crate03x";
		case joaat("p_cs_jug01x"):
			return "p_cs_jug01x";
		case joaat("p_cs_wagon02x"):
			return "p_cs_wagon02x";
		case joaat("p_door37x"):
			return "P_DOOR37X";
		case joaat("p_door_val_genstore"):
			return "p_door_val_genstore";
		case joaat("p_doorstrawberry01x"):
			return "p_doorstrawberry01x";
		case joaat("p_doorfrench01l"):
			return "p_doorfrench01l";
		case joaat("p_doorfrench01r"):
			return "p_doorfrench01r";
		case joaat("p_doormansiongate01x"):
			return "p_doormansiongate01x";
		case joaat("p_doornbd39x"):
			return "p_doornbd39x";
		case joaat("p_doorsaloon02x"):
			return "p_doorsaloon02x";
		case joaat("p_doorvh_saloon_l"):
			return "P_DOORVH_SALOON_L";
		case joaat("p_doorvh_saloon_r"):
			return "P_DOORVH_SALOON_R";
		case joaat("p_cigarlit01x"):
			return "p_cigarlit01x";
		case joaat("p_pebble01x"):
			return "p_pebble01x";
		case joaat("p_cs_rope03x"):
			return "p_cs_rope03x";
		case joaat("p_cards01x"):
			return "P_CARDS01X";
		case joaat("p_cs_pokerhand01x"):
			return "P_CS_POKERHAND01X";
		case joaat("p_cs_pokerhand02x"):
			return "P_CS_POKERHAND02X";
		case joaat("p_cs_holdemhand01x"):
			return "P_CS_HOLDEMHAND01X";
		case joaat("p_cs_holdemhand02x"):
			return "P_CS_HOLDEMHAND02X";
		case joaat("p_cs_bucket01x"):
			return "P_CS_BUCKET01X";
		case joaat("p_cs_syringe01x"):
			return "p_cs_syringe01x";
		case joaat("p_bottlejd01x"):
			return "p_bottleJD01x";
		case joaat("p_rag02x"):
			return "p_rag02x";
		case joaat("p_magneto02x"):
			return "p_magneto02x";
		case joaat("p_magneto01x"):
			return "p_magneto01x";
		case joaat("p_cs_wantedalive01x"):
			return "p_cs_wantedalive01x";
		case joaat("p_cs_rcridethelightning"):
			return "P_CS_RCRIDETHELIGHTNING";
		case joaat("p_pen01x"):
			return "p_pen01x";
		case joaat("p_cs_letter01a_x"):
			return "p_cs_letter01a_x";
		case joaat("p_cs_electricchair01x"):
			return "p_cs_electricchair01x";
		case joaat("p_cs_generator01x"):
			return "p_cs_generator01x";
		case joaat("p_cs_electrichelmet01x"):
			return "p_cs_electricHelmet01x";
		case joaat("p_cs_gag01x"):
			return "p_cs_gag01x";
		case joaat("p_door_sha_man01x"):
			return "p_door_sha_man01x";
		case joaat("p_stool01x"):
			return "p_stool01x";
		case joaat("p_stool02x"):
			return "p_stool02x";
		case joaat("p_jugglingball01x"):
			return "p_jugglingball01x";
		case joaat("p_chair02x"):
			return "p_chair02x";
		case joaat("p_chair04x"):
			return "p_chair04x";
		case joaat("p_crate15x"):
			return "p_crate15x";
		case joaat("p_cleaver01x"):
			return "p_cleaver01x";
		case joaat("p_bottle003x"):
			return "p_bottle003x";
		case joaat("p_cs_book02x"):
			return "p_cs_book02x";
		case joaat("p_stickydymt_single"):
			return "p_stickydymt_single";
		case joaat("p_cs_fusedynamite01x"):
			return "p_cs_fusedynamite01x";
		case joaat("p_dynamite01x"):
			return "p_dynamite01x";
		case joaat("p_cs_fusespool01x"):
			return "p_cs_fusespool01x";
		case joaat("p_cs_detonator01x"):
			return "p_cs_detonator01x";
		case joaat("p_cs_bedrollclsd01x"):
			return "p_cs_bedrollclsd01x";
		case joaat("p_cigarette_cs01x"):
			return "P_CIGARETTE_CS01X";
		case joaat("p_matches01x"):
			return "P_MATCHES01X";
		case joaat("p_matchstick01x"):
			return "P_MATCHSTICK01X";
		case joaat("p_woodenchair01x"):
			return "P_WOODENCHAIR01X";
		case joaat("p_chair_crate02x"):
			return "P_CHAIR_CRATE02X";
		case joaat("p_knittingneedle01x"):
			return "p_knittingneedle01x";
		case joaat("p_knittingsquare01x"):
			return "p_knittingsquare01x";
		case joaat("p_cs_rabbitmeat01x"):
			return "p_cs_rabbitMeat01x";
		case joaat("p_cs_rabbitmeat02x"):
			return "p_cs_rabbitMeat02x";
		case joaat("p_bottle03x"):
			return "p_bottle03x";
		case joaat("p_cs_billstack01x"):
			return "p_cs_billstack01x";
		case joaat("p_cs_billsingle01x"):
			return "p_cs_billSingle01x";
		case joaat("p_binoculars01x"):
			return "p_binoculars01x";
		case joaat("p_doorrhosheriff02x"):
			return "p_doorrhosheriff02x";
		case joaat("p_barstool01x"):
			return "P_BARSTOOL01X";
		case joaat("p_cs_shotglass01x"):
			return "p_cs_shotglass01x";
		case joaat("p_lamp18x"):
			return "p_lamp18x";
		case joaat("p_clock06x"):
			return "p_clock06x";
		case joaat("p_bottle02x"):
			return "p_bottle02x";
		case joaat("p_cs_lootsack01x"):
			return "p_cs_lootSack01x";
		case joaat("p_winebox01x"):
			return "p_wineBox01x";
		case joaat("p_strongbox01x"):
			return "p_strongBox01x";
		case joaat("p_clocktable02x"):
			return "P_CLOCKTABLE02X";
		case joaat("p_gen_statue03b"):
			return "p_gen_statue03b";
		case joaat("p_stoolwinter01x"):
			return "P_STOOLWINTER01X";
		case joaat("p_cs_barrag01x"):
			return "P_CS_BARRAG01X";
		case joaat("p_plate01x"):
			return "P_PLATE01X";
		case joaat("p_knife01x"):
			return "P_KNIFE01X";
		case joaat("p_knife02x"):
			return "P_KNIFE02X";
		case joaat("p_cs_catfish_whole01x"):
			return "P_CS_CATFISH_WHOLE01X";
		case joaat("p_cs_catfish_whole01bx"):
			return "P_CS_CATFISH_WHOLE01BX";
		case joaat("p_woodwhittle01x"):
			return "P_WOODWHITTLE01X";
		case joaat("p_stickfirepoker01x"):
			return "P_STICKFIREPOKER01X";
		case joaat("p_cs_woodpile01x"):
			return "P_CS_WOODPILE01X";
		case joaat("p_fork01x"):
			return "P_FORK01X";
		case joaat("p_knife04x"):
			return "P_KNIFE04X";
		case joaat("p_knife03x"):
			return "p_knife03x";
		case joaat("p_cs_bottleslim01x"):
			return "P_CS_BOTTLESLIM01X";
		case joaat("p_cs_blanket01x"):
			return "P_CS_BLANKET01X";
		case joaat("p_bedrollclosed01x"):
			return "P_BEDROLLCLOSED01X";
		case joaat("p_cs_kindling01x"):
			return "P_CS_KINDLING01X";
		case joaat("p_cigarthin01x"):
			return "P_CIGARTHIN01X";
		case joaat("p_door_wglass01x"):
			return "p_door_wglass01x";
		case joaat("p_broom02x"):
			return "p_broom02x";
		case joaat("p_amb_clipboard_01"):
			return "P_AMB_CLIPBOARD_01";
		case joaat("p_chair07x"):
			return "P_CHAIR07X";
		case joaat("p_cs_cratetnt01x"):
			return "p_cs_cratetnt01x";
		case joaat("p_cs_flourbag01x"):
			return "p_cs_flourbag01x";
		case joaat("p_cs_supplies01x"):
			return "p_cs_supplies01x";
		case joaat("p_cs_supplies02x"):
			return "p_cs_supplies02x";
		case joaat("p_cs_supplies03x"):
			return "p_cs_supplies03x";
		case joaat("p_door04x"):
			return "p_door04x";
		case joaat("p_door11x"):
			return "p_door11x";
		case joaat("p_doorrhosaloon01_l"):
			return "p_doorrhosaloon01_l";
		case joaat("p_doorrhosaloon01_r"):
			return "p_doorrhosaloon01_r";
		case joaat("p_val_gate2m02x"):
			return "P_VAL_GATE2M02X";
		case joaat("p_cs_stmdnky01x"):
			return "P_CS_STMDNKY01X";
		case joaat("p_cs_hookpulley01x"):
			return "P_CS_HOOKPULLEY01X";
		case joaat("p_chair_cs05x"):
			return "P_CHAIR_CS05X";
		case joaat("p_chair18x"):
			return "P_CHAIR_18X";
		case joaat("p_chair19x"):
			return "P_CHAIR19X";
		case joaat("p_chair20x"):
			return "P_CHAIR20X";
		case joaat("p_chair05x"):
			return "P_CHAIR05X";
		case joaat("p_chair22x"):
			return "p_chair22x";
		case joaat("p_glass01x"):
			return "p_glass01x";
		case joaat("p_diningchairs01x"):
			return "P_DININGCHAIRS01X";
		case joaat("p_windsorchair03x"):
			return "P_WINDSORCHAIR03X";
		case joaat("p_windsorchair02x"):
			return "P_WINDSORCHAIR02X";
		case joaat("p_door_val_jail02x"):
			return "p_door_val_jail02x";
		case joaat("p_cratetnt01x"):
			return "P_CRATETNT01X";
		case joaat("p_cratetnt02x"):
			return "P_CRATETNT02X";
		case joaat("p_moneystack01x"):
			return "P_MONEYSTACK01X";
		case joaat("p_axe01x"):
			return "P_AXE01X";
		case joaat("p_hoe01x"):
			return "P_HOE01X";
		case joaat("p_shovel01x"):
			return "P_SHOVEL01X";
		case joaat("p_shovel04x"):
			return "P_SHOVEL04X";
		case joaat("p_broom01x"):
			return "P_BROOM01X";
		case joaat("p_pitchfork01x"):
			return "P_PITCHFORK01X";
		case joaat("p_scythe01x"):
			return "P_SCYTHE01X";
		case joaat("p_skiff02x"):
			return "P_SKIFF02x";
		case joaat("p_door_nbx_doc01x_l"):
			return "p_door_nbx_doc01x_l";
		case joaat("p_door_nbx_doc01x_r"):
			return "p_door_nbx_doc01x_r";
		case joaat("p_cs_camera"):
			return "p_cs_camera";
		case joaat("p_cs_cameratripod"):
			return "p_cs_cameratripod";
		case joaat("p_cs_camerabag01x"):
			return "p_cs_camerabag01x";
		case joaat("p_cameraflash01x"):
			return "p_cameraflash01x";
		case joaat("p_cs_shutterrelease"):
			return "p_cs_shutterrelease";
		case joaat("rowboatswamp"):
			return "rowboatswamp";
		case joaat("p_chair25x"):
			return "P_CHAIR25X";
		case joaat("p_doorbrait01bx"):
			return "P_DOORBRAIT01BX";
		case joaat("p_cs_map01x"):
			return "P_CS_MAP01X";
		case joaat("p_hammer03x"):
			return "p_hammer03x";
		case joaat("p_cs_nailbarrel01x"):
			return "p_cs_nailbarrel01x";
		case joaat("p_cs_book04x"):
			return "p_cs_book04x";
		case joaat("p_cs_fan01x"):
			return "p_cs_Fan01x";
		case joaat("p_cs_ledgersmall01x"):
			return "p_cs_ledgerSmall01x";
		case joaat("p_cs_envelope01x"):
			return "p_cs_envelope01x";
		case joaat("p_wrappedmeat01x"):
			return "p_wrappedmeat01x";
		case joaat("p_cs_letter02x"):
			return "P_CS_LETTER02X";
		case joaat("p_cs_book03x"):
			return "p_cs_book03x";
		case joaat("p_cs_giftbox01x"):
			return "p_cs_giftBox01x";
		case joaat("p_boiler01x"):
			return "p_boiler01x";
		case joaat("p_boiler02x"):
			return "p_boiler02x";
		case joaat("p_mugcoffee01x"):
			return "p_mugCoffee01x";
		case joaat("p_glasstallbeer01x"):
			return "p_glasstallbeer01x";
		case joaat("p_pitcher02x"):
			return "p_pitcher02x";
		case joaat("p_tray03x"):
			return "p_tray03x";
		case joaat("p_sit_chairwicker01b"):
			return "p_sit_chairwicker01b";
		case -449688053:
			return "S_INV_ORLEANDER01CX";
		case -703216761:
			return "S_INV_ORLEANDER01DX";
		case joaat("p_ladle02x"):
			return "P_LADLE02X";
		case joaat("p_cs_pot01x"):
			return "P_CS_POT01X";
		case joaat("p_chairdining03x"):
			return "P_CHAIRDINING03X";
		case joaat("p_spoon01x"):
			return "P_SPOON01X";
		case joaat("p_bowl03x"):
			return "P_BOWL03X";
		case joaat("p_cs_bridecatalogue01x"):
			return "P_CS_BRIDECATALOGUE01X";
		case joaat("p_jewelrybox02bx"):
			return "P_JEWELRYBOX02BX";
		case joaat("p_cs_letterfolded01x"):
			return "P_CS_LETTERFOLDED01X";
		case joaat("p_cs_arthurhat01x"):
			return "P_CS_ARTHURHAT01X";
		case joaat("p_oar03x"):
			return "P_OAR03X";
		case joaat("p_door_val_bankvault"):
			return "P_DOOR_VAL_BANKVAULT";
		case joaat("p_door_combank01x"):
			return "P_DOOR_COMBANK01X";
		case joaat("p_cs_donation01x"):
			return "P_CS_DONATION01X";
		case joaat("p_door_nbx_bank03x_r"):
			return "p_door_nbx_bank03x_R";
		case joaat("p_door_nbx_bank03x_l"):
			return "p_door_nbx_bank03x_L";
		case joaat("p_camp_plate_02x"):
			return "p_camp_plate_02x";
		case joaat("p_stewplate02x"):
			return "p_stewplate02x";
		case joaat("p_cs_log01x"):
			return "p_cs_log01x";
		case joaat("p_ndb_hotelplank01x"):
			return "p_ndb_hotelplank01x";
		case joaat("p_glass06x"):
			return "p_glass06x";
		case joaat("p_cs_rag01x"):
			return "p_cs_rag01x";
		case joaat("p_inkwell01x"):
			return "p_inkwell01x";
		case joaat("p_cigar02x"):
			return "p_cigar02x";
		case joaat("p_bottlebeer01x"):
			return "p_bottleBeer01x";
		case joaat("p_beermugglass01x"):
			return "p_beermugglass01x";
		case joaat("p_nutbowl01x"):
			return "p_nutBowl01x";
		case joaat("p_cs_sacklarge01x"):
			return "p_cs_sacklarge01x";
		case joaat("p_cs_dressbox01x"):
			return "p_cs_dressbox01x";
		case joaat("p_bell05x"):
			return "p_bell05x";
		case joaat("p_woodendeskchair01x"):
			return "p_woodendeskchair01x";
		case joaat("p_chair06x"):
			return "p_chair06x";
		case joaat("p_jug01x"):
			return "p_jug01x";
		case -1907186363:
			return "S_INV_MEDICINE01X";
		case 2067968977:
			return "S_INV_MEDICINE_FTY";
		case -434431529:
			return "S_INV_Milkweed01bx";
		case joaat("p_bottleslim01x"):
			return "p_bottleslim01x";
		case joaat("p_cs_journal01x"):
			return "p_cs_journal01x";
		case joaat("p_mortarpestle02x"):
			return "p_mortarpestle02x";
		case 197307092:
			return "s_inv_burdock01dx";
		case joaat("p_cs_ropelegsplit"):
			return "p_cs_ropeLegSplit";
		case joaat("p_cs_ropehandssplit"):
			return "p_cs_ropeHandsSplit";
		case joaat("p_fishingpole01x"):
			return "p_fishingpole01x";
		case joaat("p_fishingpole02x"):
			return "P_FISHINGPOLE02X";
		case joaat("p_cs_flowernecklace"):
			return "p_cs_flowernecklace";
		case joaat("p_cs_flowers01x"):
			return "P_CS_FLOWERS01X";
		case -1018099626:
			return "s_inv_yarrow01cx";
		case joaat("p_cs_fishingpolebag01x"):
			return "P_CS_FISHINGPOLEBAG01X";
		case joaat("p_stick02x"):
			return "P_STICK02X";
		case joaat("p_cs_sock01x"):
			return "P_CS_SOCK01X";
		case joaat("p_door_val_bank00_rx"):
			return "P_DOOR_VAL_BANK00_RX";
		case joaat("p_door_val_bank00_lx"):
			return "P_DOOR_VAL_BANK00_RX";
		case joaat("p_can10x"):
			return "p_can10x";
		case joaat("p_cs_rabbitgut"):
			return "p_cs_rabbitgut";
		case joaat("p_cs_rabbitheadless"):
			return "p_cs_rabbitheadless";
		case joaat("p_cs_rabbitfeetless"):
			return "p_cs_rabbitfeetless";
		case joaat("p_kettle03x"):
			return "p_kettle03x";
		case -804436865:
			return "s_che_woodbin01x";
		case 1833396091:
			return "s_lootablepoorcase";
		case joaat("p_cs_bookhardcv01x"):
			return "P_CS_BOOKHARDCV01X";
		case joaat("p_letterbundle_01x"):
			return "P_LETTERBUNDLE_01X";
		case joaat("p_letterenvelope_cs01x"):
			return "P_LETTERENVELOPE_CS01X";
		case joaat("p_package08x"):
			return "P_PACKAGE08X";
		case joaat("p_cigarbox02x"):
			return "P_CIGARBOX02X";
		case joaat("p_crucifix02x"):
			return "p_crucifix02x";
		case joaat("p_bottlecrate01x"):
			return "p_bottleCrate01x";
		case joaat("p_can05x"):
			return "p_can05x";
		case joaat("p_cs_suitcase04x"):
			return "p_cs_suitcase04x";
		case joaat("p_cs_bagstrauss01x"):
			return "p_cs_bagstrauss01x";
		case joaat("p_bottle008x"):
			return "P_BOTTLE008X";
		case joaat("p_bottle009x"):
			return "P_BOTTLE009X";
		case joaat("p_bottle010x"):
			return "P_BOTTLE010X";
		case joaat("p_pocketmirror01x"):
			return "p_pocketMirror01x";
		case joaat("p_cigarette01x"):
			return "P_CIGARETTE01X";
		case joaat("p_traveltrunk02x"):
			return "P_TRAVELTRUNK02X";
		case joaat("p_chairwhite01x"):
			return "P_CHAIRWHITE01X";
		case joaat("p_journal_open01x"):
			return "P_JOURNAL_OPEN01X";
		case joaat("p_table42_cs"):
			return "p_table42_cs";
		case joaat("p_cs_newspaper_02x"):
			return "p_cs_newspaper_02x";
		case joaat("p_cs_potatoslice01x"):
			return "P_CS_POTATOSLICE01X";
		case -1035439448:
			return "S_APLSD_LOG";
		case 1410968406:
			return "S_APLSD_HRSATT";
		case joaat("p_spittoon01x"):
			return "p_spittoon01x";
		case joaat("p_woodbowl01x"):
			return "p_woodbowl01x";
		case joaat("p_pencil01x"):
			return "p_pencil01x";
		case joaat("p_spoonmid01x"):
			return "P_SPOONMID01X";
		case joaat("p_pan01x"):
			return "P_PAN01X";
		case joaat("p_pipe01x"):
			return "P_Pipe01x";
		case joaat("p_cs_railroadbond01x"):
			return "p_cs_railroadbond01x";
		case joaat("p_sharpeningstone01x"):
			return "p_sharpeningstone01x";
		case joaat("p_treestump02x"):
			return "p_treestump02x";
		case joaat("p_plate17x"):
			return "p_plate17x";
		case joaat("p_cs_newspaper_01x"):
			return "p_cs_newspaper_01x";
		case joaat("p_sadiehat01x"):
			return "p_sadiehat01x";
		case joaat("p_door_bla_jail_l_01x"):
			return "p_door_bla_jail_l_01x";
		case joaat("p_door_bla_jail_r_01x"):
			return "p_door_bla_jail_r_01x";
		case joaat("p_mashedpotato02x"):
			return "p_mashedPotato02x";
		case joaat("p_cs_bookhardcv08x"):
			return "p_cs_bookHardCv08x";
	}
	return "";
}

bool func_1569(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_1570(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

void func_1571(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam4) * 127f));
	*uParam1 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam5) * 127f));
	*uParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam6) * 127f));
	*uParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam7) * 127f));
}

void func_1572(int iParam0)
{
	struct<16> Var0;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1934603)[iParam0 /*16*/])->f_10)))
	{
		return;
	}
	*((*Global_1934603)[iParam0 /*16*/]) = { Var0 };
	Global_1934603->f_161 = (Global_1934603->f_161 - 1);
	if (Global_1934603->f_161 < 0)
	{
		Global_1934603->f_161 = 0;
	}
}

void func_1573(int iParam0)
{
	PLAYER::_0x51345AE20F22C261(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
}

int func_1574()
{
	if (!func_343(Global_1935630->f_45))
	{
		return joaat("weapon_unarmed");
	}
	return Global_1935630->f_45;
}

int func_1575(int iParam0, int iParam1)
{
	var uVar0;

	return func_1637(&uVar0, iParam0, iParam1);
}

bool func_1576()
{
	return &Global_1935436 == 1;
}

bool func_1577()
{
	return &Global_1935436 == 2;
}

void func_1578(float fParam0)
{
	func_1638(10, fParam0);
}

void func_1579()
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1935436->f_12 = 0f;
}

int func_1580(int iParam0)
{
	int iVar0;

	iVar0 = func_944(iParam0);
	switch (iVar0)
	{
		case -2061583405:
			return -1725579161;
		case -525676072:
			return 1249071452;
		default:
			break;
	}
	return 0;
}

void func_1581()
{
	int iVar0;

	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_1582(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_1430(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_1430(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_1430(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_1430(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_1430(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_1430(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

void func_1583(int iParam0)
{
	func_1491(iParam0, 8, 6);
}

void func_1584(int iParam0)
{
	func_1639(&(Global_1946804->f_2589), iParam0);
}

void func_1585(int iParam0, int iParam1)
{
	func_1640(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_1586(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_1587(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_944(&(uParam0->f_1[iParam2 /*3*/]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1487(iParam2, 65536) && &uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_1585(iVar1, iVar3);
		}
	}
	if (func_1641(-1586649372) && func_1487(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_1585(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == &Global_1946804->f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1 /*3*/] == 1516947474)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1585(iVar1, iVar3);
					}
				}
			}
			func_1642(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1642(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1155669136 || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1585(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 525
				func_1642(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1155669136)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = -1539589426;
					if (bParam4)
					{
						func_1585(iVar1, iVar3);
					}
				}
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1530758430)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 1334603721;
					if (bParam4)
					{
						func_1585(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 656
				func_1642(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1170; //curOff = 691
				func_1642(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_1585(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 786
				func_1642(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1170; //curOff = 807
				if (iParam1 == &Global_1946804->f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1585(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1585(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_944(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1585(iVar1, iVar3);
						}
					}
				}
				Jump @1170; //curOff = 1025
				iVar1 = 36;
				if (&uParam0->f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && func_1430(&(Global_1946804->f_1497.f_1[iVar1 /*3*/]), -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
				Jump @1170; //curOff = 1110
				iVar1 = 36;
				if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
			}
			switch (func_944(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_944(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1585(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_944(&(uParam0->f_1[iVar1 /*3*/])) || func_1430(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_1585(iVar1, iVar3);
						}
					}
					break;
			}
		}

int func_1588(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;

	uVar0 = func_1643(0);
	if (iParam2 != 0 && func_1644(iParam0, uVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1645(iParam0, func_1489(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1589(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	bVar6 = func_1() != -1;
	iVar7 = func_1643(0);
	if (func_1485(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = &Global_1946804->f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_1489(iVar0, 1);
			if (func_1486(iVar5, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_1486(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_1646(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1647(uParam0);
				if (iVar3 > 0)
				{
					if (!func_1485(524288))
					{
						func_1483(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = &Global_1946804->f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_1489(iVar0, 1);
							if (func_1486(iVar5, 8))
							{
							}
							else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_1486(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_1646(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									if (bParam1)
									{
										func_1585(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_1593(524288);
				}
			}
		}
	}

void func_1590(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1648(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (func_1() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1649(2, Global_26795.f_776)) || Global_1946804->f_1497 != func_1650(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_1650(Global_40.f_7729);
				Global_1946804->f_1378 = func_1650(Global_40.f_7729);
				Global_26795.f_776 = 0;
				func_1651(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1652(0, 1);
	}
}

void func_1591(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946804->f_850 >= 25)
			{
				return;
			}
			if (func_1569(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804->f_850)
				{
					iVar1 = ((Global_1946804->f_855 + iVar0) % 25);
					if ((&Global_1946804->f_668[iVar1 /*4*/] == Param0 && (Global_1946804->f_668[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1946804->f_668[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_1570(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1483(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804->f_851 >= 25)
			{
				return;
			}
			if (func_1569(Param0))
			{
				return;
			}
			func_1570(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_1483(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1503(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_1592(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		PED::_0x13E7320C762F0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_1593(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

int func_1594(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1391860027;
		case 3:
			return -2049683567;
		case 4:
			return -1639750081;
		case 6:
			return -543306319;
		case 7:
			return 93160283;
		case 8:
			return -1838611891;
		case 1:
			return 1619762084;
		case 2:
			return -2104053099;
		case 9:
			return -1431073983;
		case 10:
			return 887432345;
		case 11:
			return -238320361;
		case 26:
			return -1433937760;
		case 27:
			return -681691620;
		case 28:
			return -706234936;
		case 29:
			return -282099500;
		case 30:
			return 1450105278;
		case 31:
			return -732027686;
		case 5:
			return 379756162;
		case 15:
			return 2128397741;
		case 17:
			return -924263120;
		case 33:
			return 1915478031;
		case 12:
			return -1775364220;
		case 13:
			return -1504845897;
		case 14:
			return -1227686818;
		case 18:
			return 1442571063;
		case 19:
			return -997221403;
		case 22:
			return 285759500;
		case 20:
			return 1489861748;
		case 32:
			return -2132712788;
		case 34:
			return 1427539511;
		case 23:
			return -967055532;
		case 24:
			return 662159626;
		case 25:
			return 1743191502;
		case 21:
			return -830712656;
		default:
			break;
	}
	return 0;
}

void func_1595(bool bParam0)
{
	_NAMESPACE84::_0xB6FD96420C0126A1(-1056478928, bParam0);
}

int func_1596(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1653(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_1654())
	{
		return func_1653(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1225638->f_21[iParam1])
	{
		return func_1653(&(((*Global_1108178)[iParam1 /*37*/])->f_4), iVar0, 5);
	}
	return 0;
}

char* func_1597(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_1598(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4)
{
	int iVar0;

	if (iParam4 && !func_301(iParam0))
	{
		return;
	}
	iVar0 = func_594(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1945938)[iVar0 /*18*/])->f_3, MISC::_CREATE_VAR_STRING(10, sParam1, sParam2, sParam3));
}

int func_1599(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

int func_1600(int iParam0)
{
	switch (iParam0)
	{
		case -1523757120:
		case -1516219602:
		case -1063137731:
		case 604357666:
		case 705691988:
		case 1048964673:
		case 1576849913:
			return 1;
	}
	return 0;
}

bool func_1601()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(99890643);
}

int func_1602(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;

	Var0.f_9 = -1591664384;
	if (!func_1605(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { func_871(iParam1, Var0, 1415981582, 0) };
	return func_1655(Var29, 1);
}

int func_1603(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;

	Var0.f_9 = -1591664384;
	if (!func_1605(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { func_871(iParam1, Var0, -2119169513, 0) };
	return func_1655(Var29, 1);
}

void func_1604(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0 /*8*/] = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_1 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_2 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_3 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_4 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_5 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_6 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

int func_1605(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> Var1;
	struct<4> Var15;

	if (!func_1656(iParam0))
	{
		return 0;
	}
	iVar0 = func_1606(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_1144(0) };
	if (!func_1657(Var15, iVar0, &Var1, 0, 0))
	{
		return 0;
	}
	if (!func_1658(&Var1, uParam1))
	{
		return 0;
	}
	return 1;
}

int func_1606(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return 1782082944;
		case 1:
			return -832337898;
		case 2:
			return 1271463052;
		case 3:
			return 1983140194;
		case 4:
			return 677262775;
	}
	return 0;
}

int func_1607(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	struct<12> Var0;
	struct<4> Var14;

	if (!func_873(bParam10))
	{
		return func_1659(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1150(Param0, &Var0, 0, 0))
	{
		return 0;
	}
	if (func_1660(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return 1;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, iParam8))
	{
		return 0;
	}
	if (!INVENTORY::_0xDCCAA7C3BFD88862(func_943(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return 0;
	}
	if (bParam9)
	{
		if (!func_1655(Var14, 1))
		{
		}
	}
	return 1;
}

int func_1608(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	int iVar28;

	if (!func_873(bParam9))
	{
		return func_1661(Param0, Param4, iParam8, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return 0;
	}
	if (func_1660(&Param0, &Param4))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_1150(Param0, &Var0, bParam9, 1) || !func_1150(Param4, &Var14, bParam9, 1))
	{
		return 0;
	}
	if (func_1660(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return 0;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, Var14.f_9) || !INVENTORY::_0x780C5B9AE2819807(Var14.f_4, Var0.f_9))
	{
		return 0;
	}
	iVar28 = func_943(0);
	if (!INVENTORY::_0xF2753D691BCDA314(iVar28, &Param0, &Param4))
	{
		return 0;
	}
	if (!INVENTORY::_0x734311E2852760D0(iVar28, &Param0, (Var14.f_10 || iParam8)))
	{
	}
	if (!INVENTORY::_0x734311E2852760D0(iVar28, &Param4, (Var0.f_10 || iParam8)))
	{
	}
	return 1;
}

int func_1609(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (func_1662(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseCompanion"))
	{
		return 1;
	}
	return 0;
}

int func_1610(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return 1;
	}
	return 0;
}

int func_1611()
{
	return 1342496140;
}

int func_1612()
{
	return 446670976;
}

int func_1613()
{
	return 1;
}

int func_1614()
{
	return -868094182;
}

int func_1615()
{
	return 1074477367;
}

int func_1616()
{
	return 1;
}

int func_1617()
{
	return -997197050;
}

int func_1618()
{
	return -2063289686;
}

int func_1619()
{
	return 2;
}

int func_1620()
{
	return -868094182;
}

int func_1621()
{
	return 1074477367;
}

int func_1622()
{
	return 1;
}

int func_1623()
{
	return 1235275977;
}

int func_1624()
{
	return 2030804811;
}

int func_1625()
{
	return 1;
}

int func_1626()
{
	return 1974379573;
}

int func_1627()
{
	return 2024948086;
}

int func_1628()
{
	return 1;
}

void func_1629(int iParam0)
{
	if (func_1663() < iParam0)
	{
		func_1664(iParam0);
	}
}

int func_1630(struct<4> Param0, int iParam4, bool bParam5)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_1665(Param0, iParam4, &Var0, bParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_1631(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_944(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1666(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar5, iVar0, &uVar1))
				{
					iVar4 = uVar1;
					if (iVar4 == iParam1)
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

struct<4> func_1632()
{
	struct<4> Var0;

	Var0 = { func_1144(0) };
	return func_871(856287005, Var0, -218846335, 0);
}

void func_1633(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam1 == -377364164 || iParam1 == 357708345)
	{
		return;
	}
	iVar0 = iParam1;
	PED::_SET_PED_COMPONENT_ENABLED(iParam0, iVar0, false, false, false);
}

int func_1634(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_1153(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1145(iParam0);
	if (iVar0 == -427144552 && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == 307971639 && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_1430(iParam0, 1399091007))
	{
		func_1667(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1635(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_1668(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1669(&Var0, func_1146(0));
	}
	if (!func_1670(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1327(iVar14);
	return uVar15;
}

bool func_1636(int iParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(iParam0);
}

int func_1637(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;

	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_342(uParam1, 128);
	if (func_1325("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1326(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_343(Var4.f_4))
			{
			}
			else if (!WEAPON::_0x705BE297EEBDB95D(Var4.f_4) && !WEAPON::_0xC4DEC3CA8C365A5D(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if (!bVar18 || WEAPON::_0xF29A186ED428B552(Global_35, Var4.f_4))
			{
				if (((WEAPON::_0x0556E9D2ECF39D01(Var4.f_4) && (!WEAPON::_0xC75386174ECE95D5(Var4.f_4) || func_342(uParam1, 16))) && (!WEAPON::_0x6AD66548840472E5(Var4.f_4) || func_342(uParam1, 4))) && (!func_1636(Var4.f_4) || func_342(uParam1, 8)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		func_1327(iVar1);
	}
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
	}
	return iVar0;
}

void func_1638(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;

	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_791(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_1671(1, bVar1, 1, sVar2);
		func_1672(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_1673(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
		func_1674();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_1673(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_1673(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

void func_1639(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;

	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_1675(uParam0->f_2[iVar0 /*2*/], 2) || &uParam0->f_2[iVar0 /*2*/] == iParam1) || &uParam0->f_2[iVar0 /*2*/] == 39)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			else
			{
				if (func_1675(uParam0->f_2[iVar0 /*2*/], 1))
				{
					func_1676(uParam0->f_2[iVar0 /*2*/], 2, 6);
				}
				*(Var4[iVar1 /*2*/]) = { *(uParam0->f_2[iVar0 /*2*/]) };
				iVar1++;
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { *(Var4[iVar0 /*2*/]) };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}

void func_1640(var uParam0, var uParam1, var uParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1677(uParam0, 1))
	{
		func_1678(uParam0, 1);
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = uParam2;
	uParam0->f_2[*uParam0 /*2*/] = uParam1;
	*uParam0++;
}

bool func_1641(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_1497(iParam0, 1) /*3*/] != &Global_1946804->f_57[func_1497(iParam0, 1) /*11*/];
}

void func_1642(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if ((uParam0->f_1[iVar3 /*3*/])->f_1 == 1216705912 || (uParam0->f_1[iVar3 /*3*/])->f_1 == 654181853)
	{
		if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = 1334603721;
		}
		else
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = -1539589426;
			(uParam0->f_1[iVar1 /*3*/])->f_1 = 1155669136;
		}
		if (bParam2)
		{
			func_1585(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1585(iVar3, iVar0);
		}
	}
	if ((uParam0->f_1[iVar2 /*3*/])->f_1 == -1333118809 || (uParam0->f_1[iVar2 /*3*/])->f_1 == -1158926300)
	{
		(uParam0->f_1[iVar2 /*3*/])->f_1 = 1155669136;
		if (bParam3)
		{
			func_1585(iVar2, iVar0);
		}
	}
}

int func_1643(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_1679();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1644(var uParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(uParam0, uParam1, uParam3))
	{
		if (PED::_0x6243635AF2F1B826(uParam0, iVar0, uParam1, uParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1645(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return 1;
}

int func_1646(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == &Global_1946804->f_57[func_1497(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_1485(524288))
	{
		switch (iParam1)
		{
			case 673166414:
				iVar0++;
				break;
			case -207860920:
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + PED::_0x31B2E7F2E3C58B89(iParam0, 1155669136, iParam2, bParam3));
	return iVar0;
}

int func_1647(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 25;
	iVar1 = 0;
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	return iVar1;
}

void func_1648(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*(Global_1946804->f_1497.f_1[iParam0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iParam0 /*3*/]) };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_1() == -1)
	{
		func_1680(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_26795.f_776);
	}
	else
	{
		func_1681(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_36637.f_45.f_350.f_1011);
	}
}

int func_1649(int iParam0, int iParam1)
{
	if (func_1() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26795.f_26[iParam1 /*120*/] && iParam0) != 0;
		}
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] && iParam0) != 0;
	}
	return 0;
}

int func_1650(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 439606975;
		case 6:
			return 1661121390;
		case 7:
			return 1164374808;
		case 8:
			return 1160643979;
		case 9:
			return 624063935;
		case 10:
			return -1476781101;
		case 11:
			return 294553332;
		case 12:
			return 1788874135;
		case 15:
			return 1560492757;
		case 16:
			return -769081407;
		case 17:
			return 1902428294;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return 688004210;
		case 0:
			return 166243423;
		case 1:
			return 1383300684;
		case 2:
			return 2051441678;
		case 3:
			return 162509669;
		case 4:
			return 635948769;
		case 5:
			return 274995506;
		case 24:
			return -1826731591;
		case 25:
			return 2119049229;
		case 26:
			return 1352942778;
		case 27:
			return 1964379549;
		case 28:
			return 1201189539;
		case 21:
			return 1351927599;
		case 22:
			return 2032023096;
		case 23:
			return -291256376;
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return -1205612021;
		case 93:
			return 890706995;
		case 90:
			return 1156438275;
		case 91:
			return -1611873049;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return -361635024;
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return -409616653;
		case 29:
			return 509954990;
		case 30:
			return -445916744;
		case 31:
			return -866249154;
		case 32:
			return -2077063704;
		case 33:
			return 205207539;
		case 34:
			return -1033657275;
		case 35:
			return 1806002837;
		case 36:
			return 705324896;
		case 37:
			return -1541763703;
		case 38:
			return 387052410;
		case 39:
			return -361288914;
		case 40:
			return -911054515;
		case 41:
			return 1084200963;
		case 42:
			return 1847948074;
		case 43:
			return -1212526764;
		case 44:
			return 1851440270;
		case 45:
			return -2028985700;
		case 46:
			return 1074435214;
		case 47:
			return -883015675;
		case 48:
			return -1047155604;
		case 49:
			return 1123231221;
		case 50:
			return 1866989210;
		case 51:
			return 478183719;
		case 52:
			return -1698955868;
		case 53:
			return -2029378634;
		case 54:
			return 1339864416;
		case 55:
			return 890998115;
		case 56:
			return -1376288999;
		case 57:
			return -1041123771;
		case 58:
			return 1389254668;
		case 59:
			return -346112633;
		case 60:
			return 773309172;
		default:
			break;
	}
	return 0;
}

void func_1651(int iParam0, bool bParam1, int iParam2)
{
	func_1682(&(Global_1946804->f_1378), iParam0);
	func_1683(2, iParam0, 6);
	if (bParam1)
	{
		func_1652(0, 1);
	}
}

void func_1652(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1684(0);
	}
	if (bParam0)
	{
		func_1483(8);
		func_1483(512);
	}
	else
	{
		func_1483(8);
		func_1483(16);
	}
}

bool func_1653(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_1654()
{
	return Global_1109400->f_244;
}

int func_1655(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_873(0))
	{
		return func_1685(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1150(Param0, &Var0, 0, 0))
	{
		return 0;
	}
	if (Var0.f_10 == iParam4)
	{
		return 1;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_943(0), &Param0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1656(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = func_1606(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_1144(0) };
	if (func_1686(&Var1, iVar0, 0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_1657(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_943(bParam7);
	if (INVENTORY::_0x033EE4B89F3AC545(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return 0;
	}
	if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return 0;
	}
	return 1;
}

int func_1658(var uParam0, var uParam1)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_943(0), uParam0, uParam1, 29, 1))
	{
		return 0;
	}
	return 1;
}

int func_1659(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, var uParam10, bool bParam11)
{
	struct<12> Var0;
	int iVar14;
	int iVar15;
	struct<16> Var16;
	int iVar32;

	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_1150(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_1660(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_1151(Var0.f_4, Param4, iParam8, 0);
	iVar15 = INVENTORY::_0xE80E50BEE276A54A(Var0.f_4, iParam8);
	if (iVar15 >= 0)
	{
		if (iVar14 >= iVar15)
		{
			return -1;
		}
		else if ((iVar14 + Var0.f_11) > iVar15)
		{
			if (bParam11)
			{
				return -1;
			}
			Var0.f_11 = (iVar15 - iVar14);
		}
	}
	Var16 = { func_1687(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = uParam10;
	iVar32 = func_1688(1168099063, &Var16, bParam9);
	if (iVar32 == -1)
	{
		return -1;
	}
	return iVar32;
}

int func_1660(var uParam0, var uParam1)
{
	if (((*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1) && uParam0->f_2 == uParam1->f_2) && uParam0->f_3 == uParam1->f_3)
	{
		return 1;
	}
	return 0;
}

int func_1661(struct<4> Param0, struct<4> Param4, var uParam8, bool bParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	struct<16> Var28;
	struct<16> Var44;
	int iVar60;

	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0) || !INVENTORY::_0xB881CA836CC4B6D4(&Param4))
	{
		return -1;
	}
	if (func_1660(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_1150(Param0, &Var0, 1, 0) || !func_1150(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (func_1660(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!INVENTORY::_0x780C5B9AE2819807(Var0.f_4, Var14.f_9) || !INVENTORY::_0x780C5B9AE2819807(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_1687(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || uParam8);
	Var44 = { func_1687(&Var14) };
	Var44.f_4 = { Var0.f_5 };
	Var44.f_11 = Var0.f_9;
	Var44.f_10 = (Var0.f_10 || uParam8);
	iVar60 = -1;
	if (bParam9)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar60, 712853601, 1168099063))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar60, &Var28, 16) && NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar60, &Var44, 16))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar60))
				{
					func_1689(iVar60, 1);
				}
				else
				{
					NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar60);
					return -1;
				}
			}
			else
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar60);
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	else
	{
		iVar60 = func_1688(1168099063, &Var28, 0);
		iVar60 = func_1688(1168099063, &Var44, 0);
	}
	return iVar60;
}

int func_1662(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_horse_gang_bill"):
		case joaat("a_c_horse_gang_sean"):
		case joaat("a_c_horse_gang_john"):
		case -1486704931:
		case joaat("a_c_horse_gang_dutch"):
		case -1356425746:
		case joaat("a_c_horse_gang_javier"):
		case joaat("a_c_horse_gang_sadie"):
		case joaat("a_c_horse_gang_lenny"):
		case joaat("a_c_horse_gang_micah"):
		case joaat("a_c_horse_gang_hosea"):
		case -575759638:
		case joaat("a_c_horse_gang_charles"):
		case 291878635:
		case joaat("a_c_horse_gang_trelawney"):
		case 1139858530:
		case 1760888205:
		case 1800725969:
			return 1;
	}
	return 0;
}

int func_1663()
{
	return Global_40.f_1095.f_3135;
}

void func_1664(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

int func_1665(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x22E590F108289A9D(func_943(bParam6), &uParam0, uParam4, &Var0))
	{
		return 0;
	}
	if (!func_1150(Var0, uParam5, bParam6, 0))
	{
		return 0;
	}
	return 1;
}

int func_1666(int iParam0)
{
	int iVar0;

	if (!func_1153(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_944(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

void func_1667(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*uParam1 = 1802325493;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case -1202134084:
			*uParam1 = -864693164;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case 1297050066:
			*uParam1 = -603289736;
			*uParam2 = 1232099469; /* GXTEntry: "Revolver Cartridges - Express" */
			break;
		case -1780177928:
			*uParam1 = -1803237008;
			*uParam2 = -2084181920; /* GXTEntry: "Revolver Cartridges - High Velocity" */
			break;
		case -1467836497:
			*uParam1 = -1175521284;
			*uParam2 = joaat("ammo_pistol");
			break;
		case 1723805622:
			*uParam1 = -1559549888;
			*uParam2 = joaat("ammo_pistol");
			break;
		case -153287664:
			*uParam1 = -1650796693;
			*uParam2 = 836939099; /* GXTEntry: "Pistol Cartridges - Express" */
			break;
		case 1845082736:
			*uParam1 = -1521597660;
			*uParam2 = -1411815376; /* GXTEntry: "Pistol Cartridges - High Velocity" */
			break;
		case 406755377:
			*uParam1 = -1288829256;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 1469029564:
			*uParam1 = 1393841762;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 45760211:
			*uParam1 = -851229814;
			*uParam2 = 1654725195; /* GXTEntry: "Rifle Cartridges - Express" */
			break;
		case -276295943:
			*uParam1 = 914704115;
			*uParam2 = 1858824185; /* GXTEntry: "Rifle Cartridges - High Velocity" */
			break;
		case -2029793397:
			*uParam1 = -219896679;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case 2120467495:
			*uParam1 = 516838334;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case -2075613923:
			*uParam1 = -385817936;
			*uParam2 = -578347576; /* GXTEntry: "Repeater Cartridges - Express" */
			break;
		case 122656217:
			*uParam1 = 1192843172;
			*uParam2 = 231465488; /* GXTEntry: "Repeater Cartridges - High Velocity" */
			break;
		case 2107187484:
			*uParam1 = 954871696;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case -791844268:
			*uParam1 = -1217273132;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case 305770744:
			*uParam1 = -2087227528;
			*uParam2 = 314966081; /* GXTEntry: "Shotgun - Slug" */
			break;
		case 550900979:
			*uParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

struct<14> func_1668(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	return Var0;
}

void func_1669(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_1670(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_943(bParam3), uParam0, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_1671(int iParam0, bool bParam1, int iParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_7, iParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_9, sParam3);
}

void func_1672(bool bParam0, bool bParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1690(0, 1, bParam0, bParam1);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[1]), bParam2);
	if (bParam0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), 0);
	}
	else if (bParam1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[1]), "rpg_cold");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[1]), "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), 1);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[1]), "rpg_hot");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[1]), "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), 1);
	}
}

int func_1673(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200f);
	return BUILTIN::CEIL((100f * fVar0));
}

void func_1674()
{
	func_1691();
	func_1692();
	func_1693();
}

bool func_1675(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1676(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1677(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1678(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_1679()
{
	return Global_1946804->f_1;
}

void func_1680(var uParam0, int iParam1, int iParam2)
{
	*((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_1681(var uParam0, int iParam1, int iParam2)
{
	*((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_1682(var uParam0, int iParam1)
{
	int iVar0;

	if (func_1() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		(Global_26795.f_26[iParam1 /*120*/])->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_1680(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	(Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_1681(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
		iVar0++;
	}
}

void func_1683(int iParam0, int iParam1, int iParam2)
{
	if (func_1() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26795.f_26[iParam1 /*120*/] = (Global_26795.f_26[iParam1 /*120*/] || iParam0);
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36637.f_45.f_350.f_26[iParam1 /*120*/] = (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] || iParam0);
	}
}

void func_1684(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

int func_1685(struct<4> Param0, int iParam4, bool bParam5)
{
	int iVar0;
	struct<11> Var1;
	int iVar15;
	struct<28> Var16;
	struct<17> Var44;
	struct<16> Var61;

	iVar0 = -1;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_1150(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_1145(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_1694(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1695(-1230526146, &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var44 = { func_1696(Param0, 1) };
		Var44.f_10 = iParam4;
		iVar0 = func_1697(-1230526146, &Var44, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var61 = { func_1687(&Var1) };
		Var61.f_10 = iParam4;
		iVar0 = func_1688(-1230526146, &Var61, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1686(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::_0x033EE4B89F3AC545(func_943(bParam2), uParam0, iParam1);
}

struct<16> func_1687(var uParam0)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	return Var0;
}

int func_1688(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 16))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1689(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1689(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16))
	{
		func_1689(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1689(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1224226)
	{
		if (&Global_1224226->f_1[iVar0 /*9*/] == iParam0)
		{
			if ((Global_1224226->f_1[iVar0 /*9*/])->f_1 == iParam1)
			{
			}
			else
			{
				(Global_1224226->f_1[iVar0 /*9*/])->f_1 = iParam1;
			}
			return;
		}
		iVar0++;
	}
	func_1698(iParam0, iParam1);
}

char* func_1690(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_791(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_791(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				default:
					break;
			}
			break;
	}
	return "";
}

float func_1691()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_1699())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1700(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1700(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1701();
	fVar2 = func_1702();
	fVar3 = func_1703();
	fVar4 = func_1704();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1705()));
	fVar7 = (func_1700(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1706(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1707(3, fVar9, fVar9 > 100f);
	return func_1708(fVar7, -100f, 100f);
}

float func_1692()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_1699())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1700(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1700(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1701();
	fVar2 = func_1702();
	fVar3 = func_1703();
	fVar4 = func_1704();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1705()));
	fVar7 = (func_1700(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1706(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1707(2, fVar9, fVar9 > 100f);
	return func_1708(fVar7, -100f, 100f);
}

float func_1693()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_1699())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1700(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1709())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1710())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1700(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1701();
	fVar2 = func_1702();
	fVar3 = func_1703();
	fVar4 = func_1704();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1705()));
	fVar7 = (func_1700(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1706(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1707(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_1700(0);
	}
	return func_1708(fVar7, -100f, 100f);
}

struct<28> func_1694(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<28> Var0;
	struct<29> Var28;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_943(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1687(&Var28) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1695(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 28))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1689(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1689(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 28))
	{
		func_1689(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_1696(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<17> Var0;
	struct<15> Var17;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_943(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1687(&Var17) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1697(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 17))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1689(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1689(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_1689(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1698(int iParam0, int iParam1)
{
	int iVar0;
	struct<9> Var1;

	if (iParam0 == -1)
	{
		return;
	}
	if (&Global_1224226 < 20)
	{
		Global_1224226 = &Global_1224226 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1224226->f_1[iVar0 /*9*/]) = { *(Global_1224226->f_1[iVar0 + 1 /*9*/]) };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	*(Global_1224226->f_1[(&Global_1224226 - 1) /*9*/]) = { Var1 };
}

int func_1699()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	return Global_1347477->f_203;
}

float func_1700(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1701()
{
	float fVar0;
	int iVar1;

	fVar0 = func_1711(13);
	iVar1 = func_1712(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_1702()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1703()
{
	if (func_1558())
	{
		if (DLC::_0xA16B4FBA7887D7BA())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1704()
{
	if (Global_40.f_39 == 11966224)
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_1705()
{
	return Global_1955565->f_3;
}

void func_1706(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;

	sVar0 = func_1690(iParam0, 1, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[1]), iParam2);
}

void func_1707(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1690(iParam0, 2, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[2]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[2]), bParam2);
	if (fParam1 > 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), 859817522);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 1);
	}
	else if (fParam1 < 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), 1105014447);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 1);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 0);
	}
}

float func_1708(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_1709()
{
	return func_1711(12) <= -99f;
}

bool func_1710()
{
	return func_1711(12) >= 99f;
}

float func_1711(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_1712(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

