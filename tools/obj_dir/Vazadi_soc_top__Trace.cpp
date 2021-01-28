// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vazadi_soc_top__Syms.h"


void Vazadi_soc_top::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vazadi_soc_top__Syms* __restrict vlSymsp = static_cast<Vazadi_soc_top__Syms*>(userp);
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vazadi_soc_top::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vazadi_soc_top__Syms* __restrict vlSymsp = static_cast<Vazadi_soc_top__Syms*>(userp);
    Vazadi_soc_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp1066[3];
    WData/*95:0*/ __Vtemp1067[3];
    WData/*95:0*/ __Vtemp1068[3];
    WData/*95:0*/ __Vtemp1069[3];
    WData/*95:0*/ __Vtemp1070[3];
    WData/*95:0*/ __Vtemp1071[3];
    WData/*95:0*/ __Vtemp1072[3];
    WData/*95:0*/ __Vtemp1073[3];
    WData/*95:0*/ __Vtemp1074[3];
    WData/*95:0*/ __Vtemp1075[3];
    WData/*95:0*/ __Vtemp1076[3];
    WData/*95:0*/ __Vtemp1077[3];
    WData/*95:0*/ __Vtemp1078[3];
    WData/*95:0*/ __Vtemp1079[3];
    WData/*95:0*/ __Vtemp1080[3];
    WData/*95:0*/ __Vtemp1081[3];
    WData/*95:0*/ __Vtemp1082[3];
    WData/*95:0*/ __Vtemp1083[3];
    WData/*95:0*/ __Vtemp1084[3];
    WData/*95:0*/ __Vtemp1085[3];
    WData/*95:0*/ __Vtemp1086[3];
    WData/*95:0*/ __Vtemp1087[3];
    WData/*95:0*/ __Vtemp1088[3];
    WData/*95:0*/ __Vtemp1089[3];
    WData/*95:0*/ __Vtemp1090[3];
    WData/*95:0*/ __Vtemp1091[3];
    WData/*95:0*/ __Vtemp1092[3];
    WData/*95:0*/ __Vtemp1093[3];
    WData/*95:0*/ __Vtemp1094[3];
    WData/*95:0*/ __Vtemp1095[3];
    WData/*95:0*/ __Vtemp1101[3];
    WData/*95:0*/ __Vtemp1103[3];
    WData/*95:0*/ __Vtemp1109[3];
    WData/*95:0*/ __Vtemp1111[3];
    WData/*95:0*/ __Vtemp1117[3];
    WData/*95:0*/ __Vtemp1119[3];
    WData/*95:0*/ __Vtemp1125[3];
    WData/*95:0*/ __Vtemp1127[3];
    WData/*95:0*/ __Vtemp1133[3];
    WData/*95:0*/ __Vtemp1135[3];
    WData/*95:0*/ __Vtemp1141[3];
    WData/*95:0*/ __Vtemp1143[3];
    WData/*95:0*/ __Vtemp1149[3];
    WData/*95:0*/ __Vtemp1151[3];
    WData/*95:0*/ __Vtemp1157[3];
    WData/*95:0*/ __Vtemp1159[3];
    WData/*95:0*/ __Vtemp1165[3];
    WData/*95:0*/ __Vtemp1167[3];
    WData/*95:0*/ __Vtemp1168[3];
    WData/*95:0*/ __Vtemp1169[3];
    WData/*95:0*/ __Vtemp1170[3];
    WData/*95:0*/ __Vtemp1171[3];
    WData/*95:0*/ __Vtemp1172[3];
    WData/*95:0*/ __Vtemp1173[3];
    WData/*95:0*/ __Vtemp1174[3];
    WData/*95:0*/ __Vtemp1175[3];
    WData/*95:0*/ __Vtemp1176[3];
    WData/*95:0*/ __Vtemp1177[3];
    WData/*95:0*/ __Vtemp1178[3];
    WData/*95:0*/ __Vtemp1179[3];
    WData/*95:0*/ __Vtemp1180[3];
    WData/*95:0*/ __Vtemp1181[3];
    WData/*95:0*/ __Vtemp1182[3];
    WData/*95:0*/ __Vtemp1183[3];
    WData/*95:0*/ __Vtemp1184[3];
    WData/*95:0*/ __Vtemp1187[3];
    WData/*95:0*/ __Vtemp1188[3];
    WData/*95:0*/ __Vtemp1189[3];
    WData/*95:0*/ __Vtemp1190[3];
    WData/*95:0*/ __Vtemp1191[3];
    WData/*95:0*/ __Vtemp1192[3];
    WData/*95:0*/ __Vtemp1193[3];
    WData/*95:0*/ __Vtemp1194[3];
    WData/*95:0*/ __Vtemp1195[3];
    WData/*95:0*/ __Vtemp1196[3];
    WData/*95:0*/ __Vtemp1197[3];
    WData/*95:0*/ __Vtemp1198[3];
    WData/*95:0*/ __Vtemp1199[3];
    WData/*95:0*/ __Vtemp1200[3];
    WData/*95:0*/ __Vtemp1201[3];
    WData/*95:0*/ __Vtemp1202[3];
    WData/*95:0*/ __Vtemp1203[3];
    WData/*95:0*/ __Vtemp1204[3];
    WData/*95:0*/ __Vtemp1205[3];
    WData/*95:0*/ __Vtemp1206[3];
    WData/*95:0*/ __Vtemp1207[3];
    WData/*95:0*/ __Vtemp1208[3];
    WData/*95:0*/ __Vtemp1209[3];
    WData/*95:0*/ __Vtemp1210[3];
    WData/*95:0*/ __Vtemp1211[3];
    WData/*95:0*/ __Vtemp1212[3];
    WData/*95:0*/ __Vtemp1213[3];
    WData/*95:0*/ __Vtemp1214[3];
    WData/*95:0*/ __Vtemp1215[3];
    WData/*95:0*/ __Vtemp1216[3];
    WData/*95:0*/ __Vtemp1217[3];
    WData/*95:0*/ __Vtemp1218[3];
    WData/*95:0*/ __Vtemp1219[3];
    WData/*95:0*/ __Vtemp1220[3];
    WData/*95:0*/ __Vtemp1221[3];
    WData/*95:0*/ __Vtemp1222[3];
    WData/*95:0*/ __Vtemp1223[3];
    WData/*95:0*/ __Vtemp1224[3];
    WData/*95:0*/ __Vtemp1225[3];
    WData/*95:0*/ __Vtemp1226[3];
    WData/*95:0*/ __Vtemp1227[3];
    WData/*95:0*/ __Vtemp1228[3];
    WData/*95:0*/ __Vtemp1229[3];
    WData/*95:0*/ __Vtemp1245[3];
    WData/*95:0*/ __Vtemp1246[3];
    WData/*95:0*/ __Vtemp1247[3];
    WData/*95:0*/ __Vtemp1248[3];
    WData/*95:0*/ __Vtemp1249[3];
    WData/*95:0*/ __Vtemp1250[3];
    WData/*95:0*/ __Vtemp1251[3];
    WData/*95:0*/ __Vtemp1252[3];
    WData/*95:0*/ __Vtemp1253[3];
    WData/*95:0*/ __Vtemp1254[3];
    WData/*95:0*/ __Vtemp1255[3];
    WData/*95:0*/ __Vtemp1256[3];
    WData/*95:0*/ __Vtemp1257[3];
    WData/*95:0*/ __Vtemp1258[3];
    WData/*95:0*/ __Vtemp1259[3];
    WData/*95:0*/ __Vtemp1260[3];
    WData/*95:0*/ __Vtemp1261[3];
    WData/*95:0*/ __Vtemp1262[3];
    WData/*95:0*/ __Vtemp1263[3];
    WData/*95:0*/ __Vtemp1264[3];
    WData/*95:0*/ __Vtemp1265[3];
    WData/*95:0*/ __Vtemp1266[3];
    WData/*95:0*/ __Vtemp1267[3];
    WData/*95:0*/ __Vtemp1268[3];
    WData/*95:0*/ __Vtemp1269[3];
    WData/*95:0*/ __Vtemp1270[3];
    WData/*95:0*/ __Vtemp1271[3];
    WData/*95:0*/ __Vtemp1272[3];
    WData/*95:0*/ __Vtemp1273[3];
    WData/*95:0*/ __Vtemp1274[3];
    WData/*95:0*/ __Vtemp1275[3];
    WData/*95:0*/ __Vtemp1276[3];
    WData/*95:0*/ __Vtemp1277[3];
    WData/*95:0*/ __Vtemp1278[3];
    WData/*95:0*/ __Vtemp1279[3];
    WData/*95:0*/ __Vtemp1280[3];
    WData/*95:0*/ __Vtemp1281[3];
    WData/*95:0*/ __Vtemp1282[3];
    WData/*95:0*/ __Vtemp1283[3];
    WData/*95:0*/ __Vtemp1284[3];
    WData/*95:0*/ __Vtemp1285[3];
    WData/*95:0*/ __Vtemp1286[3];
    WData/*95:0*/ __Vtemp1287[3];
    WData/*95:0*/ __Vtemp1288[3];
    WData/*95:0*/ __Vtemp1289[3];
    WData/*95:0*/ __Vtemp1290[3];
    WData/*95:0*/ __Vtemp1291[3];
    WData/*95:0*/ __Vtemp1292[3];
    WData/*95:0*/ __Vtemp1293[3];
    WData/*95:0*/ __Vtemp1294[3];
    WData/*95:0*/ __Vtemp1295[3];
    WData/*95:0*/ __Vtemp1296[3];
    WData/*95:0*/ __Vtemp1297[3];
    WData/*95:0*/ __Vtemp1327[3];
    WData/*95:0*/ __Vtemp1328[3];
    WData/*95:0*/ __Vtemp1329[3];
    WData/*95:0*/ __Vtemp1330[3];
    WData/*95:0*/ __Vtemp1338[3];
    WData/*95:0*/ __Vtemp1339[3];
    WData/*95:0*/ __Vtemp1340[3];
    WData/*95:0*/ __Vtemp1341[3];
    WData/*95:0*/ __Vtemp1342[3];
    WData/*95:0*/ __Vtemp1350[3];
    WData/*95:0*/ __Vtemp1351[3];
    WData/*95:0*/ __Vtemp1352[3];
    WData/*95:0*/ __Vtemp1353[3];
    WData/*95:0*/ __Vtemp1354[3];
    WData/*95:0*/ __Vtemp1362[3];
    WData/*95:0*/ __Vtemp1363[3];
    WData/*95:0*/ __Vtemp1364[3];
    WData/*95:0*/ __Vtemp1365[3];
    WData/*95:0*/ __Vtemp1366[3];
    WData/*95:0*/ __Vtemp1374[3];
    WData/*95:0*/ __Vtemp1375[3];
    WData/*95:0*/ __Vtemp1376[3];
    WData/*95:0*/ __Vtemp1377[3];
    WData/*95:0*/ __Vtemp1378[3];
    WData/*95:0*/ __Vtemp1386[3];
    WData/*95:0*/ __Vtemp1387[3];
    WData/*95:0*/ __Vtemp1388[3];
    WData/*95:0*/ __Vtemp1389[3];
    WData/*95:0*/ __Vtemp1390[3];
    WData/*95:0*/ __Vtemp1398[3];
    WData/*95:0*/ __Vtemp1399[3];
    WData/*95:0*/ __Vtemp1400[3];
    WData/*95:0*/ __Vtemp1401[3];
    WData/*95:0*/ __Vtemp1402[3];
    WData/*95:0*/ __Vtemp1410[3];
    WData/*95:0*/ __Vtemp1411[3];
    WData/*95:0*/ __Vtemp1412[3];
    WData/*95:0*/ __Vtemp1413[3];
    WData/*95:0*/ __Vtemp1414[3];
    WData/*95:0*/ __Vtemp1422[3];
    WData/*95:0*/ __Vtemp1423[3];
    WData/*95:0*/ __Vtemp1424[3];
    WData/*95:0*/ __Vtemp1425[3];
    WData/*95:0*/ __Vtemp1426[3];
    WData/*95:0*/ __Vtemp1434[3];
    WData/*95:0*/ __Vtemp1438[3];
    WData/*95:0*/ __Vtemp1442[3];
    WData/*95:0*/ __Vtemp1446[3];
    WData/*95:0*/ __Vtemp1450[3];
    WData/*95:0*/ __Vtemp1454[3];
    WData/*95:0*/ __Vtemp1458[3];
    WData/*95:0*/ __Vtemp1462[3];
    WData/*95:0*/ __Vtemp1466[3];
    WData/*95:0*/ __Vtemp1470[3];
    WData/*95:0*/ __Vtemp1474[3];
    WData/*95:0*/ __Vtemp1478[3];
    WData/*95:0*/ __Vtemp1482[3];
    WData/*95:0*/ __Vtemp1486[3];
    WData/*95:0*/ __Vtemp1490[3];
    WData/*95:0*/ __Vtemp1494[3];
    WData/*95:0*/ __Vtemp1498[3];
    WData/*95:0*/ __Vtemp1502[3];
    WData/*95:0*/ __Vtemp1506[3];
    WData/*95:0*/ __Vtemp1507[3];
    WData/*95:0*/ __Vtemp1513[3];
    WData/*95:0*/ __Vtemp1515[3];
    WData/*95:0*/ __Vtemp1521[3];
    WData/*95:0*/ __Vtemp1523[3];
    WData/*95:0*/ __Vtemp1529[3];
    WData/*95:0*/ __Vtemp1531[3];
    WData/*95:0*/ __Vtemp1537[3];
    WData/*95:0*/ __Vtemp1539[3];
    WData/*95:0*/ __Vtemp1545[3];
    WData/*95:0*/ __Vtemp1547[3];
    WData/*95:0*/ __Vtemp1553[3];
    WData/*95:0*/ __Vtemp1555[3];
    WData/*95:0*/ __Vtemp1561[3];
    WData/*95:0*/ __Vtemp1563[3];
    WData/*95:0*/ __Vtemp1569[3];
    WData/*95:0*/ __Vtemp1571[3];
    WData/*95:0*/ __Vtemp1577[3];
    WData/*95:0*/ __Vtemp1579[3];
    WData/*95:0*/ __Vtemp1585[3];
    WData/*95:0*/ __Vtemp1587[3];
    WData/*95:0*/ __Vtemp1593[3];
    WData/*95:0*/ __Vtemp1595[3];
    WData/*95:0*/ __Vtemp1601[3];
    WData/*95:0*/ __Vtemp1603[3];
    WData/*95:0*/ __Vtemp1609[3];
    WData/*95:0*/ __Vtemp1611[3];
    WData/*95:0*/ __Vtemp1617[3];
    WData/*95:0*/ __Vtemp1619[3];
    WData/*95:0*/ __Vtemp1625[3];
    WData/*95:0*/ __Vtemp1627[3];
    WData/*95:0*/ __Vtemp1633[3];
    WData/*95:0*/ __Vtemp1635[3];
    WData/*95:0*/ __Vtemp1641[3];
    WData/*95:0*/ __Vtemp1643[3];
    WData/*95:0*/ __Vtemp1649[3];
    WData/*95:0*/ __Vtemp1651[3];
    WData/*95:0*/ __Vtemp1657[3];
    WData/*95:0*/ __Vtemp1659[3];
    WData/*95:0*/ __Vtemp1665[3];
    WData/*95:0*/ __Vtemp1667[3];
    WData/*95:0*/ __Vtemp1673[3];
    WData/*95:0*/ __Vtemp1675[3];
    WData/*95:0*/ __Vtemp1681[3];
    WData/*95:0*/ __Vtemp1683[3];
    WData/*95:0*/ __Vtemp1689[3];
    WData/*95:0*/ __Vtemp1691[3];
    WData/*95:0*/ __Vtemp1697[3];
    WData/*95:0*/ __Vtemp1699[3];
    WData/*95:0*/ __Vtemp1705[3];
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgBit(oldp+0,(((0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err)) 
                                    | (0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err)))));
            tracep->chgBit(oldp+1,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_alu));
            tracep->chgIData(oldp+2,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_d[0]),32);
            tracep->chgIData(oldp+3,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_d[1]),32);
            tracep->chgIData(oldp+4,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__alu_i__imd_val_d_o[0]),32);
            tracep->chgIData(oldp+5,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__alu_i__imd_val_d_o[1]),32);
            tracep->chgIData(oldp+6,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev),32);
            tracep->chgIData(oldp+7,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[0]),32);
            tracep->chgIData(oldp+8,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[1]),32);
            tracep->chgIData(oldp+9,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[2]),32);
            tracep->chgIData(oldp+10,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[3]),32);
            tracep->chgIData(oldp+11,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[4]),32);
            tracep->chgIData(oldp+12,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[5]),32);
            tracep->chgIData(oldp+13,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[6]),32);
            tracep->chgIData(oldp+14,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[7]),32);
            tracep->chgIData(oldp+15,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[8]),32);
            tracep->chgIData(oldp+16,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[9]),32);
            tracep->chgIData(oldp+17,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[10]),32);
            tracep->chgIData(oldp+18,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[11]),32);
            tracep->chgIData(oldp+19,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[12]),32);
            tracep->chgIData(oldp+20,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[13]),32);
            tracep->chgIData(oldp+21,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[14]),32);
            tracep->chgIData(oldp+22,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[15]),32);
            tracep->chgIData(oldp+23,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[16]),32);
            tracep->chgIData(oldp+24,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[17]),32);
            tracep->chgIData(oldp+25,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[18]),32);
            tracep->chgIData(oldp+26,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[19]),32);
            tracep->chgIData(oldp+27,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[20]),32);
            tracep->chgIData(oldp+28,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[21]),32);
            tracep->chgIData(oldp+29,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[22]),32);
            tracep->chgIData(oldp+30,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[23]),32);
            tracep->chgIData(oldp+31,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[24]),32);
            tracep->chgIData(oldp+32,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[25]),32);
            tracep->chgIData(oldp+33,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[26]),32);
            tracep->chgIData(oldp+34,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[27]),32);
            tracep->chgIData(oldp+35,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[28]),32);
            tracep->chgIData(oldp+36,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[29]),32);
            tracep->chgIData(oldp+37,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[30]),32);
            tracep->chgIData(oldp+38,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[31]),32);
            tracep->chgCData(oldp+39,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_d),6);
            tracep->chgSData(oldp+40,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_err),16);
            tracep->chgSData(oldp+41,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_err),16);
            tracep->chgCData(oldp+42,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_d),6);
            tracep->chgCData(oldp+43,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__device_sel_h3),4);
            tracep->chgCData(oldp+44,((0xfU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])),4);
            tracep->chgWData(oldp+45,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_o),86);
            tracep->chgWData(oldp+48,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i),88);
            tracep->chgQData(oldp+51,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__drsp_fifo_o),52);
            tracep->chgBit(oldp+53,((1U & (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__drsp_fifo_o))));
            tracep->chgCData(oldp+54,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hfifo_rspvalid),2);
            tracep->chgCData(oldp+55,((0x7fU & (IData)(
                                                       (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__drsp_fifo_o 
                                                        >> 0x24U)))),8);
            tracep->chgQData(oldp+56,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o),52);
            tracep->chgBit(oldp+58,((1U & (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o))));
            tracep->chgCData(oldp+59,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hfifo_rspvalid),2);
            tracep->chgCData(oldp+60,((0x7fU & (IData)(
                                                       (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__drsp_fifo_o 
                                                        >> 0x24U)))),8);
            tracep->chgQData(oldp+61,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o),52);
            tracep->chgBit(oldp+63,((1U & (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o))));
            tracep->chgCData(oldp+64,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hfifo_rspvalid),2);
            tracep->chgCData(oldp+65,((0x7fU & (IData)(
                                                       (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__drsp_fifo_o 
                                                        >> 0x24U)))),8);
            tracep->chgQData(oldp+66,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o),52);
            tracep->chgBit(oldp+68,((1U & (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o))));
            tracep->chgCData(oldp+69,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hfifo_rspvalid),2);
            tracep->chgCData(oldp+70,((0x7fU & (IData)(
                                                       (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__drsp_fifo_o 
                                                        >> 0x24U)))),8);
            tracep->chgQData(oldp+71,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o),52);
            tracep->chgBit(oldp+73,((1U & (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o))));
            tracep->chgCData(oldp+74,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hfifo_rspvalid),2);
            tracep->chgCData(oldp+75,((0x7fU & (IData)(
                                                       (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__drsp_fifo_o 
                                                        >> 0x24U)))),8);
            tracep->chgQData(oldp+76,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o),52);
            tracep->chgBit(oldp+78,((1U & (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o))));
            tracep->chgCData(oldp+79,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hfifo_rspvalid),2);
            tracep->chgCData(oldp+80,((0x7fU & (IData)(
                                                       (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__drsp_fifo_o 
                                                        >> 0x24U)))),8);
            tracep->chgQData(oldp+81,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o),52);
            tracep->chgBit(oldp+83,((1U & (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o))));
            tracep->chgCData(oldp+84,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hfifo_rspvalid),2);
            tracep->chgCData(oldp+85,((0x7fU & (IData)(
                                                       (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__drsp_fifo_o 
                                                        >> 0x24U)))),8);
            tracep->chgCData(oldp+86,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[0]),4);
            tracep->chgCData(oldp+87,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[1]),4);
            tracep->chgCData(oldp+88,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[2]),4);
            tracep->chgCData(oldp+89,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[3]),4);
            tracep->chgCData(oldp+90,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[4]),4);
            tracep->chgCData(oldp+91,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[5]),4);
            tracep->chgCData(oldp+92,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[6]),4);
            tracep->chgCData(oldp+93,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[7]),4);
            tracep->chgCData(oldp+94,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[8]),4);
            tracep->chgCData(oldp+95,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[9]),4);
            tracep->chgCData(oldp+96,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[10]),4);
            tracep->chgCData(oldp+97,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[11]),4);
            tracep->chgCData(oldp+98,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[12]),4);
            tracep->chgCData(oldp+99,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[13]),4);
            tracep->chgCData(oldp+100,(vlSymsp->TOP__gpio_reg_pkg.__PVT__GPIO_PERMIT[14]),4);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+101,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h),52);
            tracep->chgIData(oldp+103,(vlTOPp->azadi_soc_top__DOT__gpio_intr),32);
            tracep->chgBit(oldp+104,((0U != vlTOPp->azadi_soc_top__DOT__gpio_intr)));
            tracep->chgBit(oldp+105,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q));
            tracep->chgBit(oldp+106,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q));
            tracep->chgIData(oldp+107,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mip),18);
            tracep->chgWData(oldp+108,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg),1024);
            tracep->chgWData(oldp+140,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q),992);
            __Vtemp1066[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [0U][0U];
            __Vtemp1066[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [0U][1U];
            __Vtemp1066[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [0U][2U];
            tracep->chgWData(oldp+171,(__Vtemp1066),86);
            __Vtemp1067[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [1U][0U];
            __Vtemp1067[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [1U][1U];
            __Vtemp1067[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [1U][2U];
            tracep->chgWData(oldp+174,(__Vtemp1067),86);
            __Vtemp1068[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [2U][0U];
            __Vtemp1068[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [2U][1U];
            __Vtemp1068[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [2U][2U];
            tracep->chgWData(oldp+177,(__Vtemp1068),86);
            __Vtemp1069[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [3U][0U];
            __Vtemp1069[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [3U][1U];
            __Vtemp1069[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [3U][2U];
            tracep->chgWData(oldp+180,(__Vtemp1069),86);
            __Vtemp1070[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [4U][0U];
            __Vtemp1070[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [4U][1U];
            __Vtemp1070[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [4U][2U];
            tracep->chgWData(oldp+183,(__Vtemp1070),86);
            __Vtemp1071[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [5U][0U];
            __Vtemp1071[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [5U][1U];
            __Vtemp1071[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [5U][2U];
            tracep->chgWData(oldp+186,(__Vtemp1071),86);
            __Vtemp1072[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [6U][0U];
            __Vtemp1072[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [6U][1U];
            __Vtemp1072[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [6U][2U];
            tracep->chgWData(oldp+189,(__Vtemp1072),86);
            __Vtemp1073[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [7U][0U];
            __Vtemp1073[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [7U][1U];
            __Vtemp1073[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [7U][2U];
            tracep->chgWData(oldp+192,(__Vtemp1073),86);
            __Vtemp1074[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [8U][0U];
            __Vtemp1074[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [8U][1U];
            __Vtemp1074[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [8U][2U];
            tracep->chgWData(oldp+195,(__Vtemp1074),86);
            tracep->chgIData(oldp+198,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__num_req_outstanding),17);
            tracep->chgCData(oldp+199,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__dev_select_outstanding),2);
            tracep->chgCData(oldp+200,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_opcode),3);
            tracep->chgCData(oldp+201,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_source),8);
            tracep->chgCData(oldp+202,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_size),2);
            tracep->chgBit(oldp+203,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_req_pending));
            tracep->chgBit(oldp+204,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_rsp_pending));
            tracep->chgIData(oldp+205,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__num_req_outstanding),17);
            tracep->chgCData(oldp+206,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__dev_select_outstanding),4);
            tracep->chgCData(oldp+207,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_opcode),3);
            tracep->chgCData(oldp+208,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_source),8);
            tracep->chgCData(oldp+209,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_size),2);
            tracep->chgBit(oldp+210,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_req_pending));
            tracep->chgBit(oldp+211,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_rsp_pending));
            __Vtemp1075[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [0U][0U];
            __Vtemp1075[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [0U][1U];
            __Vtemp1075[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [0U][2U];
            tracep->chgWData(oldp+212,(__Vtemp1075),86);
            __Vtemp1076[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [1U][0U];
            __Vtemp1076[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [1U][1U];
            __Vtemp1076[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [1U][2U];
            tracep->chgWData(oldp+215,(__Vtemp1076),86);
            __Vtemp1077[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [2U][0U];
            __Vtemp1077[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [2U][1U];
            __Vtemp1077[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [2U][2U];
            tracep->chgWData(oldp+218,(__Vtemp1077),86);
            __Vtemp1078[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [3U][0U];
            __Vtemp1078[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [3U][1U];
            __Vtemp1078[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [3U][2U];
            tracep->chgWData(oldp+221,(__Vtemp1078),86);
            __Vtemp1079[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [4U][0U];
            __Vtemp1079[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [4U][1U];
            __Vtemp1079[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [4U][2U];
            tracep->chgWData(oldp+224,(__Vtemp1079),86);
            __Vtemp1080[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [5U][0U];
            __Vtemp1080[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [5U][1U];
            __Vtemp1080[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [5U][2U];
            tracep->chgWData(oldp+227,(__Vtemp1080),86);
            __Vtemp1081[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [6U][0U];
            __Vtemp1081[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [6U][1U];
            __Vtemp1081[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [6U][2U];
            tracep->chgWData(oldp+230,(__Vtemp1081),86);
            __Vtemp1082[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [7U][0U];
            __Vtemp1082[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [7U][1U];
            __Vtemp1082[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [7U][2U];
            tracep->chgWData(oldp+233,(__Vtemp1082),86);
            __Vtemp1083[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [8U][0U];
            __Vtemp1083[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [8U][1U];
            __Vtemp1083[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [8U][2U];
            tracep->chgWData(oldp+236,(__Vtemp1083),86);
            tracep->chgIData(oldp+239,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__num_req_outstanding),17);
            tracep->chgCData(oldp+240,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__dev_select_outstanding),4);
            tracep->chgBit(oldp+241,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__hold_all_requests));
            __Vtemp1084[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [0U][0U];
            __Vtemp1084[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [0U][1U];
            __Vtemp1084[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [0U][2U];
            tracep->chgWData(oldp+242,(__Vtemp1084),86);
            __Vtemp1085[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [1U][0U];
            __Vtemp1085[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [1U][1U];
            __Vtemp1085[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [1U][2U];
            tracep->chgWData(oldp+245,(__Vtemp1085),86);
            __Vtemp1086[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [2U][0U];
            __Vtemp1086[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [2U][1U];
            __Vtemp1086[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [2U][2U];
            tracep->chgWData(oldp+248,(__Vtemp1086),86);
            __Vtemp1087[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [3U][0U];
            __Vtemp1087[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [3U][1U];
            __Vtemp1087[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [3U][2U];
            tracep->chgWData(oldp+251,(__Vtemp1087),86);
            __Vtemp1088[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [4U][0U];
            __Vtemp1088[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [4U][1U];
            __Vtemp1088[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [4U][2U];
            tracep->chgWData(oldp+254,(__Vtemp1088),86);
            __Vtemp1089[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [5U][0U];
            __Vtemp1089[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [5U][1U];
            __Vtemp1089[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [5U][2U];
            tracep->chgWData(oldp+257,(__Vtemp1089),86);
            __Vtemp1090[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [6U][0U];
            __Vtemp1090[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [6U][1U];
            __Vtemp1090[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [6U][2U];
            tracep->chgWData(oldp+260,(__Vtemp1090),86);
            __Vtemp1091[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [7U][0U];
            __Vtemp1091[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [7U][1U];
            __Vtemp1091[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [7U][2U];
            tracep->chgWData(oldp+263,(__Vtemp1091),86);
            __Vtemp1092[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [8U][0U];
            __Vtemp1092[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [8U][1U];
            __Vtemp1092[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [8U][2U];
            tracep->chgWData(oldp+266,(__Vtemp1092),86);
            __Vtemp1093[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [9U][0U];
            __Vtemp1093[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [9U][1U];
            __Vtemp1093[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [9U][2U];
            tracep->chgWData(oldp+269,(__Vtemp1093),86);
            __Vtemp1094[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [9U][0U];
            __Vtemp1094[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [9U][1U];
            __Vtemp1094[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [9U][2U];
            tracep->chgWData(oldp+272,(__Vtemp1094),86);
            tracep->chgQData(oldp+275,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o),52);
            tracep->chgCData(oldp+277,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_opcode),3);
            tracep->chgCData(oldp+278,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_source),8);
            tracep->chgCData(oldp+279,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_size),2);
            tracep->chgBit(oldp+280,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_req_pending));
            tracep->chgBit(oldp+281,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_rsp_pending));
            tracep->chgCData(oldp+282,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
            tracep->chgBit(oldp+283,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                            >> 2U))));
            tracep->chgCData(oldp+284,((3U & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
            tracep->chgCData(oldp+285,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
            tracep->chgBit(oldp+286,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                            >> 2U))));
            tracep->chgCData(oldp+287,((3U & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
            tracep->chgCData(oldp+288,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
            tracep->chgBit(oldp+289,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                            >> 2U))));
            tracep->chgCData(oldp+290,((3U & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
            tracep->chgCData(oldp+291,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
            tracep->chgBit(oldp+292,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                            >> 1U))));
            tracep->chgBit(oldp+293,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            tracep->chgCData(oldp+294,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
            tracep->chgBit(oldp+295,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                            >> 1U))));
            tracep->chgBit(oldp+296,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            tracep->chgCData(oldp+297,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
            tracep->chgBit(oldp+298,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                            >> 1U))));
            tracep->chgBit(oldp+299,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            tracep->chgQData(oldp+300,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                       [0U]),52);
            tracep->chgQData(oldp+302,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                       [1U]),52);
            tracep->chgQData(oldp+304,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                       [2U]),52);
            tracep->chgQData(oldp+306,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                       [3U]),52);
            tracep->chgQData(oldp+308,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                       [4U]),52);
            tracep->chgQData(oldp+310,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                       [5U]),52);
            tracep->chgQData(oldp+312,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                       [6U]),52);
            tracep->chgQData(oldp+314,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                       [7U]),52);
            tracep->chgQData(oldp+316,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                       [8U]),52);
            tracep->chgQData(oldp+318,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                       [9U]),52);
            tracep->chgQData(oldp+320,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                       [0xaU]),52);
            tracep->chgQData(oldp+322,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                       [0xbU]),52);
            tracep->chgQData(oldp+324,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                       [0xcU]),52);
            tracep->chgQData(oldp+326,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                       [0U]),52);
            tracep->chgQData(oldp+328,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                       [1U]),52);
            tracep->chgQData(oldp+330,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                       [2U]),52);
            tracep->chgQData(oldp+332,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                       [3U]),52);
            tracep->chgQData(oldp+334,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                       [4U]),52);
            tracep->chgQData(oldp+336,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                       [5U]),52);
            tracep->chgQData(oldp+338,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                       [6U]),52);
            tracep->chgQData(oldp+340,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                       [7U]),52);
            tracep->chgQData(oldp+342,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                       [8U]),52);
            tracep->chgQData(oldp+344,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                       [9U]),52);
            tracep->chgQData(oldp+346,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                       [0xaU]),52);
            tracep->chgQData(oldp+348,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                       [0xbU]),52);
            tracep->chgQData(oldp+350,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                       [0xcU]),52);
            tracep->chgIData(oldp+352,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__num_req_outstanding),17);
            tracep->chgCData(oldp+353,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__dev_select_outstanding),4);
            tracep->chgCData(oldp+354,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_opcode),3);
            tracep->chgCData(oldp+355,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_source),8);
            tracep->chgCData(oldp+356,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_size),2);
            tracep->chgBit(oldp+357,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_req_pending));
            tracep->chgBit(oldp+358,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_rsp_pending));
            tracep->chgIData(oldp+359,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__cio_gpio_q),32);
            tracep->chgIData(oldp+360,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__cio_gpio_en_q),32);
            tracep->chgIData(oldp+361,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_state__q),32);
            tracep->chgIData(oldp+362,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_enable__q),32);
            tracep->chgIData(oldp+363,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_data_in__DOT__q),32);
            tracep->chgIData(oldp+364,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q),32);
            tracep->chgIData(oldp+365,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q),32);
            tracep->chgIData(oldp+366,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q),32);
            tracep->chgIData(oldp+367,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q),32);
            tracep->chgIData(oldp+368,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q),32);
            tracep->chgBit(oldp+369,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__outstanding));
            tracep->chgIData(oldp+370,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rdata),32);
            tracep->chgBit(oldp+371,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__error));
            tracep->chgCData(oldp+372,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__reqid),8);
            tracep->chgCData(oldp+373,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__reqsz),2);
            tracep->chgCData(oldp+374,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rspop),3);
            tracep->chgBit(oldp+375,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_intr_state__DOT__qe));
            tracep->chgBit(oldp+376,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_intr_enable__DOT__qe));
            tracep->chgBit(oldp+377,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_data_in__DOT__qe));
            tracep->chgBit(oldp+378,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_intr_ctrl_en_rising__DOT__qe));
            tracep->chgBit(oldp+379,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_intr_ctrl_en_falling__DOT__qe));
            tracep->chgBit(oldp+380,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_intr_ctrl_en_lvlhigh__DOT__qe));
            tracep->chgBit(oldp+381,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_intr_ctrl_en_lvllow__DOT__qe));
            tracep->chgBit(oldp+382,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__qe));
            tracep->chgCData(oldp+383,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+384,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+385,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+386,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+387,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+388,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+389,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+390,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+391,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+392,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+393,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+394,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+395,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+396,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+397,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+398,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+399,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+400,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+401,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+402,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+403,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+404,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+405,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+406,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+407,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+408,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+409,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+410,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+411,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+412,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+413,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+414,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+415,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+416,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+417,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+418,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+419,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+420,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+421,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+422,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+423,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+424,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+425,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+426,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+427,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+428,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+429,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+430,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+431,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+432,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+433,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+434,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+435,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+436,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+437,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+438,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+439,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+440,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+441,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+442,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+443,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+444,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+445,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+446,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+447,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+448,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+449,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+450,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+451,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+452,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+453,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+454,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+455,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+456,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+457,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+458,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+459,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+460,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+461,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+462,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+463,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+464,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+465,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+466,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+467,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+468,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+469,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+470,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+471,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+472,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+473,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+474,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+475,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+476,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+477,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+478,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+479,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
            tracep->chgCData(oldp+480,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
            tracep->chgCData(oldp+481,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
            tracep->chgCData(oldp+482,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
            tracep->chgCData(oldp+483,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
            tracep->chgCData(oldp+484,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
            tracep->chgCData(oldp+485,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
            tracep->chgCData(oldp+486,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
            tracep->chgCData(oldp+487,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
            __Vtemp1095[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [0U][0U];
            __Vtemp1095[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [0U][1U];
            __Vtemp1095[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [0U][2U];
            tracep->chgWData(oldp+488,(__Vtemp1095),86);
            tracep->chgWData(oldp+491,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+494,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [0U][2U] 
                                            >> 0x15U))));
            __Vtemp1101[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                               [0U][0U]);
            __Vtemp1101[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [0U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [0U][1U]));
            __Vtemp1101[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [0U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [0U][2U]));
            tracep->chgWData(oldp+495,(__Vtemp1101),85);
            tracep->chgBit(oldp+498,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [0U][0U])));
            __Vtemp1103[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [1U][0U];
            __Vtemp1103[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [1U][1U];
            __Vtemp1103[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [1U][2U];
            tracep->chgWData(oldp+499,(__Vtemp1103),86);
            tracep->chgWData(oldp+502,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+505,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [1U][2U] 
                                            >> 0x15U))));
            __Vtemp1109[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                               [1U][0U]);
            __Vtemp1109[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [1U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [1U][1U]));
            __Vtemp1109[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [1U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [1U][2U]));
            tracep->chgWData(oldp+506,(__Vtemp1109),85);
            tracep->chgBit(oldp+509,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [1U][0U])));
            __Vtemp1111[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [2U][0U];
            __Vtemp1111[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [2U][1U];
            __Vtemp1111[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [2U][2U];
            tracep->chgWData(oldp+510,(__Vtemp1111),86);
            tracep->chgWData(oldp+513,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+516,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [2U][2U] 
                                            >> 0x15U))));
            __Vtemp1117[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                               [2U][0U]);
            __Vtemp1117[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [2U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [2U][1U]));
            __Vtemp1117[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [2U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [2U][2U]));
            tracep->chgWData(oldp+517,(__Vtemp1117),85);
            tracep->chgBit(oldp+520,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [2U][0U])));
            __Vtemp1119[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [3U][0U];
            __Vtemp1119[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [3U][1U];
            __Vtemp1119[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [3U][2U];
            tracep->chgWData(oldp+521,(__Vtemp1119),86);
            tracep->chgWData(oldp+524,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+527,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [3U][2U] 
                                            >> 0x15U))));
            __Vtemp1125[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                               [3U][0U]);
            __Vtemp1125[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [3U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [3U][1U]));
            __Vtemp1125[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [3U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [3U][2U]));
            tracep->chgWData(oldp+528,(__Vtemp1125),85);
            tracep->chgBit(oldp+531,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [3U][0U])));
            __Vtemp1127[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [4U][0U];
            __Vtemp1127[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [4U][1U];
            __Vtemp1127[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [4U][2U];
            tracep->chgWData(oldp+532,(__Vtemp1127),86);
            tracep->chgWData(oldp+535,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+538,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [4U][2U] 
                                            >> 0x15U))));
            __Vtemp1133[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                               [4U][0U]);
            __Vtemp1133[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [4U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [4U][1U]));
            __Vtemp1133[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [4U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [4U][2U]));
            tracep->chgWData(oldp+539,(__Vtemp1133),85);
            tracep->chgBit(oldp+542,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [4U][0U])));
            __Vtemp1135[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [5U][0U];
            __Vtemp1135[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [5U][1U];
            __Vtemp1135[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [5U][2U];
            tracep->chgWData(oldp+543,(__Vtemp1135),86);
            tracep->chgWData(oldp+546,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+549,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [5U][2U] 
                                            >> 0x15U))));
            __Vtemp1141[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                               [5U][0U]);
            __Vtemp1141[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [5U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [5U][1U]));
            __Vtemp1141[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [5U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [5U][2U]));
            tracep->chgWData(oldp+550,(__Vtemp1141),85);
            tracep->chgBit(oldp+553,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [5U][0U])));
            __Vtemp1143[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [6U][0U];
            __Vtemp1143[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [6U][1U];
            __Vtemp1143[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [6U][2U];
            tracep->chgWData(oldp+554,(__Vtemp1143),86);
            tracep->chgWData(oldp+557,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+560,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [6U][2U] 
                                            >> 0x15U))));
            __Vtemp1149[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                               [6U][0U]);
            __Vtemp1149[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [6U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [6U][1U]));
            __Vtemp1149[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [6U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [6U][2U]));
            tracep->chgWData(oldp+561,(__Vtemp1149),85);
            tracep->chgBit(oldp+564,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [6U][0U])));
            __Vtemp1151[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [7U][0U];
            __Vtemp1151[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [7U][1U];
            __Vtemp1151[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [7U][2U];
            tracep->chgWData(oldp+565,(__Vtemp1151),86);
            tracep->chgWData(oldp+568,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+571,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [7U][2U] 
                                            >> 0x15U))));
            __Vtemp1157[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                               [7U][0U]);
            __Vtemp1157[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [7U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [7U][1U]));
            __Vtemp1157[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [7U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [7U][2U]));
            tracep->chgWData(oldp+572,(__Vtemp1157),85);
            tracep->chgBit(oldp+575,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [7U][0U])));
            __Vtemp1159[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [8U][0U];
            __Vtemp1159[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [8U][1U];
            __Vtemp1159[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [8U][2U];
            tracep->chgWData(oldp+576,(__Vtemp1159),86);
            tracep->chgWData(oldp+579,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+582,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                            [8U][2U] 
                                            >> 0x15U))));
            __Vtemp1165[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                               [8U][0U]);
            __Vtemp1165[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [8U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [8U][1U]));
            __Vtemp1165[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [8U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [8U][2U]));
            tracep->chgWData(oldp+583,(__Vtemp1165),85);
            tracep->chgBit(oldp+586,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                      [8U][0U])));
            tracep->chgQData(oldp+587,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+589,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                       [0U]),52);
            tracep->chgBit(oldp+591,((1U & (IData)(
                                                   vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [0U]))));
            tracep->chgBit(oldp+592,((1U & (IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+593,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                     [0U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                          [0U] 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                         [0U] 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                          [0U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgQData(oldp+595,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+597,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                       [1U]),52);
            tracep->chgBit(oldp+599,((1U & (IData)(
                                                   vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [1U]))));
            tracep->chgBit(oldp+600,((1U & (IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [1U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+601,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                     [1U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                          [1U] 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                         [1U] 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                          [1U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgQData(oldp+603,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+605,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                       [2U]),52);
            tracep->chgBit(oldp+607,((1U & (IData)(
                                                   vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [2U]))));
            tracep->chgBit(oldp+608,((1U & (IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [2U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+609,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                     [2U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                          [2U] 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                         [2U] 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                          [2U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgQData(oldp+611,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+613,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                       [3U]),52);
            tracep->chgBit(oldp+615,((1U & (IData)(
                                                   vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [3U]))));
            tracep->chgBit(oldp+616,((1U & (IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [3U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+617,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                     [3U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                          [3U] 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                         [3U] 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                          [3U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgQData(oldp+619,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+621,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                       [4U]),52);
            tracep->chgBit(oldp+623,((1U & (IData)(
                                                   vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [4U]))));
            tracep->chgBit(oldp+624,((1U & (IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [4U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+625,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                     [4U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                          [4U] 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                         [4U] 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                          [4U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgQData(oldp+627,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+629,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                       [5U]),52);
            tracep->chgBit(oldp+631,((1U & (IData)(
                                                   vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [5U]))));
            tracep->chgBit(oldp+632,((1U & (IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [5U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+633,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                     [5U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                          [5U] 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                         [5U] 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                          [5U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgQData(oldp+635,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+637,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                       [6U]),52);
            tracep->chgBit(oldp+639,((1U & (IData)(
                                                   vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [6U]))));
            tracep->chgBit(oldp+640,((1U & (IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [6U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+641,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                     [6U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                          [6U] 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                         [6U] 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                          [6U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgQData(oldp+643,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+645,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                       [7U]),52);
            tracep->chgBit(oldp+647,((1U & (IData)(
                                                   vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [7U]))));
            tracep->chgBit(oldp+648,((1U & (IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [7U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+649,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                     [7U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                          [7U] 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                         [7U] 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                          [7U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgQData(oldp+651,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+653,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                       [8U]),52);
            tracep->chgBit(oldp+655,((1U & (IData)(
                                                   vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [8U]))));
            tracep->chgBit(oldp+656,((1U & (IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [8U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+657,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                     [8U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                          [8U] 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                         [8U] 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                          [8U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgQData(oldp+659,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+661,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                       [9U]),52);
            tracep->chgBit(oldp+663,((1U & (IData)(
                                                   vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [9U]))));
            tracep->chgBit(oldp+664,((1U & (IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [9U] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+665,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                     [9U] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                          [9U] 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                         [9U] 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                          [9U] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgQData(oldp+667,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+669,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                       [0xaU]),52);
            tracep->chgBit(oldp+671,((1U & (IData)(
                                                   vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [0xaU]))));
            tracep->chgBit(oldp+672,((1U & (IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xaU] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+673,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                     [0xaU] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                          [0xaU] 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                         [0xaU] 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                          [0xaU] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgQData(oldp+675,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+677,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                       [0xbU]),52);
            tracep->chgBit(oldp+679,((1U & (IData)(
                                                   vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [0xbU]))));
            tracep->chgBit(oldp+680,((1U & (IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xbU] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+681,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                     [0xbU] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                          [0xbU] 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                         [0xbU] 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                          [0xbU] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
            tracep->chgQData(oldp+683,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+685,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                       [0xcU]),52);
            tracep->chgBit(oldp+687,((1U & (IData)(
                                                   vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                   [0xcU]))));
            tracep->chgBit(oldp+688,((1U & (IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xcU] 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+689,((((QData)((IData)(
                                                         (0x1ffffU 
                                                          & (IData)(
                                                                    (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                     [0xcU] 
                                                                     >> 0x22U))))) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            ((1U 
                                                              == 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                          [0xcU] 
                                                                          >> 0x30U))))
                                                              ? (IData)(
                                                                        (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                         [0xcU] 
                                                                         >> 2U))
                                                              : 0U))) 
                                            << 2U) 
                                           | (QData)((IData)(
                                                             (2U 
                                                              & ((IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                                          [0xcU] 
                                                                          >> 1U)) 
                                                                 << 1U))))))),51);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [2U]))) {
            tracep->chgSData(oldp+691,(((0x33U >= (0x3fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                         ? (0x1fffU 
                                            & (IData)(
                                                      (vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                       >> 
                                                       (0x3fU 
                                                        & ((IData)(0xdU) 
                                                           * 
                                                           (3U 
                                                            & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                         : 0U)),13);
            tracep->chgCData(oldp+692,(((0x13U >= (0x1fU 
                                                   & ((IData)(5U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                         ? (0x1fU & 
                                            (vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                             >> (0x1fU 
                                                 & ((IData)(5U) 
                                                    * 
                                                    (3U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                         : 0U)),5);
            tracep->chgQData(oldp+693,(((0x83U >= (0xffU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                         ? (0x1ffffffffULL 
                                            & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x21U) 
                                                     * 
                                                     (3U 
                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                 ? 0ULL
                                                 : 
                                                ((QData)((IData)(
                                                                 vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                 ((IData)(2U) 
                                                                  + 
                                                                  (7U 
                                                                   & (((IData)(0x21U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                      >> 5U)))])) 
                                                 << 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (3U 
                                                       & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    (7U 
                                                                     & (((IData)(0x21U) 
                                                                         * 
                                                                         (3U 
                                                                          & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                        >> 5U)))])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x21U) 
                                                         * 
                                                         (3U 
                                                          & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(0x21U) 
                                                         * 
                                                         (3U 
                                                          & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                     (7U 
                                                                      & (((IData)(0x21U) 
                                                                          * 
                                                                          (3U 
                                                                           & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                         >> 5U))])) 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(0x21U) 
                                                         * 
                                                         (3U 
                                                          & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))))
                                         : 0ULL)),33);
            tracep->chgSData(oldp+695,(((0x19U >= (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                         ? (0x1fffU 
                                            & (vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                               >> (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                         : 0U)),13);
            tracep->chgCData(oldp+696,(((9U >= (0xfU 
                                                & ((IData)(5U) 
                                                   * 
                                                   (1U 
                                                    & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                         ? (0x1fU & 
                                            ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage) 
                                             >> (0xfU 
                                                 & ((IData)(5U) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                         : 0U)),5);
            tracep->chgQData(oldp+697,(((0x41U >= (0x7fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                         ? (0x1ffffffffULL 
                                            & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x21U) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                 ? 0ULL
                                                 : 
                                                ((QData)((IData)(
                                                                 vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                 ((IData)(2U) 
                                                                  + 
                                                                  (3U 
                                                                   & (((IData)(0x21U) 
                                                                       * 
                                                                       (1U 
                                                                        & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                      >> 5U)))])) 
                                                 << 
                                                 ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                               | (((QData)((IData)(
                                                                   vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    (3U 
                                                                     & (((IData)(0x21U) 
                                                                         * 
                                                                         (1U 
                                                                          & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                        >> 5U)))])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x21U) 
                                                         * 
                                                         (1U 
                                                          & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(0x21U) 
                                                         * 
                                                         (1U 
                                                          & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                     (3U 
                                                                      & (((IData)(0x21U) 
                                                                          * 
                                                                          (1U 
                                                                           & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                         >> 5U))])) 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(0x21U) 
                                                         * 
                                                         (1U 
                                                          & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))))
                                         : 0ULL)),33);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [3U]))) {
            __Vtemp1167[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_0_i
                [0U][0U];
            __Vtemp1167[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_0_i
                [0U][1U];
            __Vtemp1167[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_0_i
                [0U][2U];
            tracep->chgWData(oldp+699,(__Vtemp1167),86);
            __Vtemp1168[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_0_i
                [1U][0U];
            __Vtemp1168[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_0_i
                [1U][1U];
            __Vtemp1168[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_0_i
                [1U][2U];
            tracep->chgWData(oldp+702,(__Vtemp1168),86);
            __Vtemp1169[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_1_i
                [0U][0U];
            __Vtemp1169[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_1_i
                [0U][1U];
            __Vtemp1169[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_1_i
                [0U][2U];
            tracep->chgWData(oldp+705,(__Vtemp1169),86);
            __Vtemp1170[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_1_i
                [1U][0U];
            __Vtemp1170[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_1_i
                [1U][1U];
            __Vtemp1170[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_1_i
                [1U][2U];
            tracep->chgWData(oldp+708,(__Vtemp1170),86);
            __Vtemp1171[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_2_i
                [0U][0U];
            __Vtemp1171[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_2_i
                [0U][1U];
            __Vtemp1171[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_2_i
                [0U][2U];
            tracep->chgWData(oldp+711,(__Vtemp1171),86);
            __Vtemp1172[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_2_i
                [1U][0U];
            __Vtemp1172[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_2_i
                [1U][1U];
            __Vtemp1172[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_2_i
                [1U][2U];
            tracep->chgWData(oldp+714,(__Vtemp1172),86);
            __Vtemp1173[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_3_i
                [0U][0U];
            __Vtemp1173[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_3_i
                [0U][1U];
            __Vtemp1173[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_3_i
                [0U][2U];
            tracep->chgWData(oldp+717,(__Vtemp1173),86);
            __Vtemp1174[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_3_i
                [1U][0U];
            __Vtemp1174[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_3_i
                [1U][1U];
            __Vtemp1174[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_3_i
                [1U][2U];
            tracep->chgWData(oldp+720,(__Vtemp1174),86);
            __Vtemp1175[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_4_i
                [0U][0U];
            __Vtemp1175[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_4_i
                [0U][1U];
            __Vtemp1175[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_4_i
                [0U][2U];
            tracep->chgWData(oldp+723,(__Vtemp1175),86);
            __Vtemp1176[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_4_i
                [1U][0U];
            __Vtemp1176[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_4_i
                [1U][1U];
            __Vtemp1176[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_4_i
                [1U][2U];
            tracep->chgWData(oldp+726,(__Vtemp1176),86);
            __Vtemp1177[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_5_i
                [0U][0U];
            __Vtemp1177[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_5_i
                [0U][1U];
            __Vtemp1177[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_5_i
                [0U][2U];
            tracep->chgWData(oldp+729,(__Vtemp1177),86);
            __Vtemp1178[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_5_i
                [1U][0U];
            __Vtemp1178[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_5_i
                [1U][1U];
            __Vtemp1178[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_5_i
                [1U][2U];
            tracep->chgWData(oldp+732,(__Vtemp1178),86);
            __Vtemp1179[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_6_i
                [0U][0U];
            __Vtemp1179[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_6_i
                [0U][1U];
            __Vtemp1179[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_6_i
                [0U][2U];
            tracep->chgWData(oldp+735,(__Vtemp1179),86);
            __Vtemp1180[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_6_i
                [1U][0U];
            __Vtemp1180[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_6_i
                [1U][1U];
            __Vtemp1180[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_6_i
                [1U][2U];
            tracep->chgWData(oldp+738,(__Vtemp1180),86);
            __Vtemp1181[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_7_i
                [0U][0U];
            __Vtemp1181[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_7_i
                [0U][1U];
            __Vtemp1181[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_7_i
                [0U][2U];
            tracep->chgWData(oldp+741,(__Vtemp1181),86);
            __Vtemp1182[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_7_i
                [1U][0U];
            __Vtemp1182[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_7_i
                [1U][1U];
            __Vtemp1182[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_7_i
                [1U][2U];
            tracep->chgWData(oldp+744,(__Vtemp1182),86);
            __Vtemp1183[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_8_i
                [0U][0U];
            __Vtemp1183[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_8_i
                [0U][1U];
            __Vtemp1183[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_8_i
                [0U][2U];
            tracep->chgWData(oldp+747,(__Vtemp1183),86);
            __Vtemp1184[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_8_i
                [1U][0U];
            __Vtemp1184[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_8_i
                [1U][1U];
            __Vtemp1184[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_8_i
                [1U][2U];
            tracep->chgWData(oldp+750,(__Vtemp1184),86);
            tracep->chgQData(oldp+753,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o),52);
            tracep->chgQData(oldp+755,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o),52);
            tracep->chgQData(oldp+757,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                       [0U]),52);
            tracep->chgQData(oldp+759,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                       [1U]),52);
            tracep->chgQData(oldp+761,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                       [2U]),52);
            tracep->chgQData(oldp+763,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                       [3U]),52);
            tracep->chgQData(oldp+765,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                       [4U]),52);
            tracep->chgQData(oldp+767,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                       [5U]),52);
            tracep->chgQData(oldp+769,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                       [6U]),52);
            tracep->chgQData(oldp+771,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                       [7U]),52);
            tracep->chgQData(oldp+773,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                       [8U]),52);
            tracep->chgQData(oldp+775,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                       [9U]),52);
            tracep->chgQData(oldp+777,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                       [0U]),52);
            tracep->chgQData(oldp+779,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                       [1U]),52);
            tracep->chgQData(oldp+781,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                       [2U]),52);
            tracep->chgQData(oldp+783,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                       [3U]),52);
            tracep->chgQData(oldp+785,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                       [4U]),52);
            tracep->chgQData(oldp+787,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                       [5U]),52);
            tracep->chgQData(oldp+789,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                       [6U]),52);
            tracep->chgQData(oldp+791,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                       [7U]),52);
            tracep->chgQData(oldp+793,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                       [8U]),52);
            tracep->chgQData(oldp+795,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                       [9U]),52);
            tracep->chgQData(oldp+797,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                       [0xaU]),52);
            tracep->chgQData(oldp+799,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                       [0xbU]),52);
            tracep->chgQData(oldp+801,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                       [0xcU]),52);
            tracep->chgQData(oldp+803,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                       [0xdU]),52);
            tracep->chgQData(oldp+805,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o),52);
            tracep->chgWData(oldp+807,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg),246);
            tracep->chgIData(oldp+815,(((vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[5U] 
                                         << 0xcU) | 
                                        (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[4U] 
                                         >> 0x14U))),32);
            tracep->chgSData(oldp+816,((0x3ffU & ((
                                                   vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[5U] 
                                                   << 0x16U) 
                                                  | (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[4U] 
                                                     >> 0xaU)))),10);
            tracep->chgSData(oldp+817,((0xffffU & (
                                                   (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[4U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[3U] 
                                                      >> 0x10U)))),16);
            tracep->chgIData(oldp+818,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[2U]),32);
            tracep->chgSData(oldp+819,((0xffffU & (
                                                   (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[2U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[1U] 
                                                      >> 0x10U)))),16);
            tracep->chgSData(oldp+820,((0xffffU & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[1U])),16);
            tracep->chgSData(oldp+821,((0xffffU & (
                                                   (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[1U] 
                                                    << 0x10U) 
                                                   | (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[0U] 
                                                      >> 0x10U)))),16);
            tracep->chgSData(oldp+822,((0xffffU & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[0U])),16);
            tracep->chgBit(oldp+823,((1U & ((IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
                                                     >> 0x33U)) 
                                            & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [6U][0U]))));
            tracep->chgBit(oldp+824,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[6U] 
                                            >> 0x15U))));
            tracep->chgIData(oldp+825,(((vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[7U] 
                                         << 0xaU) | 
                                        (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[6U] 
                                         >> 0x16U))),32);
            tracep->chgBit(oldp+826,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__intr_state_we) 
                                            | (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[6U] 
                                               >> 0x15U)))));
            tracep->chgIData(oldp+827,((((0x200000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[6U])
                                          ? ((vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[7U] 
                                              << 0xaU) 
                                             | (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[6U] 
                                                >> 0x16U))
                                          : vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_state__q) 
                                        & ((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__intr_state_we)
                                            ? (~ ((
                                                   vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [6U][1U] 
                                                   << 0x1fU) 
                                                  | (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                     [6U][0U] 
                                                     >> 1U)))
                                            : 0xffffffffU))),32);
            tracep->chgBit(oldp+828,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[5U] 
                                            >> 0x14U))));
            tracep->chgIData(oldp+829,(((vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[6U] 
                                         << 0xbU) | 
                                        (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[5U] 
                                         >> 0x15U))),32);
            tracep->chgSData(oldp+830,((0x3ffU & ((
                                                   vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[5U] 
                                                   << 0x16U) 
                                                  | (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[4U] 
                                                     >> 0xaU)))),16);
            tracep->chgSData(oldp+831,((0x3ffU & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[4U])),16);
            tracep->chgSData(oldp+832,((0xffffU & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[3U])),16);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [4U]))) {
            tracep->chgCData(oldp+833,(((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
                                         ? 4U : (7U 
                                                 & (((1U 
                                                      & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                         >> 2U)))
                                                     ? 
                                                    ((3U 
                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                     - 
                                                     (3U 
                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                     : 
                                                    (((IData)(4U) 
                                                      - 
                                                      (3U 
                                                       & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                     + 
                                                     (3U 
                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
            tracep->chgCData(oldp+834,(((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
                                         ? 4U : (7U 
                                                 & (((1U 
                                                      & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                         >> 2U)))
                                                     ? 
                                                    ((3U 
                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                     - 
                                                     (3U 
                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                     : 
                                                    (((IData)(4U) 
                                                      - 
                                                      (3U 
                                                       & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                     + 
                                                     (3U 
                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
            tracep->chgCData(oldp+835,(((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
                                         ? 4U : (7U 
                                                 & (((1U 
                                                      & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                         >> 2U)) 
                                                     == 
                                                     (1U 
                                                      & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                         >> 2U)))
                                                     ? 
                                                    ((3U 
                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                     - 
                                                     (3U 
                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                     : 
                                                    (((IData)(4U) 
                                                      - 
                                                      (3U 
                                                       & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                     + 
                                                     (3U 
                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),3);
            tracep->chgCData(oldp+836,(((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
                                         ? 2U : (3U 
                                                 & (((1U 
                                                      & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                         >> 1U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                     - 
                                                     (1U 
                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                     : 
                                                    (((IData)(2U) 
                                                      - 
                                                      (1U 
                                                       & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                     + 
                                                     (1U 
                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
            tracep->chgCData(oldp+837,(((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
                                         ? 2U : (3U 
                                                 & (((1U 
                                                      & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                         >> 1U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                     - 
                                                     (1U 
                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                     : 
                                                    (((IData)(2U) 
                                                      - 
                                                      (1U 
                                                       & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                     + 
                                                     (1U 
                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
            tracep->chgCData(oldp+838,(((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
                                         ? 2U : (3U 
                                                 & (((1U 
                                                      & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                         >> 1U)) 
                                                     == 
                                                     (1U 
                                                      & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                         >> 1U)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                                     - 
                                                     (1U 
                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                                     : 
                                                    (((IData)(2U) 
                                                      - 
                                                      (1U 
                                                       & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                     + 
                                                     (1U 
                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))))),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+839,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q),8);
            tracep->chgBit(oldp+840,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q));
            tracep->chgCData(oldp+841,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q),8);
            tracep->chgBit(oldp+842,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q));
            tracep->chgBit(oldp+843,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__rvalid_o));
            tracep->chgIData(oldp+844,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__rdata_o),32);
            tracep->chgQData(oldp+845,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage),52);
            tracep->chgIData(oldp+847,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage),20);
            tracep->chgWData(oldp+848,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage),132);
            tracep->chgIData(oldp+853,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__rdata),32);
            tracep->chgBit(oldp+854,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__rvalid));
            tracep->chgIData(oldp+855,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage),26);
            tracep->chgSData(oldp+856,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage),10);
            tracep->chgWData(oldp+857,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage),66);
            tracep->chgIData(oldp+860,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_q),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgWData(oldp+861,(vlTOPp->azadi_soc_top__DOT__ifu_to_xbar),86);
            tracep->chgQData(oldp+864,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqifu),52);
            __Vtemp1187[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                [0U][0U];
            __Vtemp1187[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                [0U][1U];
            __Vtemp1187[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                [0U][2U];
            tracep->chgWData(oldp+866,(__Vtemp1187),86);
            tracep->chgQData(oldp+869,(vlTOPp->azadi_soc_top__DOT__iccm_to_xbar),52);
            tracep->chgWData(oldp+871,(vlTOPp->azadi_soc_top__DOT__lsu_to_xbar),86);
            tracep->chgQData(oldp+874,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu),52);
            tracep->chgWData(oldp+876,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o),86);
            tracep->chgWData(oldp+879,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.tl_d_o),86);
            tracep->chgQData(oldp+882,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_us_d2h),52);
            __Vtemp1188[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [6U][0U];
            __Vtemp1188[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [6U][1U];
            __Vtemp1188[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [6U][2U];
            tracep->chgWData(oldp+884,(__Vtemp1188),86);
            tracep->chgBit(oldp+887,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__instr_req));
            tracep->chgBit(oldp+888,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqifu))));
            tracep->chgBit(oldp+889,((1U & (IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqifu 
                                                    >> 0x33U)))));
            tracep->chgIData(oldp+890,((0xfffffffcU 
                                        & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_addr)),32);
            tracep->chgIData(oldp+891,((IData)((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqifu 
                                                >> 2U))),32);
            tracep->chgBit(oldp+892,((1U & (IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqifu 
                                                    >> 1U)))));
            tracep->chgBit(oldp+893,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__data_req));
            tracep->chgBit(oldp+894,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu))));
            tracep->chgBit(oldp+895,((1U & (IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                    >> 0x33U)))));
            tracep->chgIData(oldp+896,((IData)((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                >> 2U))),32);
            tracep->chgBit(oldp+897,((1U & (IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                    >> 1U)))));
            tracep->chgCData(oldp+898,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__imd_val_we_ex),2);
            tracep->chgBit(oldp+899,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set));
            tracep->chgBit(oldp+900,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set_spec));
            tracep->chgBit(oldp+901,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__lsu_load_err));
            tracep->chgBit(oldp+902,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__lsu_store_err));
            tracep->chgIData(oldp+903,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb),32);
            tracep->chgIData(oldp+904,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_rdata_ext),32);
            tracep->chgBit(oldp+905,((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_we_raw) 
                                       & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing)) 
                                      & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__illegal_csr_insn_id)))));
            tracep->chgIData(oldp+906,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__result_ex),32);
            tracep->chgBit(oldp+907,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__div_en_id));
            tracep->chgBit(oldp+908,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ready_wb));
            tracep->chgBit(oldp+909,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_op_en));
            tracep->chgBit(oldp+910,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__illegal_csr_insn_id));
            tracep->chgBit(oldp+911,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req));
            tracep->chgBit(oldp+912,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__lsu_req_done));
            tracep->chgBit(oldp+913,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_in_ready));
            tracep->chgBit(oldp+914,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__lsu_resp_valid));
            tracep->chgBit(oldp+915,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__lsu_load_err) 
                                      | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__lsu_store_err))));
            tracep->chgBit(oldp+916,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_done));
            tracep->chgBit(oldp+917,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pmp_req_err[0]));
            tracep->chgBit(oldp+918,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pmp_req_err[1]));
            tracep->chgBit(oldp+919,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req));
            tracep->chgBit(oldp+920,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__data_req_out));
            tracep->chgBit(oldp+921,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_mtvec_init));
            tracep->chgBit(oldp+922,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_done) 
                                      & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ready_wb))));
            tracep->chgBit(oldp+923,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__perf_instr_ret_wb));
            tracep->chgBit(oldp+924,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__perf_jump));
            tracep->chgBit(oldp+925,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__perf_branch));
            tracep->chgBit(oldp+926,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__perf_tbranch));
            tracep->chgBit(oldp+927,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__perf_load));
            tracep->chgBit(oldp+928,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__perf_store));
            tracep->chgBit(oldp+929,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__clk));
            tracep->chgBit(oldp+930,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
            tracep->chgBit(oldp+931,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pmp_req_err
                                     [0U]));
            tracep->chgBit(oldp+932,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d));
            tracep->chgBit(oldp+933,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_raw));
            tracep->chgIData(oldp+934,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata),32);
            tracep->chgBit(oldp+935,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_err));
            tracep->chgIData(oldp+936,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed),32);
            tracep->chgBit(oldp+937,((3U != (3U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata))));
            tracep->chgBit(oldp+938,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn));
            tracep->chgBit(oldp+939,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_raw) 
                                      & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_err)))));
            tracep->chgBit(oldp+940,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set_spec) 
                                      & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set)))));
            tracep->chgBit(oldp+941,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_new_req));
            tracep->chgBit(oldp+942,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req) 
                                      & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__gnt_or_pmp_err)))));
            tracep->chgBit(oldp+943,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__discard_req_d));
            tracep->chgBit(oldp+944,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__gnt_or_pmp_err));
            tracep->chgBit(oldp+945,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rvalid_or_pmp_err));
            tracep->chgCData(oldp+946,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_n),2);
            tracep->chgCData(oldp+947,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                         ? (1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_n) 
                                                  >> 1U))
                                         : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_n))),2);
            tracep->chgCData(oldp+948,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__branch_discard_n),2);
            tracep->chgCData(oldp+949,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                         ? (1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__branch_discard_n) 
                                                  >> 1U))
                                         : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__branch_discard_n))),2);
            tracep->chgCData(oldp+950,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_n),2);
            tracep->chgCData(oldp+951,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                         ? (1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_n) 
                                                  >> 1U))
                                         : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_n))),2);
            tracep->chgIData(oldp+952,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_addr),32);
            tracep->chgBit(oldp+953,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_or_pmp_err));
            tracep->chgBit(oldp+954,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_valid));
            tracep->chgWData(oldp+955,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d),96);
            tracep->chgCData(oldp+958,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_d),3);
            tracep->chgCData(oldp+959,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_d),3);
            tracep->chgCData(oldp+960,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed),3);
            tracep->chgCData(oldp+961,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped),3);
            tracep->chgCData(oldp+962,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__entry_en),3);
            tracep->chgBit(oldp+963,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo));
            tracep->chgIData(oldp+964,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata),32);
            tracep->chgBit(oldp+965,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err));
            tracep->chgBit(oldp+966,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid));
            tracep->chgBit(oldp+967,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed));
            tracep->chgBit(oldp+968,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed));
            tracep->chgBit(oldp+969,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two));
            tracep->chgBit(oldp+970,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set) 
                                      | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_in_ready) 
                                         & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_raw)))));
            tracep->chgBit(oldp+971,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__wb_exception));
            tracep->chgBit(oldp+972,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_spec));
            tracep->chgBit(oldp+973,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_set_d));
            tracep->chgBit(oldp+974,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set));
            tracep->chgBit(oldp+975,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing));
            tracep->chgBit(oldp+976,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_mem));
            tracep->chgBit(oldp+977,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv));
            tracep->chgBit(oldp+978,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_branch));
            tracep->chgBit(oldp+979,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_jump));
            tracep->chgBit(oldp+980,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_id));
            tracep->chgBit(oldp+981,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_done) 
                                      & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ready_wb)))));
            tracep->chgBit(oldp+982,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multicycle_done));
            tracep->chgBit(oldp+983,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_we_raw));
            tracep->chgBit(oldp+984,((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access)))));
            tracep->chgBit(oldp+985,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__csr_pipe_flush));
            tracep->chgBit(oldp+986,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_d));
            tracep->chgBit(oldp+987,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access));
            tracep->chgBit(oldp+988,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__instr_kill));
            tracep->chgCData(oldp+989,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns),4);
            tracep->chgBit(oldp+990,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
            tracep->chgBit(oldp+991,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d));
            tracep->chgBit(oldp+992,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__stall));
            tracep->chgBit(oldp+993,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if));
            tracep->chgBit(oldp+994,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id));
            tracep->chgBit(oldp+995,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__lsu_store_err) 
                                      | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__lsu_load_err))));
            tracep->chgBit(oldp+996,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req_all));
            tracep->chgBit(oldp+997,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush));
            tracep->chgCData(oldp+998,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_we),2);
            tracep->chgBit(oldp+999,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_hold));
            tracep->chgBit(oldp+1000,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_en));
            tracep->chgBit(oldp+1001,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pmp_req_err
                                      [1U]));
            tracep->chgBit(oldp+1002,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__addr_update));
            tracep->chgBit(oldp+1003,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update));
            tracep->chgBit(oldp+1004,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_update));
            tracep->chgBit(oldp+1005,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_d));
            tracep->chgBit(oldp+1006,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_d));
            tracep->chgBit(oldp+1007,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_d));
            tracep->chgBit(oldp+1008,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_or_pmp_err));
            tracep->chgCData(oldp+1009,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_ns),3);
            tracep->chgBit(oldp+1010,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done));
            tracep->chgCData(oldp+1011,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d),6);
            tracep->chgBit(oldp+1012,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_en));
            tracep->chgBit(oldp+1013,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_en));
            tracep->chgBit(oldp+1014,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_en));
            tracep->chgBit(oldp+1015,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_en));
            tracep->chgBit(oldp+1016,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_en));
            tracep->chgBit(oldp+1017,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtval_en));
            tracep->chgBit(oldp+1018,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_en));
            tracep->chgIData(oldp+1019,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d),32);
            tracep->chgBit(oldp+1020,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_en));
            tracep->chgBit(oldp+1021,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__depc_en));
            tracep->chgBit(oldp+1022,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_en));
            tracep->chgBit(oldp+1023,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_en));
            tracep->chgBit(oldp+1024,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_we));
            tracep->chgIData(oldp+1025,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we),32);
            tracep->chgIData(oldp+1026,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we),32);
            tracep->chgIData(oldp+1027,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr),32);
            tracep->chgBit(oldp+1028,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 1U))));
            tracep->chgBit(oldp+1029,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 1U))));
            tracep->chgBit(oldp+1030,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                             >> 1U))));
            tracep->chgBit(oldp+1031,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_we));
            tracep->chgBit(oldp+1032,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int));
            tracep->chgBit(oldp+1033,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wreq));
            tracep->chgSData(oldp+1034,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we),16);
            tracep->chgSData(oldp+1035,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we),16);
            tracep->chgIData(oldp+1036,((0x7ffffU & 
                                         (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                          >> 0xdU))),19);
            tracep->chgIData(oldp+1037,((0x7ffffU & 
                                         (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                          >> 0xdU))),19);
            tracep->chgIData(oldp+1038,((0x7ffffU & 
                                         (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                          >> 0xdU))),19);
            tracep->chgCData(oldp+1039,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we),2);
            tracep->chgCData(oldp+1040,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we),2);
            tracep->chgCData(oldp+1041,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d),6);
            tracep->chgIData(oldp+1042,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d),32);
            tracep->chgBit(oldp+1043,((1U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)));
            tracep->chgBit(oldp+1044,((1U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we)));
            tracep->chgQData(oldp+1045,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_upd),64);
            tracep->chgQData(oldp+1047,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load),64);
            tracep->chgBit(oldp+1049,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we));
            tracep->chgQData(oldp+1050,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d),64);
            tracep->chgBit(oldp+1052,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 2U))));
            tracep->chgBit(oldp+1053,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 2U))));
            tracep->chgQData(oldp+1054,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_upd),64);
            tracep->chgQData(oldp+1056,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load),64);
            tracep->chgBit(oldp+1058,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we));
            tracep->chgQData(oldp+1059,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d),64);
            tracep->chgBit(oldp+1061,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we))));
            tracep->chgBit(oldp+1062,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we))));
            tracep->chgBit(oldp+1063,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we) 
                                             >> 1U))));
            tracep->chgBit(oldp+1064,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we) 
                                             >> 1U))));
            tracep->chgBit(oldp+1065,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we) 
                                             >> 2U))));
            tracep->chgBit(oldp+1066,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we) 
                                             >> 2U))));
            tracep->chgBit(oldp+1067,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we) 
                                             >> 3U))));
            tracep->chgBit(oldp+1068,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we) 
                                             >> 3U))));
            tracep->chgBit(oldp+1069,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we) 
                                             >> 4U))));
            tracep->chgBit(oldp+1070,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we) 
                                             >> 4U))));
            tracep->chgBit(oldp+1071,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we) 
                                             >> 5U))));
            tracep->chgBit(oldp+1072,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we) 
                                             >> 5U))));
            tracep->chgBit(oldp+1073,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we) 
                                             >> 6U))));
            tracep->chgBit(oldp+1074,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we) 
                                             >> 6U))));
            tracep->chgBit(oldp+1075,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we) 
                                             >> 7U))));
            tracep->chgBit(oldp+1076,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we) 
                                             >> 7U))));
            tracep->chgBit(oldp+1077,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we) 
                                             >> 8U))));
            tracep->chgBit(oldp+1078,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we) 
                                             >> 8U))));
            tracep->chgBit(oldp+1079,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we) 
                                             >> 9U))));
            tracep->chgBit(oldp+1080,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we) 
                                             >> 9U))));
            tracep->chgBit(oldp+1081,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1082,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we) 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1083,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1084,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we) 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1085,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1086,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we) 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1087,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1088,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we) 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1089,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1090,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we) 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1091,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1092,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we) 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1093,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 3U))));
            tracep->chgBit(oldp+1094,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 3U))));
            tracep->chgIData(oldp+1095,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_upd),32);
            tracep->chgQData(oldp+1096,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+1098,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgIData(oldp+1099,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),32);
            tracep->chgIData(oldp+1100,((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                 >> 0x20U))),32);
            tracep->chgBit(oldp+1101,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 4U))));
            tracep->chgBit(oldp+1102,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 4U))));
            tracep->chgIData(oldp+1103,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_upd),32);
            tracep->chgQData(oldp+1104,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+1106,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgIData(oldp+1107,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),32);
            tracep->chgIData(oldp+1108,((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                 >> 0x20U))),32);
            tracep->chgBit(oldp+1109,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 5U))));
            tracep->chgBit(oldp+1110,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 5U))));
            tracep->chgIData(oldp+1111,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_upd),32);
            tracep->chgQData(oldp+1112,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+1114,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgIData(oldp+1115,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),32);
            tracep->chgIData(oldp+1116,((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                 >> 0x20U))),32);
            tracep->chgBit(oldp+1117,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 6U))));
            tracep->chgBit(oldp+1118,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 6U))));
            tracep->chgIData(oldp+1119,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_upd),32);
            tracep->chgQData(oldp+1120,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+1122,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgIData(oldp+1123,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),32);
            tracep->chgIData(oldp+1124,((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                 >> 0x20U))),32);
            tracep->chgBit(oldp+1125,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 7U))));
            tracep->chgBit(oldp+1126,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 7U))));
            tracep->chgIData(oldp+1127,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_upd),32);
            tracep->chgQData(oldp+1128,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+1130,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgIData(oldp+1131,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),32);
            tracep->chgIData(oldp+1132,((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                 >> 0x20U))),32);
            tracep->chgBit(oldp+1133,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 8U))));
            tracep->chgBit(oldp+1134,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 8U))));
            tracep->chgIData(oldp+1135,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_upd),32);
            tracep->chgQData(oldp+1136,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+1138,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgIData(oldp+1139,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),32);
            tracep->chgIData(oldp+1140,((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                 >> 0x20U))),32);
            tracep->chgBit(oldp+1141,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 9U))));
            tracep->chgBit(oldp+1142,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 9U))));
            tracep->chgIData(oldp+1143,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_upd),32);
            tracep->chgQData(oldp+1144,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+1146,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgIData(oldp+1147,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),32);
            tracep->chgIData(oldp+1148,((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                 >> 0x20U))),32);
            tracep->chgBit(oldp+1149,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1150,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 0xaU))));
            tracep->chgIData(oldp+1151,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_upd),32);
            tracep->chgQData(oldp+1152,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+1154,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgIData(oldp+1155,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),32);
            tracep->chgIData(oldp+1156,((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                 >> 0x20U))),32);
            tracep->chgBit(oldp+1157,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1158,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 0xbU))));
            tracep->chgIData(oldp+1159,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_upd),32);
            tracep->chgQData(oldp+1160,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+1162,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgIData(oldp+1163,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),32);
            tracep->chgIData(oldp+1164,((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                 >> 0x20U))),32);
            tracep->chgBit(oldp+1165,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1166,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                             >> 0xcU))));
            tracep->chgIData(oldp+1167,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_upd),32);
            tracep->chgQData(oldp+1168,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+1170,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgIData(oldp+1171,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),32);
            tracep->chgIData(oldp+1172,((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                 >> 0x20U))),32);
            tracep->chgBit(oldp+1173,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we))));
            tracep->chgBit(oldp+1174,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we))));
            tracep->chgBit(oldp+1175,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we) 
                                             >> 1U))));
            tracep->chgBit(oldp+1176,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we) 
                                             >> 1U))));
            tracep->chgIData(oldp+1177,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec),31);
            tracep->chgQData(oldp+1178,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i[0]),34);
            tracep->chgQData(oldp+1180,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i[1]),34);
            tracep->chgBit(oldp+1182,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__g_pmp__DOT__pmp_i__pmp_req_err_o[0]));
            tracep->chgBit(oldp+1183,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__g_pmp__DOT__pmp_i__pmp_req_err_o[1]));
            tracep->chgIData(oldp+1184,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt),32);
            tracep->chgIData(oldp+1185,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt),32);
            tracep->chgIData(oldp+1186,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq),32);
            tracep->chgIData(oldp+1187,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all),32);
            tracep->chgCData(oldp+1188,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault),2);
            tracep->chgBit(oldp+1189,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_d));
            tracep->chgBit(oldp+1190,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_d));
            tracep->chgQData(oldp+1191,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dm),52);
            __Vtemp1189[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                [1U][0U];
            __Vtemp1189[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                [1U][1U];
            __Vtemp1189[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                [1U][2U];
            tracep->chgWData(oldp+1193,(__Vtemp1189),86);
            tracep->chgWData(oldp+1196,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_flash_ctrl_o),86);
            tracep->chgWData(oldp+1199,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.tl_d_o),86);
            tracep->chgWData(oldp+1202,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.tl_d_o),86);
            tracep->chgWData(oldp+1205,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.tl_d_o),86);
            tracep->chgWData(oldp+1208,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.tl_d_o),86);
            tracep->chgWData(oldp+1211,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.tl_d_o),86);
            tracep->chgWData(oldp+1214,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.tl_d_o),86);
            tracep->chgCData(oldp+1217,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__device_sel_h1),2);
            __Vtemp1190[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                [0U][0U];
            __Vtemp1190[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                [0U][1U];
            __Vtemp1190[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                [0U][2U];
            tracep->chgWData(oldp+1218,(__Vtemp1190),86);
            __Vtemp1191[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                [1U][0U];
            __Vtemp1191[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                [1U][1U];
            __Vtemp1191[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                [1U][2U];
            tracep->chgWData(oldp+1221,(__Vtemp1191),86);
            __Vtemp1192[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                [2U][0U];
            __Vtemp1192[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                [2U][1U];
            __Vtemp1192[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                [2U][2U];
            tracep->chgWData(oldp+1224,(__Vtemp1192),86);
            tracep->chgQData(oldp+1227,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__dv_to_s1n
                                        [0U]),52);
            tracep->chgQData(oldp+1229,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__dv_to_s1n
                                        [1U]),52);
            tracep->chgQData(oldp+1231,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__dv_to_s1n
                                        [2U]),52);
            tracep->chgCData(oldp+1233,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__device_sel_h2),4);
            __Vtemp1193[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [0U][0U];
            __Vtemp1193[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [0U][1U];
            __Vtemp1193[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [0U][2U];
            tracep->chgWData(oldp+1234,(__Vtemp1193),86);
            __Vtemp1194[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [1U][0U];
            __Vtemp1194[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [1U][1U];
            __Vtemp1194[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [1U][2U];
            tracep->chgWData(oldp+1237,(__Vtemp1194),86);
            __Vtemp1195[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [2U][0U];
            __Vtemp1195[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [2U][1U];
            __Vtemp1195[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [2U][2U];
            tracep->chgWData(oldp+1240,(__Vtemp1195),86);
            __Vtemp1196[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [3U][0U];
            __Vtemp1196[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [3U][1U];
            __Vtemp1196[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [3U][2U];
            tracep->chgWData(oldp+1243,(__Vtemp1196),86);
            __Vtemp1197[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [4U][0U];
            __Vtemp1197[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [4U][1U];
            __Vtemp1197[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [4U][2U];
            tracep->chgWData(oldp+1246,(__Vtemp1197),86);
            __Vtemp1198[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [5U][0U];
            __Vtemp1198[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [5U][1U];
            __Vtemp1198[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [5U][2U];
            tracep->chgWData(oldp+1249,(__Vtemp1198),86);
            __Vtemp1199[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [6U][0U];
            __Vtemp1199[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [6U][1U];
            __Vtemp1199[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [6U][2U];
            tracep->chgWData(oldp+1252,(__Vtemp1199),86);
            __Vtemp1200[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [7U][0U];
            __Vtemp1200[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [7U][1U];
            __Vtemp1200[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [7U][2U];
            tracep->chgWData(oldp+1255,(__Vtemp1200),86);
            __Vtemp1201[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [8U][0U];
            __Vtemp1201[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [8U][1U];
            __Vtemp1201[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [8U][2U];
            tracep->chgWData(oldp+1258,(__Vtemp1201),86);
            tracep->chgQData(oldp+1261,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h2
                                        [0U]),52);
            tracep->chgQData(oldp+1263,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h2
                                        [1U]),52);
            tracep->chgQData(oldp+1265,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h2
                                        [2U]),52);
            tracep->chgQData(oldp+1267,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h2
                                        [3U]),52);
            tracep->chgQData(oldp+1269,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h2
                                        [4U]),52);
            tracep->chgQData(oldp+1271,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h2
                                        [5U]),52);
            tracep->chgQData(oldp+1273,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h2
                                        [6U]),52);
            tracep->chgQData(oldp+1275,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h2
                                        [7U]),52);
            tracep->chgQData(oldp+1277,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h2
                                        [8U]),52);
            tracep->chgQData(oldp+1279,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h3
                                        [0U]),52);
            tracep->chgQData(oldp+1281,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h3
                                        [1U]),52);
            tracep->chgQData(oldp+1283,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h3
                                        [2U]),52);
            tracep->chgQData(oldp+1285,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h3
                                        [3U]),52);
            tracep->chgQData(oldp+1287,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h3
                                        [4U]),52);
            tracep->chgQData(oldp+1289,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h3
                                        [5U]),52);
            tracep->chgQData(oldp+1291,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h3
                                        [6U]),52);
            tracep->chgQData(oldp+1293,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h3
                                        [7U]),52);
            tracep->chgQData(oldp+1295,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h3
                                        [8U]),52);
            tracep->chgQData(oldp+1297,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_0_o
                                        [0U]),52);
            tracep->chgQData(oldp+1299,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_0_o
                                        [1U]),52);
            tracep->chgQData(oldp+1301,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_1_o
                                        [0U]),52);
            tracep->chgQData(oldp+1303,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_1_o
                                        [1U]),52);
            tracep->chgQData(oldp+1305,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_2_o
                                        [0U]),52);
            tracep->chgQData(oldp+1307,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_2_o
                                        [1U]),52);
            tracep->chgQData(oldp+1309,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_3_o
                                        [0U]),52);
            tracep->chgQData(oldp+1311,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_3_o
                                        [1U]),52);
            tracep->chgQData(oldp+1313,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_4_o
                                        [0U]),52);
            tracep->chgQData(oldp+1315,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_4_o
                                        [1U]),52);
            tracep->chgQData(oldp+1317,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_5_o
                                        [0U]),52);
            tracep->chgQData(oldp+1319,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_5_o
                                        [1U]),52);
            tracep->chgQData(oldp+1321,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_6_o
                                        [0U]),52);
            tracep->chgQData(oldp+1323,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_6_o
                                        [1U]),52);
            tracep->chgQData(oldp+1325,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_7_o
                                        [0U]),52);
            tracep->chgQData(oldp+1327,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_7_o
                                        [1U]),52);
            tracep->chgQData(oldp+1329,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_8_o
                                        [0U]),52);
            tracep->chgQData(oldp+1331,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_8_o
                                        [1U]),52);
            __Vtemp1202[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                [0U][0U];
            __Vtemp1202[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                [0U][1U];
            __Vtemp1202[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                [0U][2U];
            tracep->chgWData(oldp+1333,(__Vtemp1202),86);
            __Vtemp1203[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                [1U][0U];
            __Vtemp1203[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                [1U][1U];
            __Vtemp1203[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                [1U][2U];
            tracep->chgWData(oldp+1336,(__Vtemp1203),86);
            __Vtemp1204[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                [2U][0U];
            __Vtemp1204[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                [2U][1U];
            __Vtemp1204[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                [2U][2U];
            tracep->chgWData(oldp+1339,(__Vtemp1204),86);
            tracep->chgQData(oldp+1342,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                        [0U]),52);
            tracep->chgQData(oldp+1344,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                        [1U]),52);
            tracep->chgQData(oldp+1346,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                        [2U]),52);
            tracep->chgCData(oldp+1348,((3U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])),2);
            tracep->chgWData(oldp+1349,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o),86);
            tracep->chgQData(oldp+1352,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_i),52);
            tracep->chgBit(oldp+1354,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__hold_all_requests));
            tracep->chgBit(oldp+1355,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__accept_t_req));
            tracep->chgBit(oldp+1356,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__accept_t_rsp));
            __Vtemp1205[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [0U][0U];
            __Vtemp1205[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [0U][1U];
            __Vtemp1205[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [0U][2U];
            tracep->chgWData(oldp+1357,(__Vtemp1205),86);
            __Vtemp1206[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [1U][0U];
            __Vtemp1206[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [1U][1U];
            __Vtemp1206[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [1U][2U];
            tracep->chgWData(oldp+1360,(__Vtemp1206),86);
            __Vtemp1207[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [2U][0U];
            __Vtemp1207[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [2U][1U];
            __Vtemp1207[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [2U][2U];
            tracep->chgWData(oldp+1363,(__Vtemp1207),86);
            __Vtemp1208[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [3U][0U];
            __Vtemp1208[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [3U][1U];
            __Vtemp1208[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [3U][2U];
            tracep->chgWData(oldp+1366,(__Vtemp1208),86);
            tracep->chgQData(oldp+1369,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_i
                                        [0U]),52);
            tracep->chgQData(oldp+1371,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_i
                                        [1U]),52);
            tracep->chgQData(oldp+1373,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_i
                                        [2U]),52);
            tracep->chgQData(oldp+1375,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_i
                                        [3U]),52);
            tracep->chgQData(oldp+1377,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_p),52);
            tracep->chgBit(oldp+1379,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__hfifo_reqready));
            tracep->chgBit(oldp+1380,((1U & (vlTOPp->azadi_soc_top__DOT__ifu_to_xbar[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1381,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_i))));
            tracep->chgWData(oldp+1382,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i),86);
            tracep->chgBit(oldp+1385,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_i 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1386,((1U & vlTOPp->azadi_soc_top__DOT__ifu_to_xbar[0U])));
            tracep->chgQData(oldp+1387,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_i 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_i 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_i 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_i 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            __Vtemp1209[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [3U][0U];
            __Vtemp1209[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [3U][1U];
            __Vtemp1209[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [3U][2U];
            tracep->chgWData(oldp+1389,(__Vtemp1209),86);
            __Vtemp1210[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [0U][0U];
            __Vtemp1210[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [0U][1U];
            __Vtemp1210[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [0U][2U];
            tracep->chgWData(oldp+1392,(__Vtemp1210),86);
            __Vtemp1211[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [1U][0U];
            __Vtemp1211[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [1U][1U];
            __Vtemp1211[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [1U][2U];
            tracep->chgWData(oldp+1395,(__Vtemp1211),86);
            __Vtemp1212[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [2U][0U];
            __Vtemp1212[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [2U][1U];
            __Vtemp1212[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [2U][2U];
            tracep->chgWData(oldp+1398,(__Vtemp1212),86);
            __Vtemp1213[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [3U][0U];
            __Vtemp1213[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [3U][1U];
            __Vtemp1213[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [3U][2U];
            tracep->chgWData(oldp+1401,(__Vtemp1213),86);
            __Vtemp1214[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [4U][0U];
            __Vtemp1214[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [4U][1U];
            __Vtemp1214[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [4U][2U];
            tracep->chgWData(oldp+1404,(__Vtemp1214),86);
            __Vtemp1215[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [5U][0U];
            __Vtemp1215[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [5U][1U];
            __Vtemp1215[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [5U][2U];
            tracep->chgWData(oldp+1407,(__Vtemp1215),86);
            __Vtemp1216[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [6U][0U];
            __Vtemp1216[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [6U][1U];
            __Vtemp1216[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [6U][2U];
            tracep->chgWData(oldp+1410,(__Vtemp1216),86);
            __Vtemp1217[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [7U][0U];
            __Vtemp1217[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [7U][1U];
            __Vtemp1217[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [7U][2U];
            tracep->chgWData(oldp+1413,(__Vtemp1217),86);
            __Vtemp1218[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [8U][0U];
            __Vtemp1218[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [8U][1U];
            __Vtemp1218[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [8U][2U];
            tracep->chgWData(oldp+1416,(__Vtemp1218),86);
            tracep->chgQData(oldp+1419,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                        [0U]),52);
            tracep->chgQData(oldp+1421,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                        [1U]),52);
            tracep->chgQData(oldp+1423,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                        [2U]),52);
            tracep->chgQData(oldp+1425,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                        [3U]),52);
            tracep->chgQData(oldp+1427,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                        [4U]),52);
            tracep->chgQData(oldp+1429,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                        [5U]),52);
            tracep->chgQData(oldp+1431,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                        [6U]),52);
            tracep->chgQData(oldp+1433,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                        [7U]),52);
            tracep->chgQData(oldp+1435,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                        [8U]),52);
            tracep->chgCData(oldp+1437,((0xfU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])),4);
            tracep->chgWData(oldp+1438,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o),86);
            tracep->chgQData(oldp+1441,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_i),52);
            tracep->chgBit(oldp+1443,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__hold_all_requests));
            tracep->chgBit(oldp+1444,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__accept_t_req));
            tracep->chgBit(oldp+1445,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__accept_t_rsp));
            __Vtemp1219[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [0U][0U];
            __Vtemp1219[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [0U][1U];
            __Vtemp1219[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [0U][2U];
            tracep->chgWData(oldp+1446,(__Vtemp1219),86);
            __Vtemp1220[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [1U][0U];
            __Vtemp1220[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [1U][1U];
            __Vtemp1220[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [1U][2U];
            tracep->chgWData(oldp+1449,(__Vtemp1220),86);
            __Vtemp1221[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [2U][0U];
            __Vtemp1221[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [2U][1U];
            __Vtemp1221[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [2U][2U];
            tracep->chgWData(oldp+1452,(__Vtemp1221),86);
            __Vtemp1222[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [3U][0U];
            __Vtemp1222[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [3U][1U];
            __Vtemp1222[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [3U][2U];
            tracep->chgWData(oldp+1455,(__Vtemp1222),86);
            __Vtemp1223[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [4U][0U];
            __Vtemp1223[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [4U][1U];
            __Vtemp1223[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [4U][2U];
            tracep->chgWData(oldp+1458,(__Vtemp1223),86);
            __Vtemp1224[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [5U][0U];
            __Vtemp1224[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [5U][1U];
            __Vtemp1224[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [5U][2U];
            tracep->chgWData(oldp+1461,(__Vtemp1224),86);
            __Vtemp1225[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [6U][0U];
            __Vtemp1225[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [6U][1U];
            __Vtemp1225[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [6U][2U];
            tracep->chgWData(oldp+1464,(__Vtemp1225),86);
            __Vtemp1226[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [7U][0U];
            __Vtemp1226[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [7U][1U];
            __Vtemp1226[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [7U][2U];
            tracep->chgWData(oldp+1467,(__Vtemp1226),86);
            __Vtemp1227[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [8U][0U];
            __Vtemp1227[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [8U][1U];
            __Vtemp1227[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [8U][2U];
            tracep->chgWData(oldp+1470,(__Vtemp1227),86);
            __Vtemp1228[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [9U][0U];
            __Vtemp1228[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [9U][1U];
            __Vtemp1228[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [9U][2U];
            tracep->chgWData(oldp+1473,(__Vtemp1228),86);
            tracep->chgQData(oldp+1476,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                        [0U]),52);
            tracep->chgQData(oldp+1478,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                        [1U]),52);
            tracep->chgQData(oldp+1480,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                        [2U]),52);
            tracep->chgQData(oldp+1482,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                        [3U]),52);
            tracep->chgQData(oldp+1484,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                        [4U]),52);
            tracep->chgQData(oldp+1486,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                        [5U]),52);
            tracep->chgQData(oldp+1488,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                        [6U]),52);
            tracep->chgQData(oldp+1490,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                        [7U]),52);
            tracep->chgQData(oldp+1492,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                        [8U]),52);
            tracep->chgQData(oldp+1494,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                        [9U]),52);
            tracep->chgQData(oldp+1496,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_p),52);
            tracep->chgBit(oldp+1498,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__hfifo_reqready));
            tracep->chgBit(oldp+1499,((1U & (vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1500,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_i))));
            tracep->chgWData(oldp+1501,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i),88);
            tracep->chgBit(oldp+1504,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_i 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1505,((1U & vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[0U])));
            tracep->chgQData(oldp+1506,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_i 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_i 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_i 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_i 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            __Vtemp1229[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [9U][0U];
            __Vtemp1229[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [9U][1U];
            __Vtemp1229[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [9U][2U];
            tracep->chgWData(oldp+1508,(__Vtemp1229),86);
            tracep->chgQData(oldp+1511,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                        [0U]),52);
            tracep->chgQData(oldp+1513,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                        [1U]),52);
            tracep->chgQData(oldp+1515,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                        [2U]),52);
            tracep->chgQData(oldp+1517,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                        [3U]),52);
            tracep->chgQData(oldp+1519,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                        [4U]),52);
            tracep->chgQData(oldp+1521,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                        [5U]),52);
            tracep->chgQData(oldp+1523,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                        [6U]),52);
            tracep->chgQData(oldp+1525,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                        [7U]),52);
            tracep->chgQData(oldp+1527,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                        [8U]),52);
            tracep->chgQData(oldp+1529,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_i),52);
            tracep->chgBit(oldp+1531,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__accept_t_req));
            tracep->chgBit(oldp+1532,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__accept_t_rsp));
            tracep->chgQData(oldp+1533,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_p),52);
            tracep->chgBit(oldp+1535,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__hfifo_reqready));
            tracep->chgBit(oldp+1536,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_i))));
            tracep->chgBit(oldp+1537,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_i 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1538,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_i 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_i 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_i 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_i 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgBit(oldp+1540,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__req_i));
            tracep->chgSData(oldp+1541,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__addr_i),12);
            tracep->chgIData(oldp+1542,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int),32);
            tracep->chgIData(oldp+1543,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__wmask_int),32);
            tracep->chgBit(oldp+1544,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__we_i));
            tracep->chgCData(oldp+1545,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_we),4);
            tracep->chgBit(oldp+1546,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack));
            tracep->chgSData(oldp+1547,(((((4U != (7U 
                                                   & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                      >> 0x12U)))
                                            ? 0U : 1U) 
                                          << 0xbU) 
                                         | (((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error) 
                                             << 0xaU) 
                                            | (0x3ffU 
                                               & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                  >> 5U))))),13);
            tracep->chgBit(oldp+1548,(((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__req_i) 
                                       & (~ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__we_i)))));
            tracep->chgCData(oldp+1549,((0x1eU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o[1U])),5);
            tracep->chgBit(oldp+1550,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error));
            tracep->chgIData(oldp+1551,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__unnamedblk1__DOT__i),32);
            tracep->chgBit(oldp+1552,((((0U == (7U 
                                                & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                     >> 0x12U)))) 
                                       | (4U == (7U 
                                                 & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                    >> 0x12U))))));
            tracep->chgBit(oldp+1553,((((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk) 
                                        & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk)) 
                                       & (((4U == (7U 
                                                   & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                      >> 0x12U))) 
                                           | (1U == 
                                              (7U & 
                                               (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                >> 0x12U)))) 
                                          | (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk)))));
            tracep->chgBit(oldp+1554,((0U == (7U & 
                                              (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+1555,((1U == (7U & 
                                              (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+1556,((4U == (7U & 
                                              (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+1557,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+1558,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+1559,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk));
            tracep->chgCData(oldp+1560,((0xfU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                      << 0x1bU) 
                                                     | (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o[1U] 
                                                        >> 5U)))))),4);
            tracep->chgBit(oldp+1561,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+1562,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+1563,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__req));
            tracep->chgSData(oldp+1564,(((0x200000U 
                                          & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                                          [0U][2U])
                                          ? (0xfffU 
                                             & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                                                 [0U][2U] 
                                                 << 0x19U) 
                                                | (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                                                   [0U][1U] 
                                                   >> 7U)))
                                          : 0U)),12);
            tracep->chgBit(oldp+1565,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o));
            tracep->chgIData(oldp+1566,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int),32);
            tracep->chgIData(oldp+1567,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int),32);
            tracep->chgBit(oldp+1568,((1U & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                                              [0U][2U] 
                                              >> 0x15U) 
                                             & (IData)(vlTOPp->azadi_soc_top__DOT__iccm_to_xbar)))));
            tracep->chgBit(oldp+1569,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack));
            tracep->chgSData(oldp+1570,(((((4U != (7U 
                                                   & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                                                      [0U][2U] 
                                                      >> 0x12U)))
                                            ? 0U : 1U) 
                                          << 0xbU) 
                                         | (((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error) 
                                             << 0xaU) 
                                            | (0x3ffU 
                                               & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                                                  [0U][2U] 
                                                  >> 5U))))),13);
            tracep->chgBit(oldp+1571,(((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__req) 
                                       & (~ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o)))));
            tracep->chgCData(oldp+1572,((0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                                         [0U][1U])),5);
            tracep->chgQData(oldp+1573,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wdata),33);
            tracep->chgQData(oldp+1575,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o),33);
            tracep->chgBit(oldp+1577,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error));
            tracep->chgIData(oldp+1578,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__unnamedblk1__DOT__i),32);
            tracep->chgBit(oldp+1579,((((0U == (7U 
                                                & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                                                   [0U][2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                                                     [0U][2U] 
                                                     >> 0x12U)))) 
                                       | (4U == (7U 
                                                 & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                                                    [0U][2U] 
                                                    >> 0x12U))))));
            tracep->chgBit(oldp+1580,((((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk) 
                                        & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__mask_chk)) 
                                       & (((4U == (7U 
                                                   & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                                                      [0U][2U] 
                                                      >> 0x12U))) 
                                           | (1U == 
                                              (7U & 
                                               (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                                                [0U][2U] 
                                                >> 0x12U)))) 
                                          | (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk)))));
            tracep->chgBit(oldp+1581,((0U == (7U & 
                                              (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                                               [0U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+1582,((1U == (7U & 
                                              (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                                               [0U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+1583,((4U == (7U & 
                                              (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                                               [0U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+1584,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+1585,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+1586,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk));
            tracep->chgCData(oldp+1587,((0xfU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                                                      [0U][2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                                                        [0U][1U] 
                                                        >> 5U)))))),4);
            tracep->chgBit(oldp+1588,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+1589,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            __Vtemp1245[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0U][0U];
            __Vtemp1245[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0U][1U];
            __Vtemp1245[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0U][2U];
            tracep->chgWData(oldp+1590,(__Vtemp1245),86);
            __Vtemp1246[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [1U][0U];
            __Vtemp1246[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [1U][1U];
            __Vtemp1246[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [1U][2U];
            tracep->chgWData(oldp+1593,(__Vtemp1246),86);
            __Vtemp1247[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [2U][0U];
            __Vtemp1247[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [2U][1U];
            __Vtemp1247[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [2U][2U];
            tracep->chgWData(oldp+1596,(__Vtemp1247),86);
            __Vtemp1248[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [3U][0U];
            __Vtemp1248[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [3U][1U];
            __Vtemp1248[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [3U][2U];
            tracep->chgWData(oldp+1599,(__Vtemp1248),86);
            __Vtemp1249[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [4U][0U];
            __Vtemp1249[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [4U][1U];
            __Vtemp1249[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [4U][2U];
            tracep->chgWData(oldp+1602,(__Vtemp1249),86);
            __Vtemp1250[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [5U][0U];
            __Vtemp1250[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [5U][1U];
            __Vtemp1250[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [5U][2U];
            tracep->chgWData(oldp+1605,(__Vtemp1250),86);
            __Vtemp1251[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [7U][0U];
            __Vtemp1251[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [7U][1U];
            __Vtemp1251[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [7U][2U];
            tracep->chgWData(oldp+1608,(__Vtemp1251),86);
            __Vtemp1252[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [8U][0U];
            __Vtemp1252[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [8U][1U];
            __Vtemp1252[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [8U][2U];
            tracep->chgWData(oldp+1611,(__Vtemp1252),86);
            __Vtemp1253[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [9U][0U];
            __Vtemp1253[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [9U][1U];
            __Vtemp1253[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [9U][2U];
            tracep->chgWData(oldp+1614,(__Vtemp1253),86);
            __Vtemp1254[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xaU][0U];
            __Vtemp1254[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xaU][1U];
            __Vtemp1254[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xaU][2U];
            tracep->chgWData(oldp+1617,(__Vtemp1254),86);
            __Vtemp1255[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xbU][0U];
            __Vtemp1255[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xbU][1U];
            __Vtemp1255[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xbU][2U];
            tracep->chgWData(oldp+1620,(__Vtemp1255),86);
            __Vtemp1256[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xcU][0U];
            __Vtemp1256[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xcU][1U];
            __Vtemp1256[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xcU][2U];
            tracep->chgWData(oldp+1623,(__Vtemp1256),86);
            __Vtemp1257[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0U][0U];
            __Vtemp1257[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0U][1U];
            __Vtemp1257[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0U][2U];
            tracep->chgWData(oldp+1626,(__Vtemp1257),86);
            __Vtemp1258[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [1U][0U];
            __Vtemp1258[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [1U][1U];
            __Vtemp1258[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [1U][2U];
            tracep->chgWData(oldp+1629,(__Vtemp1258),86);
            __Vtemp1259[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [2U][0U];
            __Vtemp1259[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [2U][1U];
            __Vtemp1259[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [2U][2U];
            tracep->chgWData(oldp+1632,(__Vtemp1259),86);
            __Vtemp1260[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [3U][0U];
            __Vtemp1260[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [3U][1U];
            __Vtemp1260[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [3U][2U];
            tracep->chgWData(oldp+1635,(__Vtemp1260),86);
            __Vtemp1261[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [4U][0U];
            __Vtemp1261[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [4U][1U];
            __Vtemp1261[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [4U][2U];
            tracep->chgWData(oldp+1638,(__Vtemp1261),86);
            __Vtemp1262[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [5U][0U];
            __Vtemp1262[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [5U][1U];
            __Vtemp1262[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [5U][2U];
            tracep->chgWData(oldp+1641,(__Vtemp1262),86);
            __Vtemp1263[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [6U][0U];
            __Vtemp1263[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [6U][1U];
            __Vtemp1263[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [6U][2U];
            tracep->chgWData(oldp+1644,(__Vtemp1263),86);
            __Vtemp1264[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [7U][0U];
            __Vtemp1264[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [7U][1U];
            __Vtemp1264[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [7U][2U];
            tracep->chgWData(oldp+1647,(__Vtemp1264),86);
            __Vtemp1265[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [8U][0U];
            __Vtemp1265[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [8U][1U];
            __Vtemp1265[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [8U][2U];
            tracep->chgWData(oldp+1650,(__Vtemp1265),86);
            __Vtemp1266[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [9U][0U];
            __Vtemp1266[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [9U][1U];
            __Vtemp1266[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [9U][2U];
            tracep->chgWData(oldp+1653,(__Vtemp1266),86);
            __Vtemp1267[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xaU][0U];
            __Vtemp1267[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xaU][1U];
            __Vtemp1267[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xaU][2U];
            tracep->chgWData(oldp+1656,(__Vtemp1267),86);
            __Vtemp1268[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xbU][0U];
            __Vtemp1268[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xbU][1U];
            __Vtemp1268[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xbU][2U];
            tracep->chgWData(oldp+1659,(__Vtemp1268),86);
            __Vtemp1269[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xcU][0U];
            __Vtemp1269[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xcU][1U];
            __Vtemp1269[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xcU][2U];
            tracep->chgWData(oldp+1662,(__Vtemp1269),86);
            tracep->chgCData(oldp+1665,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_14),4);
            __Vtemp1270[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [0U][0U];
            __Vtemp1270[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [0U][1U];
            __Vtemp1270[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [0U][2U];
            tracep->chgWData(oldp+1666,(__Vtemp1270),86);
            __Vtemp1271[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [1U][0U];
            __Vtemp1271[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [1U][1U];
            __Vtemp1271[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [1U][2U];
            tracep->chgWData(oldp+1669,(__Vtemp1271),86);
            __Vtemp1272[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [2U][0U];
            __Vtemp1272[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [2U][1U];
            __Vtemp1272[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [2U][2U];
            tracep->chgWData(oldp+1672,(__Vtemp1272),86);
            __Vtemp1273[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [3U][0U];
            __Vtemp1273[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [3U][1U];
            __Vtemp1273[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [3U][2U];
            tracep->chgWData(oldp+1675,(__Vtemp1273),86);
            __Vtemp1274[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [4U][0U];
            __Vtemp1274[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [4U][1U];
            __Vtemp1274[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [4U][2U];
            tracep->chgWData(oldp+1678,(__Vtemp1274),86);
            __Vtemp1275[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [5U][0U];
            __Vtemp1275[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [5U][1U];
            __Vtemp1275[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [5U][2U];
            tracep->chgWData(oldp+1681,(__Vtemp1275),86);
            __Vtemp1276[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [6U][0U];
            __Vtemp1276[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [6U][1U];
            __Vtemp1276[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [6U][2U];
            tracep->chgWData(oldp+1684,(__Vtemp1276),86);
            __Vtemp1277[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [7U][0U];
            __Vtemp1277[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [7U][1U];
            __Vtemp1277[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [7U][2U];
            tracep->chgWData(oldp+1687,(__Vtemp1277),86);
            __Vtemp1278[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [8U][0U];
            __Vtemp1278[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [8U][1U];
            __Vtemp1278[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [8U][2U];
            tracep->chgWData(oldp+1690,(__Vtemp1278),86);
            __Vtemp1279[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [9U][0U];
            __Vtemp1279[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [9U][1U];
            __Vtemp1279[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [9U][2U];
            tracep->chgWData(oldp+1693,(__Vtemp1279),86);
            __Vtemp1280[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [0xaU][0U];
            __Vtemp1280[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [0xaU][1U];
            __Vtemp1280[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [0xaU][2U];
            tracep->chgWData(oldp+1696,(__Vtemp1280),86);
            __Vtemp1281[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [0xbU][0U];
            __Vtemp1281[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [0xbU][1U];
            __Vtemp1281[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [0xbU][2U];
            tracep->chgWData(oldp+1699,(__Vtemp1281),86);
            __Vtemp1282[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [0xcU][0U];
            __Vtemp1282[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [0xcU][1U];
            __Vtemp1282[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [0xcU][2U];
            tracep->chgWData(oldp+1702,(__Vtemp1282),86);
            tracep->chgCData(oldp+1705,((0xfU & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])),4);
            tracep->chgWData(oldp+1706,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_o),86);
            tracep->chgQData(oldp+1709,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_i),52);
            tracep->chgBit(oldp+1711,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__hold_all_requests));
            tracep->chgBit(oldp+1712,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__accept_t_req));
            tracep->chgBit(oldp+1713,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__accept_t_rsp));
            __Vtemp1283[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0U][0U];
            __Vtemp1283[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0U][1U];
            __Vtemp1283[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0U][2U];
            tracep->chgWData(oldp+1714,(__Vtemp1283),86);
            __Vtemp1284[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [1U][0U];
            __Vtemp1284[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [1U][1U];
            __Vtemp1284[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [1U][2U];
            tracep->chgWData(oldp+1717,(__Vtemp1284),86);
            __Vtemp1285[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [2U][0U];
            __Vtemp1285[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [2U][1U];
            __Vtemp1285[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [2U][2U];
            tracep->chgWData(oldp+1720,(__Vtemp1285),86);
            __Vtemp1286[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [3U][0U];
            __Vtemp1286[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [3U][1U];
            __Vtemp1286[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [3U][2U];
            tracep->chgWData(oldp+1723,(__Vtemp1286),86);
            __Vtemp1287[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [4U][0U];
            __Vtemp1287[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [4U][1U];
            __Vtemp1287[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [4U][2U];
            tracep->chgWData(oldp+1726,(__Vtemp1287),86);
            __Vtemp1288[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [5U][0U];
            __Vtemp1288[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [5U][1U];
            __Vtemp1288[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [5U][2U];
            tracep->chgWData(oldp+1729,(__Vtemp1288),86);
            __Vtemp1289[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [6U][0U];
            __Vtemp1289[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [6U][1U];
            __Vtemp1289[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [6U][2U];
            tracep->chgWData(oldp+1732,(__Vtemp1289),86);
            __Vtemp1290[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [7U][0U];
            __Vtemp1290[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [7U][1U];
            __Vtemp1290[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [7U][2U];
            tracep->chgWData(oldp+1735,(__Vtemp1290),86);
            __Vtemp1291[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [8U][0U];
            __Vtemp1291[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [8U][1U];
            __Vtemp1291[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [8U][2U];
            tracep->chgWData(oldp+1738,(__Vtemp1291),86);
            __Vtemp1292[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [9U][0U];
            __Vtemp1292[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [9U][1U];
            __Vtemp1292[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [9U][2U];
            tracep->chgWData(oldp+1741,(__Vtemp1292),86);
            __Vtemp1293[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xaU][0U];
            __Vtemp1293[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xaU][1U];
            __Vtemp1293[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xaU][2U];
            tracep->chgWData(oldp+1744,(__Vtemp1293),86);
            __Vtemp1294[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xbU][0U];
            __Vtemp1294[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xbU][1U];
            __Vtemp1294[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xbU][2U];
            tracep->chgWData(oldp+1747,(__Vtemp1294),86);
            __Vtemp1295[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xcU][0U];
            __Vtemp1295[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xcU][1U];
            __Vtemp1295[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xcU][2U];
            tracep->chgWData(oldp+1750,(__Vtemp1295),86);
            __Vtemp1296[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xdU][0U];
            __Vtemp1296[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xdU][1U];
            __Vtemp1296[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xdU][2U];
            tracep->chgWData(oldp+1753,(__Vtemp1296),86);
            tracep->chgQData(oldp+1756,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_p),52);
            tracep->chgBit(oldp+1758,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__hfifo_reqready));
            tracep->chgBit(oldp+1759,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.tl_d_o[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1760,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_i))));
            tracep->chgWData(oldp+1761,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i),88);
            tracep->chgBit(oldp+1764,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_i 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1765,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.tl_d_o[0U])));
            tracep->chgQData(oldp+1766,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_i 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_i 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_i 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_i 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            __Vtemp1297[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xdU][0U];
            __Vtemp1297[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xdU][1U];
            __Vtemp1297[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xdU][2U];
            tracep->chgWData(oldp+1768,(__Vtemp1297),86);
            tracep->chgWData(oldp+1771,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw),459);
            tracep->chgIData(oldp+1786,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_d),32);
            tracep->chgIData(oldp+1787,(((~ vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_d) 
                                         & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[1U])),32);
            tracep->chgIData(oldp+1788,((vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_d 
                                         & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[2U])),32);
            tracep->chgIData(oldp+1789,(((vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0xdU] 
                                          << 0x15U) 
                                         | (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0xcU] 
                                            >> 0xbU))),32);
            tracep->chgIData(oldp+1790,(((vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0xcU] 
                                          << 0x15U) 
                                         | (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0xbU] 
                                            >> 0xbU))),32);
            tracep->chgBit(oldp+1791,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0xbU] 
                                             >> 0xaU))));
            tracep->chgIData(oldp+1792,(((vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0xeU] 
                                          << 0x15U) 
                                         | (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0xdU] 
                                            >> 0xbU))),32);
            tracep->chgBit(oldp+1793,((0U != vlTOPp->azadi_soc_top__DOT__GPIO__DOT__intr_hw__DOT__new_event)));
            tracep->chgIData(oldp+1794,((vlTOPp->azadi_soc_top__DOT__GPIO__DOT__intr_hw__DOT__new_event 
                                         | ((vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0xeU] 
                                             << 0x15U) 
                                            | (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0xdU] 
                                               >> 0xbU)))),32);
            tracep->chgIData(oldp+1795,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__intr_hw__DOT__new_event),32);
            tracep->chgBit(oldp+1796,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_we));
            tracep->chgBit(oldp+1797,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_re));
            tracep->chgCData(oldp+1798,((0x3cU & ((
                                                   vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [6U][2U] 
                                                   << 0x1bU) 
                                                  | (0x7fffffcU 
                                                     & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                        [6U][1U] 
                                                        >> 5U))))),6);
            tracep->chgIData(oldp+1799,(((vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                          [6U][1U] 
                                          << 0x1fU) 
                                         | (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [6U][0U] 
                                            >> 1U))),32);
            tracep->chgCData(oldp+1800,((0xfU & ((vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [6U][2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                    [6U][1U] 
                                                    >> 1U)))),4);
            tracep->chgIData(oldp+1801,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next),32);
            tracep->chgBit(oldp+1802,(((((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_re) 
                                         | (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__addr_hit))))) 
                                       | (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__wr_err))));
            tracep->chgBit(oldp+1803,((((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_re) 
                                        | (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__addr_hit)))))));
            tracep->chgBit(oldp+1804,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__wr_err));
            tracep->chgBit(oldp+1805,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__intr_state_we));
            tracep->chgBit(oldp+1806,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__intr_enable_we));
            tracep->chgBit(oldp+1807,(((((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                         >> 2U) & (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+1808,(((((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                         >> 4U) & (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+1809,((((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                        >> 4U) & (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_re))));
            tracep->chgSData(oldp+1810,((0x3ffU & (
                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                    [6U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                      [6U][0U] 
                                                      >> 1U)))),10);
            tracep->chgBit(oldp+1811,(((((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                         >> 5U) & (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+1812,((((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                        >> 5U) & (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_re))));
            tracep->chgSData(oldp+1813,((0xfc00U | 
                                         (0x3ffU & 
                                          ((vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                            [6U][1U] 
                                            << 0x15U) 
                                           | (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                              [6U][0U] 
                                              >> 0xbU))))),16);
            tracep->chgSData(oldp+1814,((0xffffU & 
                                         ((vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                           [6U][1U] 
                                           << 0x1fU) 
                                          | (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                             [6U][0U] 
                                             >> 1U)))),16);
            tracep->chgBit(oldp+1815,(((((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                         >> 6U) & (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+1816,((((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                        >> 6U) & (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_re))));
            tracep->chgSData(oldp+1817,((0xffffU & 
                                         ((vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                           [6U][1U] 
                                           << 0xfU) 
                                          | (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                             [6U][0U] 
                                             >> 0x11U)))),16);
            tracep->chgBit(oldp+1818,(((((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                         >> 7U) & (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+1819,((((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                        >> 7U) & (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+1820,(((((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                         >> 8U) & (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+1821,((((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                        >> 8U) & (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+1822,(((((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                         >> 9U) & (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+1823,((((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                        >> 9U) & (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+1824,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_rising_we));
            tracep->chgBit(oldp+1825,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_falling_we));
            tracep->chgBit(oldp+1826,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we));
            tracep->chgBit(oldp+1827,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we));
            tracep->chgBit(oldp+1828,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__ctrl_en_input_filter_we));
            tracep->chgSData(oldp+1829,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__addr_hit),15);
            tracep->chgBit(oldp+1830,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__a_ack));
            tracep->chgBit(oldp+1831,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
            tracep->chgBit(oldp+1832,(((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                                       & (0U != (3U 
                                                 & ((vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                     [6U][2U] 
                                                     << 0x1bU) 
                                                    | (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                       [6U][1U] 
                                                       >> 5U)))))));
            tracep->chgBit(oldp+1833,((1U & (~ ((((0U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                       [6U][2U] 
                                                       >> 0x12U))) 
                                                  | (1U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                         [6U][2U] 
                                                         >> 0x12U)))) 
                                                 | (4U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                        [6U][2U] 
                                                        >> 0x12U)))) 
                                                & (((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                                    & (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                                   & (((4U 
                                                        == 
                                                        (7U 
                                                         & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                            [6U][2U] 
                                                            >> 0x12U))) 
                                                       | (1U 
                                                          == 
                                                          (7U 
                                                           & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                              [6U][2U] 
                                                              >> 0x12U)))) 
                                                      | (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk))))))));
            tracep->chgBit(oldp+1834,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
            tracep->chgBit(oldp+1835,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
            tracep->chgBit(oldp+1836,((((0U == (7U 
                                                & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [6U][2U] 
                                                   >> 0x12U))) 
                                        | (1U == (7U 
                                                  & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                     [6U][2U] 
                                                     >> 0x12U)))) 
                                       | (4U == (7U 
                                                 & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                    [6U][2U] 
                                                    >> 0x12U))))));
            tracep->chgBit(oldp+1837,((((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                        & (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                       & (((4U == (7U 
                                                   & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                      [6U][2U] 
                                                      >> 0x12U))) 
                                           | (1U == 
                                              (7U & 
                                               (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [6U][2U] 
                                                >> 0x12U)))) 
                                          | (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))));
            tracep->chgBit(oldp+1838,((0U == (7U & 
                                              (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [6U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+1839,((1U == (7U & 
                                              (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [6U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+1840,((4U == (7U & 
                                              (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [6U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+1841,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+1842,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+1843,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk));
            tracep->chgCData(oldp+1844,((0xfU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                      [6U][2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                        [6U][1U] 
                                                        >> 5U)))))),4);
            tracep->chgIData(oldp+1845,(((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__intr_enable_we)
                                          ? ((vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                              [6U][1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [6U][0U] 
                                                >> 1U))
                                          : 0U)),32);
            tracep->chgSData(oldp+1846,((0x3ffU & (
                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                    [6U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                      [6U][0U] 
                                                      >> 1U)))),16);
            tracep->chgIData(oldp+1847,(((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_rising_we)
                                          ? ((vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                              [6U][1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [6U][0U] 
                                                >> 1U))
                                          : 0U)),32);
            tracep->chgIData(oldp+1848,(((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_falling_we)
                                          ? ((vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                              [6U][1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [6U][0U] 
                                                >> 1U))
                                          : 0U)),32);
            tracep->chgIData(oldp+1849,(((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we)
                                          ? ((vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                              [6U][1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [6U][0U] 
                                                >> 1U))
                                          : 0U)),32);
            tracep->chgIData(oldp+1850,(((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we)
                                          ? ((vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                              [6U][1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [6U][0U] 
                                                >> 1U))
                                          : 0U)),32);
            tracep->chgIData(oldp+1851,(((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__ctrl_en_input_filter_we)
                                          ? ((vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                              [6U][1U] 
                                              << 0x1fU) 
                                             | (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                [6U][0U] 
                                                >> 1U))
                                          : 0U)),32);
            tracep->chgBit(oldp+1852,((1U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])));
            tracep->chgCData(oldp+1853,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1854,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+1855,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                             >> 1U))));
            tracep->chgCData(oldp+1856,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1857,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+1858,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                             >> 2U))));
            tracep->chgCData(oldp+1859,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1860,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+1861,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                             >> 3U))));
            tracep->chgCData(oldp+1862,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1863,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+1864,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                             >> 4U))));
            tracep->chgCData(oldp+1865,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1866,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+1867,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                             >> 5U))));
            tracep->chgCData(oldp+1868,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1869,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+1870,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                             >> 6U))));
            tracep->chgCData(oldp+1871,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1872,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+1873,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                             >> 7U))));
            tracep->chgCData(oldp+1874,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1875,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+1876,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                             >> 8U))));
            tracep->chgCData(oldp+1877,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1878,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+1879,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                             >> 9U))));
            tracep->chgCData(oldp+1880,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1881,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+1882,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                             >> 0xaU))));
            tracep->chgCData(oldp+1883,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1884,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+1885,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                             >> 0xbU))));
            tracep->chgCData(oldp+1886,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1887,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+1888,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1889,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1890,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+1891,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                             >> 0xdU))));
            tracep->chgCData(oldp+1892,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1893,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+1894,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                             >> 0xeU))));
            tracep->chgCData(oldp+1895,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1896,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+1897,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1898,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1899,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+1900,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                             >> 0x10U))));
            tracep->chgCData(oldp+1901,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1902,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+1903,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                             >> 0x11U))));
            tracep->chgCData(oldp+1904,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1905,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+1906,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                             >> 0x12U))));
            tracep->chgCData(oldp+1907,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1908,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+1909,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                             >> 0x13U))));
            tracep->chgCData(oldp+1910,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1911,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+1912,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                             >> 0x14U))));
            tracep->chgCData(oldp+1913,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1914,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+1915,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                             >> 0x15U))));
            tracep->chgCData(oldp+1916,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1917,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+1918,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                             >> 0x16U))));
            tracep->chgCData(oldp+1919,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1920,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+1921,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                             >> 0x17U))));
            tracep->chgCData(oldp+1922,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1923,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+1924,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                             >> 0x18U))));
            tracep->chgCData(oldp+1925,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1926,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+1927,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                             >> 0x19U))));
            tracep->chgCData(oldp+1928,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1929,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+1930,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                             >> 0x1aU))));
            tracep->chgCData(oldp+1931,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1932,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+1933,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                             >> 0x1bU))));
            tracep->chgCData(oldp+1934,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1935,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+1936,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                             >> 0x1cU))));
            tracep->chgCData(oldp+1937,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1938,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+1939,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                             >> 0x1dU))));
            tracep->chgCData(oldp+1940,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1941,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+1942,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                             >> 0x1eU))));
            tracep->chgCData(oldp+1943,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1944,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+1945,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                             >> 0x1fU))));
            tracep->chgCData(oldp+1946,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+1947,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d))));
            __Vtemp1327[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_h_i
                [0U][0U];
            __Vtemp1327[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_h_i
                [0U][1U];
            __Vtemp1327[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_h_i
                [0U][2U];
            tracep->chgWData(oldp+1948,(__Vtemp1327),86);
            __Vtemp1328[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_h_i
                [1U][0U];
            __Vtemp1328[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_h_i
                [1U][1U];
            __Vtemp1328[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_h_i
                [1U][2U];
            tracep->chgWData(oldp+1951,(__Vtemp1328),86);
            tracep->chgQData(oldp+1954,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_h_o
                                        [0U]),52);
            tracep->chgQData(oldp+1956,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_h_o
                                        [1U]),52);
            __Vtemp1329[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                [0U][0U];
            __Vtemp1329[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                [0U][1U];
            __Vtemp1329[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                [0U][2U];
            tracep->chgWData(oldp+1958,(__Vtemp1329),86);
            __Vtemp1330[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                [1U][0U];
            __Vtemp1330[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                [1U][1U];
            __Vtemp1330[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                [1U][2U];
            tracep->chgWData(oldp+1961,(__Vtemp1330),86);
            tracep->chgQData(oldp+1964,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgQData(oldp+1966,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgCData(oldp+1968,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrequest),2);
            tracep->chgCData(oldp+1969,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hgrant),2);
            tracep->chgWData(oldp+1970,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i),86);
            tracep->chgBit(oldp+1973,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrequest))));
            tracep->chgWData(oldp+1974,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgCData(oldp+1977,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+1978,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__dfifo_rspready))));
            tracep->chgWData(oldp+1979,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i),86);
            tracep->chgCData(oldp+1982,((0xfeU & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+1983,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgWData(oldp+1984,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i),86);
            tracep->chgCData(oldp+1987,((1U | (0xfeU 
                                               & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+1988,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1989,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp1338[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[0U]);
            __Vtemp1338[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[1U]));
            __Vtemp1338[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+1990,(__Vtemp1338),85);
            tracep->chgBit(oldp+1993,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[0U])));
            tracep->chgWData(oldp+1994,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+1997,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgBit(oldp+2000,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgCData(oldp+2001,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+2002,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+2003,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+2004,((2U & ((IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                               << 1U))),2);
            tracep->chgCData(oldp+2005,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
            __Vtemp1339[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.tl_h_i
                [0U][0U];
            __Vtemp1339[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.tl_h_i
                [0U][1U];
            __Vtemp1339[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.tl_h_i
                [0U][2U];
            tracep->chgWData(oldp+2006,(__Vtemp1339),86);
            __Vtemp1340[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.tl_h_i
                [1U][0U];
            __Vtemp1340[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.tl_h_i
                [1U][1U];
            __Vtemp1340[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.tl_h_i
                [1U][2U];
            tracep->chgWData(oldp+2009,(__Vtemp1340),86);
            tracep->chgQData(oldp+2012,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.tl_h_o
                                        [0U]),52);
            tracep->chgQData(oldp+2014,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.tl_h_o
                                        [1U]),52);
            tracep->chgWData(oldp+2016,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.tl_d_o),86);
            __Vtemp1341[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hreq_fifo_o
                [0U][0U];
            __Vtemp1341[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hreq_fifo_o
                [0U][1U];
            __Vtemp1341[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hreq_fifo_o
                [0U][2U];
            tracep->chgWData(oldp+2019,(__Vtemp1341),86);
            __Vtemp1342[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hreq_fifo_o
                [1U][0U];
            __Vtemp1342[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hreq_fifo_o
                [1U][1U];
            __Vtemp1342[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hreq_fifo_o
                [1U][2U];
            tracep->chgWData(oldp+2022,(__Vtemp1342),86);
            tracep->chgQData(oldp+2025,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgQData(oldp+2027,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgCData(oldp+2029,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrequest),2);
            tracep->chgCData(oldp+2030,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hgrant),2);
            tracep->chgWData(oldp+2031,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__dreq_fifo_i),86);
            tracep->chgBit(oldp+2034,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrequest))));
            tracep->chgWData(oldp+2035,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgCData(oldp+2038,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+2039,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__dfifo_rspready))));
            tracep->chgWData(oldp+2040,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i),86);
            tracep->chgCData(oldp+2043,((0xfeU & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+2044,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgWData(oldp+2045,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i),86);
            tracep->chgCData(oldp+2048,((1U | (0xfeU 
                                               & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+2049,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2050,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp1350[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__dreq_fifo_i[0U]);
            __Vtemp1350[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__dreq_fifo_i[1U]));
            __Vtemp1350[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+2051,(__Vtemp1350),85);
            tracep->chgBit(oldp+2054,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__dreq_fifo_i[0U])));
            tracep->chgWData(oldp+2055,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+2058,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgBit(oldp+2061,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgCData(oldp+2062,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+2063,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+2064,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+2065,((2U & ((IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                               << 1U))),2);
            tracep->chgCData(oldp+2066,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
            __Vtemp1351[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.tl_h_i
                [0U][0U];
            __Vtemp1351[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.tl_h_i
                [0U][1U];
            __Vtemp1351[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.tl_h_i
                [0U][2U];
            tracep->chgWData(oldp+2067,(__Vtemp1351),86);
            __Vtemp1352[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.tl_h_i
                [1U][0U];
            __Vtemp1352[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.tl_h_i
                [1U][1U];
            __Vtemp1352[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.tl_h_i
                [1U][2U];
            tracep->chgWData(oldp+2070,(__Vtemp1352),86);
            tracep->chgQData(oldp+2073,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                        [0U]),52);
            tracep->chgQData(oldp+2075,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                        [1U]),52);
            __Vtemp1353[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                [0U][0U];
            __Vtemp1353[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                [0U][1U];
            __Vtemp1353[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                [0U][2U];
            tracep->chgWData(oldp+2077,(__Vtemp1353),86);
            __Vtemp1354[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                [1U][0U];
            __Vtemp1354[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                [1U][1U];
            __Vtemp1354[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                [1U][2U];
            tracep->chgWData(oldp+2080,(__Vtemp1354),86);
            tracep->chgQData(oldp+2083,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgQData(oldp+2085,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgCData(oldp+2087,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrequest),2);
            tracep->chgCData(oldp+2088,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hgrant),2);
            tracep->chgWData(oldp+2089,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i),86);
            tracep->chgBit(oldp+2092,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrequest))));
            tracep->chgWData(oldp+2093,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgCData(oldp+2096,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+2097,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__dfifo_rspready))));
            tracep->chgWData(oldp+2098,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i),86);
            tracep->chgCData(oldp+2101,((0xfeU & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+2102,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgWData(oldp+2103,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i),86);
            tracep->chgCData(oldp+2106,((1U | (0xfeU 
                                               & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+2107,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2108,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp1362[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[0U]);
            __Vtemp1362[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[1U]));
            __Vtemp1362[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+2109,(__Vtemp1362),85);
            tracep->chgBit(oldp+2112,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[0U])));
            tracep->chgWData(oldp+2113,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+2116,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgBit(oldp+2119,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgCData(oldp+2120,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+2121,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+2122,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+2123,((2U & ((IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                               << 1U))),2);
            tracep->chgCData(oldp+2124,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
            __Vtemp1363[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.tl_h_i
                [0U][0U];
            __Vtemp1363[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.tl_h_i
                [0U][1U];
            __Vtemp1363[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.tl_h_i
                [0U][2U];
            tracep->chgWData(oldp+2125,(__Vtemp1363),86);
            __Vtemp1364[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.tl_h_i
                [1U][0U];
            __Vtemp1364[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.tl_h_i
                [1U][1U];
            __Vtemp1364[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.tl_h_i
                [1U][2U];
            tracep->chgWData(oldp+2128,(__Vtemp1364),86);
            tracep->chgQData(oldp+2131,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.tl_h_o
                                        [0U]),52);
            tracep->chgQData(oldp+2133,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.tl_h_o
                                        [1U]),52);
            __Vtemp1365[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                [0U][0U];
            __Vtemp1365[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                [0U][1U];
            __Vtemp1365[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                [0U][2U];
            tracep->chgWData(oldp+2135,(__Vtemp1365),86);
            __Vtemp1366[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                [1U][0U];
            __Vtemp1366[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                [1U][1U];
            __Vtemp1366[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                [1U][2U];
            tracep->chgWData(oldp+2138,(__Vtemp1366),86);
            tracep->chgQData(oldp+2141,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgQData(oldp+2143,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgCData(oldp+2145,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrequest),2);
            tracep->chgCData(oldp+2146,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hgrant),2);
            tracep->chgWData(oldp+2147,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i),86);
            tracep->chgBit(oldp+2150,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrequest))));
            tracep->chgWData(oldp+2151,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgCData(oldp+2154,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+2155,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__dfifo_rspready))));
            tracep->chgWData(oldp+2156,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i),86);
            tracep->chgCData(oldp+2159,((0xfeU & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+2160,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgWData(oldp+2161,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i),86);
            tracep->chgCData(oldp+2164,((1U | (0xfeU 
                                               & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+2165,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2166,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp1374[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[0U]);
            __Vtemp1374[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[1U]));
            __Vtemp1374[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+2167,(__Vtemp1374),85);
            tracep->chgBit(oldp+2170,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[0U])));
            tracep->chgWData(oldp+2171,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+2174,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgBit(oldp+2177,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgCData(oldp+2178,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+2179,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+2180,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+2181,((2U & ((IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                               << 1U))),2);
            tracep->chgCData(oldp+2182,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
            __Vtemp1375[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.tl_h_i
                [0U][0U];
            __Vtemp1375[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.tl_h_i
                [0U][1U];
            __Vtemp1375[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.tl_h_i
                [0U][2U];
            tracep->chgWData(oldp+2183,(__Vtemp1375),86);
            __Vtemp1376[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.tl_h_i
                [1U][0U];
            __Vtemp1376[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.tl_h_i
                [1U][1U];
            __Vtemp1376[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.tl_h_i
                [1U][2U];
            tracep->chgWData(oldp+2186,(__Vtemp1376),86);
            tracep->chgQData(oldp+2189,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.tl_h_o
                                        [0U]),52);
            tracep->chgQData(oldp+2191,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.tl_h_o
                                        [1U]),52);
            __Vtemp1377[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                [0U][0U];
            __Vtemp1377[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                [0U][1U];
            __Vtemp1377[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                [0U][2U];
            tracep->chgWData(oldp+2193,(__Vtemp1377),86);
            __Vtemp1378[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                [1U][0U];
            __Vtemp1378[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                [1U][1U];
            __Vtemp1378[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                [1U][2U];
            tracep->chgWData(oldp+2196,(__Vtemp1378),86);
            tracep->chgQData(oldp+2199,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgQData(oldp+2201,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgCData(oldp+2203,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrequest),2);
            tracep->chgCData(oldp+2204,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hgrant),2);
            tracep->chgWData(oldp+2205,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i),86);
            tracep->chgBit(oldp+2208,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrequest))));
            tracep->chgWData(oldp+2209,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgCData(oldp+2212,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+2213,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__dfifo_rspready))));
            tracep->chgWData(oldp+2214,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i),86);
            tracep->chgCData(oldp+2217,((0xfeU & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+2218,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgWData(oldp+2219,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i),86);
            tracep->chgCData(oldp+2222,((1U | (0xfeU 
                                               & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+2223,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2224,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp1386[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[0U]);
            __Vtemp1386[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[1U]));
            __Vtemp1386[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+2225,(__Vtemp1386),85);
            tracep->chgBit(oldp+2228,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[0U])));
            tracep->chgWData(oldp+2229,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+2232,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgBit(oldp+2235,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgCData(oldp+2236,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+2237,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+2238,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+2239,((2U & ((IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                               << 1U))),2);
            tracep->chgCData(oldp+2240,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
            __Vtemp1387[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.tl_h_i
                [0U][0U];
            __Vtemp1387[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.tl_h_i
                [0U][1U];
            __Vtemp1387[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.tl_h_i
                [0U][2U];
            tracep->chgWData(oldp+2241,(__Vtemp1387),86);
            __Vtemp1388[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.tl_h_i
                [1U][0U];
            __Vtemp1388[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.tl_h_i
                [1U][1U];
            __Vtemp1388[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.tl_h_i
                [1U][2U];
            tracep->chgWData(oldp+2244,(__Vtemp1388),86);
            tracep->chgQData(oldp+2247,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                        [0U]),52);
            tracep->chgQData(oldp+2249,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                        [1U]),52);
            __Vtemp1389[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                [0U][0U];
            __Vtemp1389[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                [0U][1U];
            __Vtemp1389[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                [0U][2U];
            tracep->chgWData(oldp+2251,(__Vtemp1389),86);
            __Vtemp1390[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                [1U][0U];
            __Vtemp1390[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                [1U][1U];
            __Vtemp1390[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                [1U][2U];
            tracep->chgWData(oldp+2254,(__Vtemp1390),86);
            tracep->chgQData(oldp+2257,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgQData(oldp+2259,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgCData(oldp+2261,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrequest),2);
            tracep->chgCData(oldp+2262,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hgrant),2);
            tracep->chgWData(oldp+2263,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i),86);
            tracep->chgBit(oldp+2266,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrequest))));
            tracep->chgWData(oldp+2267,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgCData(oldp+2270,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+2271,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__dfifo_rspready))));
            tracep->chgWData(oldp+2272,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i),86);
            tracep->chgCData(oldp+2275,((0xfeU & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+2276,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgWData(oldp+2277,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i),86);
            tracep->chgCData(oldp+2280,((1U | (0xfeU 
                                               & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+2281,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2282,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp1398[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[0U]);
            __Vtemp1398[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[1U]));
            __Vtemp1398[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+2283,(__Vtemp1398),85);
            tracep->chgBit(oldp+2286,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[0U])));
            tracep->chgWData(oldp+2287,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+2290,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgBit(oldp+2293,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgCData(oldp+2294,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+2295,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+2296,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+2297,((2U & ((IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                               << 1U))),2);
            tracep->chgCData(oldp+2298,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
            __Vtemp1399[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.tl_h_i
                [0U][0U];
            __Vtemp1399[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.tl_h_i
                [0U][1U];
            __Vtemp1399[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.tl_h_i
                [0U][2U];
            tracep->chgWData(oldp+2299,(__Vtemp1399),86);
            __Vtemp1400[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.tl_h_i
                [1U][0U];
            __Vtemp1400[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.tl_h_i
                [1U][1U];
            __Vtemp1400[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.tl_h_i
                [1U][2U];
            tracep->chgWData(oldp+2302,(__Vtemp1400),86);
            tracep->chgQData(oldp+2305,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                        [0U]),52);
            tracep->chgQData(oldp+2307,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                        [1U]),52);
            __Vtemp1401[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                [0U][0U];
            __Vtemp1401[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                [0U][1U];
            __Vtemp1401[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                [0U][2U];
            tracep->chgWData(oldp+2309,(__Vtemp1401),86);
            __Vtemp1402[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                [1U][0U];
            __Vtemp1402[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                [1U][1U];
            __Vtemp1402[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                [1U][2U];
            tracep->chgWData(oldp+2312,(__Vtemp1402),86);
            tracep->chgQData(oldp+2315,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgQData(oldp+2317,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgCData(oldp+2319,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrequest),2);
            tracep->chgCData(oldp+2320,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hgrant),2);
            tracep->chgWData(oldp+2321,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i),86);
            tracep->chgBit(oldp+2324,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrequest))));
            tracep->chgWData(oldp+2325,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgCData(oldp+2328,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+2329,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__dfifo_rspready))));
            tracep->chgWData(oldp+2330,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i),86);
            tracep->chgCData(oldp+2333,((0xfeU & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+2334,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgWData(oldp+2335,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i),86);
            tracep->chgCData(oldp+2338,((1U | (0xfeU 
                                               & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+2339,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2340,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp1410[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[0U]);
            __Vtemp1410[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[1U]));
            __Vtemp1410[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+2341,(__Vtemp1410),85);
            tracep->chgBit(oldp+2344,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[0U])));
            tracep->chgWData(oldp+2345,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+2348,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgBit(oldp+2351,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgCData(oldp+2352,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+2353,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+2354,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+2355,((2U & ((IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                               << 1U))),2);
            tracep->chgCData(oldp+2356,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
            __Vtemp1411[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.tl_h_i
                [0U][0U];
            __Vtemp1411[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.tl_h_i
                [0U][1U];
            __Vtemp1411[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.tl_h_i
                [0U][2U];
            tracep->chgWData(oldp+2357,(__Vtemp1411),86);
            __Vtemp1412[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.tl_h_i
                [1U][0U];
            __Vtemp1412[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.tl_h_i
                [1U][1U];
            __Vtemp1412[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.tl_h_i
                [1U][2U];
            tracep->chgWData(oldp+2360,(__Vtemp1412),86);
            tracep->chgQData(oldp+2363,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.tl_h_o
                                        [0U]),52);
            tracep->chgQData(oldp+2365,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.tl_h_o
                                        [1U]),52);
            __Vtemp1413[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                [0U][0U];
            __Vtemp1413[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                [0U][1U];
            __Vtemp1413[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                [0U][2U];
            tracep->chgWData(oldp+2367,(__Vtemp1413),86);
            __Vtemp1414[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                [1U][0U];
            __Vtemp1414[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                [1U][1U];
            __Vtemp1414[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                [1U][2U];
            tracep->chgWData(oldp+2370,(__Vtemp1414),86);
            tracep->chgQData(oldp+2373,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgQData(oldp+2375,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgCData(oldp+2377,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrequest),2);
            tracep->chgCData(oldp+2378,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hgrant),2);
            tracep->chgWData(oldp+2379,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i),86);
            tracep->chgBit(oldp+2382,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrequest))));
            tracep->chgWData(oldp+2383,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgCData(oldp+2386,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+2387,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__dfifo_rspready))));
            tracep->chgWData(oldp+2388,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i),86);
            tracep->chgCData(oldp+2391,((0xfeU & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+2392,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgWData(oldp+2393,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i),86);
            tracep->chgCData(oldp+2396,((1U | (0xfeU 
                                               & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+2397,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2398,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp1422[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[0U]);
            __Vtemp1422[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[1U]));
            __Vtemp1422[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+2399,(__Vtemp1422),85);
            tracep->chgBit(oldp+2402,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[0U])));
            tracep->chgWData(oldp+2403,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+2406,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgBit(oldp+2409,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgCData(oldp+2410,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+2411,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+2412,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+2413,((2U & ((IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                               << 1U))),2);
            tracep->chgCData(oldp+2414,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
            __Vtemp1423[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                [0U][0U];
            __Vtemp1423[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                [0U][1U];
            __Vtemp1423[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                [0U][2U];
            tracep->chgWData(oldp+2415,(__Vtemp1423),86);
            __Vtemp1424[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                [1U][0U];
            __Vtemp1424[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                [1U][1U];
            __Vtemp1424[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                [1U][2U];
            tracep->chgWData(oldp+2418,(__Vtemp1424),86);
            tracep->chgQData(oldp+2421,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.tl_h_o
                                        [0U]),52);
            tracep->chgQData(oldp+2423,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.tl_h_o
                                        [1U]),52);
            __Vtemp1425[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                [0U][0U];
            __Vtemp1425[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                [0U][1U];
            __Vtemp1425[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                [0U][2U];
            tracep->chgWData(oldp+2425,(__Vtemp1425),86);
            __Vtemp1426[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                [1U][0U];
            __Vtemp1426[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                [1U][1U];
            __Vtemp1426[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                [1U][2U];
            tracep->chgWData(oldp+2428,(__Vtemp1426),86);
            tracep->chgQData(oldp+2431,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgQData(oldp+2433,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgCData(oldp+2435,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrequest),2);
            tracep->chgCData(oldp+2436,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hgrant),2);
            tracep->chgWData(oldp+2437,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i),86);
            tracep->chgQData(oldp+2440,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__drsp_fifo_o),52);
            tracep->chgBit(oldp+2442,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrequest))));
            tracep->chgBit(oldp+2443,((1U & (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__drsp_fifo_o))));
            tracep->chgWData(oldp+2444,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgCData(oldp+2447,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hfifo_rspvalid),2);
            tracep->chgCData(oldp+2448,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__dfifo_rspready),2);
            tracep->chgCData(oldp+2449,((0x7fU & (IData)(
                                                         (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__drsp_fifo_o 
                                                          >> 0x24U)))),8);
            tracep->chgBit(oldp+2450,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__dfifo_rspready))));
            tracep->chgWData(oldp+2451,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i),86);
            tracep->chgCData(oldp+2454,((0xfeU & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+2455,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgWData(oldp+2456,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i),86);
            tracep->chgCData(oldp+2459,((1U | (0xfeU 
                                               & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+2460,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2461,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2462,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_us_d2h))));
            __Vtemp1434[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[0U]);
            __Vtemp1434[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[1U]));
            __Vtemp1434[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+2463,(__Vtemp1434),85);
            tracep->chgBit(oldp+2466,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_us_d2h 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2467,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[0U])));
            tracep->chgQData(oldp+2468,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_us_d2h 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_us_d2h 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_us_d2h 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_us_d2h 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgWData(oldp+2470,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+2473,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgBit(oldp+2476,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgCData(oldp+2477,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+2478,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+2479,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+2480,((2U & ((IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                               << 1U))),2);
            tracep->chgCData(oldp+2481,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
            tracep->chgQData(oldp+2482,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+2484,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+2487,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgBit(oldp+2489,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2490,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [0U]))));
            __Vtemp1438[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1438[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1438[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+2491,(__Vtemp1438),85);
            tracep->chgBit(oldp+2494,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2495,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+2496,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                      [0U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                          [0U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgQData(oldp+2498,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+2500,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+2503,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgBit(oldp+2505,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2506,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [1U]))));
            __Vtemp1442[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1442[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1442[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+2507,(__Vtemp1442),85);
            tracep->chgBit(oldp+2510,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2511,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+2512,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                      [1U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                          [1U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgQData(oldp+2514,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+2516,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+2519,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgBit(oldp+2521,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2522,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                                    [0U]))));
            __Vtemp1446[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1446[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1446[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+2523,(__Vtemp1446),85);
            tracep->chgBit(oldp+2526,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2527,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+2528,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                                                      [0U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                                                          [0U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgQData(oldp+2530,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+2532,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+2535,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgBit(oldp+2537,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2538,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                                    [1U]))));
            __Vtemp1450[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1450[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1450[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+2539,(__Vtemp1450),85);
            tracep->chgBit(oldp+2542,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2543,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+2544,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                                                      [1U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                                                          [1U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgQData(oldp+2546,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+2548,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+2551,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgBit(oldp+2553,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2554,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                    [0U]))));
            __Vtemp1454[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1454[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1454[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+2555,(__Vtemp1454),85);
            tracep->chgBit(oldp+2558,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2559,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+2560,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                                      [0U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                                          [0U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgQData(oldp+2562,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+2564,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+2567,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgBit(oldp+2569,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2570,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                    [1U]))));
            __Vtemp1458[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1458[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1458[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+2571,(__Vtemp1458),85);
            tracep->chgBit(oldp+2574,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2575,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+2576,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                                      [1U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                                          [1U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgQData(oldp+2578,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+2580,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+2583,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgBit(oldp+2585,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2586,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                    [0U]))));
            __Vtemp1462[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1462[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1462[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+2587,(__Vtemp1462),85);
            tracep->chgBit(oldp+2590,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2591,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+2592,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                                      [0U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                                          [0U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgQData(oldp+2594,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+2596,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+2599,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgBit(oldp+2601,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2602,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                    [1U]))));
            __Vtemp1466[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1466[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1466[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+2603,(__Vtemp1466),85);
            tracep->chgBit(oldp+2606,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2607,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+2608,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                                      [1U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                                          [1U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgQData(oldp+2610,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+2612,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+2615,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgBit(oldp+2617,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2618,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                    [0U]))));
            __Vtemp1470[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1470[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1470[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+2619,(__Vtemp1470),85);
            tracep->chgBit(oldp+2622,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2623,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+2624,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                                      [0U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                                          [0U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgQData(oldp+2626,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+2628,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+2631,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgBit(oldp+2633,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2634,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                    [1U]))));
            __Vtemp1474[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1474[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1474[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+2635,(__Vtemp1474),85);
            tracep->chgBit(oldp+2638,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2639,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+2640,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                                      [1U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                                          [1U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgQData(oldp+2642,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+2644,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+2647,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgBit(oldp+2649,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2650,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                    [0U]))));
            __Vtemp1478[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1478[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1478[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+2651,(__Vtemp1478),85);
            tracep->chgBit(oldp+2654,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2655,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+2656,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                      [0U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                          [0U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgQData(oldp+2658,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+2660,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+2663,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgBit(oldp+2665,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2666,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                    [1U]))));
            __Vtemp1482[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1482[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1482[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+2667,(__Vtemp1482),85);
            tracep->chgBit(oldp+2670,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2671,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+2672,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                      [1U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                          [1U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgQData(oldp+2674,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+2676,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+2679,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgBit(oldp+2681,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2682,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                    [0U]))));
            __Vtemp1486[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1486[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1486[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+2683,(__Vtemp1486),85);
            tracep->chgBit(oldp+2686,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2687,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+2688,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                                      [0U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                                          [0U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgQData(oldp+2690,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+2692,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+2695,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgBit(oldp+2697,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2698,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                    [1U]))));
            __Vtemp1490[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1490[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1490[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+2699,(__Vtemp1490),85);
            tracep->chgBit(oldp+2702,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2703,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+2704,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                                      [1U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                                          [1U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgQData(oldp+2706,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+2708,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+2711,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgBit(oldp+2713,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2714,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [0U]))));
            __Vtemp1494[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1494[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1494[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+2715,(__Vtemp1494),85);
            tracep->chgBit(oldp+2718,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2719,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+2720,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                      [0U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                          [0U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgQData(oldp+2722,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+2724,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+2727,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgBit(oldp+2729,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2730,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [1U]))));
            __Vtemp1498[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1498[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1498[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+2731,(__Vtemp1498),85);
            tracep->chgBit(oldp+2734,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2735,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+2736,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                      [1U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                          [1U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgQData(oldp+2738,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+2740,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+2743,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgBit(oldp+2745,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2746,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                    [0U]))));
            __Vtemp1502[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1502[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1502[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+2747,(__Vtemp1502),85);
            tracep->chgBit(oldp+2750,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2751,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+2752,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                                      [0U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                                          [0U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                                           [0U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgQData(oldp+2754,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+2756,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+2759,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgBit(oldp+2761,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2762,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                    [1U]))));
            __Vtemp1506[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1506[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1506[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+2763,(__Vtemp1506),85);
            tracep->chgBit(oldp+2766,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2767,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+2768,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                                      [1U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                                          [1U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                                           [1U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            __Vtemp1507[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [0U][0U];
            __Vtemp1507[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [0U][1U];
            __Vtemp1507[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [0U][2U];
            tracep->chgWData(oldp+2770,(__Vtemp1507),86);
            tracep->chgQData(oldp+2773,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgWData(oldp+2775,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgQData(oldp+2778,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                        [0U]),52);
            tracep->chgBit(oldp+2780,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2781,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                    [0U]))));
            __Vtemp1513[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                               [0U][0U]);
            __Vtemp1513[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                [0U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [0U][1U]));
            __Vtemp1513[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                [0U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [0U][2U]));
            tracep->chgWData(oldp+2782,(__Vtemp1513),85);
            tracep->chgBit(oldp+2785,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2786,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                       [0U][0U])));
            tracep->chgQData(oldp+2787,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                      [0U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                           [0U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                          [0U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                           [0U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            __Vtemp1515[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [1U][0U];
            __Vtemp1515[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [1U][1U];
            __Vtemp1515[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [1U][2U];
            tracep->chgWData(oldp+2789,(__Vtemp1515),86);
            tracep->chgQData(oldp+2792,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgWData(oldp+2794,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgQData(oldp+2797,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                        [1U]),52);
            tracep->chgBit(oldp+2799,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2800,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                    [1U]))));
            __Vtemp1521[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                               [1U][0U]);
            __Vtemp1521[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                [1U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [1U][1U]));
            __Vtemp1521[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                [1U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [1U][2U]));
            tracep->chgWData(oldp+2801,(__Vtemp1521),85);
            tracep->chgBit(oldp+2804,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2805,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                       [1U][0U])));
            tracep->chgQData(oldp+2806,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                      [1U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                           [1U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                          [1U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                           [1U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            __Vtemp1523[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [2U][0U];
            __Vtemp1523[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [2U][1U];
            __Vtemp1523[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [2U][2U];
            tracep->chgWData(oldp+2808,(__Vtemp1523),86);
            tracep->chgQData(oldp+2811,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgWData(oldp+2813,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgQData(oldp+2816,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                        [2U]),52);
            tracep->chgBit(oldp+2818,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2819,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                    [2U]))));
            __Vtemp1529[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                               [2U][0U]);
            __Vtemp1529[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                [2U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [2U][1U]));
            __Vtemp1529[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                [2U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [2U][2U]));
            tracep->chgWData(oldp+2820,(__Vtemp1529),85);
            tracep->chgBit(oldp+2823,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                     [2U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2824,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                       [2U][0U])));
            tracep->chgQData(oldp+2825,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                      [2U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                           [2U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                          [2U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                                           [2U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            __Vtemp1531[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [0U][0U];
            __Vtemp1531[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [0U][1U];
            __Vtemp1531[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [0U][2U];
            tracep->chgWData(oldp+2827,(__Vtemp1531),86);
            tracep->chgQData(oldp+2830,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgWData(oldp+2832,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgQData(oldp+2835,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                        [0U]),52);
            tracep->chgBit(oldp+2837,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [0U][2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2838,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [0U]))));
            __Vtemp1537[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                               [0U][0U]);
            __Vtemp1537[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [0U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [0U][1U]));
            __Vtemp1537[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [0U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [0U][2U]));
            tracep->chgWData(oldp+2839,(__Vtemp1537),85);
            tracep->chgBit(oldp+2842,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2843,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0U][0U])));
            tracep->chgQData(oldp+2844,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                      [0U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                           [0U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                          [0U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                           [0U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            __Vtemp1539[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [1U][0U];
            __Vtemp1539[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [1U][1U];
            __Vtemp1539[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [1U][2U];
            tracep->chgWData(oldp+2846,(__Vtemp1539),86);
            tracep->chgQData(oldp+2849,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgWData(oldp+2851,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgQData(oldp+2854,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                        [1U]),52);
            tracep->chgBit(oldp+2856,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [1U][2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2857,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [1U]))));
            __Vtemp1545[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                               [1U][0U]);
            __Vtemp1545[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [1U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [1U][1U]));
            __Vtemp1545[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [1U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [1U][2U]));
            tracep->chgWData(oldp+2858,(__Vtemp1545),85);
            tracep->chgBit(oldp+2861,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2862,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [1U][0U])));
            tracep->chgQData(oldp+2863,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                      [1U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                           [1U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                          [1U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                           [1U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            __Vtemp1547[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [2U][0U];
            __Vtemp1547[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [2U][1U];
            __Vtemp1547[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [2U][2U];
            tracep->chgWData(oldp+2865,(__Vtemp1547),86);
            tracep->chgQData(oldp+2868,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgWData(oldp+2870,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgQData(oldp+2873,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                        [2U]),52);
            tracep->chgBit(oldp+2875,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [2U][2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2876,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [2U]))));
            __Vtemp1553[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                               [2U][0U]);
            __Vtemp1553[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [2U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [2U][1U]));
            __Vtemp1553[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [2U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [2U][2U]));
            tracep->chgWData(oldp+2877,(__Vtemp1553),85);
            tracep->chgBit(oldp+2880,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                     [2U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2881,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [2U][0U])));
            tracep->chgQData(oldp+2882,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                      [2U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                           [2U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                          [2U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                           [2U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            __Vtemp1555[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [3U][0U];
            __Vtemp1555[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [3U][1U];
            __Vtemp1555[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [3U][2U];
            tracep->chgWData(oldp+2884,(__Vtemp1555),86);
            tracep->chgQData(oldp+2887,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgWData(oldp+2889,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgQData(oldp+2892,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                        [3U]),52);
            tracep->chgBit(oldp+2894,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [3U][2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2895,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [3U]))));
            __Vtemp1561[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                               [3U][0U]);
            __Vtemp1561[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [3U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [3U][1U]));
            __Vtemp1561[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [3U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [3U][2U]));
            tracep->chgWData(oldp+2896,(__Vtemp1561),85);
            tracep->chgBit(oldp+2899,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                     [3U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2900,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [3U][0U])));
            tracep->chgQData(oldp+2901,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                      [3U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                           [3U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                          [3U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                           [3U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            __Vtemp1563[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [4U][0U];
            __Vtemp1563[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [4U][1U];
            __Vtemp1563[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [4U][2U];
            tracep->chgWData(oldp+2903,(__Vtemp1563),86);
            tracep->chgQData(oldp+2906,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgWData(oldp+2908,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgQData(oldp+2911,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                        [4U]),52);
            tracep->chgBit(oldp+2913,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [4U][2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2914,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [4U]))));
            __Vtemp1569[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                               [4U][0U]);
            __Vtemp1569[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [4U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [4U][1U]));
            __Vtemp1569[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [4U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [4U][2U]));
            tracep->chgWData(oldp+2915,(__Vtemp1569),85);
            tracep->chgBit(oldp+2918,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                     [4U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2919,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [4U][0U])));
            tracep->chgQData(oldp+2920,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                      [4U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                           [4U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                          [4U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                           [4U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            __Vtemp1571[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [5U][0U];
            __Vtemp1571[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [5U][1U];
            __Vtemp1571[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [5U][2U];
            tracep->chgWData(oldp+2922,(__Vtemp1571),86);
            tracep->chgQData(oldp+2925,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgWData(oldp+2927,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgQData(oldp+2930,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                        [5U]),52);
            tracep->chgBit(oldp+2932,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [5U][2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2933,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [5U]))));
            __Vtemp1577[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                               [5U][0U]);
            __Vtemp1577[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [5U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [5U][1U]));
            __Vtemp1577[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [5U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [5U][2U]));
            tracep->chgWData(oldp+2934,(__Vtemp1577),85);
            tracep->chgBit(oldp+2937,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                     [5U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2938,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [5U][0U])));
            tracep->chgQData(oldp+2939,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                      [5U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                           [5U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                          [5U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                           [5U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            __Vtemp1579[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [6U][0U];
            __Vtemp1579[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [6U][1U];
            __Vtemp1579[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [6U][2U];
            tracep->chgWData(oldp+2941,(__Vtemp1579),86);
            tracep->chgQData(oldp+2944,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgWData(oldp+2946,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgQData(oldp+2949,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                        [6U]),52);
            tracep->chgBit(oldp+2951,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [6U][2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2952,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [6U]))));
            __Vtemp1585[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                               [6U][0U]);
            __Vtemp1585[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [6U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [6U][1U]));
            __Vtemp1585[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [6U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [6U][2U]));
            tracep->chgWData(oldp+2953,(__Vtemp1585),85);
            tracep->chgBit(oldp+2956,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                     [6U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2957,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [6U][0U])));
            tracep->chgQData(oldp+2958,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                      [6U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                           [6U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                          [6U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                           [6U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            __Vtemp1587[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [7U][0U];
            __Vtemp1587[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [7U][1U];
            __Vtemp1587[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [7U][2U];
            tracep->chgWData(oldp+2960,(__Vtemp1587),86);
            tracep->chgQData(oldp+2963,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgWData(oldp+2965,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgQData(oldp+2968,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                        [7U]),52);
            tracep->chgBit(oldp+2970,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [7U][2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2971,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [7U]))));
            __Vtemp1593[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                               [7U][0U]);
            __Vtemp1593[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [7U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [7U][1U]));
            __Vtemp1593[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [7U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [7U][2U]));
            tracep->chgWData(oldp+2972,(__Vtemp1593),85);
            tracep->chgBit(oldp+2975,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                     [7U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2976,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [7U][0U])));
            tracep->chgQData(oldp+2977,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                      [7U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                           [7U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                          [7U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                           [7U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            __Vtemp1595[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [8U][0U];
            __Vtemp1595[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [8U][1U];
            __Vtemp1595[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [8U][2U];
            tracep->chgWData(oldp+2979,(__Vtemp1595),86);
            tracep->chgQData(oldp+2982,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgWData(oldp+2984,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgQData(oldp+2987,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                        [8U]),52);
            tracep->chgBit(oldp+2989,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [8U][2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2990,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [8U]))));
            __Vtemp1601[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                               [8U][0U]);
            __Vtemp1601[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [8U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [8U][1U]));
            __Vtemp1601[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [8U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [8U][2U]));
            tracep->chgWData(oldp+2991,(__Vtemp1601),85);
            tracep->chgBit(oldp+2994,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                     [8U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2995,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [8U][0U])));
            tracep->chgQData(oldp+2996,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                      [8U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                           [8U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                          [8U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                                           [8U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgQData(oldp+2998,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+3000,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                        [0U]),52);
            tracep->chgBit(oldp+3002,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [0U]))));
            tracep->chgBit(oldp+3003,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+3004,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                      [0U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                           [0U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                          [0U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                           [0U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgQData(oldp+3006,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+3008,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                        [1U]),52);
            tracep->chgBit(oldp+3010,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [1U]))));
            tracep->chgBit(oldp+3011,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+3012,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                      [1U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                           [1U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                          [1U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                           [1U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgQData(oldp+3014,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+3016,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                        [2U]),52);
            tracep->chgBit(oldp+3018,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [2U]))));
            tracep->chgBit(oldp+3019,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [2U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+3020,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                      [2U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                           [2U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                          [2U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                           [2U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgQData(oldp+3022,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+3024,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                        [3U]),52);
            tracep->chgBit(oldp+3026,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [3U]))));
            tracep->chgBit(oldp+3027,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [3U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+3028,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                      [3U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                           [3U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                          [3U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                           [3U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgQData(oldp+3030,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+3032,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                        [4U]),52);
            tracep->chgBit(oldp+3034,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [4U]))));
            tracep->chgBit(oldp+3035,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [4U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+3036,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                      [4U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                           [4U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                          [4U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                           [4U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgQData(oldp+3038,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+3040,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                        [5U]),52);
            tracep->chgBit(oldp+3042,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [5U]))));
            tracep->chgBit(oldp+3043,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [5U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+3044,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                      [5U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                           [5U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                          [5U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                           [5U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgQData(oldp+3046,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+3048,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                        [6U]),52);
            tracep->chgBit(oldp+3050,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [6U]))));
            tracep->chgBit(oldp+3051,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [6U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+3052,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                      [6U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                           [6U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                          [6U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                           [6U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgQData(oldp+3054,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+3056,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                        [7U]),52);
            tracep->chgBit(oldp+3058,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [7U]))));
            tracep->chgBit(oldp+3059,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [7U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+3060,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                      [7U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                           [7U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                          [7U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                           [7U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            tracep->chgQData(oldp+3062,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+3064,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                        [8U]),52);
            tracep->chgBit(oldp+3066,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [8U]))));
            tracep->chgBit(oldp+3067,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [8U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+3068,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                      [8U] 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                           [8U] 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                          [8U] 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                                           [8U] 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
            __Vtemp1603[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0U][0U];
            __Vtemp1603[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0U][1U];
            __Vtemp1603[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0U][2U];
            tracep->chgWData(oldp+3070,(__Vtemp1603),86);
            tracep->chgWData(oldp+3073,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+3076,((1U & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [0U][2U] 
                                             >> 0x15U))));
            __Vtemp1609[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                               [0U][0U]);
            __Vtemp1609[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [0U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [0U][1U]));
            __Vtemp1609[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [0U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [0U][2U]));
            tracep->chgWData(oldp+3077,(__Vtemp1609),85);
            tracep->chgBit(oldp+3080,((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [0U][0U])));
            __Vtemp1611[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [1U][0U];
            __Vtemp1611[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [1U][1U];
            __Vtemp1611[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [1U][2U];
            tracep->chgWData(oldp+3081,(__Vtemp1611),86);
            tracep->chgWData(oldp+3084,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+3087,((1U & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [1U][2U] 
                                             >> 0x15U))));
            __Vtemp1617[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                               [1U][0U]);
            __Vtemp1617[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [1U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [1U][1U]));
            __Vtemp1617[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [1U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [1U][2U]));
            tracep->chgWData(oldp+3088,(__Vtemp1617),85);
            tracep->chgBit(oldp+3091,((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [1U][0U])));
            __Vtemp1619[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [2U][0U];
            __Vtemp1619[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [2U][1U];
            __Vtemp1619[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [2U][2U];
            tracep->chgWData(oldp+3092,(__Vtemp1619),86);
            tracep->chgWData(oldp+3095,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+3098,((1U & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [2U][2U] 
                                             >> 0x15U))));
            __Vtemp1625[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                               [2U][0U]);
            __Vtemp1625[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [2U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [2U][1U]));
            __Vtemp1625[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [2U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [2U][2U]));
            tracep->chgWData(oldp+3099,(__Vtemp1625),85);
            tracep->chgBit(oldp+3102,((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [2U][0U])));
            __Vtemp1627[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [3U][0U];
            __Vtemp1627[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [3U][1U];
            __Vtemp1627[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [3U][2U];
            tracep->chgWData(oldp+3103,(__Vtemp1627),86);
            tracep->chgWData(oldp+3106,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+3109,((1U & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [3U][2U] 
                                             >> 0x15U))));
            __Vtemp1633[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                               [3U][0U]);
            __Vtemp1633[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [3U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [3U][1U]));
            __Vtemp1633[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [3U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [3U][2U]));
            tracep->chgWData(oldp+3110,(__Vtemp1633),85);
            tracep->chgBit(oldp+3113,((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [3U][0U])));
            __Vtemp1635[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [4U][0U];
            __Vtemp1635[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [4U][1U];
            __Vtemp1635[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [4U][2U];
            tracep->chgWData(oldp+3114,(__Vtemp1635),86);
            tracep->chgWData(oldp+3117,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+3120,((1U & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [4U][2U] 
                                             >> 0x15U))));
            __Vtemp1641[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                               [4U][0U]);
            __Vtemp1641[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [4U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [4U][1U]));
            __Vtemp1641[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [4U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [4U][2U]));
            tracep->chgWData(oldp+3121,(__Vtemp1641),85);
            tracep->chgBit(oldp+3124,((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [4U][0U])));
            __Vtemp1643[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [5U][0U];
            __Vtemp1643[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [5U][1U];
            __Vtemp1643[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [5U][2U];
            tracep->chgWData(oldp+3125,(__Vtemp1643),86);
            tracep->chgWData(oldp+3128,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+3131,((1U & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [5U][2U] 
                                             >> 0x15U))));
            __Vtemp1649[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                               [5U][0U]);
            __Vtemp1649[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [5U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [5U][1U]));
            __Vtemp1649[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [5U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [5U][2U]));
            tracep->chgWData(oldp+3132,(__Vtemp1649),85);
            tracep->chgBit(oldp+3135,((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [5U][0U])));
            __Vtemp1651[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [6U][0U];
            __Vtemp1651[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [6U][1U];
            __Vtemp1651[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [6U][2U];
            tracep->chgWData(oldp+3136,(__Vtemp1651),86);
            tracep->chgWData(oldp+3139,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+3142,((1U & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [6U][2U] 
                                             >> 0x15U))));
            __Vtemp1657[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                               [6U][0U]);
            __Vtemp1657[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [6U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [6U][1U]));
            __Vtemp1657[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [6U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [6U][2U]));
            tracep->chgWData(oldp+3143,(__Vtemp1657),85);
            tracep->chgBit(oldp+3146,((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [6U][0U])));
            __Vtemp1659[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [7U][0U];
            __Vtemp1659[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [7U][1U];
            __Vtemp1659[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [7U][2U];
            tracep->chgWData(oldp+3147,(__Vtemp1659),86);
            tracep->chgWData(oldp+3150,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+3153,((1U & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [7U][2U] 
                                             >> 0x15U))));
            __Vtemp1665[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                               [7U][0U]);
            __Vtemp1665[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [7U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [7U][1U]));
            __Vtemp1665[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [7U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [7U][2U]));
            tracep->chgWData(oldp+3154,(__Vtemp1665),85);
            tracep->chgBit(oldp+3157,((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [7U][0U])));
            __Vtemp1667[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [8U][0U];
            __Vtemp1667[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [8U][1U];
            __Vtemp1667[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [8U][2U];
            tracep->chgWData(oldp+3158,(__Vtemp1667),86);
            tracep->chgWData(oldp+3161,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+3164,((1U & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [8U][2U] 
                                             >> 0x15U))));
            __Vtemp1673[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                               [8U][0U]);
            __Vtemp1673[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [8U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [8U][1U]));
            __Vtemp1673[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [8U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [8U][2U]));
            tracep->chgWData(oldp+3165,(__Vtemp1673),85);
            tracep->chgBit(oldp+3168,((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [8U][0U])));
            __Vtemp1675[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [9U][0U];
            __Vtemp1675[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [9U][1U];
            __Vtemp1675[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [9U][2U];
            tracep->chgWData(oldp+3169,(__Vtemp1675),86);
            tracep->chgWData(oldp+3172,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+3175,((1U & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [9U][2U] 
                                             >> 0x15U))));
            __Vtemp1681[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                               [9U][0U]);
            __Vtemp1681[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [9U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [9U][1U]));
            __Vtemp1681[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [9U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [9U][2U]));
            tracep->chgWData(oldp+3176,(__Vtemp1681),85);
            tracep->chgBit(oldp+3179,((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [9U][0U])));
            __Vtemp1683[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xaU][0U];
            __Vtemp1683[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xaU][1U];
            __Vtemp1683[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xaU][2U];
            tracep->chgWData(oldp+3180,(__Vtemp1683),86);
            tracep->chgWData(oldp+3183,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+3186,((1U & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [0xaU][2U] 
                                             >> 0x15U))));
            __Vtemp1689[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                               [0xaU][0U]);
            __Vtemp1689[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [0xaU][1U]) | (0xfffffffeU 
                                               & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [0xaU][1U]));
            __Vtemp1689[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [0xaU][2U]) | (0x1ffffeU 
                                               & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [0xaU][2U]));
            tracep->chgWData(oldp+3187,(__Vtemp1689),85);
            tracep->chgBit(oldp+3190,((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [0xaU][0U])));
            __Vtemp1691[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xbU][0U];
            __Vtemp1691[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xbU][1U];
            __Vtemp1691[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xbU][2U];
            tracep->chgWData(oldp+3191,(__Vtemp1691),86);
            tracep->chgWData(oldp+3194,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+3197,((1U & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [0xbU][2U] 
                                             >> 0x15U))));
            __Vtemp1697[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                               [0xbU][0U]);
            __Vtemp1697[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [0xbU][1U]) | (0xfffffffeU 
                                               & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [0xbU][1U]));
            __Vtemp1697[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [0xbU][2U]) | (0x1ffffeU 
                                               & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [0xbU][2U]));
            tracep->chgWData(oldp+3198,(__Vtemp1697),85);
            tracep->chgBit(oldp+3201,((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [0xbU][0U])));
            __Vtemp1699[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xcU][0U];
            __Vtemp1699[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xcU][1U];
            __Vtemp1699[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xcU][2U];
            tracep->chgWData(oldp+3202,(__Vtemp1699),86);
            tracep->chgWData(oldp+3205,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+3208,((1U & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [0xcU][2U] 
                                             >> 0x15U))));
            __Vtemp1705[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                               [0xcU][0U]);
            __Vtemp1705[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [0xcU][1U]) | (0xfffffffeU 
                                               & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [0xcU][1U]));
            __Vtemp1705[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [0xcU][2U]) | (0x1ffffeU 
                                               & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [0xcU][2U]));
            tracep->chgWData(oldp+3209,(__Vtemp1705),85);
            tracep->chgBit(oldp+3212,((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [0xcU][0U])));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [3U] | vlTOPp->__Vm_traceActivity
                         [4U]))) {
            tracep->chgBit(oldp+3213,((1U & ((vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                              >> 0x15U) 
                                             & (IData)(vlTOPp->azadi_soc_top__DOT__dccm_to_xbar)))));
            tracep->chgBit(oldp+3214,((((1U == (3U 
                                                & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                   >> 0xbU))) 
                                        & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                              >> 0xaU))) 
                                       & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack))));
            tracep->chgBit(oldp+3215,(((~ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                       & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack))));
            tracep->chgBit(oldp+3216,(((~ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                       & (((1U == (3U 
                                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                      >> 0xbU))) 
                                           & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                 >> 0xaU))) 
                                          & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack)))));
            tracep->chgBit(oldp+3217,((((1U == (3U 
                                                & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                   >> 0xbU))) 
                                        & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                              >> 0xaU))) 
                                       & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack))));
            tracep->chgBit(oldp+3218,((1U & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                             & ((1U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                     >> 0xbU)))
                                                 ? 
                                                ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                 | ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                    >> 0xaU))
                                                 : 
                                                ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                 >> 0xaU))))));
            tracep->chgBit(oldp+3219,(((~ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                       & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack))));
            tracep->chgBit(oldp+3220,(((~ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                       & (((1U == (3U 
                                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                      >> 0xbU))) 
                                           & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                 >> 0xaU))) 
                                          & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack)))));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [3U] | vlTOPp->__Vm_traceActivity
                         [5U]))) {
            tracep->chgBit(oldp+3221,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__perf_instr_ret_wb) 
                                       & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q))));
            tracep->chgIData(oldp+3222,((0xfffffffeU 
                                         & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                             + ((2U 
                                                 & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                    << 1U)) 
                                                | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))) 
                                            << 1U))),32);
            tracep->chgIData(oldp+3223,((0x7fffffffU 
                                         & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                            + ((2U 
                                                & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                   << 1U)) 
                                               | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))))),31);
            tracep->chgIData(oldp+3224,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0]),32);
            tracep->chgIData(oldp+3225,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1]),32);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [3U] | vlTOPp->__Vm_traceActivity
                         [6U]))) {
            tracep->chgBit(oldp+3226,(((0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                       | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req))));
            tracep->chgBit(oldp+3227,((0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))));
            tracep->chgBit(oldp+3228,(((((0U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                                         & (IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                    >> 0x33U))) 
                                        & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_or_pmp_err))) 
                                       & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q)))));
            tracep->chgBit(oldp+3229,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                       & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done))));
            tracep->chgBit(oldp+3230,((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_new_req) 
                                        & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q))) 
                                       & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__gnt_or_pmp_err)))));
            tracep->chgBit(oldp+3231,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set) 
                                       | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_new_req) 
                                          & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q))))));
            tracep->chgBit(oldp+3232,((1U & (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                              >> 1U) 
                                             | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_valid))))));
            tracep->chgIData(oldp+3233,(((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                          ? ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                              ? ((0xffffff00U 
                                                  & ((IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                              >> 2U)) 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                       >> 0x10U)))
                                              : ((0xffff0000U 
                                                  & ((IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                              >> 2U)) 
                                                     << 0x10U)) 
                                                 | (0xffffU 
                                                    & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                       >> 8U))))
                                          : ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                              ? ((0xff000000U 
                                                  & ((IData)(
                                                             (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                              >> 2U)) 
                                                     << 0x18U)) 
                                                 | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q)
                                              : (IData)(
                                                        (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                         >> 2U))))),32);
            tracep->chgIData(oldp+3234,(((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                          ? ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                              ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                                  ? 
                                                 ((0xffff0000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                             >> 9U))))) 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & ((IData)(
                                                                 (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                  >> 2U)) 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                           >> 0x10U))))
                                                  : 
                                                 ((0xff00U 
                                                   & ((IData)(
                                                              (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                               >> 2U)) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                        >> 0x10U))))
                                              : ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                                  ? 
                                                 ((0xffff0000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                             >> 0x21U))))) 
                                                      << 0x10U)) 
                                                  | (0xffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                >> 0x12U))))
                                                  : 
                                                 (0xffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                             >> 0x12U)))))
                                          : ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                              ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                                  ? 
                                                 ((0xffff0000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                             >> 0x19U))))) 
                                                      << 0x10U)) 
                                                  | (0xffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                >> 0xaU))))
                                                  : 
                                                 (0xffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                             >> 0xaU))))
                                              : ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                                  ? 
                                                 ((0xffff0000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                             >> 0x11U))))) 
                                                      << 0x10U)) 
                                                  | (0xffffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                >> 2U))))
                                                  : 
                                                 (0xffffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                             >> 2U))))))),32);
            tracep->chgIData(oldp+3235,(((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                          ? ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                              ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                                  ? 
                                                 ((0xffffff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                             >> 0x21U))))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                >> 0x1aU))))
                                                  : 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                             >> 0x1aU))))
                                              : ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                                  ? 
                                                 ((0xffffff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                             >> 0x19U))))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                >> 0x12U))))
                                                  : 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                             >> 0x12U)))))
                                          : ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                              ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                                  ? 
                                                 ((0xffffff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                             >> 0x11U))))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                >> 0xaU))))
                                                  : 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                             >> 0xaU))))
                                              : ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                                  ? 
                                                 ((0xffffff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                             >> 9U))))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & (IData)(
                                                               (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                                >> 2U))))
                                                  : 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                             >> 2U))))))),32);
            tracep->chgCData(oldp+3236,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we),2);
            tracep->chgBit(oldp+3237,((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_done) 
                                        & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ready_wb)) 
                                       | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                          & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done))))));
            tracep->chgBit(oldp+3238,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                             & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q))))));
            tracep->chgBit(oldp+3239,((1U & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 2U) 
                                             & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+3240,((1U & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 3U) 
                                             & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 3U))))));
            tracep->chgBit(oldp+3241,((1U & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 4U) 
                                             & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 4U))))));
            tracep->chgBit(oldp+3242,((1U & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 5U) 
                                             & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 5U))))));
            tracep->chgBit(oldp+3243,((1U & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 6U) 
                                             & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 6U))))));
            tracep->chgBit(oldp+3244,((1U & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 7U) 
                                             & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 7U))))));
            tracep->chgBit(oldp+3245,((1U & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 8U) 
                                             & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 8U))))));
            tracep->chgBit(oldp+3246,((1U & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 9U) 
                                             & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 9U))))));
            tracep->chgBit(oldp+3247,((1U & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 0xaU) 
                                             & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 0xaU))))));
            tracep->chgBit(oldp+3248,((1U & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 0xbU) 
                                             & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+3249,((1U & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 0xcU) 
                                             & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 0xcU))))));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [3U] | vlTOPp->__Vm_traceActivity
                         [8U]))) {
            tracep->chgBit(oldp+3250,((1U & ((~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__stall) 
                                                 | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id))) 
                                             | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)))));
            tracep->chgBit(oldp+3251,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing) 
                                       & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec))));
            tracep->chgBit(oldp+3252,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_in_ready) 
                                       & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q)))));
            tracep->chgBit(oldp+3253,((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                        & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__instr_kill))) 
                                       & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access) 
                                          | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_ld_hz)))));
            tracep->chgBit(oldp+3254,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv) 
                                       & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec))));
            tracep->chgBit(oldp+3255,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv) 
                                       & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec))));
            tracep->chgBit(oldp+3256,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                       & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) 
                                          | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__illegal_csr_insn_id)))));
            tracep->chgBit(oldp+3257,(((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_raw) 
                                         & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_in_ready)) 
                                        & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set))) 
                                       | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                          & (~ ((~ 
                                                 ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__stall) 
                                                  | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id))) 
                                                | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)))))));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [3U] | vlTOPp->__Vm_traceActivity
                         [9U]))) {
            tracep->chgQData(oldp+3258,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_req_addr[0]),34);
            tracep->chgQData(oldp+3260,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_req_addr[1]),34);
            tracep->chgIData(oldp+3262,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set)
                                          ? (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                          : 0U)),32);
            tracep->chgBit(oldp+3263,(0U));
            tracep->chgIData(oldp+3264,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_mtvec_init)
                                          ? 1U : (1U 
                                                  | (0xffffff00U 
                                                     & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)))),32);
            tracep->chgBit(oldp+3265,(((3U == (3U & 
                                               ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                                >> 0xaU))) 
                                       & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wreq))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgQData(oldp+3266,(vlTOPp->azadi_soc_top__DOT__dccm_to_xbar),52);
            tracep->chgBit(oldp+3268,((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+3269,((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgSData(oldp+3270,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o),13);
            tracep->chgBit(oldp+3271,((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+3272,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid));
            tracep->chgCData(oldp+3273,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o),5);
            tracep->chgBit(oldp+3274,((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+3275,((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)))));
            tracep->chgQData(oldp+3276,(((QData)((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword)) 
                                         << 1U)),33);
            tracep->chgQData(oldp+3278,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o),33);
            tracep->chgBit(oldp+3280,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid));
            tracep->chgBit(oldp+3281,((1U & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                             & ((1U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                     >> 0xbU)))
                                                 ? 
                                                ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o) 
                                                 | ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                    >> 0xaU))
                                                 : 
                                                ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                 >> 0xaU))))));
            tracep->chgIData(oldp+3282,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask),32);
            tracep->chgIData(oldp+3283,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword),32);
            tracep->chgCData(oldp+3284,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),3);
            tracep->chgBit(oldp+3285,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+3286,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+3287,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 2U))));
            tracep->chgCData(oldp+3288,((3U & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),2);
            tracep->chgBit(oldp+3289,((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgCData(oldp+3290,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),3);
            tracep->chgBit(oldp+3291,(((~ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                       & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))));
            tracep->chgBit(oldp+3292,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+3293,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+3294,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 2U))));
            tracep->chgCData(oldp+3295,((3U & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),2);
            tracep->chgCData(oldp+3296,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),3);
            tracep->chgBit(oldp+3297,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+3298,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+3299,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+3300,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty));
            tracep->chgBit(oldp+3301,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 2U))));
            tracep->chgCData(oldp+3302,((3U & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),2);
            tracep->chgBit(oldp+3303,((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+3304,((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgSData(oldp+3305,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o),13);
            tracep->chgBit(oldp+3306,((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+3307,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid));
            tracep->chgCData(oldp+3308,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o),5);
            tracep->chgBit(oldp+3309,((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+3310,((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)))));
            tracep->chgBit(oldp+3311,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid));
            tracep->chgIData(oldp+3312,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask),32);
            tracep->chgCData(oldp+3313,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
            tracep->chgBit(oldp+3314,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+3315,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+3316,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+3317,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            tracep->chgBit(oldp+3318,((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgCData(oldp+3319,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
            tracep->chgBit(oldp+3320,(((~ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                       & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid))));
            tracep->chgBit(oldp+3321,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+3322,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+3323,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+3324,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            tracep->chgCData(oldp+3325,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
            tracep->chgBit(oldp+3326,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+3327,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+3328,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+3329,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty));
            tracep->chgBit(oldp+3330,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+3331,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            tracep->chgQData(oldp+3332,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o),52);
            tracep->chgBit(oldp+3334,((1U & (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o))));
            tracep->chgCData(oldp+3335,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hfifo_rspvalid),2);
            tracep->chgCData(oldp+3336,((0x7fU & (IData)(
                                                         (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o 
                                                          >> 0x24U)))),8);
            tracep->chgBit(oldp+3337,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__dccm_to_xbar))));
            tracep->chgBit(oldp+3338,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__dccm_to_xbar 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+3339,((((QData)((IData)(
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlTOPp->azadi_soc_top__DOT__dccm_to_xbar 
                                                                      >> 0x22U))))) 
                                          << 0x22U) 
                                         | (((QData)((IData)(
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & (IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__dccm_to_xbar 
                                                                           >> 0x30U))))
                                                               ? (IData)(
                                                                         (vlTOPp->azadi_soc_top__DOT__dccm_to_xbar 
                                                                          >> 2U))
                                                               : 0U))) 
                                             << 2U) 
                                            | (QData)((IData)(
                                                              (2U 
                                                               & ((IData)(
                                                                          (vlTOPp->azadi_soc_top__DOT__dccm_to_xbar 
                                                                           >> 1U)) 
                                                                  << 1U))))))),51);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[5U])) {
            tracep->chgIData(oldp+3341,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id),32);
            tracep->chgIData(oldp+3342,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id),32);
            tracep->chgSData(oldp+3343,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_c_id),16);
            tracep->chgBit(oldp+3344,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id));
            tracep->chgBit(oldp+3345,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_fetch_err));
            tracep->chgBit(oldp+3346,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_fetch_err_plus2));
            tracep->chgBit(oldp+3347,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__illegal_c_insn_id));
            tracep->chgIData(oldp+3348,((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                         << 1U)),32);
            tracep->chgIData(oldp+3349,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_id),32);
            tracep->chgIData(oldp+3350,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_pc_q),32);
            tracep->chgCData(oldp+3351,((0x1fU & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0xfU))),5);
            tracep->chgCData(oldp+3352,((0x1fU & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x14U))),5);
            tracep->chgCData(oldp+3353,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q),5);
            tracep->chgIData(oldp+3354,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_wdata_wb_q),32);
            tracep->chgCData(oldp+3355,((0x1fU & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 7U))),5);
            tracep->chgBit(oldp+3356,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_a_wb_match));
            tracep->chgBit(oldp+3357,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_b_wb_match));
            tracep->chgIData(oldp+3358,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__stored_addr_q),32);
            tracep->chgIData(oldp+3359,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fetch_addr_q),32);
            tracep->chgWData(oldp+3360,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q),96);
            tracep->chgCData(oldp+3363,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q),3);
            tracep->chgIData(oldp+3364,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q),31);
            tracep->chgIData(oldp+3365,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_i_type),32);
            tracep->chgIData(oldp+3366,(((0xfffff000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                            >> 0x1fU)))) 
                                             << 0xcU)) 
                                         | ((0xfe0U 
                                             & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 7U))))),32);
            tracep->chgIData(oldp+3367,(((0xffffe000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                            >> 0x1fU)))) 
                                             << 0xdU)) 
                                         | ((0x1000U 
                                             & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                        >> 7U))))))),32);
            tracep->chgIData(oldp+3368,((0xfffff000U 
                                         & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)),32);
            tracep->chgIData(oldp+3369,(((0xfff00000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                            >> 0x1fU)))) 
                                             << 0x14U)) 
                                         | ((0xff000U 
                                             & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id) 
                                            | ((0x800U 
                                                & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0x14U)))))),32);
            tracep->chgIData(oldp+3370,((0x1fU & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0xfU))),32);
            tracep->chgSData(oldp+3371,(((0x3e0U & 
                                          (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id 
                                           >> 0xaU)) 
                                         | (0x1fU & 
                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id 
                                             >> 7U)))),10);
            tracep->chgCData(oldp+3372,((0x1fU & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x1bU))),5);
            tracep->chgBit(oldp+3373,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_we_wb_q));
            tracep->chgBit(oldp+3374,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q));
            tracep->chgBit(oldp+3375,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_count_q));
            tracep->chgCData(oldp+3376,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q),2);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [5U] | vlTOPp->__Vm_traceActivity
                         [8U]))) {
            tracep->chgIData(oldp+3377,(((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel))
                                          ? ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel))
                                              ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id)
                                                  ? 2U
                                                  : 4U)
                                              : ((1U 
                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel))
                                                  ? 
                                                 ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id)
                                                   ? 2U
                                                   : 4U)
                                                  : 
                                                 ((0xfff00000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                     >> 0x1fU)))) 
                                                      << 0x14U)) 
                                                  | ((0xff000U 
                                                      & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id) 
                                                     | ((0x800U 
                                                         & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                            >> 9U)) 
                                                        | (0x7feU 
                                                           & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                              >> 0x14U)))))))
                                          : ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel))
                                                  ? 
                                                 ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id)
                                                   ? 2U
                                                   : 4U)
                                                  : 
                                                 ((0xffffe000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                     >> 0x1fU)))) 
                                                      << 0xdU)) 
                                                  | ((0x1000U 
                                                      & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x13U)) 
                                                     | ((0x800U 
                                                         & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                 >> 7U)))))))
                                              : ((1U 
                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel))
                                                  ? 
                                                 ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id)
                                                   ? 2U
                                                   : 4U)
                                                  : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_i_type)))),32);
            tracep->chgIData(oldp+3378,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                                          ? 0U : (0x1fU 
                                                  & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                     >> 0xfU)))),32);
            tracep->chgIData(oldp+3379,(((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                          ? ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                              ? 4U : 
                                             ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                               ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id)
                                                   ? 2U
                                                   : 4U)
                                               : 4U))
                                          : ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                                  ? 
                                                 (0xfffff000U 
                                                  & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)
                                                  : 4U)
                                              : ((1U 
                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                                  ? 
                                                 ((0xfffff000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                                     >> 0x1fU)))) 
                                                      << 0xcU)) 
                                                  | ((0xfe0U 
                                                      & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                           >> 7U))))
                                                  : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_i_type)))),32);
            tracep->chgBit(oldp+3380,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_a_wb_match) 
                                       & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a))));
            tracep->chgBit(oldp+3381,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_b_wb_match) 
                                       & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[6U])) {
            tracep->chgBit(oldp+3382,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_q));
            tracep->chgQData(oldp+3383,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__imd_val_q_ex[0]),34);
            tracep->chgQData(oldp+3385,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__imd_val_q_ex[1]),34);
            tracep->chgBit(oldp+3387,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                             >> 1U))));
            tracep->chgBit(oldp+3388,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                             >> 2U))));
            tracep->chgCData(oldp+3389,((7U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+3390,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q))));
            tracep->chgBit(oldp+3391,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__lsu_addr_incr_req));
            tracep->chgIData(oldp+3392,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__addr_last_q),32);
            tracep->chgBit(oldp+3393,((0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
            tracep->chgBit(oldp+3394,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_write_wb));
            tracep->chgBit(oldp+3395,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__outstanding_load_wb));
            tracep->chgBit(oldp+3396,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q));
            tracep->chgBit(oldp+3397,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             >> 5U))));
            tracep->chgIData(oldp+3398,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+3399,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q),32);
            tracep->chgQData(oldp+3400,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[0]),34);
            tracep->chgQData(oldp+3402,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[1]),34);
            tracep->chgQData(oldp+3404,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[2]),34);
            tracep->chgQData(oldp+3406,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[3]),34);
            tracep->chgQData(oldp+3408,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[4]),34);
            tracep->chgQData(oldp+3410,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[5]),34);
            tracep->chgQData(oldp+3412,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[6]),34);
            tracep->chgQData(oldp+3414,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[7]),34);
            tracep->chgQData(oldp+3416,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[8]),34);
            tracep->chgQData(oldp+3418,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[9]),34);
            tracep->chgQData(oldp+3420,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[10]),34);
            tracep->chgQData(oldp+3422,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[11]),34);
            tracep->chgQData(oldp+3424,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[12]),34);
            tracep->chgQData(oldp+3426,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[13]),34);
            tracep->chgQData(oldp+3428,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[14]),34);
            tracep->chgQData(oldp+3430,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[15]),34);
            tracep->chgCData(oldp+3432,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [0U]),6);
            tracep->chgCData(oldp+3433,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [1U]),6);
            tracep->chgCData(oldp+3434,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [2U]),6);
            tracep->chgCData(oldp+3435,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [3U]),6);
            tracep->chgCData(oldp+3436,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [4U]),6);
            tracep->chgCData(oldp+3437,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [5U]),6);
            tracep->chgCData(oldp+3438,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [6U]),6);
            tracep->chgCData(oldp+3439,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [7U]),6);
            tracep->chgCData(oldp+3440,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [8U]),6);
            tracep->chgCData(oldp+3441,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [9U]),6);
            tracep->chgCData(oldp+3442,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [0xaU]),6);
            tracep->chgCData(oldp+3443,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [0xbU]),6);
            tracep->chgCData(oldp+3444,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [0xcU]),6);
            tracep->chgCData(oldp+3445,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [0xdU]),6);
            tracep->chgCData(oldp+3446,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [0xeU]),6);
            tracep->chgCData(oldp+3447,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [0xfU]),6);
            tracep->chgIData(oldp+3448,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q),32);
            tracep->chgBit(oldp+3449,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))));
            tracep->chgCData(oldp+3450,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q),2);
            tracep->chgCData(oldp+3451,((3U & ((2U 
                                                & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))
                                                ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                   >> 2U)
                                                : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q)))),2);
            tracep->chgBit(oldp+3452,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q));
            tracep->chgBit(oldp+3453,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 2U))));
            tracep->chgBit(oldp+3454,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0xfU))));
            tracep->chgBit(oldp+3455,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0xcU))));
            tracep->chgBit(oldp+3456,((0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match))));
            tracep->chgCData(oldp+3457,((0xffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)),8);
            tracep->chgBit(oldp+3458,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q));
            tracep->chgBit(oldp+3459,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__discard_req_q));
            tracep->chgCData(oldp+3460,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_q),2);
            tracep->chgCData(oldp+3461,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__branch_discard_q),2);
            tracep->chgCData(oldp+3462,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_q),2);
            tracep->chgCData(oldp+3463,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_rev),2);
            tracep->chgBit(oldp+3464,((1U & (~ (IData)(
                                                       (3U 
                                                        == 
                                                        (3U 
                                                         & (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                             >> 1U) 
                                                            | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_rev)))))))));
            tracep->chgCData(oldp+3465,((3U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                               >> 1U))),2);
            tracep->chgCData(oldp+3466,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q),3);
            tracep->chgCData(oldp+3467,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry),3);
            tracep->chgQData(oldp+3468,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o[0]),34);
            tracep->chgQData(oldp+3470,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o[1]),34);
            tracep->chgQData(oldp+3472,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[0]),34);
            tracep->chgQData(oldp+3474,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[1]),34);
            tracep->chgBit(oldp+3476,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q));
            tracep->chgBit(oldp+3477,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q));
            tracep->chgBit(oldp+3478,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q));
            tracep->chgBit(oldp+3479,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q));
            tracep->chgBit(oldp+3480,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q));
            tracep->chgBit(oldp+3481,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug));
            tracep->chgQData(oldp+3482,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__ex_block_i__imd_val_q_i[0]),34);
            tracep->chgQData(oldp+3484,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__ex_block_i__imd_val_q_i[1]),34);
            tracep->chgIData(oldp+3486,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[0]),32);
            tracep->chgIData(oldp+3487,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[1]),32);
            tracep->chgIData(oldp+3488,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i[0]),32);
            tracep->chgIData(oldp+3489,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i[1]),32);
            tracep->chgIData(oldp+3490,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[0]),32);
            tracep->chgIData(oldp+3491,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[1]),32);
            tracep->chgQData(oldp+3492,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i[0]),34);
            tracep->chgQData(oldp+3494,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i[1]),34);
            tracep->chgCData(oldp+3496,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q),3);
            tracep->chgQData(oldp+3497,((0x1ffffffffULL 
                                         & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i
                                         [0U])),33);
            tracep->chgBit(oldp+3499,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i
                                                     [0U] 
                                                     >> 0x21U)))));
            tracep->chgCData(oldp+3500,((3U & (IData)(
                                                      (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i
                                                       [1U] 
                                                       >> 0x20U)))),2);
            tracep->chgCData(oldp+3501,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_count_q),5);
            tracep->chgQData(oldp+3502,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_q),33);
            tracep->chgQData(oldp+3504,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_shift_q),33);
            tracep->chgQData(oldp+3506,((0x1ffffffffULL 
                                         & (1ULL << (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_count_q)))),33);
            tracep->chgQData(oldp+3508,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_bw_pp),33);
            tracep->chgQData(oldp+3510,((((QData)((IData)(
                                                          (1U 
                                                           & ((IData)(
                                                                      (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_shift_q 
                                                                       >> 0x20U)) 
                                                              & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_q))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           (~ 
                                                            ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_shift_q) 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_q)))))))))),33);
            tracep->chgIData(oldp+3512,((- (IData)(
                                                   (1U 
                                                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_q))))),32);
            tracep->chgIData(oldp+3513,((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i
                                                [1U])),32);
            tracep->chgBit(oldp+3514,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__div_by_zero_q));
            tracep->chgIData(oldp+3515,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q),24);
            tracep->chgCData(oldp+3516,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q),2);
            tracep->chgCData(oldp+3517,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_type_q),2);
            tracep->chgBit(oldp+3518,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q));
            tracep->chgBit(oldp+3519,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q));
            tracep->chgBit(oldp+3520,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_q));
            tracep->chgBit(oldp+3521,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q));
            tracep->chgBit(oldp+3522,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_q));
            tracep->chgCData(oldp+3523,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs),3);
            tracep->chgBit(oldp+3524,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q));
            tracep->chgCData(oldp+3525,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [0U]),6);
            tracep->chgCData(oldp+3526,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [1U]),6);
            tracep->chgCData(oldp+3527,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [2U]),6);
            tracep->chgCData(oldp+3528,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [3U]),6);
            tracep->chgCData(oldp+3529,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [4U]),6);
            tracep->chgCData(oldp+3530,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [5U]),6);
            tracep->chgCData(oldp+3531,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [6U]),6);
            tracep->chgCData(oldp+3532,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [7U]),6);
            tracep->chgCData(oldp+3533,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [8U]),6);
            tracep->chgCData(oldp+3534,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [9U]),6);
            tracep->chgCData(oldp+3535,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [0xaU]),6);
            tracep->chgCData(oldp+3536,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [0xbU]),6);
            tracep->chgCData(oldp+3537,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [0xcU]),6);
            tracep->chgCData(oldp+3538,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [0xdU]),6);
            tracep->chgCData(oldp+3539,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [0xeU]),6);
            tracep->chgCData(oldp+3540,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [0xfU]),6);
            tracep->chgQData(oldp+3541,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[0]),34);
            tracep->chgQData(oldp+3543,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[1]),34);
            tracep->chgQData(oldp+3545,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[2]),34);
            tracep->chgQData(oldp+3547,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[3]),34);
            tracep->chgQData(oldp+3549,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[4]),34);
            tracep->chgQData(oldp+3551,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[5]),34);
            tracep->chgQData(oldp+3553,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[6]),34);
            tracep->chgQData(oldp+3555,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[7]),34);
            tracep->chgQData(oldp+3557,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[8]),34);
            tracep->chgQData(oldp+3559,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[9]),34);
            tracep->chgQData(oldp+3561,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[10]),34);
            tracep->chgQData(oldp+3563,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[11]),34);
            tracep->chgQData(oldp+3565,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[12]),34);
            tracep->chgQData(oldp+3567,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[13]),34);
            tracep->chgQData(oldp+3569,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[14]),34);
            tracep->chgQData(oldp+3571,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[15]),34);
            tracep->chgCData(oldp+3573,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3574,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q),18);
            tracep->chgIData(oldp+3575,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3576,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3577,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+3578,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+3579,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+3580,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3581,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q),3);
            tracep->chgCData(oldp+3582,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_d),3);
            tracep->chgIData(oldp+3583,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3584,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3585,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0]),32);
            tracep->chgIData(oldp+3586,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[1]),32);
            tracep->chgIData(oldp+3587,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[2]),32);
            tracep->chgIData(oldp+3588,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[3]),32);
            tracep->chgIData(oldp+3589,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[4]),32);
            tracep->chgIData(oldp+3590,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[5]),32);
            tracep->chgIData(oldp+3591,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[6]),32);
            tracep->chgIData(oldp+3592,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[7]),32);
            tracep->chgIData(oldp+3593,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[8]),32);
            tracep->chgIData(oldp+3594,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[9]),32);
            tracep->chgIData(oldp+3595,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[10]),32);
            tracep->chgIData(oldp+3596,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[11]),32);
            tracep->chgIData(oldp+3597,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[12]),32);
            tracep->chgIData(oldp+3598,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[13]),32);
            tracep->chgIData(oldp+3599,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[14]),32);
            tracep->chgIData(oldp+3600,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[15]),32);
            tracep->chgCData(oldp+3601,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0]),8);
            tracep->chgCData(oldp+3602,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[1]),8);
            tracep->chgCData(oldp+3603,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[2]),8);
            tracep->chgCData(oldp+3604,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[3]),8);
            tracep->chgCData(oldp+3605,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[4]),8);
            tracep->chgCData(oldp+3606,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[5]),8);
            tracep->chgCData(oldp+3607,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[6]),8);
            tracep->chgCData(oldp+3608,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[7]),8);
            tracep->chgCData(oldp+3609,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[8]),8);
            tracep->chgCData(oldp+3610,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[9]),8);
            tracep->chgCData(oldp+3611,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[10]),8);
            tracep->chgCData(oldp+3612,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[11]),8);
            tracep->chgCData(oldp+3613,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[12]),8);
            tracep->chgCData(oldp+3614,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[13]),8);
            tracep->chgCData(oldp+3615,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[14]),8);
            tracep->chgCData(oldp+3616,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[15]),8);
            tracep->chgIData(oldp+3617,((0xffffe000U 
                                         | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),32);
            tracep->chgSData(oldp+3618,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q),13);
            tracep->chgQData(oldp+3619,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0]),64);
            tracep->chgQData(oldp+3621,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[1]),64);
            tracep->chgQData(oldp+3623,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[2]),64);
            tracep->chgQData(oldp+3625,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[3]),64);
            tracep->chgQData(oldp+3627,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[4]),64);
            tracep->chgQData(oldp+3629,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[5]),64);
            tracep->chgQData(oldp+3631,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[6]),64);
            tracep->chgQData(oldp+3633,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[7]),64);
            tracep->chgQData(oldp+3635,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[8]),64);
            tracep->chgQData(oldp+3637,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[9]),64);
            tracep->chgQData(oldp+3639,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[10]),64);
            tracep->chgQData(oldp+3641,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[11]),64);
            tracep->chgQData(oldp+3643,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[12]),64);
            tracep->chgQData(oldp+3645,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[13]),64);
            tracep->chgQData(oldp+3647,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[14]),64);
            tracep->chgQData(oldp+3649,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[15]),64);
            tracep->chgQData(oldp+3651,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[16]),64);
            tracep->chgQData(oldp+3653,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[17]),64);
            tracep->chgQData(oldp+3655,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[18]),64);
            tracep->chgQData(oldp+3657,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[19]),64);
            tracep->chgQData(oldp+3659,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[20]),64);
            tracep->chgQData(oldp+3661,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[21]),64);
            tracep->chgQData(oldp+3663,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[22]),64);
            tracep->chgQData(oldp+3665,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[23]),64);
            tracep->chgQData(oldp+3667,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[24]),64);
            tracep->chgQData(oldp+3669,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[25]),64);
            tracep->chgQData(oldp+3671,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[26]),64);
            tracep->chgQData(oldp+3673,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[27]),64);
            tracep->chgQData(oldp+3675,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[28]),64);
            tracep->chgQData(oldp+3677,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[29]),64);
            tracep->chgQData(oldp+3679,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[30]),64);
            tracep->chgQData(oldp+3681,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[31]),64);
            tracep->chgIData(oldp+3683,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+3684,((0x28001048U 
                                         | (4U & (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q) 
                                                   >> (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)) 
                                                  << 2U)))),32);
            tracep->chgIData(oldp+3685,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q
                                        [vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q]),32);
            tracep->chgCData(oldp+3686,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q),6);
            tracep->chgCData(oldp+3687,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                        [0U]),6);
            tracep->chgCData(oldp+3688,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                        [1U]),6);
            tracep->chgCData(oldp+3689,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                        [2U]),6);
            tracep->chgCData(oldp+3690,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                        [3U]),6);
            tracep->chgCData(oldp+3691,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                        [4U]),6);
            tracep->chgCData(oldp+3692,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                        [5U]),6);
            tracep->chgCData(oldp+3693,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                        [6U]),6);
            tracep->chgCData(oldp+3694,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                        [7U]),6);
            tracep->chgCData(oldp+3695,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                        [8U]),6);
            tracep->chgCData(oldp+3696,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                        [9U]),6);
            tracep->chgCData(oldp+3697,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                        [0xaU]),6);
            tracep->chgCData(oldp+3698,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                        [0xbU]),6);
            tracep->chgCData(oldp+3699,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                        [0xcU]),6);
            tracep->chgCData(oldp+3700,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                        [0xdU]),6);
            tracep->chgCData(oldp+3701,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                        [0xeU]),6);
            tracep->chgCData(oldp+3702,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                        [0xfU]),6);
            tracep->chgIData(oldp+3703,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[0]),32);
            tracep->chgIData(oldp+3704,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[1]),32);
            tracep->chgIData(oldp+3705,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[2]),32);
            tracep->chgIData(oldp+3706,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[3]),32);
            tracep->chgIData(oldp+3707,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[4]),32);
            tracep->chgIData(oldp+3708,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[5]),32);
            tracep->chgIData(oldp+3709,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[6]),32);
            tracep->chgIData(oldp+3710,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[7]),32);
            tracep->chgIData(oldp+3711,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[8]),32);
            tracep->chgIData(oldp+3712,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[9]),32);
            tracep->chgIData(oldp+3713,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[10]),32);
            tracep->chgIData(oldp+3714,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[11]),32);
            tracep->chgIData(oldp+3715,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[12]),32);
            tracep->chgIData(oldp+3716,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[13]),32);
            tracep->chgIData(oldp+3717,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[14]),32);
            tracep->chgIData(oldp+3718,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[15]),32);
            tracep->chgBit(oldp+3719,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q));
            tracep->chgCData(oldp+3720,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q),2);
            tracep->chgIData(oldp+3721,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[0]),32);
            tracep->chgIData(oldp+3722,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[1]),32);
            tracep->chgCData(oldp+3723,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match),2);
            tracep->chgCData(oldp+3724,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_d),3);
            tracep->chgQData(oldp+3725,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q),64);
            tracep->chgQData(oldp+3727,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q),64);
            tracep->chgCData(oldp+3729,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3730,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3731,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3732,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3733,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3734,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3735,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3736,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3737,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3738,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3739,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3740,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3741,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3742,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3743,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3744,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3745,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3746,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3747,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3748,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3749,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3750,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3751,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3752,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3753,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3754,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3755,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3756,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3757,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3758,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3759,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3760,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q),32);
            tracep->chgQData(oldp+3761,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter),64);
            tracep->chgIData(oldp+3763,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),32);
            tracep->chgQData(oldp+3764,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter),64);
            tracep->chgIData(oldp+3766,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),32);
            tracep->chgQData(oldp+3767,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter),64);
            tracep->chgIData(oldp+3769,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),32);
            tracep->chgQData(oldp+3770,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter),64);
            tracep->chgIData(oldp+3772,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),32);
            tracep->chgQData(oldp+3773,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter),64);
            tracep->chgIData(oldp+3775,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),32);
            tracep->chgQData(oldp+3776,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter),64);
            tracep->chgIData(oldp+3778,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),32);
            tracep->chgQData(oldp+3779,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter),64);
            tracep->chgIData(oldp+3781,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),32);
            tracep->chgQData(oldp+3782,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter),64);
            tracep->chgIData(oldp+3784,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),32);
            tracep->chgQData(oldp+3785,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter),64);
            tracep->chgIData(oldp+3787,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),32);
            tracep->chgQData(oldp+3788,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter),64);
            tracep->chgIData(oldp+3790,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),32);
            tracep->chgBit(oldp+3791,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q));
            tracep->chgIData(oldp+3792,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q),32);
            tracep->chgBit(oldp+3793,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q));
            tracep->chgIData(oldp+3794,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3795,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [0U]),6);
            tracep->chgCData(oldp+3796,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [1U]),6);
            tracep->chgCData(oldp+3797,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [2U]),6);
            tracep->chgCData(oldp+3798,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [3U]),6);
            tracep->chgCData(oldp+3799,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [4U]),6);
            tracep->chgCData(oldp+3800,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [5U]),6);
            tracep->chgCData(oldp+3801,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [6U]),6);
            tracep->chgCData(oldp+3802,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [7U]),6);
            tracep->chgCData(oldp+3803,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [8U]),6);
            tracep->chgCData(oldp+3804,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [9U]),6);
            tracep->chgCData(oldp+3805,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [0xaU]),6);
            tracep->chgCData(oldp+3806,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [0xbU]),6);
            tracep->chgCData(oldp+3807,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [0xcU]),6);
            tracep->chgCData(oldp+3808,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [0xdU]),6);
            tracep->chgCData(oldp+3809,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [0xeU]),6);
            tracep->chgCData(oldp+3810,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [0xfU]),6);
            tracep->chgQData(oldp+3811,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[0]),34);
            tracep->chgQData(oldp+3813,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[1]),34);
            tracep->chgQData(oldp+3815,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[2]),34);
            tracep->chgQData(oldp+3817,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[3]),34);
            tracep->chgQData(oldp+3819,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[4]),34);
            tracep->chgQData(oldp+3821,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[5]),34);
            tracep->chgQData(oldp+3823,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[6]),34);
            tracep->chgQData(oldp+3825,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[7]),34);
            tracep->chgQData(oldp+3827,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[8]),34);
            tracep->chgQData(oldp+3829,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[9]),34);
            tracep->chgQData(oldp+3831,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[10]),34);
            tracep->chgQData(oldp+3833,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[11]),34);
            tracep->chgQData(oldp+3835,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[12]),34);
            tracep->chgQData(oldp+3837,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[13]),34);
            tracep->chgQData(oldp+3839,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[14]),34);
            tracep->chgQData(oldp+3841,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[15]),34);
            tracep->chgQData(oldp+3843,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[0]),34);
            tracep->chgQData(oldp+3845,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[1]),34);
            tracep->chgQData(oldp+3847,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[2]),34);
            tracep->chgQData(oldp+3849,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[3]),34);
            tracep->chgQData(oldp+3851,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[4]),34);
            tracep->chgQData(oldp+3853,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[5]),34);
            tracep->chgQData(oldp+3855,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[6]),34);
            tracep->chgQData(oldp+3857,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[7]),34);
            tracep->chgQData(oldp+3859,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[8]),34);
            tracep->chgQData(oldp+3861,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[9]),34);
            tracep->chgQData(oldp+3863,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[10]),34);
            tracep->chgQData(oldp+3865,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[11]),34);
            tracep->chgQData(oldp+3867,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[12]),34);
            tracep->chgQData(oldp+3869,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[13]),34);
            tracep->chgQData(oldp+3871,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[14]),34);
            tracep->chgQData(oldp+3873,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[15]),34);
            tracep->chgIData(oldp+3875,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0]),32);
            tracep->chgIData(oldp+3876,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1]),32);
            tracep->chgIData(oldp+3877,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2]),32);
            tracep->chgIData(oldp+3878,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3]),32);
            tracep->chgIData(oldp+3879,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4]),32);
            tracep->chgIData(oldp+3880,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5]),32);
            tracep->chgIData(oldp+3881,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6]),32);
            tracep->chgIData(oldp+3882,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7]),32);
            tracep->chgIData(oldp+3883,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8]),32);
            tracep->chgIData(oldp+3884,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9]),32);
            tracep->chgIData(oldp+3885,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[10]),32);
            tracep->chgIData(oldp+3886,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[11]),32);
            tracep->chgIData(oldp+3887,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[12]),32);
            tracep->chgIData(oldp+3888,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[13]),32);
            tracep->chgIData(oldp+3889,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[14]),32);
            tracep->chgIData(oldp+3890,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[15]),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[7U])) {
            tracep->chgIData(oldp+3891,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd),32);
            tracep->chgIData(oldp+3892,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd),32);
            tracep->chgBit(oldp+3893,((0U != vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)));
            tracep->chgIData(oldp+3894,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs),18);
            tracep->chgBit(oldp+3895,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq));
            tracep->chgCData(oldp+3896,(((0x4000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                          ? 0xeU : 
                                         ((0x2000U 
                                           & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                           ? 0xdU : 
                                          ((0x1000U 
                                            & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                            ? 0xcU : 
                                           ((0x800U 
                                             & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                             ? 0xbU
                                             : ((0x400U 
                                                 & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                 ? 0xaU
                                                 : 
                                                ((0x200U 
                                                  & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                  ? 9U
                                                  : 
                                                 ((0x100U 
                                                   & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                   ? 8U
                                                   : 
                                                  ((0x80U 
                                                    & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                    ? 7U
                                                    : 
                                                   ((0x40U 
                                                     & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                     ? 6U
                                                     : 
                                                    ((0x20U 
                                                      & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                      ? 5U
                                                      : 
                                                     ((0x10U 
                                                       & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                       ? 4U
                                                       : 
                                                      ((8U 
                                                        & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                        ? 3U
                                                        : 
                                                       ((4U 
                                                         & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                         ? 2U
                                                         : 
                                                        ((2U 
                                                          & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
                                                          ? 1U
                                                          : 0U))))))))))))))),4);
            tracep->chgBit(oldp+3897,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs 
                                             >> 0x10U))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[8U])) {
            tracep->chgBit(oldp+3898,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we));
            tracep->chgBit(oldp+3899,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q));
            tracep->chgBit(oldp+3900,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__icache_inval));
            tracep->chgBit(oldp+3901,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_first_cycle));
            tracep->chgCData(oldp+3902,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_mux_id),3);
            tracep->chgCData(oldp+3903,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id),2);
            tracep->chgBit(oldp+3904,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a));
            tracep->chgBit(oldp+3905,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b));
            tracep->chgCData(oldp+3906,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator),6);
            tracep->chgBit(oldp+3907,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__mult_sel_ex));
            tracep->chgBit(oldp+3908,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__div_sel_ex));
            tracep->chgCData(oldp+3909,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator),2);
            tracep->chgCData(oldp+3910,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode),2);
            tracep->chgBit(oldp+3911,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_access));
            tracep->chgCData(oldp+3912,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_op),2);
            tracep->chgCData(oldp+3913,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type),2);
            tracep->chgBit(oldp+3914,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_sign_ext));
            tracep->chgBit(oldp+3915,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_valid));
            tracep->chgBit(oldp+3916,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_req_int));
            tracep->chgCData(oldp+3917,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec)
                                          ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we)
                                              ? 1U : 0U)
                                          : 2U)),2);
            tracep->chgBit(oldp+3918,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_id));
            tracep->chgBit(oldp+3919,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_wb));
            tracep->chgBit(oldp+3920,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_restore_mret_id));
            tracep->chgBit(oldp+3921,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_restore_dret_id));
            tracep->chgIData(oldp+3922,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_mtval),32);
            tracep->chgCData(oldp+3923,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__debug_cause),3);
            tracep->chgBit(oldp+3924,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__debug_csr_save));
            tracep->chgCData(oldp+3925,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_req_type
                                        [0U]),2);
            tracep->chgCData(oldp+3926,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_req_type
                                        [1U]),2);
            tracep->chgBit(oldp+3927,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn));
            tracep->chgBit(oldp+3928,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn));
            tracep->chgBit(oldp+3929,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec));
            tracep->chgBit(oldp+3930,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec));
            tracep->chgBit(oldp+3931,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec));
            tracep->chgBit(oldp+3932,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec));
            tracep->chgBit(oldp+3933,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_in_dec));
            tracep->chgBit(oldp+3934,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec));
            tracep->chgBit(oldp+3935,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set_dec));
            tracep->chgBit(oldp+3936,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_run));
            tracep->chgBit(oldp+3937,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_ld_hz));
            tracep->chgBit(oldp+3938,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id));
            tracep->chgBit(oldp+3939,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel));
            tracep->chgBit(oldp+3940,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we));
            tracep->chgCData(oldp+3941,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel),2);
            tracep->chgCData(oldp+3942,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec),2);
            tracep->chgBit(oldp+3943,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec));
            tracep->chgCData(oldp+3944,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_a_mux_sel),2);
            tracep->chgCData(oldp+3945,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel),3);
            tracep->chgBit(oldp+3946,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel));
            tracep->chgCData(oldp+3947,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel),3);
            tracep->chgCData(oldp+3948,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec),3);
            tracep->chgBit(oldp+3949,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec));
            tracep->chgBit(oldp+3950,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec));
            tracep->chgBit(oldp+3951,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_en_dec));
            tracep->chgBit(oldp+3952,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec));
            tracep->chgBit(oldp+3953,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal));
            tracep->chgCData(oldp+3954,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op),2);
            tracep->chgCData(oldp+3955,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode),7);
            tracep->chgCData(oldp+3956,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu),7);
            tracep->chgCData(oldp+3957,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs),4);
            tracep->chgBit(oldp+3958,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d));
            tracep->chgBit(oldp+3959,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
            tracep->chgBit(oldp+3960,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio));
            tracep->chgBit(oldp+3961,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio));
            tracep->chgBit(oldp+3962,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio));
            tracep->chgBit(oldp+3963,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio));
            tracep->chgBit(oldp+3964,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio));
            tracep->chgBit(oldp+3965,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio));
            tracep->chgBit(oldp+3966,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req_branch));
            tracep->chgBit(oldp+3967,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode));
            tracep->chgBit(oldp+3968,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn));
            tracep->chgBit(oldp+3969,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn));
            tracep->chgBit(oldp+3970,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn));
            tracep->chgBit(oldp+3971,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn));
            tracep->chgBit(oldp+3972,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn));
            tracep->chgBit(oldp+3973,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err));
            tracep->chgQData(oldp+3974,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a),33);
            tracep->chgBit(oldp+3976,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel));
            tracep->chgBit(oldp+3977,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate));
            tracep->chgBit(oldp+3978,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed));
            tracep->chgBit(oldp+3979,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left));
            tracep->chgBit(oldp+3980,((8U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))));
            tracep->chgBit(oldp+3981,(((3U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)) 
                                       | (6U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)))));
            tracep->chgBit(oldp+3982,(((4U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)) 
                                       | (7U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)))));
            tracep->chgCData(oldp+3983,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                        [0U]),2);
            tracep->chgCData(oldp+3984,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                        [1U]),2);
            tracep->chgIData(oldp+3985,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[9U])) {
            tracep->chgCData(oldp+3986,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be),4);
            tracep->chgIData(oldp+3987,((0xfffffffcU 
                                         & ((IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                     >> 3U)) 
                                            << 2U))),32);
            tracep->chgQData(oldp+3988,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__imd_val_d_ex[0]),34);
            tracep->chgQData(oldp+3990,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__imd_val_d_ex[1]),34);
            tracep->chgCData(oldp+3992,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_cause),6);
            tracep->chgIData(oldp+3993,((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__g_branch_target_alu__DOT__bt_alu_result)),32);
            tracep->chgBit(oldp+3994,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result));
            tracep->chgBit(oldp+3995,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ctrl_busy));
            tracep->chgIData(oldp+3996,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a),32);
            tracep->chgIData(oldp+3997,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b),32);
            tracep->chgIData(oldp+3998,((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                 >> 1U))),32);
            tracep->chgSData(oldp+3999,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr),12);
            tracep->chgIData(oldp+4000,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int),32);
            tracep->chgBit(oldp+4001,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_if));
            tracep->chgBit(oldp+4002,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_cause));
            tracep->chgCData(oldp+4003,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_d),2);
            tracep->chgIData(oldp+4004,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n),32);
            tracep->chgBit(oldp+4005,((1U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)));
            tracep->chgBit(oldp+4006,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_cause) 
                                             >> 5U))));
            tracep->chgIData(oldp+4007,((0xfffffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)),32);
            tracep->chgQData(oldp+4008,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i[0]),34);
            tracep->chgQData(oldp+4010,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i[1]),34);
            tracep->chgQData(oldp+4012,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__ex_block_i__imd_val_d_o[0]),34);
            tracep->chgQData(oldp+4014,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__ex_block_i__imd_val_d_o[1]),34);
            tracep->chgIData(oldp+4016,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_result),32);
            tracep->chgQData(oldp+4017,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext),34);
            tracep->chgBit(oldp+4019,((0U == (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                      >> 1U)))));
            tracep->chgQData(oldp+4020,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0]),34);
            tracep->chgQData(oldp+4022,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1]),34);
            tracep->chgQData(oldp+4024,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__g_branch_target_alu__DOT__bt_alu_result),33);
            tracep->chgBit(oldp+4026,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__g_branch_target_alu__DOT__bt_alu_result 
                                                     >> 0x20U)))));
            tracep->chgIData(oldp+4027,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev),32);
            tracep->chgQData(oldp+4028,((0x1ffffffffULL 
                                         & (~ ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                               << 1U)))),33);
            tracep->chgQData(oldp+4030,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_in_b),33);
            tracep->chgCData(oldp+4032,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt),6);
            tracep->chgCData(oldp+4033,((0x3fU & ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)))),6);
            tracep->chgIData(oldp+4034,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand),32);
            tracep->chgQData(oldp+4035,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext),33);
            tracep->chgBit(oldp+4037,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext));
            tracep->chgIData(oldp+4038,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result),32);
            tracep->chgIData(oldp+4039,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev),32);
            tracep->chgCData(oldp+4040,(((0x10U & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0xfU 
                                                                & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                                   >> 0x18U))))) 
                                                   << 4U)) 
                                         | (0xfU & 
                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b 
                                             >> 0x18U)))),5);
            tracep->chgCData(oldp+4041,((0x1fU & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                  >> 0x10U))),5);
            tracep->chgIData(oldp+4042,((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                                         | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgIData(oldp+4043,((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                                         & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgIData(oldp+4044,((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                                         ^ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgIData(oldp+4045,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result),32);
            tracep->chgBit(oldp+4046,((1U & (((IData)(0x20U) 
                                              - (0x1fU 
                                                 & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                             >> 5U))));
            tracep->chgQData(oldp+4047,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_slow__DOT__multdiv_i__imd_val_d_o[0]),34);
            tracep->chgQData(oldp+4049,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_slow__DOT__multdiv_i__imd_val_d_o[1]),34);
            tracep->chgCData(oldp+4051,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_d),3);
            tracep->chgQData(oldp+4052,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__accum_window_d),33);
            tracep->chgQData(oldp+4054,((0x1ffffffffULL 
                                         & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext)),33);
            tracep->chgQData(oldp+4056,((0x1ffffffffULL 
                                         & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                            >> 1U))),33);
            tracep->chgCData(oldp+4058,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_count_d),5);
            tracep->chgQData(oldp+4059,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_d),33);
            tracep->chgQData(oldp+4061,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_shift_d),33);
            tracep->chgQData(oldp+4063,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_ext),33);
            tracep->chgQData(oldp+4065,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_ext),33);
            tracep->chgBit(oldp+4067,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__sign_a));
            tracep->chgBit(oldp+4068,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__sign_b));
            tracep->chgQData(oldp+4069,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__next_quotient),33);
            tracep->chgIData(oldp+4071,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__next_remainder),32);
            tracep->chgIData(oldp+4072,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_numerator_d),32);
            tracep->chgBit(oldp+4073,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__is_greater_equal));
            tracep->chgBit(oldp+4074,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__div_by_zero_d));
            tracep->chgCData(oldp+4075,((3U & (IData)(
                                                      (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                       >> 1U)))),2);
            tracep->chgBit(oldp+4076,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__split_misaligned_access));
            tracep->chgIData(oldp+4077,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__exception_pc),32);
            tracep->chgIData(oldp+4078,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_d),18);
            tracep->chgIData(oldp+4079,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_d),32);
            tracep->chgCData(oldp+4080,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_d),6);
            tracep->chgIData(oldp+4081,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtval_d),32);
            tracep->chgIData(oldp+4082,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__depc_d),32);
            tracep->chgBit(oldp+4083,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_en));
            tracep->chgCData(oldp+4084,((0x1fU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))),5);
            tracep->chgCData(oldp+4085,((0x3fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)),6);
            tracep->chgIData(oldp+4086,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int),32);
            tracep->chgBit(oldp+4087,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr));
            tracep->chgCData(oldp+4088,((7U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                               >> 5U))),3);
            tracep->chgCData(oldp+4089,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [0U]),6);
            tracep->chgCData(oldp+4090,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [1U]),6);
            tracep->chgCData(oldp+4091,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [2U]),6);
            tracep->chgCData(oldp+4092,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [3U]),6);
            tracep->chgCData(oldp+4093,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [4U]),6);
            tracep->chgCData(oldp+4094,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [5U]),6);
            tracep->chgCData(oldp+4095,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [6U]),6);
            tracep->chgCData(oldp+4096,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [7U]),6);
            tracep->chgCData(oldp+4097,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [8U]),6);
            tracep->chgCData(oldp+4098,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [9U]),6);
            tracep->chgCData(oldp+4099,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [0xaU]),6);
            tracep->chgCData(oldp+4100,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [0xbU]),6);
            tracep->chgCData(oldp+4101,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [0xcU]),6);
            tracep->chgCData(oldp+4102,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [0xdU]),6);
            tracep->chgCData(oldp+4103,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [0xeU]),6);
            tracep->chgCData(oldp+4104,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [0xfU]),6);
            tracep->chgBit(oldp+4105,(((2U > vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                        ? (1U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                        : 1U)));
            tracep->chgBit(oldp+4106,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 2U))));
            tracep->chgBit(oldp+4107,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 1U))));
            tracep->chgBit(oldp+4108,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 2U))));
            tracep->chgCData(oldp+4109,((7U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 3U))),3);
            tracep->chgBit(oldp+4110,((1U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
            tracep->chgIData(oldp+4111,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_d),18);
            tracep->chgCData(oldp+4112,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [0U]),6);
            tracep->chgCData(oldp+4113,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [1U]),6);
            tracep->chgCData(oldp+4114,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [2U]),6);
            tracep->chgCData(oldp+4115,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [3U]),6);
            tracep->chgCData(oldp+4116,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [4U]),6);
            tracep->chgCData(oldp+4117,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [5U]),6);
            tracep->chgCData(oldp+4118,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [6U]),6);
            tracep->chgCData(oldp+4119,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [7U]),6);
            tracep->chgCData(oldp+4120,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [8U]),6);
            tracep->chgCData(oldp+4121,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [9U]),6);
            tracep->chgCData(oldp+4122,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [0xaU]),6);
            tracep->chgCData(oldp+4123,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [0xbU]),6);
            tracep->chgCData(oldp+4124,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [0xcU]),6);
            tracep->chgCData(oldp+4125,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [0xdU]),6);
            tracep->chgCData(oldp+4126,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [0xeU]),6);
            tracep->chgCData(oldp+4127,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [0xfU]),6);
            tracep->chgCData(oldp+4128,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                                        [0U]),2);
            tracep->chgCData(oldp+4129,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                                        [1U]),2);
        }
        tracep->chgBit(oldp+4130,(vlTOPp->clock));
        tracep->chgBit(oldp+4131,(vlTOPp->reset_ni));
        tracep->chgIData(oldp+4132,(vlTOPp->gpio_i),20);
        tracep->chgIData(oldp+4133,(vlTOPp->gpio_o),20);
        tracep->chgIData(oldp+4134,(vlTOPp->gpio_oe),20);
        tracep->chgBit(oldp+4135,((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q) 
                                            & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q) 
                                               | (0U 
                                                  != vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)))))));
        tracep->chgIData(oldp+4136,(((1U & (IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                    >> 2U)))
                                      ? ((1U & (IData)(
                                                       (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                        >> 1U)))
                                          ? ((0xff000000U 
                                              & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                 << 0x18U)) 
                                             | (0xffffffU 
                                                & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                   >> 8U)))
                                          : ((0xffff0000U 
                                              & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                 << 0x10U)) 
                                             | (0xffffU 
                                                & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                   >> 0x10U))))
                                      : ((1U & (IData)(
                                                       (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                        >> 1U)))
                                          ? ((0xffffff00U 
                                              & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd 
                                                   >> 0x18U)))
                                          : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd))),32);
        tracep->chgBit(oldp+4137,((1U & (((((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn)) 
                                            & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec))) 
                                           & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn))) 
                                          & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__illegal_csr_insn_id))) 
                                         & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_fetch_err))))));
        tracep->chgBit(oldp+4138,((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ctrl_busy) 
                                    | ((0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                       | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req))) 
                                   | (0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))));
        tracep->chgIData(oldp+4139,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[
                                    (0x1fU & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0xfU))]),32);
        tracep->chgIData(oldp+4140,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[
                                    (0x1fU & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                              >> 0x14U))]),32);
        tracep->chgIData(oldp+4141,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                                      ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                                          ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int
                                          : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__result_ex)
                                      : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__result_ex)),32);
        tracep->chgIData(oldp+4142,(((0U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_a_mux_sel))
                                      ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd
                                      : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_id)),32);
        tracep->chgBit(oldp+4143,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                   & (1U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q)))));
        tracep->chgBit(oldp+4144,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q) 
                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q) 
                                      | (0U != vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)))));
        tracep->chgCData(oldp+4145,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_priv_lvl
                                    [0U]),2);
        tracep->chgCData(oldp+4146,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_priv_lvl
                                    [1U]),2);
        tracep->chgBit(oldp+4147,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                         & ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                             ? (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                                 >> 1U) 
                                                & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))
                                             : (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                                 & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                                & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))))));
        tracep->chgIData(oldp+4148,(((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id))
                                      ? 0U : ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id))
                                               ? ((0xffffff00U 
                                                   & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q) 
                                                  | (0x7cU 
                                                     & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_cause) 
                                                        << 2U)))
                                               : (0xffffff00U 
                                                  & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)))),32);
        tracep->chgIData(oldp+4149,((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set)
                                       ? (0xfffffffeU 
                                          & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                       : (0xfffffffcU 
                                          & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fetch_addr_q)) 
                                     + (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_new_req) 
                                         & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q))) 
                                        << 2U))),32);
        tracep->chgIData(oldp+4150,(((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                      ? ((0xffff0000U 
                                          & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                                             << 0x10U)) 
                                         | (0xffffU 
                                            & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                               >> 0x10U)))
                                      : ((0xffff0000U 
                                          & ((IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqifu 
                                                      >> 2U)) 
                                             << 0x10U)) 
                                         | (0xffffU 
                                            & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                               >> 0x10U))))),32);
        tracep->chgBit(oldp+4151,((1U & ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                          ? ((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                               >> 1U) 
                                              & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed))) 
                                             | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q))
                                          : (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                              & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                                             | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                                & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                                   | (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)))))))));
        tracep->chgBit(oldp+4152,((1U & ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                          ? (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                              >> 1U) 
                                             & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))
                                          : (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                              & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                             & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))))));
        tracep->chgIData(oldp+4153,((0x7fffffffU & 
                                     ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set)
                                       ? (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set)
                                            ? (0xfffffffeU 
                                               & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                            : 0U) >> 1U)
                                       : (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                          + ((2U & 
                                              ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                               << 1U)) 
                                             | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))))),31);
        tracep->chgBit(oldp+4154,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__lsu_addr_incr_req) 
                                   | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec))));
        tracep->chgBit(oldp+4155,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
                                   & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))));
        tracep->chgBit(oldp+4156,(((3U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                                      | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                         & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn))))));
        tracep->chgIData(oldp+4157,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__div_en_id)
                                      ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i
                                                [0U])
                                      : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext))),32);
        tracep->chgQData(oldp+4158,(((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))
                                      ? ((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))
                                          ? ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))
                                              ? (1ULL 
                                                 | ((QData)((IData)(
                                                                    (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_q)))) 
                                                    << 1U))
                                              : ((1U 
                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))
                                                  ? 
                                                 (1ULL 
                                                  | ((QData)((IData)(
                                                                     (~ (IData)(
                                                                                vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i
                                                                                [0U])))) 
                                                     << 1U))
                                                  : 
                                                 (1ULL 
                                                  | ((QData)((IData)(
                                                                     (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_q)))) 
                                                     << 1U))))
                                          : ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))
                                                  ? 
                                                 (1ULL 
                                                  | ((QData)((IData)(
                                                                     (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_q)))) 
                                                     << 1U))
                                                  : 
                                                 (1ULL 
                                                  | ((QData)((IData)(
                                                                     (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd))) 
                                                     << 1U)))
                                              : ((1U 
                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))
                                                  ? 
                                                 (1ULL 
                                                  | ((QData)((IData)(
                                                                     (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd))) 
                                                     << 1U))
                                                  : 
                                                 (1ULL 
                                                  | ((QData)((IData)(
                                                                     (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd))) 
                                                     << 1U)))))
                                      : ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))
                                          ? ((4U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))
                                              ? (((QData)((IData)(
                                                                  (1U 
                                                                   & ((IData)(
                                                                              (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_shift_q 
                                                                               >> 0x20U)) 
                                                                      & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_q))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (~ 
                                                                    ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_shift_q) 
                                                                     & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_q)))))))))
                                              : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_bw_pp)
                                          : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_bw_pp))),33);
        tracep->chgBit(oldp+4160,(((6U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q)) 
                                   | ((4U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q)) 
                                      & ((0U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator)) 
                                         | (1U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator)))))));
        tracep->chgQData(oldp+4161,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)
                                      ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                                      : (1ULL | ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a)) 
                                                 << 1U)))),33);
        tracep->chgBit(oldp+4163,((1U & ((0x80000000U 
                                          & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                                             ^ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b))
                                          ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                                              >> 0x1fU) 
                                             ^ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                          : (~ (IData)(
                                                       (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                        >> 0x20U)))))));
        tracep->chgBit(oldp+4164,((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__sign_a) 
                                    ^ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__sign_b)) 
                                   & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__div_by_zero_q)))));
        tracep->chgSData(oldp+4165,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
                                      ? (0x1ffdU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                      : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),13);
        tracep->chgBit(oldp+4166,(((3U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                          >> 8U)) > (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q))));
        tracep->chgBit(oldp+4167,((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                                   & (0x7a0U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr)))));
        tracep->chgCData(oldp+4168,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we)
                                      ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be)
                                      : 0xfU)),4);
        tracep->chgIData(oldp+4169,((vlTOPp->azadi_soc_top__DOT__dccm__DOT__rdata_o 
                                     & vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask)),32);
        tracep->chgQData(oldp+4170,((0x1ffffffffULL 
                                     & (((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                         & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))
                                         ? ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword)) 
                                            << 1U) : 
                                        ((0x83U >= 
                                          (0xffU & 
                                           ((IData)(0x21U) 
                                            * (3U & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                          ? (((0U == 
                                               (0x1fU 
                                                & ((IData)(0x21U) 
                                                   * 
                                                   (3U 
                                                    & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                               ? 0ULL
                                               : ((QData)((IData)(
                                                                  vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                  ((IData)(2U) 
                                                                   + 
                                                                   (7U 
                                                                    & (((IData)(0x21U) 
                                                                        * 
                                                                        (3U 
                                                                         & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                       >> 5U)))])) 
                                                  << 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  (7U 
                                                                   & (((IData)(0x21U) 
                                                                       * 
                                                                       (3U 
                                                                        & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                      >> 5U)))])) 
                                                 << 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                   (7U 
                                                                    & (((IData)(0x21U) 
                                                                        * 
                                                                        (3U 
                                                                         & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                       >> 5U))])) 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (3U 
                                                        & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                          : 0ULL)))),33);
        tracep->chgIData(oldp+4172,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->azadi_soc_top__DOT__iccm__DOT__rdata
                                      : 0U)),32);
        tracep->chgIData(oldp+4173,((((IData)(vlTOPp->reset_ni)
                                       ? vlTOPp->azadi_soc_top__DOT__iccm__DOT__rdata
                                       : 0U) & vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask)),32);
        tracep->chgIData(oldp+4174,((((IData)(vlTOPp->reset_ni)
                                       ? vlTOPp->azadi_soc_top__DOT__iccm__DOT__rdata
                                       : 0U) & vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask)),32);
        tracep->chgQData(oldp+4175,((0x1ffffffffULL 
                                     & (((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                         & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid))
                                         ? vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wdata
                                         : ((0x41U 
                                             >= (0x7fU 
                                                 & ((IData)(0x21U) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                             ? (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x21U) 
                                                      * 
                                                      (1U 
                                                       & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                  ? 0ULL
                                                  : 
                                                 ((QData)((IData)(
                                                                  vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                  ((IData)(2U) 
                                                                   + 
                                                                   (3U 
                                                                    & (((IData)(0x21U) 
                                                                        * 
                                                                        (1U 
                                                                         & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                       >> 5U)))])) 
                                                  << 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x21U) 
                                                       * 
                                                       (1U 
                                                        & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                    ((IData)(1U) 
                                                                     + 
                                                                     (3U 
                                                                      & (((IData)(0x21U) 
                                                                          * 
                                                                          (1U 
                                                                           & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                         >> 5U)))])) 
                                                    << 
                                                    ((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x21U) 
                                                          * 
                                                          (1U 
                                                           & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                      ? 0x20U
                                                      : 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x21U) 
                                                          * 
                                                          (1U 
                                                           & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[
                                                                      (3U 
                                                                       & (((IData)(0x21U) 
                                                                           * 
                                                                           (1U 
                                                                            & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                          >> 5U))])) 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x21U) 
                                                          * 
                                                          (1U 
                                                           & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                             : 0ULL)))),33);
        tracep->chgIData(oldp+4177,(vlTOPp->gpio_i),32);
        tracep->chgIData(oldp+4178,((((~ vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_q) 
                                      & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_d) 
                                     & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[4U])),32);
        tracep->chgIData(oldp+4179,(((vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_q 
                                      & (~ vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_d)) 
                                     & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[3U])),32);
        tracep->chgIData(oldp+4180,(((((((~ vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_q) 
                                         & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_d) 
                                        & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[4U]) 
                                       | ((vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_q 
                                           & (~ vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_d)) 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[3U])) 
                                      | ((~ vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_d) 
                                         & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[1U])) 
                                     | (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_d 
                                        & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[2U]))),32);
        tracep->chgBit(oldp+4181,((1U & vlTOPp->gpio_i)));
        tracep->chgBit(oldp+4182,((1U & ((1U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q)
                                          : vlTOPp->gpio_i))));
        tracep->chgBit(oldp+4183,((1U & (vlTOPp->gpio_i 
                                         >> 1U))));
        tracep->chgBit(oldp+4184,((1U & ((2U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 1U)))));
        tracep->chgBit(oldp+4185,((1U & (vlTOPp->gpio_i 
                                         >> 2U))));
        tracep->chgBit(oldp+4186,((1U & ((4U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 2U)))));
        tracep->chgBit(oldp+4187,((1U & (vlTOPp->gpio_i 
                                         >> 3U))));
        tracep->chgBit(oldp+4188,((1U & ((8U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 3U)))));
        tracep->chgBit(oldp+4189,((1U & (vlTOPp->gpio_i 
                                         >> 4U))));
        tracep->chgBit(oldp+4190,((1U & ((0x10U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 4U)))));
        tracep->chgBit(oldp+4191,((1U & (vlTOPp->gpio_i 
                                         >> 5U))));
        tracep->chgBit(oldp+4192,((1U & ((0x20U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 5U)))));
        tracep->chgBit(oldp+4193,((1U & (vlTOPp->gpio_i 
                                         >> 6U))));
        tracep->chgBit(oldp+4194,((1U & ((0x40U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 6U)))));
        tracep->chgBit(oldp+4195,((1U & (vlTOPp->gpio_i 
                                         >> 7U))));
        tracep->chgBit(oldp+4196,((1U & ((0x80U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 7U)))));
        tracep->chgBit(oldp+4197,((1U & (vlTOPp->gpio_i 
                                         >> 8U))));
        tracep->chgBit(oldp+4198,((1U & ((0x100U & 
                                          vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 8U)))));
        tracep->chgBit(oldp+4199,((1U & (vlTOPp->gpio_i 
                                         >> 9U))));
        tracep->chgBit(oldp+4200,((1U & ((0x200U & 
                                          vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 9U)))));
        tracep->chgBit(oldp+4201,((1U & (vlTOPp->gpio_i 
                                         >> 0xaU))));
        tracep->chgBit(oldp+4202,((1U & ((0x400U & 
                                          vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xaU)))));
        tracep->chgBit(oldp+4203,((1U & (vlTOPp->gpio_i 
                                         >> 0xbU))));
        tracep->chgBit(oldp+4204,((1U & ((0x800U & 
                                          vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xbU)))));
        tracep->chgBit(oldp+4205,((1U & (vlTOPp->gpio_i 
                                         >> 0xcU))));
        tracep->chgBit(oldp+4206,((1U & ((0x1000U & 
                                          vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xcU)))));
        tracep->chgBit(oldp+4207,((1U & (vlTOPp->gpio_i 
                                         >> 0xdU))));
        tracep->chgBit(oldp+4208,((1U & ((0x2000U & 
                                          vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xdU)))));
        tracep->chgBit(oldp+4209,((1U & (vlTOPp->gpio_i 
                                         >> 0xeU))));
        tracep->chgBit(oldp+4210,((1U & ((0x4000U & 
                                          vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xeU)))));
        tracep->chgBit(oldp+4211,((1U & (vlTOPp->gpio_i 
                                         >> 0xfU))));
        tracep->chgBit(oldp+4212,((1U & ((0x8000U & 
                                          vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xfU)))));
        tracep->chgBit(oldp+4213,((1U & (vlTOPp->gpio_i 
                                         >> 0x10U))));
        tracep->chgBit(oldp+4214,((1U & ((0x10000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x10U)))));
        tracep->chgBit(oldp+4215,((1U & (vlTOPp->gpio_i 
                                         >> 0x11U))));
        tracep->chgBit(oldp+4216,((1U & ((0x20000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x11U)))));
        tracep->chgBit(oldp+4217,((1U & (vlTOPp->gpio_i 
                                         >> 0x12U))));
        tracep->chgBit(oldp+4218,((1U & ((0x40000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x12U)))));
        tracep->chgBit(oldp+4219,((1U & (vlTOPp->gpio_i 
                                         >> 0x13U))));
        tracep->chgBit(oldp+4220,((1U & ((0x80000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x13U)))));
        tracep->chgBit(oldp+4221,((1U & (vlTOPp->gpio_i 
                                         >> 0x14U))));
        tracep->chgBit(oldp+4222,((1U & ((0x100000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x14U)))));
        tracep->chgBit(oldp+4223,((1U & (vlTOPp->gpio_i 
                                         >> 0x15U))));
        tracep->chgBit(oldp+4224,((1U & ((0x200000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x15U)))));
        tracep->chgBit(oldp+4225,((1U & (vlTOPp->gpio_i 
                                         >> 0x16U))));
        tracep->chgBit(oldp+4226,((1U & ((0x400000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x16U)))));
        tracep->chgBit(oldp+4227,((1U & (vlTOPp->gpio_i 
                                         >> 0x17U))));
        tracep->chgBit(oldp+4228,((1U & ((0x800000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x17U)))));
        tracep->chgBit(oldp+4229,((1U & (vlTOPp->gpio_i 
                                         >> 0x18U))));
        tracep->chgBit(oldp+4230,((1U & ((0x1000000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x18U)))));
        tracep->chgBit(oldp+4231,((1U & (vlTOPp->gpio_i 
                                         >> 0x19U))));
        tracep->chgBit(oldp+4232,((1U & ((0x2000000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x19U)))));
        tracep->chgBit(oldp+4233,((1U & (vlTOPp->gpio_i 
                                         >> 0x1aU))));
        tracep->chgBit(oldp+4234,((1U & ((0x4000000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1aU)))));
        tracep->chgBit(oldp+4235,((1U & (vlTOPp->gpio_i 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+4236,((1U & ((0x8000000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1bU)))));
        tracep->chgBit(oldp+4237,((1U & (vlTOPp->gpio_i 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+4238,((1U & ((0x10000000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1cU)))));
        tracep->chgBit(oldp+4239,((1U & (vlTOPp->gpio_i 
                                         >> 0x1dU))));
        tracep->chgBit(oldp+4240,((1U & ((0x20000000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1dU)))));
        tracep->chgBit(oldp+4241,((1U & (vlTOPp->gpio_i 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+4242,((1U & ((0x40000000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1eU)))));
        tracep->chgBit(oldp+4243,((1U & (vlTOPp->gpio_i 
                                         >> 0x1fU))));
        tracep->chgBit(oldp+4244,((1U & ((0x80000000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1fU)))));
    }
}
