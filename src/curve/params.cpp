#include "curve/params.h"

CurveParams::CurveParams() {
    this->a_param_80 = "type a\n"
                                            "q 729805231311250617838420114323813257446451919\n"
                                            "h 2\n"
                                            "r 364902615655625308919210057161906628723225959\n"
                                            "exp2 79\n"
                                            "exp1 53\n"
                                            "sign1 1\n"
                                            "sign0 1";
    this->a_param_112 = "type a\n"
                                             "q 335062945203603384603759567183613233121674422082506213\n"
                                             "h 2\n"
                                             "r 167531472601801692301879783591806616560837211041253106\n"
                                             "exp2 111\n"
                                             "exp1 71\n"
                                             "sign1 1\n"
                                             "sign0 1";

    this->a_param_128 = "type a\n"
                                             "q 212619466671545981970709110080593291028688483955729940696213\n"
                                             "h 2\n"
                                             "r 106309733335772990985354555040296645514344241977864970348106\n"
                                             "exp2 127\n"
                                             "exp1 83\n"
                                             "sign1 1\n"
                                             "sign0 1";

    this->a_param = "type a\n"
                                         "q 8780710799663312522437781984754049815806883199414208211028653399266475630880222957078625179422662221423155858769582317459277713367317481324925129998224791\n"
                                         "h 12016012264891146079388821366740534204802954401251311822919615131047207289359704531102844802183906537786776\n"
                                         "r 730750818665451621361119245571504901405976559617\n"
                                         "exp2 159\n"
                                         "exp1 107\n"
                                         "sign1 1\n"
                                         "sign0 1";

    this->a_param_160 = "type a\n"
                                             "q 2695994666715063979466701508701963067363714442254057248110361024924206057218029649058728415294223221796183084138253169472873\n"
                                             "h 2\n"
                                             "r 1347997333357531984733350754350981533681857221127028624055180512462103028609014824529364207646616598091545291066307962359\n"
                                             "exp2 159\n"
                                             "exp1 107\n"
                                             "sign1 1\n"
                                             "sign0 1";

    this->a1_param = "type a1\n"
                                          "p 48512875896303752499712277254589628516419352188294521198189567511009073158115045361294839347099315898960045398524682007334164928531594799149100548036445760110913157420655690361891290858441360807158247259460501343449199712532828063940008683740048500980441989713739689655610578458388126934242630557397618776539259\n"
                                          "n 36203638728584889925158415861634051131656232976339194924022065306723188923966451762160327870969638730567198058600508960697138006366861790409776528385407283664860565239295291314844246909284597617282274074224254733917313218308080644731349763985110821627195514711746037056425804819692632040479575042834043863089\n"
                                          "l 1340";

    this->d159_param = "type d\n"
                                            "q 625852803282871856053922297323874661378036491717\n"
                                            "n 625852803282871856053923088432465995634661283063\n"
                                            "h 3\n"
                                            "r 208617601094290618684641029477488665211553761021\n"
                                            "a 581595782028432961150765424293919699975513269268\n"
                                            "b 517921465817243828776542439081147840953753552322\n"
                                            "k 6\n"
                                            "nk 60094290356408407130984161127310078516360031868417968262992864809623507269833854678414046779817844853757026858774966331434198257512457993293271849043664655146443229029069463392046837830267994222789160047337432075266619082657640364986415435746294498140589844832666082434658532589211525696\n"
                                            "hk 1380801711862212484403205699005242141541629761433899149236405232528956996854655261075303661691995273080620762287276051361446528504633283152278831183711301329765591450680250000592437612973269056\n"
                                            "coeff0 472731500571015189154958232321864199355792223347\n"
                                            "coeff1 352243926696145937581894994871017455453604730246\n"
                                            "coeff2 289113341693870057212775990719504267185772707305\n"
                                            "nqr 431211441436589568382088865288592347194866189652";

    this->d201_param = "type d\n"
                                            "q 2094476214847295281570670320144695883131009753607350517892357\n"
                                            "n 2094476214847295281570670320143248652598286201895740019876423\n"
                                            "h 1122591\n"
                                            "r 1865751832009427548920907365321162072917283500309320153\n"
                                            "a 9937051644888803031325524114144300859517912378923477935510\n"
                                            "b 6624701096592535354217016076096200573011941585948985290340\n"
                                            "k 6\n"
                                            "nk 84421409121513221644716967251498543569964760150943970280296295496165154657097987617093928595467244393873913569302597521196137376192587250931727762632568620562823714441576400096248911214941742242106512149305076320555351603145285797909942596124862593877499051211952936404822228308154770272833273836975042632765377879565229109013234552083886934379264203243445590336\n"
                                            "hk 24251848326363771171270027814768648115136299306034875585195931346818912374815385257266068811350396365799298585287746735681314613260560203359251331805443378322987677594618057568388400134442772232086258797844238238645130212769322779762522643806720212266304\n"
                                            "coeff0 362345194706722765382504711221797122584657971082977778415831\n"
                                            "coeff1 856577648996637037517940613304411075703495574379408261091623\n"
                                            "coeff2 372728063705230489408480761157081724912117414311754674153886\n"
                                            "nqr 279252656555925299126768437760706333663688384547737180929542";

    this->d224_param = "type d\n"
                                            "q 15028799613985034465755506450771565229282832217860390155996483840017\n"
                                            "n 15028799613985034465755506450771561352583254744125520639296541195021\n"
                                            "h 1\n"
                                            "r 15028799613985034465755506450771561352583254744125520639296541195021\n"
                                            "a 1871224163624666631860092489128939059944978347142292177323825642096\n"
                                            "b 9795501723343380547144152006776653149306466138012730640114125605701\n"
                                            "k 6\n"
                                            "nk 11522474695025217370062603013790980334538096429455689114222024912184432319228393204650383661781864806076247259556378350541669994344878430136202714945761488385890619925553457668158504202786580559970945936657636855346713598888067516214634859330554634505767198415857150479345944721710356274047707536156296215573412763735135600953865419000398920292535215757291539307525639675204597938919504807427238735811520\n"
                                            "hk 51014915936684265604900487195256160848193571244274648855332475661658304506316301006112887177277345010864012988127829655449256424871024500368597989462373813062189274150916552689262852603254011248502356041206544262755481779137398040376281542938513970473990787064615734720\n"
                                            "coeff0 11975189258259697166257037825227536931446707944682470951111859446192\n"
                                            "coeff1 13433042200347934827742738095249546804006687562088254057411901362771\n"
                                            "coeff2 8327464521117791238079105175448122006759863625508043495770887411614\n"
                                            "nqr 142721363302176037340346936780070353538541593770301992936740616924";

    this->d105171_196_185_param = "type d\n"
                                                       "q 90144054120102937439179516551801119443207521965651508326977\n"
                                                       "n 90144054120102937439179516552101359437412329625948146453801\n"
                                                       "h 3523\n"
                                                       "r 25587298927080027658012919827448583433838299638361665187\n"
                                                       "a 53241464724463691897001131065853762954208272388634868483573\n"
                                                       "b 5446291776274815451607581859968802155069674270539409546723\n"
                                                       "k 6\n"
                                                       "nk 536565217356706344663314419655601558604376922027564701618757289270614360593294739461568130362279778081437146273088457636627768012396592169059882662689261645948113285006858612654825829457395553891546397990662355454563776046265747800873542312230073566643975827908869710713161941935371830987701273239900997531501272405727670675418703842862606824000125008640\n"
                                                       "hk 819546557806423450339849940898193664969813698879192227897917671302330185914203886301113045602626676261586588840857293388779160133822229389038218318388504449595493650939257095992443062327856033482709266319687677297858891026083277228064475554560\n"
                                                       "coeff0 43907136006531280293838495445857758305366399383908394927288\n"
                                                       "coeff1 21720089592072695009765372832780685887129370300993349347738\n"
                                                       "coeff2 11773373318911376280677890769414834592007872486079550520860\n"
                                                       "nqr 4468071665857441743453009416233415235254714637554162977327";

    this->d277699_175_167_param = "type d\n"
                                                       "q 24994387946177175129042685848468049026804978919305617\n"
                                                       "n 24994387946177175129042685690371913886893430450813821\n"
                                                       "h 229\n"
                                                       "r 109145798891603384842981160219964689462416726859449\n"
                                                       "a 598438980536154202688764346450047600409548341922774\n"
                                                       "b 2875105607672412900453598974161063211122182087044229\n"
                                                       "k 6\n"
                                                       "nk 243811978207976466816344961736020867657571589744716369993616160430124878187777534556332968211231348405325558364420372020389334407618390934280171068317414599279780297481622580529528050992634268269363295483561945471307823553023060227602413124921195950792341822316780542925838280447629986129163382236857435952423222720\n"
                                                       "hk 20466377960554454661250703981850495382861210804514548253197536030737388862020158040530944627371011675413446234288217324489952533357398143673990515812569649274174108257473718452526832616061894959492351305900495030720\n"
                                                       "coeff0 10041240416257104004698194348998922958451952509010108\n"
                                                       "coeff1 6606091442536002616272024969858190106364268669962931\n"
                                                       "coeff2 12365372508104594162350045194732619146000136006974723\n"
                                                       "nqr 4719190100394795070479603407875910135476373878231286";

    this->d278027_190_181_param = "type d\n"
                                                       "q 1025495854338995749571854560267623501674077942914916484097\n"
                                                       "n 1025495854338995749571854560299646865868662429911796824033\n"
                                                       "h 507\n"
                                                       "r 2022674268913206606650600710650191056940162583652459219\n"
                                                       "a 494269185205966411737543736898850690664292886001616030226\n"
                                                       "b 329512790137310941158362491265900460442861924001077353484\n"
                                                       "k 6\n"
                                                       "nk 1163063573811270165418238020887346859653395473890436628526146579469835139893592951370316986442274188522240665142315088845208474263130963692231646660745632465067191546037520099467878991038317453245980447223411653285837935397784647413623321732546136850572717414092922159420979113590712309473365852809027797574703469302515439503999924539399090176\n"
                                                       "hk 284283435268437561375615427397926034491451593725613267750320269284935326382124567760429621954504595753708251572460518724890352303911035771114654446079537012334942433977914482649786330507074232745179428411947147165283593756194384162816\n"
                                                       "coeff0 371147398957045566296469880060929177532640478149373679647\n"
                                                       "coeff1 799893859981434553395477926437166938993746654077284825629\n"
                                                       "coeff2 487916511441855364478875403860530511399828011671346895561\n"
                                                       "nqr 229823540541650681569938894061962046762057059051593485287";

    this->e_param = "type e\n"
                                         "q 7245986106510086080714203333362098431608853335867425877960916928496629182991629664903654100214900946450053872786629995869445693724001299041657434948257845644905153122838458864000479326695430719258600053239930483226650953770354174712511646273516974069245462534034085895319225452125649979474047163305307830001\n"
                                         "r 730750862221594424981965739670091261094297337857\n"
                                         "h 13569343110918781839835249021482970252603216587988030044836106948825516930173270978617489032334001006615524543925753725725046733884363846960470444404747241287743773746682188521738728797153760275116924829183670000\n"
                                         "a 7130970454025799000067946137594446075551569949583815943390108723282396973737794273397246892274981883807989525599540630855644968426794929215599380425269625872763801485968007136000471718335185787206876242871042697778608875139078711621836858237429403052273312335081163896980825048123655535355411494046493419999\n"
                                         "b 7169309004853894693616698536183663527570664411678352588247044791687141043489072737232715961588288238022010974661903752526911876859197052490952065266265699130144252031591491045333807587788600764557450846327338626261289568016170532652061787582791926724597362401398804563093625182790987016728290050466098223333\n"
                                         "exp2 159\n"
                                         "exp1 135\n"
                                         "sign1 1\n"
                                         "sign0 1";

    this->f_param = "type f\n"
                                         "q 205523667896953300194896352429254920972540065223\n"
                                         "r 205523667896953300194895899082072403858390252929\n"
                                         "b 40218105156867728698573668525883168222119515413\n"
                                         "beta 115334401956802802075595682801335644058796914268\n"
                                         "alpha0 191079354656274778837764015557338301375963168470\n"
                                         "alpha1 71445317903696340296199556072836940741717506375";
    
    this->sm9_param = "type f\n"
                                           "q 82434016654578246444830763105245969129603161266935169637912592173415460324733\n"
                                           "r 82434016654578246444830763105245969129316048019845143771873730126023764135717\n"
                                           "b 5\n"
                                           "t 6917529027646912906\n"
                                           "beta 82434016654578246444830763105245969129603161266935169637912592173415460324731\n"
                                           "alpha0 0\n"
                                           "alpha1 82434016654578246444830763105245969129603161266935169637912592173415460324732";

    this->g149_param = "type g\n"
                                            "q 503189899097385532598615948567975432740967203\n"
                                            "n 503189899097385532598571084778608176410973351\n"
                                            "h 1\n"
                                            "r 503189899097385532598571084778608176410973351\n"
                                            "a 465197998498440909244782433627180757481058321\n"
                                            "b 463074517126110479409374670871346701448503064\n"
                                            "k 10\n"
                                            "nk 1040684643531490707494989587381629956832530311976146077888095795458709511789670022388326295177424065807612879371896982185473788988016190582073591316127396374860265835641044035656044524481121528846249501655527462202999638159773731830375673076317719519977183373353791119388388468745670818193868532404392452816602538968163226713846951514831917487400267590451867746120591750902040267826351982737642689423713163967384383105678367875981348397359466338807\n"
                                            "hk 4110127713690841149713310614420858884651261781185442551927080083178682965171097172366598236129731931693425629387502221804555636704708008882811353539555915064049685663790355716130262332064327767695339422323460458479884756000782939428852120522712008037615051139080628734566850259704397643028017435446110322024094259858170303605703280329322675124728639532674407\n"
                                            "coeff0 67343110967802947677845897216565803152319250\n"
                                            "coeff1 115936772834120270862756636148166314916823221\n"
                                            "coeff2 87387877425076080433559927080662339215696505\n"
                                            "coeff3 433223145899090928132052677121692683015058909\n"
                                            "coeff4 405367866213598664862417230702935310328613596\n"
                                            "nqr 22204504160560785687198080413579021865783099";

    this->i_param = "type i\n"
                                         "m 97\n"
                                         "t 12\n"
                                         "n 2726865189058261010774960798134976187171462721\n"
                                         "n2 7";
}

const std::string Curve::curve_names[17] = {
    "A",
    "A1",
    "E",
    "I",
    "A_80",
    "A_112",
    "A_128",
    "A_160",
    "SM9",
    "D_159",
    "D_201",
    "D_224",
    "D_105171_196_185",
    "D_277699_175_167",
    "D_278027_190_181",
    "F",
    "G_149"
};