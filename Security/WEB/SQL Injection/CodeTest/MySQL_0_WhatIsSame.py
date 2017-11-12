import pymysql.cursors
import string
from time import sleep

alphabet = string.ascii_lowercase

conn = pymysql.connect(host='localhost', user='root', password='apartapart', charset='utf8mb4')
cur = conn.cursor()

sql = "select if('{}'='{}',10,0);"

results = {}

def Findthem():
    for c in alphabet:
        for uni in range(32, 10000):
            if (chr(uni) is "'" or chr(uni) is '"' or chr(uni) is "\\"):
                continue
            print(sql.format(c, chr(uni)), ":", uni)
            cur.execute(sql.format(c, chr(uni)))
            result = cur.fetchone()
            if (result[0] == 10):
                print('CASE', c)
                if (results.keys().__contains__(c) == False):
                    results[c] = [];
                results[c].append(uni)
                print("Find them!!", results[c])
    print("END CASE", c, "\n", results[c])
    sleep(2)
    return results

def __printdic__(dic):
    print('{')
    for key, value in dic.items():
        tempstr = ''
        for i in value:
            tempstr += chr(i) + " "
        print("\t" + key + " : [ " + tempstr + "]")
    print('}')

def __main__():
    dic = Findthem()
    __printdic__(dic)

__main__()

