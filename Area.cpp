#include"Area.h"
namespace Area {
	std::wstring province[50];
//	std::wstring rprovince[50];
	vector <wstring> city;
	wstring ct[] = { L"唐山",L"秦皇岛",L"邯郸",L"邢台",L"保定",L"张家口",L"承德",L"沧州",L"廊坊",L"衡水",L"太原",L"大同",L"阳泉",L"长治",L"晋城",L"朔州",L"晋中",L"运城",L"忻州",L"临汾",L"吕梁",L"呼和浩特",L"包头",L"乌海",L"赤峰",L"通辽",L"鄂尔多斯",L"呼伦贝尔",L"巴彦淖尔",L"乌兰察布",L"沈阳",L"大连",L"鞍山",L"抚顺",L"本溪",L"丹东",L"锦州",L"营口",L"阜新",L"辽阳",L"盘锦",L"铁岭",L"朝阳",L"葫芦岛",L"长春",L"吉林",L"四平",L"辽源",L"通化",L"白山",L"松原",L"白城",L"哈尔滨",L"齐齐哈尔",L"鸡西",L"鹤岗",L"双鸭山",L"大庆",L"伊春",L"佳木斯",L"七台河",L"牡丹江",L"黑河",L"绥化",L"大兴安岭",L"南京",L"无锡",L"徐州",L"常州",L"苏州",L"南通",L"连云港",L"淮安",L"盐城",L"扬州",L"镇江",L"泰州",L"宿迁",L"杭州",L"宁波",L"温州",L"嘉兴",L"湖州",L"绍兴",L"金华",L"衢州",L"舟山",L"台州",L"丽水",L"合肥",L"芜湖",L"蚌埠",L"淮南",L"马鞍山",L"淮北",L"铜陵",L"安庆",L"黄山",L"滁州",L"阜阳",L"宿州",L"巢湖",L"六安",L"亳州",L"池州",L"宣城",L"福州",L"厦门",L"莆田",L"三明",L"泉州",L"漳州",L"南平",L"龙岩",L"宁德",L"南昌",L"景德镇",L"萍乡",L"九江",L"新余",L"鹰潭",L"赣州",L"吉安",L"宜春",L"抚州",L"上饶",L"济南",L"青岛",L"淄博",L"枣庄",L"东营",L"烟台",L"潍坊",L"威海",L"济宁",L"泰安",L"日照",L"莱芜",L"临沂",L"德州",L"聊城",L"滨州",L"菏泽",L"郑州",L"开封",L"洛阳",L"平顶山",L"焦作",L"鹤壁",L"新乡",L"安阳",L"濮阳",L"许昌",L"漯河",L"三门峡",L"南阳",L"商丘",L"信阳",L"周口",L"驻马店",L"武汉",L"黄石",L"襄樊",L"十堰",L"荆州",L"宜昌",L"荆门",L"鄂州",L"孝感",L"黄冈",L"咸宁",L"随州",L"长沙",L"株洲",L"湘潭",L"衡阳",L"邵阳",L"岳阳",L"常德",L"张家界",L"益阳",L"郴州",L"永州",L"怀化",L"娄底",L"广州",L"深圳",L"珠海",L"汕头",L"韶关",L"佛山",L"江门",L"湛江",L"茂名",L"肇庆",L"惠州",L"梅州",L"汕尾",L"河源",L"阳江",L"清远",L"东莞",L"中山",L"潮州",L"揭阳",L"云浮",L"南宁",L"柳州",L"桂林",L"梧州",L"北海",L"防城港",L"钦州",L"贵港",L"玉林",L"百色",L"贺州",L"河池",L"来宾",L"崇左",L"海口",L"三亚",L"成都",L"自贡",L"攀枝花",L"泸州",L"德阳",L"绵阳",L"广元",L"遂宁",L"内江",L"乐山",L"南充",L"宜宾",L"广安",L"达州",L"眉山",L"雅安",L"巴中",L"资阳",L"贵阳",L"六盘水",L"遵义",L"安顺",L"铜仁",L"毕节",L"黔西南",L"黔东南",L"黔南",L"昆明",L"曲靖",L"玉溪",L"保山",L"昭通",L"丽江",L"普洱",L"临沧",L"拉萨",L"昌都",L"山南",L"日喀则",L"那曲",L"林芝",L"西安",L"铜川",L"宝鸡",L"咸阳",L"渭南",L"延安",L"汉中",L"榆林",L"安康",L"商洛",L"兰州",L"嘉峪关",L"金昌",L"白银",L"天水",L"武威",L"张掖",L"平凉",L"酒泉",L"庆阳",L"定西",L"陇南",L"西宁",L"海东",L"银川",L"石嘴山",L"吴忠",L"固原",L"中卫",L"乌鲁木齐",L"克拉玛依",L"吐鲁番",L"哈密",L"和田",L"阿克苏",L"喀什",L"塔城",L"阿里",L"阿勒泰",L"博尔塔拉蒙古",L"克孜勒苏柯尔克孜",L"昌吉",L"巴音郭楞蒙古",L"伊犁哈萨克",L"海北",L"黄南",L"海南",L"果洛",L"玉树",L"海西",L"文山",L"红河",L"西双版纳",L"楚雄",L"大理",L"德宏",L"怒江",L"迪庆",L"黔西南",L"黔东南",L"黔南",L"阿坝",L"甘孜",L"湘西",L"延边",L"临夏",L"甘南",L"凉山",L"恩施",L"兴安",L"锡林郭勒",L"阿拉善" };
	int type[50];
	void init() {
		for (int i = 1; i <= 34; i++)type[i] = 4;
		for (int i = 1; i <= 4; i++) type[i] = 1;
		for (int i = 4; i <= 9; i++) type[i] = 2;
		for (int i = 33; i <= 34; i++)type[i] = 3;
		province[1] = L"北京";	province[2] = L"上海";	province[3] = L"天津";	province[4] = L"重庆";
		province[5] = L"内蒙古";	province[6] = L"新疆";	province[7] = L"广西";	province[8] = L"西藏";
		province[9] = L"宁夏";	province[10] = L"辽宁";	province[11] = L"吉林";	province[12] = L"黑龙江";
		province[13] = L"河北";	province[14] = L"山西";	province[15] = L"陕西";	province[16] = L"甘肃";
		province[17] = L"青海";	province[18] = L"山东";	province[19] = L"安徽";	province[20] = L"江苏";
		province[21] = L"浙江";	province[22] = L"河南";	province[23] = L"湖北";	province[24] = L"湖南";
		province[25] = L"江西";	province[26] = L"台湾";	province[27] = L"福建";	province[28] = L"云南";
		province[29] = L"海南";	province[30] = L"四川";	province[31] = L"贵州";	province[32] = L"广东";
		province[33] = L"香港";	province[34] = L"澳门";
		
		city.clear();
		for (int i = 0; i < 335; i++) city.push_back(ct[i]);
		/*ifstream fin("city.txt");
		string s;
		while (fin >> s) {
			wstring str = UTF8ToUnicode(s);
			city.push_back(str);
		}*/
		/*string s;
		ofstream fout("3.txt");
		for (int i = 0; i < (int)city.size(); i++) 
		if(i==331 || i==300 || i==294){
			s = UnicodeToUTF8(city[i]);
			fout << s << "\n";
		}*/
		//cout << (city.size());
		//system("pause");
	}

	std::string UnicodeToUTF8(const wstring&s) {
		std::string ret;
		wstring_convert<codecvt_utf8<wchar_t> > wcv;
		ret = wcv.to_bytes(s);
		return ret;
	}
	wstring UTF8ToUnicode(const string &s) {
		wstring ret;
		wstring_convert<codecvt_utf8<wchar_t> > wcv;
		ret = wcv.from_bytes(s);
		return ret;
	}
};