'''
{
	a : [ A a À Á Â Ã Ä Å à á â ã ä å Ā ā Ă ă Ą ą Ǎ ǎ Ǟ ǟ Ǡ ǡ Ǻ ǻ Ȁ ȁ Ȃ ȃ Ȧ ȧ Ḁ ḁ Ạ ạ Ả ả Ấ ấ Ầ ầ Ẩ ẩ Ẫ ẫ Ậ ậ Ắ ắ Ằ ằ Ẳ ẳ Ẵ ẵ Ặ ặ ]
	b : [ B b Ḃ ḃ Ḅ ḅ Ḇ ḇ ]
	c : [ C c Ç ç Ć ć Ĉ ĉ Ċ ċ Č č Ḉ ḉ ]
	d : [ D d Ď ď Ḋ ḋ Ḍ ḍ Ḏ ḏ Ḑ ḑ Ḓ ḓ ]
	e : [ E e È É Ê Ë è é ê ë Ē ē Ĕ ĕ Ė ė Ę ę Ě ě Ȅ ȅ Ȇ ȇ Ȩ ȩ Ḕ ḕ Ḗ ḗ Ḙ ḙ Ḛ ḛ Ḝ ḝ Ẹ ẹ Ẻ ẻ Ẽ ẽ Ế ế Ề ề Ể ể Ễ ễ Ệ ệ ]
	f : [ F f Ḟ ḟ ]
	g : [ G g Ĝ ĝ Ğ ğ Ġ ġ Ģ ģ Ǧ ǧ Ǵ ǵ Ḡ ḡ ]
	h : [ H h Ĥ ĥ Ȟ ȟ Ḣ ḣ Ḥ ḥ Ḧ ḧ Ḩ ḩ Ḫ ḫ ẖ ]
	i : [ I i Ì Í Î Ï ì í î ï Ĩ ĩ Ī ī Ĭ ĭ Į į İ ı Ǐ ǐ Ȉ ȉ Ȋ ȋ Ḭ ḭ Ḯ ḯ Ỉ ỉ Ị ị ]
	j : [ J j Ĵ ĵ ǰ ]
	k : [ K k Ķ ķ Ǩ ǩ Ḱ ḱ Ḳ ḳ Ḵ ḵ ]
	l : [ L l Ĺ ĺ Ļ ļ Ľ ľ Ḷ ḷ Ḹ ḹ Ḻ ḻ Ḽ ḽ ]
	m : [ M m Ḿ ḿ Ṁ ṁ Ṃ ṃ ]
	n : [ N n Ñ ñ Ń ń Ņ ņ Ň ň Ǹ ǹ Ṅ ṅ Ṇ ṇ Ṉ ṉ Ṋ ṋ ]
	o : [ O o Ò Ó Ô Õ Ö ò ó ô õ ö Ō ō Ŏ ŏ Ő ő Ơ ơ Ǒ ǒ Ǫ ǫ Ǭ ǭ Ȍ ȍ Ȏ ȏ Ȫ ȫ Ȭ ȭ Ȯ ȯ Ȱ ȱ Ṍ ṍ Ṏ ṏ Ṑ ṑ Ṓ ṓ Ọ ọ Ỏ ỏ Ố ố Ồ ồ Ổ ổ Ỗ ỗ Ộ ộ Ớ ớ Ờ ờ Ở ở Ỡ ỡ Ợ ợ ]
	p : [ P p Ṕ ṕ Ṗ ṗ ]
	q : [ Q q ]
	r : [ R r Ŕ ŕ Ŗ ŗ Ř ř Ȑ ȑ Ȓ ȓ Ṙ ṙ Ṛ ṛ Ṝ ṝ Ṟ ṟ ]
	s : [ S s ß Ś ś Ŝ ŝ Ş ş Š š ſ Ș ș Ṡ ṡ Ṣ ṣ Ṥ ṥ Ṧ ṧ Ṩ ṩ ẛ ]
	t : [ T t Ţ ţ Ť ť Ț ț Ṫ ṫ Ṭ ṭ Ṯ ṯ Ṱ ṱ ẗ ]
	u : [ U u Ù Ú Û Ü ù ú û ü Ũ ũ Ū ū Ŭ ŭ Ů ů Ű ű Ų ų Ư ư Ǔ ǔ Ǖ ǖ Ǘ ǘ Ǚ ǚ Ǜ ǜ Ȕ ȕ Ȗ ȗ Ṳ ṳ Ṵ ṵ Ṷ ṷ Ṹ ṹ Ṻ ṻ Ụ ụ Ủ ủ Ứ ứ Ừ ừ Ử ử Ữ ữ Ự ự ]
	v : [ V v Ṽ ṽ Ṿ ṿ ]
	w : [ W w Ŵ ŵ Ẁ ẁ Ẃ ẃ Ẅ ẅ Ẇ ẇ Ẉ ẉ ẘ ]
	x : [ X x Ẋ ẋ Ẍ ẍ ]
	y : [ Y y Ý ý ÿ Ŷ ŷ Ÿ Ȳ ȳ Ẏ ẏ ẙ Ỳ ỳ Ỵ ỵ Ỷ ỷ Ỹ ỹ ]
	z : [ Z z Ź ź Ż ż Ž ž Ẑ ẑ Ẓ ẓ Ẕ ẕ ]
}
 {
    'a': [65, 97, 192, 193, 194, 195, 196, 197, 224, 225, 226, 227, 228, 229, 256, 257, 258, 259, 260, 261, 461, 462, 478, 479, 480, 481, 506, 507, 512, 513, 514, 515, 550, 551, 7680, 7681, 7840, 7841, 7842, 7843, 7844, 7845, 7846, 7847, 7848, 7849, 7850, 7851, 7852, 7853, 7854, 7855, 7856, 7857, 7858, 7859, 7860, 7861, 7862, 7863],
    'b': [66, 98, 7682, 7683, 7684, 7685, 7686, 7687],
    'c': [67, 99, 199, 231, 262, 263, 264, 265, 266, 267, 268, 269, 7688, 7689],
    'd': [68, 100, 270, 271, 7690, 7691, 7692, 7693, 7694, 7695, 7696, 7697, 7698, 7699],
    'e': [69, 101, 200, 201, 202, 203, 232, 233, 234, 235, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 516, 517, 518, 519, 552, 553, 7700, 7701, 7702, 7703, 7704, 7705, 7706, 7707, 7708, 7709, 7864, 7865, 7866, 7867, 7868, 7869, 7870, 7871, 7872, 7873, 7874, 7875, 7876, 7877, 7878, 7879],
    'f': [70, 102, 7710, 7711],
    'g': [71, 103, 284, 285, 286, 287, 288, 289, 290, 291, 486, 487, 500, 501, 7712, 7713],
    'h': [72, 104, 292, 293, 542, 543, 7714, 7715, 7716, 7717, 7718, 7719, 7720, 7721, 7722, 7723, 7830],
    'i': [73, 105, 204, 205, 206, 207, 236, 237, 238, 239, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 463, 464, 520, 521, 522, 523, 7724, 7725, 7726, 7727, 7880, 7881, 7882, 7883],
    'j': [74, 106, 308, 309, 496], 'k': [75, 107, 310, 311, 488, 489, 7728, 7729, 7730, 7731, 7732, 7733],
    'l': [76, 108, 313, 314, 315, 316, 317, 318, 7734, 7735, 7736, 7737, 7738, 7739, 7740, 7741],
    'm': [77, 109, 7742, 7743, 7744, 7745, 7746, 7747],
    'n': [78, 110, 209, 241, 323, 324, 325, 326, 327, 328, 504, 505, 7748, 7749, 7750, 7751, 7752, 7753, 7754, 7755],
    'o': [79, 111, 210, 211, 212, 213, 214, 242, 243, 244, 245, 246, 332, 333, 334, 335, 336, 337, 416, 417, 465, 466, 490, 491, 492, 493, 524, 525, 526, 527, 554, 555, 556, 557, 558, 559, 560, 561, 7756, 7757, 7758, 7759, 7760, 7761, 7762, 7763, 7884, 7885, 7886, 7887, 7888, 7889, 7890, 7891, 7892, 7893, 7894, 7895, 7896, 7897, 7898, 7899, 7900, 7901, 7902, 7903, 7904, 7905, 7906, 7907],
    'p': [80, 112, 7764, 7765, 7766, 7767],
    'q': [81, 113],
    'r': [82, 114, 340, 341, 342, 343, 344, 345, 528, 529, 530, 531, 7768, 7769, 7770, 7771, 7772, 7773, 7774, 7775],
    's': [83, 115, 223, 346, 347, 348, 349, 350, 351, 352, 353, 383, 536, 537, 7776, 7777, 7778, 7779, 7780, 7781, 7782, 7783, 7784, 7785, 7835],
    't': [84, 116, 354, 355, 356, 357, 538, 539, 7786, 7787, 7788, 7789, 7790, 7791, 7792, 7793, 7831],
    'u': [85, 117, 217, 218, 219, 220, 249, 250, 251, 252, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 431, 432, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 532, 533, 534, 535, 7794, 7795, 7796, 7797, 7798, 7799, 7800, 7801, 7802, 7803, 7908, 7909, 7910, 7911, 7912, 7913, 7914, 7915, 7916, 7917, 7918, 7919, 7920, 7921],
    'v': [86, 118, 7804, 7805, 7806, 7807],
    'w': [87, 119, 372, 373, 7808, 7809, 7810, 7811, 7812, 7813, 7814, 7815, 7816, 7817, 7832],
    'x': [88, 120, 7818, 7819, 7820, 7821],
    'y': [89, 121, 221, 253, 255, 374, 375, 376, 562, 563, 7822, 7823, 7833, 7922, 7923, 7924, 7925, 7926, 7927, 7928, 7929],
    'z': [90, 122, 377, 378, 379, 380, 381, 382, 7824, 7825, 7826, 7827, 7828, 7829]
 }
'''