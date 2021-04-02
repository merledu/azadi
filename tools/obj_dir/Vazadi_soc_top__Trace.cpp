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
    WData/*95:0*/ __Vtemp1120[3];
    WData/*95:0*/ __Vtemp1121[3];
    WData/*95:0*/ __Vtemp1122[3];
    WData/*95:0*/ __Vtemp1123[3];
    WData/*95:0*/ __Vtemp1124[3];
    WData/*95:0*/ __Vtemp1125[3];
    WData/*95:0*/ __Vtemp1126[3];
    WData/*95:0*/ __Vtemp1127[3];
    WData/*95:0*/ __Vtemp1128[3];
    WData/*95:0*/ __Vtemp1129[3];
    WData/*95:0*/ __Vtemp1130[3];
    WData/*95:0*/ __Vtemp1131[3];
    WData/*95:0*/ __Vtemp1132[3];
    WData/*95:0*/ __Vtemp1133[3];
    WData/*95:0*/ __Vtemp1134[3];
    WData/*95:0*/ __Vtemp1135[3];
    WData/*95:0*/ __Vtemp1136[3];
    WData/*95:0*/ __Vtemp1137[3];
    WData/*95:0*/ __Vtemp1138[3];
    WData/*95:0*/ __Vtemp1139[3];
    WData/*95:0*/ __Vtemp1140[3];
    WData/*95:0*/ __Vtemp1141[3];
    WData/*95:0*/ __Vtemp1142[3];
    WData/*95:0*/ __Vtemp1143[3];
    WData/*95:0*/ __Vtemp1144[3];
    WData/*95:0*/ __Vtemp1145[3];
    WData/*95:0*/ __Vtemp1146[3];
    WData/*95:0*/ __Vtemp1147[3];
    WData/*95:0*/ __Vtemp1148[3];
    WData/*95:0*/ __Vtemp1149[3];
    WData/*95:0*/ __Vtemp1150[3];
    WData/*95:0*/ __Vtemp1151[3];
    WData/*95:0*/ __Vtemp1152[3];
    WData/*95:0*/ __Vtemp1153[3];
    WData/*95:0*/ __Vtemp1154[3];
    WData/*95:0*/ __Vtemp1155[3];
    WData/*95:0*/ __Vtemp1156[3];
    WData/*95:0*/ __Vtemp1157[3];
    WData/*95:0*/ __Vtemp1158[3];
    WData/*95:0*/ __Vtemp1159[3];
    WData/*95:0*/ __Vtemp1160[3];
    WData/*95:0*/ __Vtemp1161[3];
    WData/*95:0*/ __Vtemp1162[3];
    WData/*95:0*/ __Vtemp1163[3];
    WData/*95:0*/ __Vtemp1164[3];
    WData/*95:0*/ __Vtemp1165[3];
    WData/*95:0*/ __Vtemp1166[3];
    WData/*95:0*/ __Vtemp1167[3];
    WData/*95:0*/ __Vtemp1168[3];
    WData/*95:0*/ __Vtemp1169[3];
    WData/*95:0*/ __Vtemp1170[3];
    WData/*95:0*/ __Vtemp1171[3];
    WData/*95:0*/ __Vtemp1172[3];
    WData/*95:0*/ __Vtemp1173[3];
    WData/*95:0*/ __Vtemp1203[3];
    WData/*95:0*/ __Vtemp1204[3];
    WData/*95:0*/ __Vtemp1208[3];
    WData/*95:0*/ __Vtemp1209[3];
    WData/*95:0*/ __Vtemp1210[3];
    WData/*95:0*/ __Vtemp1214[3];
    WData/*95:0*/ __Vtemp1215[3];
    WData/*95:0*/ __Vtemp1216[3];
    WData/*95:0*/ __Vtemp1220[3];
    WData/*95:0*/ __Vtemp1221[3];
    WData/*95:0*/ __Vtemp1222[3];
    WData/*95:0*/ __Vtemp1226[3];
    WData/*95:0*/ __Vtemp1227[3];
    WData/*95:0*/ __Vtemp1228[3];
    WData/*95:0*/ __Vtemp1232[3];
    WData/*95:0*/ __Vtemp1233[3];
    WData/*95:0*/ __Vtemp1234[3];
    WData/*95:0*/ __Vtemp1238[3];
    WData/*95:0*/ __Vtemp1239[3];
    WData/*95:0*/ __Vtemp1240[3];
    WData/*95:0*/ __Vtemp1244[3];
    WData/*95:0*/ __Vtemp1245[3];
    WData/*95:0*/ __Vtemp1246[3];
    WData/*95:0*/ __Vtemp1250[3];
    WData/*95:0*/ __Vtemp1251[3];
    WData/*95:0*/ __Vtemp1252[3];
    WData/*95:0*/ __Vtemp1256[3];
    WData/*95:0*/ __Vtemp1260[3];
    WData/*95:0*/ __Vtemp1264[3];
    WData/*95:0*/ __Vtemp1268[3];
    WData/*95:0*/ __Vtemp1272[3];
    WData/*95:0*/ __Vtemp1276[3];
    WData/*95:0*/ __Vtemp1280[3];
    WData/*95:0*/ __Vtemp1284[3];
    WData/*95:0*/ __Vtemp1288[3];
    WData/*95:0*/ __Vtemp1292[3];
    WData/*95:0*/ __Vtemp1296[3];
    WData/*95:0*/ __Vtemp1300[3];
    WData/*95:0*/ __Vtemp1304[3];
    WData/*95:0*/ __Vtemp1308[3];
    WData/*95:0*/ __Vtemp1312[3];
    WData/*95:0*/ __Vtemp1316[3];
    WData/*95:0*/ __Vtemp1320[3];
    WData/*95:0*/ __Vtemp1324[3];
    WData/*95:0*/ __Vtemp1328[3];
    WData/*95:0*/ __Vtemp1329[3];
    WData/*95:0*/ __Vtemp1335[3];
    WData/*95:0*/ __Vtemp1337[3];
    WData/*95:0*/ __Vtemp1343[3];
    WData/*95:0*/ __Vtemp1345[3];
    WData/*95:0*/ __Vtemp1351[3];
    WData/*95:0*/ __Vtemp1353[3];
    WData/*95:0*/ __Vtemp1359[3];
    WData/*95:0*/ __Vtemp1361[3];
    WData/*95:0*/ __Vtemp1367[3];
    WData/*95:0*/ __Vtemp1369[3];
    WData/*95:0*/ __Vtemp1375[3];
    WData/*95:0*/ __Vtemp1377[3];
    WData/*95:0*/ __Vtemp1383[3];
    WData/*95:0*/ __Vtemp1385[3];
    WData/*95:0*/ __Vtemp1391[3];
    WData/*95:0*/ __Vtemp1393[3];
    WData/*95:0*/ __Vtemp1399[3];
    WData/*95:0*/ __Vtemp1401[3];
    WData/*95:0*/ __Vtemp1407[3];
    WData/*95:0*/ __Vtemp1409[3];
    WData/*95:0*/ __Vtemp1415[3];
    WData/*95:0*/ __Vtemp1417[3];
    WData/*95:0*/ __Vtemp1423[3];
    WData/*95:0*/ __Vtemp1425[3];
    WData/*95:0*/ __Vtemp1431[3];
    WData/*95:0*/ __Vtemp1436[3];
    WData/*95:0*/ __Vtemp1437[3];
    WData/*95:0*/ __Vtemp1438[3];
    WData/*95:0*/ __Vtemp1439[3];
    WData/*95:0*/ __Vtemp1440[3];
    WData/*95:0*/ __Vtemp1441[3];
    WData/*95:0*/ __Vtemp1442[3];
    WData/*95:0*/ __Vtemp1443[3];
    WData/*95:0*/ __Vtemp1444[3];
    WData/*95:0*/ __Vtemp1445[3];
    WData/*95:0*/ __Vtemp1446[3];
    WData/*95:0*/ __Vtemp1447[3];
    WData/*95:0*/ __Vtemp1448[3];
    WData/*95:0*/ __Vtemp1449[3];
    WData/*95:0*/ __Vtemp1450[3];
    WData/*95:0*/ __Vtemp1451[3];
    WData/*95:0*/ __Vtemp1452[3];
    WData/*95:0*/ __Vtemp1453[3];
    WData/*95:0*/ __Vtemp1454[3];
    WData/*95:0*/ __Vtemp1455[3];
    WData/*95:0*/ __Vtemp1456[3];
    WData/*95:0*/ __Vtemp1457[3];
    WData/*95:0*/ __Vtemp1458[3];
    WData/*95:0*/ __Vtemp1459[3];
    WData/*95:0*/ __Vtemp1460[3];
    WData/*95:0*/ __Vtemp1461[3];
    WData/*95:0*/ __Vtemp1462[3];
    WData/*95:0*/ __Vtemp1463[3];
    WData/*95:0*/ __Vtemp1464[3];
    WData/*95:0*/ __Vtemp1465[3];
    WData/*95:0*/ __Vtemp1471[3];
    WData/*95:0*/ __Vtemp1473[3];
    WData/*95:0*/ __Vtemp1479[3];
    WData/*95:0*/ __Vtemp1481[3];
    WData/*95:0*/ __Vtemp1487[3];
    WData/*95:0*/ __Vtemp1489[3];
    WData/*95:0*/ __Vtemp1495[3];
    WData/*95:0*/ __Vtemp1497[3];
    WData/*95:0*/ __Vtemp1503[3];
    WData/*95:0*/ __Vtemp1505[3];
    WData/*95:0*/ __Vtemp1511[3];
    WData/*95:0*/ __Vtemp1513[3];
    WData/*95:0*/ __Vtemp1519[3];
    WData/*95:0*/ __Vtemp1521[3];
    WData/*95:0*/ __Vtemp1527[3];
    WData/*95:0*/ __Vtemp1529[3];
    WData/*95:0*/ __Vtemp1535[3];
    WData/*95:0*/ __Vtemp1537[3];
    WData/*95:0*/ __Vtemp1538[3];
    WData/*95:0*/ __Vtemp1539[3];
    WData/*95:0*/ __Vtemp1540[3];
    WData/*95:0*/ __Vtemp1541[3];
    WData/*95:0*/ __Vtemp1542[3];
    WData/*95:0*/ __Vtemp1543[3];
    WData/*95:0*/ __Vtemp1544[3];
    WData/*95:0*/ __Vtemp1545[3];
    WData/*95:0*/ __Vtemp1546[3];
    WData/*95:0*/ __Vtemp1547[3];
    WData/*95:0*/ __Vtemp1548[3];
    WData/*95:0*/ __Vtemp1549[3];
    WData/*95:0*/ __Vtemp1550[3];
    WData/*95:0*/ __Vtemp1551[3];
    WData/*95:0*/ __Vtemp1552[3];
    WData/*95:0*/ __Vtemp1553[3];
    WData/*95:0*/ __Vtemp1554[3];
    WData/*95:0*/ __Vtemp1555[3];
    WData/*95:0*/ __Vtemp1556[3];
    WData/*95:0*/ __Vtemp1557[3];
    WData/*95:0*/ __Vtemp1558[3];
    WData/*95:0*/ __Vtemp1559[3];
    WData/*95:0*/ __Vtemp1560[3];
    WData/*95:0*/ __Vtemp1561[3];
    WData/*95:0*/ __Vtemp1562[3];
    WData/*95:0*/ __Vtemp1563[3];
    WData/*95:0*/ __Vtemp1564[3];
    WData/*95:0*/ __Vtemp1565[3];
    WData/*95:0*/ __Vtemp1566[3];
    WData/*95:0*/ __Vtemp1567[3];
    WData/*95:0*/ __Vtemp1568[3];
    WData/*95:0*/ __Vtemp1569[3];
    WData/*95:0*/ __Vtemp1570[3];
    WData/*95:0*/ __Vtemp1571[3];
    WData/*95:0*/ __Vtemp1572[3];
    WData/*95:0*/ __Vtemp1573[3];
    WData/*95:0*/ __Vtemp1574[3];
    WData/*95:0*/ __Vtemp1575[3];
    WData/*95:0*/ __Vtemp1576[3];
    WData/*95:0*/ __Vtemp1577[3];
    WData/*95:0*/ __Vtemp1578[3];
    WData/*95:0*/ __Vtemp1579[3];
    WData/*95:0*/ __Vtemp1580[3];
    WData/*95:0*/ __Vtemp1581[3];
    WData/*95:0*/ __Vtemp1582[3];
    WData/*95:0*/ __Vtemp1583[3];
    WData/*95:0*/ __Vtemp1584[3];
    WData/*95:0*/ __Vtemp1585[3];
    WData/*95:0*/ __Vtemp1586[3];
    WData/*95:0*/ __Vtemp1587[3];
    WData/*95:0*/ __Vtemp1588[3];
    WData/*95:0*/ __Vtemp1589[3];
    WData/*95:0*/ __Vtemp1590[3];
    WData/*95:0*/ __Vtemp1591[3];
    WData/*95:0*/ __Vtemp1592[3];
    WData/*95:0*/ __Vtemp1593[3];
    WData/*95:0*/ __Vtemp1594[3];
    WData/*95:0*/ __Vtemp1595[3];
    WData/*95:0*/ __Vtemp1596[3];
    WData/*95:0*/ __Vtemp1611[3];
    WData/*95:0*/ __Vtemp1612[3];
    WData/*95:0*/ __Vtemp1617[3];
    WData/*95:0*/ __Vtemp1618[3];
    WData/*95:0*/ __Vtemp1623[3];
    WData/*95:0*/ __Vtemp1624[3];
    WData/*95:0*/ __Vtemp1629[3];
    WData/*95:0*/ __Vtemp1630[3];
    WData/*95:0*/ __Vtemp1635[3];
    WData/*95:0*/ __Vtemp1636[3];
    WData/*95:0*/ __Vtemp1641[3];
    WData/*95:0*/ __Vtemp1642[3];
    WData/*95:0*/ __Vtemp1647[3];
    WData/*95:0*/ __Vtemp1648[3];
    WData/*95:0*/ __Vtemp1653[3];
    WData/*95:0*/ __Vtemp1654[3];
    WData/*95:0*/ __Vtemp1659[3];
    WData/*95:0*/ __Vtemp1660[3];
    WData/*95:0*/ __Vtemp1665[3];
    WData/*95:0*/ __Vtemp1671[3];
    WData/*95:0*/ __Vtemp1673[3];
    WData/*95:0*/ __Vtemp1679[3];
    WData/*95:0*/ __Vtemp1681[3];
    WData/*95:0*/ __Vtemp1687[3];
    WData/*95:0*/ __Vtemp1689[3];
    WData/*95:0*/ __Vtemp1695[3];
    WData/*95:0*/ __Vtemp1697[3];
    WData/*95:0*/ __Vtemp1703[3];
    WData/*95:0*/ __Vtemp1705[3];
    WData/*95:0*/ __Vtemp1711[3];
    WData/*95:0*/ __Vtemp1713[3];
    WData/*95:0*/ __Vtemp1719[3];
    WData/*95:0*/ __Vtemp1721[3];
    WData/*95:0*/ __Vtemp1727[3];
    WData/*95:0*/ __Vtemp1729[3];
    WData/*95:0*/ __Vtemp1735[3];
    WData/*95:0*/ __Vtemp1737[3];
    WData/*95:0*/ __Vtemp1743[3];
    WData/*95:0*/ __Vtemp1745[3];
    WData/*95:0*/ __Vtemp1751[3];
    WData/*95:0*/ __Vtemp1753[3];
    WData/*95:0*/ __Vtemp1759[3];
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
            tracep->chgQData(oldp+101,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqifu),52);
            tracep->chgQData(oldp+103,(vlTOPp->azadi_soc_top__DOT__iccm_to_xbar),52);
            tracep->chgQData(oldp+105,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu),52);
            tracep->chgWData(oldp+107,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o),86);
            tracep->chgWData(oldp+110,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.tl_d_o),86);
            tracep->chgQData(oldp+113,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_us_d2h),52);
            __Vtemp1120[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [6U][0U];
            __Vtemp1120[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [6U][1U];
            __Vtemp1120[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [6U][2U];
            tracep->chgWData(oldp+115,(__Vtemp1120),86);
            tracep->chgBit(oldp+118,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqifu))));
            tracep->chgBit(oldp+119,((1U & (IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqifu 
                                                    >> 0x33U)))));
            tracep->chgIData(oldp+120,((IData)((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqifu 
                                                >> 2U))),32);
            tracep->chgBit(oldp+121,((1U & (IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqifu 
                                                    >> 1U)))));
            tracep->chgBit(oldp+122,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu))));
            tracep->chgBit(oldp+123,((1U & (IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                    >> 0x33U)))));
            tracep->chgIData(oldp+124,((IData)((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                >> 2U))),32);
            tracep->chgBit(oldp+125,((1U & (IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                    >> 1U)))));
            tracep->chgBit(oldp+126,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__lsu_load_err));
            tracep->chgBit(oldp+127,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__lsu_store_err));
            tracep->chgIData(oldp+128,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb),32);
            tracep->chgIData(oldp+129,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_rdata_ext),32);
            tracep->chgBit(oldp+130,((0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))));
            tracep->chgBit(oldp+131,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_op_en));
            tracep->chgBit(oldp+132,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__illegal_csr_insn_id));
            tracep->chgBit(oldp+133,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_in_ready));
            tracep->chgBit(oldp+134,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__lsu_resp_valid));
            tracep->chgBit(oldp+135,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__lsu_load_err) 
                                      | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__lsu_store_err))));
            tracep->chgBit(oldp+136,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_done));
            tracep->chgBit(oldp+137,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__perf_instr_ret_wb));
            tracep->chgBit(oldp+138,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__clk));
            tracep->chgBit(oldp+139,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
            tracep->chgBit(oldp+140,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d));
            tracep->chgBit(oldp+141,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_raw));
            tracep->chgIData(oldp+142,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata),32);
            tracep->chgBit(oldp+143,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_err));
            tracep->chgIData(oldp+144,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed),32);
            tracep->chgBit(oldp+145,((3U != (3U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata))));
            tracep->chgBit(oldp+146,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn));
            tracep->chgBit(oldp+147,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_raw) 
                                      & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_err)))));
            tracep->chgBit(oldp+148,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__gnt_or_pmp_err));
            tracep->chgBit(oldp+149,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rvalid_or_pmp_err));
            tracep->chgCData(oldp+150,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_n),2);
            tracep->chgCData(oldp+151,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                         ? (1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_n) 
                                                  >> 1U))
                                         : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_n))),2);
            tracep->chgCData(oldp+152,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__branch_discard_n),2);
            tracep->chgCData(oldp+153,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                         ? (1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__branch_discard_n) 
                                                  >> 1U))
                                         : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__branch_discard_n))),2);
            tracep->chgBit(oldp+154,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_or_pmp_err));
            tracep->chgBit(oldp+155,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_valid));
            tracep->chgWData(oldp+156,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d),96);
            tracep->chgCData(oldp+159,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_d),3);
            tracep->chgCData(oldp+160,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_d),3);
            tracep->chgCData(oldp+161,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed),3);
            tracep->chgCData(oldp+162,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped),3);
            tracep->chgCData(oldp+163,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__entry_en),3);
            tracep->chgBit(oldp+164,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo));
            tracep->chgIData(oldp+165,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata),32);
            tracep->chgBit(oldp+166,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err));
            tracep->chgBit(oldp+167,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid));
            tracep->chgBit(oldp+168,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed));
            tracep->chgBit(oldp+169,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed));
            tracep->chgBit(oldp+170,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two));
            tracep->chgBit(oldp+171,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv));
            tracep->chgBit(oldp+172,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_branch));
            tracep->chgBit(oldp+173,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_jump));
            tracep->chgBit(oldp+174,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_id));
            tracep->chgBit(oldp+175,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multicycle_done));
            tracep->chgBit(oldp+176,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__csr_pipe_flush));
            tracep->chgBit(oldp+177,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_d));
            tracep->chgCData(oldp+178,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns),4);
            tracep->chgBit(oldp+179,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
            tracep->chgBit(oldp+180,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d));
            tracep->chgBit(oldp+181,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if));
            tracep->chgBit(oldp+182,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id));
            tracep->chgBit(oldp+183,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__lsu_store_err) 
                                      | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__lsu_load_err))));
            tracep->chgBit(oldp+184,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req_all));
            tracep->chgBit(oldp+185,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush));
            tracep->chgBit(oldp+186,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__addr_update));
            tracep->chgBit(oldp+187,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update));
            tracep->chgBit(oldp+188,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_update));
            tracep->chgBit(oldp+189,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_d));
            tracep->chgBit(oldp+190,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_d));
            tracep->chgBit(oldp+191,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_d));
            tracep->chgBit(oldp+192,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_or_pmp_err));
            tracep->chgCData(oldp+193,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_ns),3);
            tracep->chgCData(oldp+194,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we),2);
            tracep->chgCData(oldp+195,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d),6);
            tracep->chgBit(oldp+196,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_en));
            tracep->chgBit(oldp+197,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_en));
            tracep->chgBit(oldp+198,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_en));
            tracep->chgBit(oldp+199,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_en));
            tracep->chgBit(oldp+200,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_en));
            tracep->chgBit(oldp+201,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtval_en));
            tracep->chgBit(oldp+202,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_en));
            tracep->chgIData(oldp+203,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d),32);
            tracep->chgBit(oldp+204,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_en));
            tracep->chgBit(oldp+205,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__depc_en));
            tracep->chgBit(oldp+206,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_en));
            tracep->chgBit(oldp+207,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_en));
            tracep->chgBit(oldp+208,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_we));
            tracep->chgIData(oldp+209,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we),32);
            tracep->chgIData(oldp+210,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we),32);
            tracep->chgIData(oldp+211,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr),32);
            tracep->chgBit(oldp+212,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            >> 1U))));
            tracep->chgBit(oldp+213,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            >> 1U))));
            tracep->chgBit(oldp+214,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                            >> 1U))));
            tracep->chgBit(oldp+215,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_we));
            tracep->chgBit(oldp+216,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int));
            tracep->chgBit(oldp+217,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wreq));
            tracep->chgSData(oldp+218,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we),16);
            tracep->chgSData(oldp+219,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we),16);
            tracep->chgIData(oldp+220,((0x7ffffU & 
                                        (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                         >> 0xdU))),19);
            tracep->chgIData(oldp+221,((0x7ffffU & 
                                        (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                         >> 0xdU))),19);
            tracep->chgIData(oldp+222,((0x7ffffU & 
                                        (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                         >> 0xdU))),19);
            tracep->chgCData(oldp+223,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we),2);
            tracep->chgCData(oldp+224,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we),2);
            tracep->chgCData(oldp+225,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d),6);
            tracep->chgIData(oldp+226,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d),32);
            tracep->chgBit(oldp+227,((1U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)));
            tracep->chgBit(oldp+228,((1U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we)));
            tracep->chgQData(oldp+229,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_upd),64);
            tracep->chgQData(oldp+231,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load),64);
            tracep->chgBit(oldp+233,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we));
            tracep->chgQData(oldp+234,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d),64);
            tracep->chgBit(oldp+236,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            >> 2U))));
            tracep->chgBit(oldp+237,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            >> 2U))));
            tracep->chgQData(oldp+238,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_upd),64);
            tracep->chgQData(oldp+240,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load),64);
            tracep->chgBit(oldp+242,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we));
            tracep->chgQData(oldp+243,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d),64);
            tracep->chgBit(oldp+245,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we))));
            tracep->chgBit(oldp+246,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we))));
            tracep->chgBit(oldp+247,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we) 
                                            >> 1U))));
            tracep->chgBit(oldp+248,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we) 
                                            >> 1U))));
            tracep->chgBit(oldp+249,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we) 
                                            >> 2U))));
            tracep->chgBit(oldp+250,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we) 
                                            >> 2U))));
            tracep->chgBit(oldp+251,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we) 
                                            >> 3U))));
            tracep->chgBit(oldp+252,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we) 
                                            >> 3U))));
            tracep->chgBit(oldp+253,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we) 
                                            >> 4U))));
            tracep->chgBit(oldp+254,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we) 
                                            >> 4U))));
            tracep->chgBit(oldp+255,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we) 
                                            >> 5U))));
            tracep->chgBit(oldp+256,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we) 
                                            >> 5U))));
            tracep->chgBit(oldp+257,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we) 
                                            >> 6U))));
            tracep->chgBit(oldp+258,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we) 
                                            >> 6U))));
            tracep->chgBit(oldp+259,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we) 
                                            >> 7U))));
            tracep->chgBit(oldp+260,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we) 
                                            >> 7U))));
            tracep->chgBit(oldp+261,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we) 
                                            >> 8U))));
            tracep->chgBit(oldp+262,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we) 
                                            >> 8U))));
            tracep->chgBit(oldp+263,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we) 
                                            >> 9U))));
            tracep->chgBit(oldp+264,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we) 
                                            >> 9U))));
            tracep->chgBit(oldp+265,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+266,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+267,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+268,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+269,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+270,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+271,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+272,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+273,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+274,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+275,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_we) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+276,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr_we) 
                                            >> 0xfU))));
            tracep->chgBit(oldp+277,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            >> 3U))));
            tracep->chgBit(oldp+278,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            >> 3U))));
            tracep->chgIData(oldp+279,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_upd),32);
            tracep->chgQData(oldp+280,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+282,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgIData(oldp+283,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),32);
            tracep->chgIData(oldp+284,((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                >> 0x20U))),32);
            tracep->chgBit(oldp+285,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            >> 4U))));
            tracep->chgBit(oldp+286,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            >> 4U))));
            tracep->chgIData(oldp+287,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_upd),32);
            tracep->chgQData(oldp+288,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+290,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgIData(oldp+291,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),32);
            tracep->chgIData(oldp+292,((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                >> 0x20U))),32);
            tracep->chgBit(oldp+293,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            >> 5U))));
            tracep->chgBit(oldp+294,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            >> 5U))));
            tracep->chgIData(oldp+295,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_upd),32);
            tracep->chgQData(oldp+296,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+298,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgIData(oldp+299,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),32);
            tracep->chgIData(oldp+300,((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                >> 0x20U))),32);
            tracep->chgBit(oldp+301,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            >> 6U))));
            tracep->chgBit(oldp+302,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            >> 6U))));
            tracep->chgIData(oldp+303,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_upd),32);
            tracep->chgQData(oldp+304,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+306,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgIData(oldp+307,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),32);
            tracep->chgIData(oldp+308,((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                >> 0x20U))),32);
            tracep->chgBit(oldp+309,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            >> 7U))));
            tracep->chgBit(oldp+310,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            >> 7U))));
            tracep->chgIData(oldp+311,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_upd),32);
            tracep->chgQData(oldp+312,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+314,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgIData(oldp+315,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),32);
            tracep->chgIData(oldp+316,((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                >> 0x20U))),32);
            tracep->chgBit(oldp+317,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            >> 8U))));
            tracep->chgBit(oldp+318,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            >> 8U))));
            tracep->chgIData(oldp+319,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_upd),32);
            tracep->chgQData(oldp+320,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+322,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgIData(oldp+323,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),32);
            tracep->chgIData(oldp+324,((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                >> 0x20U))),32);
            tracep->chgBit(oldp+325,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            >> 9U))));
            tracep->chgBit(oldp+326,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            >> 9U))));
            tracep->chgIData(oldp+327,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_upd),32);
            tracep->chgQData(oldp+328,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+330,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgIData(oldp+331,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),32);
            tracep->chgIData(oldp+332,((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                >> 0x20U))),32);
            tracep->chgBit(oldp+333,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            >> 0xaU))));
            tracep->chgBit(oldp+334,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            >> 0xaU))));
            tracep->chgIData(oldp+335,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_upd),32);
            tracep->chgQData(oldp+336,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+338,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgIData(oldp+339,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),32);
            tracep->chgIData(oldp+340,((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                >> 0x20U))),32);
            tracep->chgBit(oldp+341,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            >> 0xbU))));
            tracep->chgBit(oldp+342,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            >> 0xbU))));
            tracep->chgIData(oldp+343,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_upd),32);
            tracep->chgQData(oldp+344,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+346,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgIData(oldp+347,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),32);
            tracep->chgIData(oldp+348,((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                >> 0x20U))),32);
            tracep->chgBit(oldp+349,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            >> 0xcU))));
            tracep->chgBit(oldp+350,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            >> 0xcU))));
            tracep->chgIData(oldp+351,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_upd),32);
            tracep->chgQData(oldp+352,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load),64);
            tracep->chgBit(oldp+354,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we));
            tracep->chgIData(oldp+355,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d),32);
            tracep->chgIData(oldp+356,((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
                                                >> 0x20U))),32);
            tracep->chgBit(oldp+357,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we))));
            tracep->chgBit(oldp+358,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we))));
            tracep->chgBit(oldp+359,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we) 
                                            >> 1U))));
            tracep->chgBit(oldp+360,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we) 
                                            >> 1U))));
            tracep->chgIData(oldp+361,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec),31);
            tracep->chgBit(oldp+362,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk2__DOT__source_d));
            tracep->chgBit(oldp+363,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk2__DOT__source_d));
            tracep->chgQData(oldp+364,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dm),52);
            tracep->chgWData(oldp+366,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.tl_d_o),86);
            tracep->chgWData(oldp+369,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.tl_d_o),86);
            tracep->chgWData(oldp+372,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.tl_d_o),86);
            tracep->chgWData(oldp+375,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.tl_d_o),86);
            tracep->chgWData(oldp+378,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.tl_d_o),86);
            tracep->chgWData(oldp+381,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.tl_d_o),86);
            tracep->chgQData(oldp+384,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__dv_to_s1n
                                       [0U]),52);
            tracep->chgQData(oldp+386,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__dv_to_s1n
                                       [1U]),52);
            tracep->chgQData(oldp+388,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__dv_to_s1n
                                       [2U]),52);
            tracep->chgQData(oldp+390,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h2
                                       [0U]),52);
            tracep->chgQData(oldp+392,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h2
                                       [1U]),52);
            tracep->chgQData(oldp+394,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h2
                                       [2U]),52);
            tracep->chgQData(oldp+396,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h2
                                       [3U]),52);
            tracep->chgQData(oldp+398,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h2
                                       [4U]),52);
            tracep->chgQData(oldp+400,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h2
                                       [5U]),52);
            tracep->chgQData(oldp+402,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h2
                                       [6U]),52);
            tracep->chgQData(oldp+404,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h2
                                       [7U]),52);
            tracep->chgQData(oldp+406,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h2
                                       [8U]),52);
            tracep->chgQData(oldp+408,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h3
                                       [0U]),52);
            tracep->chgQData(oldp+410,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h3
                                       [1U]),52);
            tracep->chgQData(oldp+412,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h3
                                       [2U]),52);
            tracep->chgQData(oldp+414,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h3
                                       [3U]),52);
            tracep->chgQData(oldp+416,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h3
                                       [4U]),52);
            tracep->chgQData(oldp+418,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h3
                                       [5U]),52);
            tracep->chgQData(oldp+420,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h3
                                       [6U]),52);
            tracep->chgQData(oldp+422,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h3
                                       [7U]),52);
            tracep->chgQData(oldp+424,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__sm1_s1n_h3
                                       [8U]),52);
            tracep->chgQData(oldp+426,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_0_o
                                       [0U]),52);
            tracep->chgQData(oldp+428,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_0_o
                                       [1U]),52);
            tracep->chgQData(oldp+430,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_1_o
                                       [0U]),52);
            tracep->chgQData(oldp+432,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_1_o
                                       [1U]),52);
            tracep->chgQData(oldp+434,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_2_o
                                       [0U]),52);
            tracep->chgQData(oldp+436,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_2_o
                                       [1U]),52);
            tracep->chgQData(oldp+438,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_3_o
                                       [0U]),52);
            tracep->chgQData(oldp+440,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_3_o
                                       [1U]),52);
            tracep->chgQData(oldp+442,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_4_o
                                       [0U]),52);
            tracep->chgQData(oldp+444,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_4_o
                                       [1U]),52);
            tracep->chgQData(oldp+446,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_5_o
                                       [0U]),52);
            tracep->chgQData(oldp+448,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_5_o
                                       [1U]),52);
            tracep->chgQData(oldp+450,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_6_o
                                       [0U]),52);
            tracep->chgQData(oldp+452,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_6_o
                                       [1U]),52);
            tracep->chgQData(oldp+454,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_7_o
                                       [0U]),52);
            tracep->chgQData(oldp+456,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_7_o
                                       [1U]),52);
            tracep->chgQData(oldp+458,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_8_o
                                       [0U]),52);
            tracep->chgQData(oldp+460,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_8_o
                                       [1U]),52);
            tracep->chgQData(oldp+462,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                       [0U]),52);
            tracep->chgQData(oldp+464,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                       [1U]),52);
            tracep->chgQData(oldp+466,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                       [2U]),52);
            tracep->chgQData(oldp+468,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_i),52);
            tracep->chgBit(oldp+470,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__accept_t_req));
            tracep->chgBit(oldp+471,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__accept_t_rsp));
            tracep->chgQData(oldp+472,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_p),52);
            tracep->chgBit(oldp+474,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__hfifo_reqready));
            tracep->chgBit(oldp+475,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_i))));
            tracep->chgBit(oldp+476,((1U & (IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_i 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+477,((((QData)((IData)(
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
            tracep->chgQData(oldp+479,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                       [0U]),52);
            tracep->chgQData(oldp+481,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                       [1U]),52);
            tracep->chgQData(oldp+483,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                       [2U]),52);
            tracep->chgQData(oldp+485,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                       [3U]),52);
            tracep->chgQData(oldp+487,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                       [4U]),52);
            tracep->chgQData(oldp+489,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                       [5U]),52);
            tracep->chgQData(oldp+491,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                       [6U]),52);
            tracep->chgQData(oldp+493,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                       [7U]),52);
            tracep->chgQData(oldp+495,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                       [8U]),52);
            tracep->chgQData(oldp+497,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_i),52);
            tracep->chgBit(oldp+499,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__accept_t_req));
            tracep->chgBit(oldp+500,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__accept_t_rsp));
            tracep->chgQData(oldp+501,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_p),52);
            tracep->chgBit(oldp+503,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__hfifo_reqready));
            tracep->chgBit(oldp+504,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_i))));
            tracep->chgBit(oldp+505,((1U & (IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_i 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+506,((((QData)((IData)(
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
            tracep->chgQData(oldp+508,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                       [0U]),52);
            tracep->chgQData(oldp+510,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                       [1U]),52);
            tracep->chgQData(oldp+512,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                       [2U]),52);
            tracep->chgQData(oldp+514,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                       [3U]),52);
            tracep->chgQData(oldp+516,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                       [4U]),52);
            tracep->chgQData(oldp+518,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                       [5U]),52);
            tracep->chgQData(oldp+520,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                       [6U]),52);
            tracep->chgQData(oldp+522,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                       [7U]),52);
            tracep->chgQData(oldp+524,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                       [8U]),52);
            tracep->chgQData(oldp+526,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_i),52);
            tracep->chgBit(oldp+528,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__accept_t_req));
            tracep->chgBit(oldp+529,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__accept_t_rsp));
            tracep->chgQData(oldp+530,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_p),52);
            tracep->chgBit(oldp+532,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__hfifo_reqready));
            tracep->chgBit(oldp+533,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_i))));
            tracep->chgBit(oldp+534,((1U & (IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_t_i 
                                                    >> 0x33U)))));
            tracep->chgQData(oldp+535,((((QData)((IData)(
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
            tracep->chgBit(oldp+537,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__req_i));
            tracep->chgSData(oldp+538,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__addr_i),12);
            tracep->chgIData(oldp+539,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__wdata_int),32);
            tracep->chgIData(oldp+540,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__wmask_int),32);
            tracep->chgBit(oldp+541,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__we_i));
            tracep->chgCData(oldp+542,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_we),4);
            tracep->chgBit(oldp+543,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack));
            tracep->chgSData(oldp+544,(((((4U != (7U 
                                                  & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                     >> 0x12U)))
                                           ? 0U : 1U) 
                                         << 0xbU) | 
                                        (((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error) 
                                          << 0xaU) 
                                         | (0x3ffU 
                                            & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                               >> 5U))))),13);
            tracep->chgBit(oldp+545,(((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__req_i) 
                                      & (~ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__we_i)))));
            tracep->chgCData(oldp+546,((0x1eU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o[1U])),5);
            tracep->chgBit(oldp+547,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__tlul_error));
            tracep->chgIData(oldp+548,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__unnamedblk1__DOT__i),32);
            tracep->chgBit(oldp+549,((((0U == (7U & 
                                               (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                >> 0x12U))) 
                                       | (1U == (7U 
                                                 & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                    >> 0x12U)))) 
                                      | (4U == (7U 
                                                & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                   >> 0x12U))))));
            tracep->chgBit(oldp+550,((((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk) 
                                       & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk)) 
                                      & (((4U == (7U 
                                                  & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                     >> 0x12U))) 
                                          | (1U == 
                                             (7U & 
                                              (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                               >> 0x12U)))) 
                                         | (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk)))));
            tracep->chgBit(oldp+551,((0U == (7U & (
                                                   vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                   >> 0x12U)))));
            tracep->chgBit(oldp+552,((1U == (7U & (
                                                   vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                   >> 0x12U)))));
            tracep->chgBit(oldp+553,((4U == (7U & (
                                                   vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                   >> 0x12U)))));
            tracep->chgBit(oldp+554,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+555,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+556,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk));
            tracep->chgCData(oldp+557,((0xfU & ((IData)(1U) 
                                                << 
                                                (3U 
                                                 & ((vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                                     << 0x1bU) 
                                                    | (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o[1U] 
                                                       >> 5U)))))),4);
            tracep->chgBit(oldp+558,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+559,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+560,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack));
            tracep->chgQData(oldp+561,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wdata),33);
            tracep->chgQData(oldp+563,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o),33);
            tracep->chgBit(oldp+565,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            __Vtemp1121[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0U][0U];
            __Vtemp1121[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0U][1U];
            __Vtemp1121[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0U][2U];
            tracep->chgWData(oldp+566,(__Vtemp1121),86);
            __Vtemp1122[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [1U][0U];
            __Vtemp1122[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [1U][1U];
            __Vtemp1122[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [1U][2U];
            tracep->chgWData(oldp+569,(__Vtemp1122),86);
            __Vtemp1123[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [2U][0U];
            __Vtemp1123[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [2U][1U];
            __Vtemp1123[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [2U][2U];
            tracep->chgWData(oldp+572,(__Vtemp1123),86);
            __Vtemp1124[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [3U][0U];
            __Vtemp1124[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [3U][1U];
            __Vtemp1124[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [3U][2U];
            tracep->chgWData(oldp+575,(__Vtemp1124),86);
            __Vtemp1125[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [4U][0U];
            __Vtemp1125[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [4U][1U];
            __Vtemp1125[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [4U][2U];
            tracep->chgWData(oldp+578,(__Vtemp1125),86);
            __Vtemp1126[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [5U][0U];
            __Vtemp1126[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [5U][1U];
            __Vtemp1126[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [5U][2U];
            tracep->chgWData(oldp+581,(__Vtemp1126),86);
            __Vtemp1127[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [7U][0U];
            __Vtemp1127[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [7U][1U];
            __Vtemp1127[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [7U][2U];
            tracep->chgWData(oldp+584,(__Vtemp1127),86);
            __Vtemp1128[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [8U][0U];
            __Vtemp1128[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [8U][1U];
            __Vtemp1128[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [8U][2U];
            tracep->chgWData(oldp+587,(__Vtemp1128),86);
            __Vtemp1129[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [9U][0U];
            __Vtemp1129[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [9U][1U];
            __Vtemp1129[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [9U][2U];
            tracep->chgWData(oldp+590,(__Vtemp1129),86);
            __Vtemp1130[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xaU][0U];
            __Vtemp1130[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xaU][1U];
            __Vtemp1130[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xaU][2U];
            tracep->chgWData(oldp+593,(__Vtemp1130),86);
            __Vtemp1131[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xbU][0U];
            __Vtemp1131[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xbU][1U];
            __Vtemp1131[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xbU][2U];
            tracep->chgWData(oldp+596,(__Vtemp1131),86);
            __Vtemp1132[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xcU][0U];
            __Vtemp1132[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xcU][1U];
            __Vtemp1132[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xcU][2U];
            tracep->chgWData(oldp+599,(__Vtemp1132),86);
            __Vtemp1133[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0U][0U];
            __Vtemp1133[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0U][1U];
            __Vtemp1133[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0U][2U];
            tracep->chgWData(oldp+602,(__Vtemp1133),86);
            __Vtemp1134[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [1U][0U];
            __Vtemp1134[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [1U][1U];
            __Vtemp1134[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [1U][2U];
            tracep->chgWData(oldp+605,(__Vtemp1134),86);
            __Vtemp1135[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [2U][0U];
            __Vtemp1135[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [2U][1U];
            __Vtemp1135[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [2U][2U];
            tracep->chgWData(oldp+608,(__Vtemp1135),86);
            __Vtemp1136[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [3U][0U];
            __Vtemp1136[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [3U][1U];
            __Vtemp1136[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [3U][2U];
            tracep->chgWData(oldp+611,(__Vtemp1136),86);
            __Vtemp1137[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [4U][0U];
            __Vtemp1137[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [4U][1U];
            __Vtemp1137[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [4U][2U];
            tracep->chgWData(oldp+614,(__Vtemp1137),86);
            __Vtemp1138[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [5U][0U];
            __Vtemp1138[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [5U][1U];
            __Vtemp1138[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [5U][2U];
            tracep->chgWData(oldp+617,(__Vtemp1138),86);
            __Vtemp1139[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [6U][0U];
            __Vtemp1139[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [6U][1U];
            __Vtemp1139[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [6U][2U];
            tracep->chgWData(oldp+620,(__Vtemp1139),86);
            __Vtemp1140[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [7U][0U];
            __Vtemp1140[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [7U][1U];
            __Vtemp1140[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [7U][2U];
            tracep->chgWData(oldp+623,(__Vtemp1140),86);
            __Vtemp1141[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [8U][0U];
            __Vtemp1141[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [8U][1U];
            __Vtemp1141[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [8U][2U];
            tracep->chgWData(oldp+626,(__Vtemp1141),86);
            __Vtemp1142[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [9U][0U];
            __Vtemp1142[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [9U][1U];
            __Vtemp1142[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [9U][2U];
            tracep->chgWData(oldp+629,(__Vtemp1142),86);
            __Vtemp1143[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xaU][0U];
            __Vtemp1143[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xaU][1U];
            __Vtemp1143[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xaU][2U];
            tracep->chgWData(oldp+632,(__Vtemp1143),86);
            __Vtemp1144[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xbU][0U];
            __Vtemp1144[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xbU][1U];
            __Vtemp1144[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xbU][2U];
            tracep->chgWData(oldp+635,(__Vtemp1144),86);
            __Vtemp1145[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xcU][0U];
            __Vtemp1145[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xcU][1U];
            __Vtemp1145[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                [0xcU][2U];
            tracep->chgWData(oldp+638,(__Vtemp1145),86);
            tracep->chgCData(oldp+641,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__dev_sel_s1n_14),4);
            __Vtemp1146[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [0U][0U];
            __Vtemp1146[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [0U][1U];
            __Vtemp1146[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [0U][2U];
            tracep->chgWData(oldp+642,(__Vtemp1146),86);
            __Vtemp1147[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [1U][0U];
            __Vtemp1147[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [1U][1U];
            __Vtemp1147[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [1U][2U];
            tracep->chgWData(oldp+645,(__Vtemp1147),86);
            __Vtemp1148[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [2U][0U];
            __Vtemp1148[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [2U][1U];
            __Vtemp1148[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [2U][2U];
            tracep->chgWData(oldp+648,(__Vtemp1148),86);
            __Vtemp1149[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [3U][0U];
            __Vtemp1149[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [3U][1U];
            __Vtemp1149[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [3U][2U];
            tracep->chgWData(oldp+651,(__Vtemp1149),86);
            __Vtemp1150[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [4U][0U];
            __Vtemp1150[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [4U][1U];
            __Vtemp1150[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [4U][2U];
            tracep->chgWData(oldp+654,(__Vtemp1150),86);
            __Vtemp1151[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [5U][0U];
            __Vtemp1151[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [5U][1U];
            __Vtemp1151[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [5U][2U];
            tracep->chgWData(oldp+657,(__Vtemp1151),86);
            __Vtemp1152[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [6U][0U];
            __Vtemp1152[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [6U][1U];
            __Vtemp1152[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [6U][2U];
            tracep->chgWData(oldp+660,(__Vtemp1152),86);
            __Vtemp1153[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [7U][0U];
            __Vtemp1153[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [7U][1U];
            __Vtemp1153[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [7U][2U];
            tracep->chgWData(oldp+663,(__Vtemp1153),86);
            __Vtemp1154[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [8U][0U];
            __Vtemp1154[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [8U][1U];
            __Vtemp1154[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [8U][2U];
            tracep->chgWData(oldp+666,(__Vtemp1154),86);
            __Vtemp1155[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [9U][0U];
            __Vtemp1155[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [9U][1U];
            __Vtemp1155[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [9U][2U];
            tracep->chgWData(oldp+669,(__Vtemp1155),86);
            __Vtemp1156[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [0xaU][0U];
            __Vtemp1156[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [0xaU][1U];
            __Vtemp1156[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [0xaU][2U];
            tracep->chgWData(oldp+672,(__Vtemp1156),86);
            __Vtemp1157[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [0xbU][0U];
            __Vtemp1157[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [0xbU][1U];
            __Vtemp1157[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [0xbU][2U];
            tracep->chgWData(oldp+675,(__Vtemp1157),86);
            __Vtemp1158[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [0xcU][0U];
            __Vtemp1158[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [0xcU][1U];
            __Vtemp1158[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o
                [0xcU][2U];
            tracep->chgWData(oldp+678,(__Vtemp1158),86);
            tracep->chgCData(oldp+681,((0xfU & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])),4);
            tracep->chgWData(oldp+682,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_o),86);
            tracep->chgQData(oldp+685,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_i),52);
            tracep->chgBit(oldp+687,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__hold_all_requests));
            tracep->chgBit(oldp+688,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__accept_t_req));
            tracep->chgBit(oldp+689,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__accept_t_rsp));
            __Vtemp1159[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0U][0U];
            __Vtemp1159[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0U][1U];
            __Vtemp1159[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0U][2U];
            tracep->chgWData(oldp+690,(__Vtemp1159),86);
            __Vtemp1160[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [1U][0U];
            __Vtemp1160[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [1U][1U];
            __Vtemp1160[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [1U][2U];
            tracep->chgWData(oldp+693,(__Vtemp1160),86);
            __Vtemp1161[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [2U][0U];
            __Vtemp1161[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [2U][1U];
            __Vtemp1161[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [2U][2U];
            tracep->chgWData(oldp+696,(__Vtemp1161),86);
            __Vtemp1162[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [3U][0U];
            __Vtemp1162[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [3U][1U];
            __Vtemp1162[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [3U][2U];
            tracep->chgWData(oldp+699,(__Vtemp1162),86);
            __Vtemp1163[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [4U][0U];
            __Vtemp1163[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [4U][1U];
            __Vtemp1163[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [4U][2U];
            tracep->chgWData(oldp+702,(__Vtemp1163),86);
            __Vtemp1164[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [5U][0U];
            __Vtemp1164[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [5U][1U];
            __Vtemp1164[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [5U][2U];
            tracep->chgWData(oldp+705,(__Vtemp1164),86);
            __Vtemp1165[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [6U][0U];
            __Vtemp1165[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [6U][1U];
            __Vtemp1165[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [6U][2U];
            tracep->chgWData(oldp+708,(__Vtemp1165),86);
            __Vtemp1166[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [7U][0U];
            __Vtemp1166[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [7U][1U];
            __Vtemp1166[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [7U][2U];
            tracep->chgWData(oldp+711,(__Vtemp1166),86);
            __Vtemp1167[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [8U][0U];
            __Vtemp1167[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [8U][1U];
            __Vtemp1167[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [8U][2U];
            tracep->chgWData(oldp+714,(__Vtemp1167),86);
            __Vtemp1168[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [9U][0U];
            __Vtemp1168[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [9U][1U];
            __Vtemp1168[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [9U][2U];
            tracep->chgWData(oldp+717,(__Vtemp1168),86);
            __Vtemp1169[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xaU][0U];
            __Vtemp1169[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xaU][1U];
            __Vtemp1169[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xaU][2U];
            tracep->chgWData(oldp+720,(__Vtemp1169),86);
            __Vtemp1170[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xbU][0U];
            __Vtemp1170[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xbU][1U];
            __Vtemp1170[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xbU][2U];
            tracep->chgWData(oldp+723,(__Vtemp1170),86);
            __Vtemp1171[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xcU][0U];
            __Vtemp1171[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xcU][1U];
            __Vtemp1171[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xcU][2U];
            tracep->chgWData(oldp+726,(__Vtemp1171),86);
            __Vtemp1172[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xdU][0U];
            __Vtemp1172[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xdU][1U];
            __Vtemp1172[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xdU][2U];
            tracep->chgWData(oldp+729,(__Vtemp1172),86);
            tracep->chgQData(oldp+732,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_p),52);
            tracep->chgBit(oldp+734,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__hfifo_reqready));
            tracep->chgBit(oldp+735,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.tl_d_o[2U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+736,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_i))));
            tracep->chgWData(oldp+737,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i),88);
            tracep->chgBit(oldp+740,((1U & (IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_i 
                                                    >> 0x33U)))));
            tracep->chgBit(oldp+741,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.tl_d_o[0U])));
            tracep->chgQData(oldp+742,((((QData)((IData)(
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
            __Vtemp1173[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xdU][0U];
            __Vtemp1173[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xdU][1U];
            __Vtemp1173[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xdU][2U];
            tracep->chgWData(oldp+744,(__Vtemp1173),86);
            tracep->chgWData(oldp+747,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw),459);
            tracep->chgIData(oldp+762,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_d),32);
            tracep->chgIData(oldp+763,(((~ vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_d) 
                                        & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[1U])),32);
            tracep->chgIData(oldp+764,((vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_d 
                                        & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[2U])),32);
            tracep->chgIData(oldp+765,(((vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0xdU] 
                                         << 0x15U) 
                                        | (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0xcU] 
                                           >> 0xbU))),32);
            tracep->chgIData(oldp+766,(((vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0xcU] 
                                         << 0x15U) 
                                        | (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0xbU] 
                                           >> 0xbU))),32);
            tracep->chgBit(oldp+767,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0xbU] 
                                            >> 0xaU))));
            tracep->chgIData(oldp+768,(((vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0xeU] 
                                         << 0x15U) 
                                        | (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0xdU] 
                                           >> 0xbU))),32);
            tracep->chgBit(oldp+769,((0U != vlTOPp->azadi_soc_top__DOT__GPIO__DOT__intr_hw__DOT__new_event)));
            tracep->chgIData(oldp+770,((vlTOPp->azadi_soc_top__DOT__GPIO__DOT__intr_hw__DOT__new_event 
                                        | ((vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0xeU] 
                                            << 0x15U) 
                                           | (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0xdU] 
                                              >> 0xbU)))),32);
            tracep->chgIData(oldp+771,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__intr_hw__DOT__new_event),32);
            tracep->chgBit(oldp+772,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_we));
            tracep->chgBit(oldp+773,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_re));
            tracep->chgCData(oldp+774,((0x3cU & ((vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                  [6U][2U] 
                                                  << 0x1bU) 
                                                 | (0x7fffffcU 
                                                    & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                       [6U][1U] 
                                                       >> 5U))))),6);
            tracep->chgIData(oldp+775,(((vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                         [6U][1U] << 0x1fU) 
                                        | (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                           [6U][0U] 
                                           >> 1U))),32);
            tracep->chgCData(oldp+776,((0xfU & ((vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                 [6U][2U] 
                                                 << 0x1fU) 
                                                | (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [6U][1U] 
                                                   >> 1U)))),4);
            tracep->chgIData(oldp+777,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next),32);
            tracep->chgBit(oldp+778,(((((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_re) 
                                        | (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__addr_hit))))) 
                                      | (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__wr_err))));
            tracep->chgBit(oldp+779,((((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_re) 
                                       | (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__addr_hit)))))));
            tracep->chgBit(oldp+780,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__wr_err));
            tracep->chgBit(oldp+781,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__intr_state_we));
            tracep->chgBit(oldp+782,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__intr_enable_we));
            tracep->chgBit(oldp+783,(((((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                        >> 2U) & (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                      & (~ (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+784,(((((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                        >> 4U) & (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                      & (~ (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+785,((((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                       >> 4U) & (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_re))));
            tracep->chgSData(oldp+786,((0x3ffU & ((
                                                   vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [6U][1U] 
                                                   << 0x1fU) 
                                                  | (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                     [6U][0U] 
                                                     >> 1U)))),10);
            tracep->chgBit(oldp+787,(((((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                        >> 5U) & (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                      & (~ (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+788,((((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                       >> 5U) & (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_re))));
            tracep->chgSData(oldp+789,((0xfc00U | (0x3ffU 
                                                   & ((vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                       [6U][1U] 
                                                       << 0x15U) 
                                                      | (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                         [6U][0U] 
                                                         >> 0xbU))))),16);
            tracep->chgSData(oldp+790,((0xffffU & (
                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                    [6U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                      [6U][0U] 
                                                      >> 1U)))),16);
            tracep->chgBit(oldp+791,(((((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                        >> 6U) & (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                      & (~ (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+792,((((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                       >> 6U) & (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_re))));
            tracep->chgSData(oldp+793,((0xffffU & (
                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                    [6U][1U] 
                                                    << 0xfU) 
                                                   | (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                      [6U][0U] 
                                                      >> 0x11U)))),16);
            tracep->chgBit(oldp+794,(((((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                        >> 7U) & (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                      & (~ (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+795,((((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                       >> 7U) & (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+796,(((((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                        >> 8U) & (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                      & (~ (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+797,((((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                       >> 8U) & (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+798,(((((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                        >> 9U) & (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_we)) 
                                      & (~ (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__wr_err)))));
            tracep->chgBit(oldp+799,((((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__addr_hit) 
                                       >> 9U) & (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__reg_re))));
            tracep->chgBit(oldp+800,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_rising_we));
            tracep->chgBit(oldp+801,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_falling_we));
            tracep->chgBit(oldp+802,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we));
            tracep->chgBit(oldp+803,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we));
            tracep->chgBit(oldp+804,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__ctrl_en_input_filter_we));
            tracep->chgSData(oldp+805,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__addr_hit),15);
            tracep->chgBit(oldp+806,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__a_ack));
            tracep->chgBit(oldp+807,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
            tracep->chgBit(oldp+808,(((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                                      & (0U != (3U 
                                                & ((vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                    [6U][2U] 
                                                    << 0x1bU) 
                                                   | (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                      [6U][1U] 
                                                      >> 5U)))))));
            tracep->chgBit(oldp+809,((1U & (~ ((((0U 
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
            tracep->chgBit(oldp+810,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
            tracep->chgBit(oldp+811,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
            tracep->chgBit(oldp+812,((((0U == (7U & 
                                               (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
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
            tracep->chgBit(oldp+813,((((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
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
            tracep->chgBit(oldp+814,((0U == (7U & (
                                                   vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [6U][2U] 
                                                   >> 0x12U)))));
            tracep->chgBit(oldp+815,((1U == (7U & (
                                                   vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [6U][2U] 
                                                   >> 0x12U)))));
            tracep->chgBit(oldp+816,((4U == (7U & (
                                                   vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [6U][2U] 
                                                   >> 0x12U)))));
            tracep->chgBit(oldp+817,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+818,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+819,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk));
            tracep->chgCData(oldp+820,((0xfU & ((IData)(1U) 
                                                << 
                                                (3U 
                                                 & ((vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                     [6U][2U] 
                                                     << 0x1bU) 
                                                    | (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                       [6U][1U] 
                                                       >> 5U)))))),4);
            tracep->chgIData(oldp+821,(((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__intr_enable_we)
                                         ? ((vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                             [6U][1U] 
                                             << 0x1fU) 
                                            | (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [6U][0U] 
                                               >> 1U))
                                         : 0U)),32);
            tracep->chgSData(oldp+822,((0x3ffU & ((
                                                   vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                   [6U][1U] 
                                                   << 0x1fU) 
                                                  | (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                     [6U][0U] 
                                                     >> 1U)))),16);
            tracep->chgIData(oldp+823,(((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_rising_we)
                                         ? ((vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                             [6U][1U] 
                                             << 0x1fU) 
                                            | (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [6U][0U] 
                                               >> 1U))
                                         : 0U)),32);
            tracep->chgIData(oldp+824,(((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_falling_we)
                                         ? ((vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                             [6U][1U] 
                                             << 0x1fU) 
                                            | (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [6U][0U] 
                                               >> 1U))
                                         : 0U)),32);
            tracep->chgIData(oldp+825,(((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we)
                                         ? ((vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                             [6U][1U] 
                                             << 0x1fU) 
                                            | (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [6U][0U] 
                                               >> 1U))
                                         : 0U)),32);
            tracep->chgIData(oldp+826,(((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we)
                                         ? ((vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                             [6U][1U] 
                                             << 0x1fU) 
                                            | (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [6U][0U] 
                                               >> 1U))
                                         : 0U)),32);
            tracep->chgIData(oldp+827,(((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__ctrl_en_input_filter_we)
                                         ? ((vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                             [6U][1U] 
                                             << 0x1fU) 
                                            | (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                               [6U][0U] 
                                               >> 1U))
                                         : 0U)),32);
            tracep->chgBit(oldp+828,((1U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])));
            tracep->chgCData(oldp+829,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+830,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+831,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                            >> 1U))));
            tracep->chgCData(oldp+832,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+833,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+834,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                            >> 2U))));
            tracep->chgCData(oldp+835,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+836,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+837,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                            >> 3U))));
            tracep->chgCData(oldp+838,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+839,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+840,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                            >> 4U))));
            tracep->chgCData(oldp+841,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+842,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+843,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                            >> 5U))));
            tracep->chgCData(oldp+844,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+845,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+846,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                            >> 6U))));
            tracep->chgCData(oldp+847,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+848,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+849,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                            >> 7U))));
            tracep->chgCData(oldp+850,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+851,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+852,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                            >> 8U))));
            tracep->chgCData(oldp+853,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+854,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+855,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                            >> 9U))));
            tracep->chgCData(oldp+856,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+857,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+858,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+859,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+860,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+861,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+862,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+863,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+864,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+865,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+866,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+867,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+868,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+869,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+870,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+871,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+872,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+873,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+874,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+875,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+876,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+877,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+878,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+879,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+880,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+881,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+882,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+883,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+884,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+885,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+886,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+887,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+888,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+889,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+890,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+891,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+892,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+893,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+894,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+895,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+896,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+897,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+898,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+899,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+900,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+901,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+902,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+903,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+904,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+905,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+906,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+907,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+908,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+909,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+910,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+911,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+912,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+913,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+914,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+915,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+916,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+917,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+918,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+919,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+920,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgBit(oldp+921,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U] 
                                            >> 0x1fU))));
            tracep->chgCData(oldp+922,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d),4);
            tracep->chgBit(oldp+923,((0xfU == (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d))));
            tracep->chgQData(oldp+924,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_h_o
                                       [0U]),52);
            tracep->chgQData(oldp+926,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_h_o
                                       [1U]),52);
            __Vtemp1203[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                [0U][0U];
            __Vtemp1203[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                [0U][1U];
            __Vtemp1203[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                [0U][2U];
            tracep->chgWData(oldp+928,(__Vtemp1203),86);
            __Vtemp1204[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                [1U][0U];
            __Vtemp1204[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                [1U][1U];
            __Vtemp1204[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hreq_fifo_o
                [1U][2U];
            tracep->chgWData(oldp+931,(__Vtemp1204),86);
            tracep->chgQData(oldp+934,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                       [0U]),52);
            tracep->chgQData(oldp+936,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                       [1U]),52);
            tracep->chgCData(oldp+938,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrequest),2);
            tracep->chgCData(oldp+939,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hgrant),2);
            tracep->chgWData(oldp+940,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i),86);
            tracep->chgBit(oldp+943,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrequest))));
            tracep->chgWData(oldp+944,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgCData(oldp+947,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+948,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__dfifo_rspready))));
            tracep->chgWData(oldp+949,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i),86);
            tracep->chgWData(oldp+952,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i),86);
            tracep->chgBit(oldp+955,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U] 
                                            >> 0x15U))));
            __Vtemp1208[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[0U]);
            __Vtemp1208[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[1U]));
            __Vtemp1208[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+956,(__Vtemp1208),85);
            tracep->chgBit(oldp+959,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__dreq_fifo_i[0U])));
            tracep->chgWData(oldp+960,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+963,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgBit(oldp+966,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgCData(oldp+967,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+968,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+969,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+970,((2U & ((IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                              << 1U))),2);
            tracep->chgCData(oldp+971,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
            tracep->chgQData(oldp+972,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.tl_h_o
                                       [0U]),52);
            tracep->chgQData(oldp+974,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.tl_h_o
                                       [1U]),52);
            tracep->chgWData(oldp+976,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.tl_d_o),86);
            __Vtemp1209[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hreq_fifo_o
                [0U][0U];
            __Vtemp1209[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hreq_fifo_o
                [0U][1U];
            __Vtemp1209[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hreq_fifo_o
                [0U][2U];
            tracep->chgWData(oldp+979,(__Vtemp1209),86);
            __Vtemp1210[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hreq_fifo_o
                [1U][0U];
            __Vtemp1210[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hreq_fifo_o
                [1U][1U];
            __Vtemp1210[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hreq_fifo_o
                [1U][2U];
            tracep->chgWData(oldp+982,(__Vtemp1210),86);
            tracep->chgQData(oldp+985,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                       [0U]),52);
            tracep->chgQData(oldp+987,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                       [1U]),52);
            tracep->chgCData(oldp+989,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrequest),2);
            tracep->chgCData(oldp+990,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hgrant),2);
            tracep->chgWData(oldp+991,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__dreq_fifo_i),86);
            tracep->chgBit(oldp+994,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrequest))));
            tracep->chgWData(oldp+995,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgCData(oldp+998,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+999,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__dfifo_rspready))));
            tracep->chgWData(oldp+1000,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i),86);
            tracep->chgWData(oldp+1003,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i),86);
            tracep->chgBit(oldp+1006,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp1214[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__dreq_fifo_i[0U]);
            __Vtemp1214[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__dreq_fifo_i[1U]));
            __Vtemp1214[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+1007,(__Vtemp1214),85);
            tracep->chgBit(oldp+1010,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__dreq_fifo_i[0U])));
            tracep->chgWData(oldp+1011,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+1014,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgBit(oldp+1017,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgCData(oldp+1018,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+1019,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+1020,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+1021,((2U & ((IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                               << 1U))),2);
            tracep->chgCData(oldp+1022,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
            tracep->chgQData(oldp+1023,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                        [0U]),52);
            tracep->chgQData(oldp+1025,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.tl_h_o
                                        [1U]),52);
            __Vtemp1215[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                [0U][0U];
            __Vtemp1215[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                [0U][1U];
            __Vtemp1215[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                [0U][2U];
            tracep->chgWData(oldp+1027,(__Vtemp1215),86);
            __Vtemp1216[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                [1U][0U];
            __Vtemp1216[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                [1U][1U];
            __Vtemp1216[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hreq_fifo_o
                [1U][2U];
            tracep->chgWData(oldp+1030,(__Vtemp1216),86);
            tracep->chgQData(oldp+1033,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgQData(oldp+1035,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgCData(oldp+1037,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrequest),2);
            tracep->chgCData(oldp+1038,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hgrant),2);
            tracep->chgWData(oldp+1039,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i),86);
            tracep->chgBit(oldp+1042,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrequest))));
            tracep->chgWData(oldp+1043,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgCData(oldp+1046,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+1047,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__dfifo_rspready))));
            tracep->chgWData(oldp+1048,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i),86);
            tracep->chgWData(oldp+1051,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i),86);
            tracep->chgBit(oldp+1054,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp1220[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[0U]);
            __Vtemp1220[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[1U]));
            __Vtemp1220[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+1055,(__Vtemp1220),85);
            tracep->chgBit(oldp+1058,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__dreq_fifo_i[0U])));
            tracep->chgWData(oldp+1059,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+1062,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgBit(oldp+1065,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgCData(oldp+1066,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+1067,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+1068,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+1069,((2U & ((IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                               << 1U))),2);
            tracep->chgCData(oldp+1070,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
            tracep->chgQData(oldp+1071,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.tl_h_o
                                        [0U]),52);
            tracep->chgQData(oldp+1073,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.tl_h_o
                                        [1U]),52);
            __Vtemp1221[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                [0U][0U];
            __Vtemp1221[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                [0U][1U];
            __Vtemp1221[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                [0U][2U];
            tracep->chgWData(oldp+1075,(__Vtemp1221),86);
            __Vtemp1222[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                [1U][0U];
            __Vtemp1222[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                [1U][1U];
            __Vtemp1222[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hreq_fifo_o
                [1U][2U];
            tracep->chgWData(oldp+1078,(__Vtemp1222),86);
            tracep->chgQData(oldp+1081,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgQData(oldp+1083,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgCData(oldp+1085,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrequest),2);
            tracep->chgCData(oldp+1086,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hgrant),2);
            tracep->chgWData(oldp+1087,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i),86);
            tracep->chgBit(oldp+1090,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrequest))));
            tracep->chgWData(oldp+1091,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgCData(oldp+1094,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+1095,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__dfifo_rspready))));
            tracep->chgWData(oldp+1096,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i),86);
            tracep->chgWData(oldp+1099,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i),86);
            tracep->chgBit(oldp+1102,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp1226[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[0U]);
            __Vtemp1226[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[1U]));
            __Vtemp1226[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+1103,(__Vtemp1226),85);
            tracep->chgBit(oldp+1106,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__dreq_fifo_i[0U])));
            tracep->chgWData(oldp+1107,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+1110,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgBit(oldp+1113,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgCData(oldp+1114,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+1115,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+1116,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+1117,((2U & ((IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                               << 1U))),2);
            tracep->chgCData(oldp+1118,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
            tracep->chgQData(oldp+1119,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.tl_h_o
                                        [0U]),52);
            tracep->chgQData(oldp+1121,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.tl_h_o
                                        [1U]),52);
            __Vtemp1227[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                [0U][0U];
            __Vtemp1227[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                [0U][1U];
            __Vtemp1227[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                [0U][2U];
            tracep->chgWData(oldp+1123,(__Vtemp1227),86);
            __Vtemp1228[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                [1U][0U];
            __Vtemp1228[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                [1U][1U];
            __Vtemp1228[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hreq_fifo_o
                [1U][2U];
            tracep->chgWData(oldp+1126,(__Vtemp1228),86);
            tracep->chgQData(oldp+1129,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgQData(oldp+1131,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgCData(oldp+1133,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrequest),2);
            tracep->chgCData(oldp+1134,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hgrant),2);
            tracep->chgWData(oldp+1135,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i),86);
            tracep->chgBit(oldp+1138,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrequest))));
            tracep->chgWData(oldp+1139,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgCData(oldp+1142,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+1143,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__dfifo_rspready))));
            tracep->chgWData(oldp+1144,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i),86);
            tracep->chgWData(oldp+1147,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i),86);
            tracep->chgBit(oldp+1150,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp1232[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[0U]);
            __Vtemp1232[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[1U]));
            __Vtemp1232[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+1151,(__Vtemp1232),85);
            tracep->chgBit(oldp+1154,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__dreq_fifo_i[0U])));
            tracep->chgWData(oldp+1155,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+1158,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgBit(oldp+1161,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgCData(oldp+1162,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+1163,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+1164,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+1165,((2U & ((IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                               << 1U))),2);
            tracep->chgCData(oldp+1166,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
            tracep->chgQData(oldp+1167,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                        [0U]),52);
            tracep->chgQData(oldp+1169,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.tl_h_o
                                        [1U]),52);
            __Vtemp1233[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                [0U][0U];
            __Vtemp1233[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                [0U][1U];
            __Vtemp1233[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                [0U][2U];
            tracep->chgWData(oldp+1171,(__Vtemp1233),86);
            __Vtemp1234[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                [1U][0U];
            __Vtemp1234[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                [1U][1U];
            __Vtemp1234[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hreq_fifo_o
                [1U][2U];
            tracep->chgWData(oldp+1174,(__Vtemp1234),86);
            tracep->chgQData(oldp+1177,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgQData(oldp+1179,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgCData(oldp+1181,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrequest),2);
            tracep->chgCData(oldp+1182,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hgrant),2);
            tracep->chgWData(oldp+1183,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i),86);
            tracep->chgBit(oldp+1186,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrequest))));
            tracep->chgWData(oldp+1187,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgCData(oldp+1190,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+1191,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__dfifo_rspready))));
            tracep->chgWData(oldp+1192,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i),86);
            tracep->chgWData(oldp+1195,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i),86);
            tracep->chgBit(oldp+1198,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp1238[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[0U]);
            __Vtemp1238[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[1U]));
            __Vtemp1238[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+1199,(__Vtemp1238),85);
            tracep->chgBit(oldp+1202,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__dreq_fifo_i[0U])));
            tracep->chgWData(oldp+1203,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+1206,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgBit(oldp+1209,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgCData(oldp+1210,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+1211,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+1212,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+1213,((2U & ((IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                               << 1U))),2);
            tracep->chgCData(oldp+1214,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
            tracep->chgQData(oldp+1215,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                        [0U]),52);
            tracep->chgQData(oldp+1217,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.tl_h_o
                                        [1U]),52);
            __Vtemp1239[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                [0U][0U];
            __Vtemp1239[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                [0U][1U];
            __Vtemp1239[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                [0U][2U];
            tracep->chgWData(oldp+1219,(__Vtemp1239),86);
            __Vtemp1240[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                [1U][0U];
            __Vtemp1240[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                [1U][1U];
            __Vtemp1240[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hreq_fifo_o
                [1U][2U];
            tracep->chgWData(oldp+1222,(__Vtemp1240),86);
            tracep->chgQData(oldp+1225,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgQData(oldp+1227,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgCData(oldp+1229,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrequest),2);
            tracep->chgCData(oldp+1230,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hgrant),2);
            tracep->chgWData(oldp+1231,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i),86);
            tracep->chgBit(oldp+1234,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrequest))));
            tracep->chgWData(oldp+1235,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgCData(oldp+1238,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+1239,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__dfifo_rspready))));
            tracep->chgWData(oldp+1240,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i),86);
            tracep->chgWData(oldp+1243,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i),86);
            tracep->chgBit(oldp+1246,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp1244[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[0U]);
            __Vtemp1244[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[1U]));
            __Vtemp1244[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+1247,(__Vtemp1244),85);
            tracep->chgBit(oldp+1250,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__dreq_fifo_i[0U])));
            tracep->chgWData(oldp+1251,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+1254,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgBit(oldp+1257,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgCData(oldp+1258,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+1259,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+1260,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+1261,((2U & ((IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                               << 1U))),2);
            tracep->chgCData(oldp+1262,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
            tracep->chgQData(oldp+1263,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.tl_h_o
                                        [0U]),52);
            tracep->chgQData(oldp+1265,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.tl_h_o
                                        [1U]),52);
            __Vtemp1245[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                [0U][0U];
            __Vtemp1245[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                [0U][1U];
            __Vtemp1245[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                [0U][2U];
            tracep->chgWData(oldp+1267,(__Vtemp1245),86);
            __Vtemp1246[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                [1U][0U];
            __Vtemp1246[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                [1U][1U];
            __Vtemp1246[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hreq_fifo_o
                [1U][2U];
            tracep->chgWData(oldp+1270,(__Vtemp1246),86);
            tracep->chgQData(oldp+1273,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgQData(oldp+1275,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgCData(oldp+1277,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrequest),2);
            tracep->chgCData(oldp+1278,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hgrant),2);
            tracep->chgWData(oldp+1279,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i),86);
            tracep->chgBit(oldp+1282,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrequest))));
            tracep->chgWData(oldp+1283,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgCData(oldp+1286,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__dfifo_rspready),2);
            tracep->chgBit(oldp+1287,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__dfifo_rspready))));
            tracep->chgWData(oldp+1288,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i),86);
            tracep->chgWData(oldp+1291,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i),86);
            tracep->chgBit(oldp+1294,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            __Vtemp1250[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[0U]);
            __Vtemp1250[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[1U]));
            __Vtemp1250[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+1295,(__Vtemp1250),85);
            tracep->chgBit(oldp+1298,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__dreq_fifo_i[0U])));
            tracep->chgWData(oldp+1299,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+1302,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgBit(oldp+1305,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgCData(oldp+1306,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+1307,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+1308,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+1309,((2U & ((IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                               << 1U))),2);
            tracep->chgCData(oldp+1310,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
            tracep->chgQData(oldp+1311,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.tl_h_o
                                        [0U]),52);
            tracep->chgQData(oldp+1313,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.tl_h_o
                                        [1U]),52);
            __Vtemp1251[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                [0U][0U];
            __Vtemp1251[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                [0U][1U];
            __Vtemp1251[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                [0U][2U];
            tracep->chgWData(oldp+1315,(__Vtemp1251),86);
            __Vtemp1252[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                [1U][0U];
            __Vtemp1252[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                [1U][1U];
            __Vtemp1252[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hreq_fifo_o
                [1U][2U];
            tracep->chgWData(oldp+1318,(__Vtemp1252),86);
            tracep->chgQData(oldp+1321,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgQData(oldp+1323,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgCData(oldp+1325,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrequest),2);
            tracep->chgCData(oldp+1326,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hgrant),2);
            tracep->chgWData(oldp+1327,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i),86);
            tracep->chgQData(oldp+1330,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__drsp_fifo_o),52);
            tracep->chgBit(oldp+1332,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrequest))));
            tracep->chgBit(oldp+1333,((1U & (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__drsp_fifo_o))));
            tracep->chgWData(oldp+1334,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o),86);
            tracep->chgCData(oldp+1337,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hfifo_rspvalid),2);
            tracep->chgCData(oldp+1338,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__dfifo_rspready),2);
            tracep->chgCData(oldp+1339,((0x7fU & (IData)(
                                                         (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__drsp_fifo_o 
                                                          >> 0x24U)))),8);
            tracep->chgBit(oldp+1340,((0U != (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__dfifo_rspready))));
            tracep->chgWData(oldp+1341,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i),86);
            tracep->chgWData(oldp+1344,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i),86);
            tracep->chgBit(oldp+1347,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1348,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_us_d2h))));
            __Vtemp1256[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[0U]);
            __Vtemp1256[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[1U]));
            __Vtemp1256[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[2U]));
            tracep->chgWData(oldp+1349,(__Vtemp1256),85);
            tracep->chgBit(oldp+1352,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_us_d2h 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1353,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__dreq_fifo_i[0U])));
            tracep->chgQData(oldp+1354,((((QData)((IData)(
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
            tracep->chgWData(oldp+1356,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[0]),86);
            tracep->chgWData(oldp+1359,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[1]),86);
            tracep->chgBit(oldp+1362,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o));
            tracep->chgCData(oldp+1363,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req),2);
            tracep->chgCData(oldp+1364,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out),2);
            tracep->chgCData(oldp+1365,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req),2);
            tracep->chgCData(oldp+1366,((2U & ((IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out) 
                                               << 1U))),2);
            tracep->chgCData(oldp+1367,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner),2);
            tracep->chgQData(oldp+1368,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+1370,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+1373,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgBit(oldp+1375,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1376,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [0U]))));
            __Vtemp1260[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1260[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1260[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+1377,(__Vtemp1260),85);
            tracep->chgBit(oldp+1380,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1381,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+1382,((((QData)((IData)(
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
            tracep->chgQData(oldp+1384,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+1386,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+1389,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgBit(oldp+1391,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1392,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                    [1U]))));
            __Vtemp1264[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1264[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1264[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+1393,(__Vtemp1264),85);
            tracep->chgBit(oldp+1396,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1397,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+1398,((((QData)((IData)(
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
            tracep->chgQData(oldp+1400,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+1402,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+1405,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgBit(oldp+1407,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1408,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                                    [0U]))));
            __Vtemp1268[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1268[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1268[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+1409,(__Vtemp1268),85);
            tracep->chgBit(oldp+1412,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1413,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+1414,((((QData)((IData)(
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
            tracep->chgQData(oldp+1416,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+1418,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+1421,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgBit(oldp+1423,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1424,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                                    [1U]))));
            __Vtemp1272[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1272[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1272[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+1425,(__Vtemp1272),85);
            tracep->chgBit(oldp+1428,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1429,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+1430,((((QData)((IData)(
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
            tracep->chgQData(oldp+1432,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+1434,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+1437,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgBit(oldp+1439,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1440,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                    [0U]))));
            __Vtemp1276[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1276[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1276[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+1441,(__Vtemp1276),85);
            tracep->chgBit(oldp+1444,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1445,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+1446,((((QData)((IData)(
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
            tracep->chgQData(oldp+1448,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+1450,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+1453,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgBit(oldp+1455,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1456,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                    [1U]))));
            __Vtemp1280[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1280[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1280[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+1457,(__Vtemp1280),85);
            tracep->chgBit(oldp+1460,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1461,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+1462,((((QData)((IData)(
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
            tracep->chgQData(oldp+1464,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+1466,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+1469,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgBit(oldp+1471,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1472,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                    [0U]))));
            __Vtemp1284[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1284[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1284[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+1473,(__Vtemp1284),85);
            tracep->chgBit(oldp+1476,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1477,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+1478,((((QData)((IData)(
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
            tracep->chgQData(oldp+1480,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+1482,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+1485,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgBit(oldp+1487,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1488,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                    [1U]))));
            __Vtemp1288[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1288[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1288[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+1489,(__Vtemp1288),85);
            tracep->chgBit(oldp+1492,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1493,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+1494,((((QData)((IData)(
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
            tracep->chgQData(oldp+1496,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+1498,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+1501,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgBit(oldp+1503,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1504,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                    [0U]))));
            __Vtemp1292[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1292[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1292[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+1505,(__Vtemp1292),85);
            tracep->chgBit(oldp+1508,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1509,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+1510,((((QData)((IData)(
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
            tracep->chgQData(oldp+1512,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+1514,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+1517,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgBit(oldp+1519,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1520,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                    [1U]))));
            __Vtemp1296[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1296[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1296[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+1521,(__Vtemp1296),85);
            tracep->chgBit(oldp+1524,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1525,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+1526,((((QData)((IData)(
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
            tracep->chgQData(oldp+1528,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+1530,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+1533,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgBit(oldp+1535,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1536,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                    [0U]))));
            __Vtemp1300[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1300[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1300[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+1537,(__Vtemp1300),85);
            tracep->chgBit(oldp+1540,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1541,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+1542,((((QData)((IData)(
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
            tracep->chgQData(oldp+1544,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+1546,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+1549,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgBit(oldp+1551,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1552,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                    [1U]))));
            __Vtemp1304[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1304[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1304[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+1553,(__Vtemp1304),85);
            tracep->chgBit(oldp+1556,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1557,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+1558,((((QData)((IData)(
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
            tracep->chgQData(oldp+1560,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+1562,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+1565,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgBit(oldp+1567,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1568,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                    [0U]))));
            __Vtemp1308[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1308[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1308[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+1569,(__Vtemp1308),85);
            tracep->chgBit(oldp+1572,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1573,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+1574,((((QData)((IData)(
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
            tracep->chgQData(oldp+1576,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+1578,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+1581,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgBit(oldp+1583,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1584,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                    [1U]))));
            __Vtemp1312[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1312[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1312[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+1585,(__Vtemp1312),85);
            tracep->chgBit(oldp+1588,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1589,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+1590,((((QData)((IData)(
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
            tracep->chgQData(oldp+1592,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+1594,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+1597,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgBit(oldp+1599,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1600,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [0U]))));
            __Vtemp1316[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1316[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1316[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+1601,(__Vtemp1316),85);
            tracep->chgBit(oldp+1604,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1605,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+1606,((((QData)((IData)(
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
            tracep->chgQData(oldp+1608,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+1610,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+1613,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgBit(oldp+1615,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1616,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                    [1U]))));
            __Vtemp1320[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1320[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1320[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+1617,(__Vtemp1320),85);
            tracep->chgBit(oldp+1620,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1621,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+1622,((((QData)((IData)(
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
            tracep->chgQData(oldp+1624,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+1626,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+1629,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                        [0U]),52);
            tracep->chgBit(oldp+1631,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1632,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                    [0U]))));
            __Vtemp1324[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1324[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1324[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+1633,(__Vtemp1324),85);
            tracep->chgBit(oldp+1636,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1637,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+1638,((((QData)((IData)(
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
            tracep->chgQData(oldp+1640,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_h_o),52);
            tracep->chgWData(oldp+1642,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo.tl_d_o),86);
            tracep->chgQData(oldp+1645,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                        [1U]),52);
            tracep->chgBit(oldp+1647,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1648,((1U & (IData)(
                                                    vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                    [1U]))));
            __Vtemp1328[0U] = (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U]);
            __Vtemp1328[1U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]) 
                               | (0xfffffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[1U]));
            __Vtemp1328[2U] = ((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]) 
                               | (0x1ffffeU & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[2U]));
            tracep->chgWData(oldp+1649,(__Vtemp1328),85);
            tracep->chgBit(oldp+1652,((1U & (IData)(
                                                    (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__hrsp_fifo_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1653,((1U & vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[0U])));
            tracep->chgQData(oldp+1654,((((QData)((IData)(
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
            tracep->chgQData(oldp+1656,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+1658,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                        [0U]),52);
            tracep->chgBit(oldp+1660,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                    [0U]))));
            tracep->chgBit(oldp+1661,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1662,((((QData)((IData)(
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
            tracep->chgQData(oldp+1664,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+1666,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                        [1U]),52);
            tracep->chgBit(oldp+1668,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                    [1U]))));
            tracep->chgBit(oldp+1669,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1670,((((QData)((IData)(
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
            tracep->chgQData(oldp+1672,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+1674,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                        [2U]),52);
            tracep->chgBit(oldp+1676,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                    [2U]))));
            tracep->chgBit(oldp+1677,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i
                                                     [2U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1678,((((QData)((IData)(
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
            tracep->chgQData(oldp+1680,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+1682,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                        [0U]),52);
            tracep->chgBit(oldp+1684,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [0U]))));
            tracep->chgBit(oldp+1685,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1686,((((QData)((IData)(
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
            tracep->chgQData(oldp+1688,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+1690,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                        [1U]),52);
            tracep->chgBit(oldp+1692,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [1U]))));
            tracep->chgBit(oldp+1693,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1694,((((QData)((IData)(
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
            tracep->chgQData(oldp+1696,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+1698,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                        [2U]),52);
            tracep->chgBit(oldp+1700,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [2U]))));
            tracep->chgBit(oldp+1701,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                     [2U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1702,((((QData)((IData)(
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
            tracep->chgQData(oldp+1704,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+1706,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                        [3U]),52);
            tracep->chgBit(oldp+1708,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [3U]))));
            tracep->chgBit(oldp+1709,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                     [3U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1710,((((QData)((IData)(
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
            tracep->chgQData(oldp+1712,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+1714,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                        [4U]),52);
            tracep->chgBit(oldp+1716,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [4U]))));
            tracep->chgBit(oldp+1717,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                     [4U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1718,((((QData)((IData)(
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
            tracep->chgQData(oldp+1720,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+1722,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                        [5U]),52);
            tracep->chgBit(oldp+1724,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [5U]))));
            tracep->chgBit(oldp+1725,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                     [5U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1726,((((QData)((IData)(
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
            tracep->chgQData(oldp+1728,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+1730,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                        [6U]),52);
            tracep->chgBit(oldp+1732,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [6U]))));
            tracep->chgBit(oldp+1733,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                     [6U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1734,((((QData)((IData)(
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
            tracep->chgQData(oldp+1736,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+1738,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                        [7U]),52);
            tracep->chgBit(oldp+1740,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [7U]))));
            tracep->chgBit(oldp+1741,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                     [7U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1742,((((QData)((IData)(
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
            tracep->chgQData(oldp+1744,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+1746,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                        [8U]),52);
            tracep->chgBit(oldp+1748,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                    [8U]))));
            tracep->chgBit(oldp+1749,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i
                                                     [8U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1750,((((QData)((IData)(
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
            tracep->chgQData(oldp+1752,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+1754,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                        [0U]),52);
            tracep->chgBit(oldp+1756,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [0U]))));
            tracep->chgBit(oldp+1757,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1758,((((QData)((IData)(
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
            tracep->chgQData(oldp+1760,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+1762,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                        [1U]),52);
            tracep->chgBit(oldp+1764,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [1U]))));
            tracep->chgBit(oldp+1765,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1766,((((QData)((IData)(
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
            tracep->chgQData(oldp+1768,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+1770,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                        [2U]),52);
            tracep->chgBit(oldp+1772,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [2U]))));
            tracep->chgBit(oldp+1773,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [2U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1774,((((QData)((IData)(
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
            tracep->chgQData(oldp+1776,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+1778,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                        [3U]),52);
            tracep->chgBit(oldp+1780,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [3U]))));
            tracep->chgBit(oldp+1781,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [3U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1782,((((QData)((IData)(
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
            tracep->chgQData(oldp+1784,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+1786,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                        [4U]),52);
            tracep->chgBit(oldp+1788,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [4U]))));
            tracep->chgBit(oldp+1789,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [4U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1790,((((QData)((IData)(
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
            tracep->chgQData(oldp+1792,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+1794,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                        [5U]),52);
            tracep->chgBit(oldp+1796,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [5U]))));
            tracep->chgBit(oldp+1797,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [5U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1798,((((QData)((IData)(
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
            tracep->chgQData(oldp+1800,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+1802,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                        [6U]),52);
            tracep->chgBit(oldp+1804,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [6U]))));
            tracep->chgBit(oldp+1805,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [6U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1806,((((QData)((IData)(
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
            tracep->chgQData(oldp+1808,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+1810,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                        [7U]),52);
            tracep->chgBit(oldp+1812,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [7U]))));
            tracep->chgBit(oldp+1813,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [7U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1814,((((QData)((IData)(
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
            tracep->chgQData(oldp+1816,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+1818,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                        [8U]),52);
            tracep->chgBit(oldp+1820,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                    [8U]))));
            tracep->chgBit(oldp+1821,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i
                                                     [8U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+1822,((((QData)((IData)(
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
            __Vtemp1329[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0U][0U];
            __Vtemp1329[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0U][1U];
            __Vtemp1329[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0U][2U];
            tracep->chgWData(oldp+1824,(__Vtemp1329),86);
            tracep->chgWData(oldp+1827,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+1830,((1U & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [0U][2U] 
                                             >> 0x15U))));
            __Vtemp1335[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                               [0U][0U]);
            __Vtemp1335[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [0U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [0U][1U]));
            __Vtemp1335[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [0U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [0U][2U]));
            tracep->chgWData(oldp+1831,(__Vtemp1335),85);
            tracep->chgBit(oldp+1834,((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [0U][0U])));
            __Vtemp1337[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [1U][0U];
            __Vtemp1337[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [1U][1U];
            __Vtemp1337[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [1U][2U];
            tracep->chgWData(oldp+1835,(__Vtemp1337),86);
            tracep->chgWData(oldp+1838,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+1841,((1U & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [1U][2U] 
                                             >> 0x15U))));
            __Vtemp1343[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                               [1U][0U]);
            __Vtemp1343[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [1U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [1U][1U]));
            __Vtemp1343[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [1U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [1U][2U]));
            tracep->chgWData(oldp+1842,(__Vtemp1343),85);
            tracep->chgBit(oldp+1845,((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [1U][0U])));
            __Vtemp1345[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [2U][0U];
            __Vtemp1345[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [2U][1U];
            __Vtemp1345[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [2U][2U];
            tracep->chgWData(oldp+1846,(__Vtemp1345),86);
            tracep->chgWData(oldp+1849,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+1852,((1U & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [2U][2U] 
                                             >> 0x15U))));
            __Vtemp1351[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                               [2U][0U]);
            __Vtemp1351[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [2U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [2U][1U]));
            __Vtemp1351[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [2U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [2U][2U]));
            tracep->chgWData(oldp+1853,(__Vtemp1351),85);
            tracep->chgBit(oldp+1856,((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [2U][0U])));
            __Vtemp1353[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [3U][0U];
            __Vtemp1353[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [3U][1U];
            __Vtemp1353[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [3U][2U];
            tracep->chgWData(oldp+1857,(__Vtemp1353),86);
            tracep->chgWData(oldp+1860,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+1863,((1U & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [3U][2U] 
                                             >> 0x15U))));
            __Vtemp1359[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                               [3U][0U]);
            __Vtemp1359[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [3U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [3U][1U]));
            __Vtemp1359[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [3U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [3U][2U]));
            tracep->chgWData(oldp+1864,(__Vtemp1359),85);
            tracep->chgBit(oldp+1867,((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [3U][0U])));
            __Vtemp1361[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [4U][0U];
            __Vtemp1361[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [4U][1U];
            __Vtemp1361[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [4U][2U];
            tracep->chgWData(oldp+1868,(__Vtemp1361),86);
            tracep->chgWData(oldp+1871,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+1874,((1U & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [4U][2U] 
                                             >> 0x15U))));
            __Vtemp1367[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                               [4U][0U]);
            __Vtemp1367[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [4U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [4U][1U]));
            __Vtemp1367[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [4U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [4U][2U]));
            tracep->chgWData(oldp+1875,(__Vtemp1367),85);
            tracep->chgBit(oldp+1878,((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [4U][0U])));
            __Vtemp1369[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [5U][0U];
            __Vtemp1369[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [5U][1U];
            __Vtemp1369[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [5U][2U];
            tracep->chgWData(oldp+1879,(__Vtemp1369),86);
            tracep->chgWData(oldp+1882,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+1885,((1U & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [5U][2U] 
                                             >> 0x15U))));
            __Vtemp1375[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                               [5U][0U]);
            __Vtemp1375[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [5U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [5U][1U]));
            __Vtemp1375[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [5U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [5U][2U]));
            tracep->chgWData(oldp+1886,(__Vtemp1375),85);
            tracep->chgBit(oldp+1889,((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [5U][0U])));
            __Vtemp1377[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [6U][0U];
            __Vtemp1377[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [6U][1U];
            __Vtemp1377[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [6U][2U];
            tracep->chgWData(oldp+1890,(__Vtemp1377),86);
            tracep->chgWData(oldp+1893,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+1896,((1U & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [6U][2U] 
                                             >> 0x15U))));
            __Vtemp1383[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                               [6U][0U]);
            __Vtemp1383[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [6U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [6U][1U]));
            __Vtemp1383[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [6U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [6U][2U]));
            tracep->chgWData(oldp+1897,(__Vtemp1383),85);
            tracep->chgBit(oldp+1900,((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [6U][0U])));
            __Vtemp1385[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [7U][0U];
            __Vtemp1385[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [7U][1U];
            __Vtemp1385[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [7U][2U];
            tracep->chgWData(oldp+1901,(__Vtemp1385),86);
            tracep->chgWData(oldp+1904,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+1907,((1U & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [7U][2U] 
                                             >> 0x15U))));
            __Vtemp1391[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                               [7U][0U]);
            __Vtemp1391[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [7U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [7U][1U]));
            __Vtemp1391[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [7U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [7U][2U]));
            tracep->chgWData(oldp+1908,(__Vtemp1391),85);
            tracep->chgBit(oldp+1911,((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [7U][0U])));
            __Vtemp1393[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [8U][0U];
            __Vtemp1393[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [8U][1U];
            __Vtemp1393[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [8U][2U];
            tracep->chgWData(oldp+1912,(__Vtemp1393),86);
            tracep->chgWData(oldp+1915,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+1918,((1U & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [8U][2U] 
                                             >> 0x15U))));
            __Vtemp1399[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                               [8U][0U]);
            __Vtemp1399[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [8U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [8U][1U]));
            __Vtemp1399[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [8U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [8U][2U]));
            tracep->chgWData(oldp+1919,(__Vtemp1399),85);
            tracep->chgBit(oldp+1922,((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [8U][0U])));
            __Vtemp1401[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [9U][0U];
            __Vtemp1401[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [9U][1U];
            __Vtemp1401[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [9U][2U];
            tracep->chgWData(oldp+1923,(__Vtemp1401),86);
            tracep->chgWData(oldp+1926,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+1929,((1U & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [9U][2U] 
                                             >> 0x15U))));
            __Vtemp1407[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                               [9U][0U]);
            __Vtemp1407[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [9U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [9U][1U]));
            __Vtemp1407[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [9U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [9U][2U]));
            tracep->chgWData(oldp+1930,(__Vtemp1407),85);
            tracep->chgBit(oldp+1933,((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [9U][0U])));
            __Vtemp1409[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xaU][0U];
            __Vtemp1409[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xaU][1U];
            __Vtemp1409[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xaU][2U];
            tracep->chgWData(oldp+1934,(__Vtemp1409),86);
            tracep->chgWData(oldp+1937,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+1940,((1U & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [0xaU][2U] 
                                             >> 0x15U))));
            __Vtemp1415[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                               [0xaU][0U]);
            __Vtemp1415[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [0xaU][1U]) | (0xfffffffeU 
                                               & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [0xaU][1U]));
            __Vtemp1415[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [0xaU][2U]) | (0x1ffffeU 
                                               & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [0xaU][2U]));
            tracep->chgWData(oldp+1941,(__Vtemp1415),85);
            tracep->chgBit(oldp+1944,((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [0xaU][0U])));
            __Vtemp1417[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xbU][0U];
            __Vtemp1417[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xbU][1U];
            __Vtemp1417[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xbU][2U];
            tracep->chgWData(oldp+1945,(__Vtemp1417),86);
            tracep->chgWData(oldp+1948,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+1951,((1U & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [0xbU][2U] 
                                             >> 0x15U))));
            __Vtemp1423[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                               [0xbU][0U]);
            __Vtemp1423[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [0xbU][1U]) | (0xfffffffeU 
                                               & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [0xbU][1U]));
            __Vtemp1423[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [0xbU][2U]) | (0x1ffffeU 
                                               & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [0xbU][2U]));
            tracep->chgWData(oldp+1952,(__Vtemp1423),85);
            tracep->chgBit(oldp+1955,((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [0xbU][0U])));
            __Vtemp1425[0U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xcU][0U];
            __Vtemp1425[1U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xcU][1U];
            __Vtemp1425[2U] = vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                [0xcU][2U];
            tracep->chgWData(oldp+1956,(__Vtemp1425),86);
            tracep->chgWData(oldp+1959,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+1962,((1U & (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                             [0xcU][2U] 
                                             >> 0x15U))));
            __Vtemp1431[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                               [0xcU][0U]);
            __Vtemp1431[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [0xcU][1U]) | (0xfffffffeU 
                                               & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [0xcU][1U]));
            __Vtemp1431[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                [0xcU][2U]) | (0x1ffffeU 
                                               & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                               [0xcU][2U]));
            tracep->chgWData(oldp+1963,(__Vtemp1431),85);
            tracep->chgBit(oldp+1966,((1U & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o
                                       [0xcU][0U])));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [2U]))) {
            tracep->chgQData(oldp+1967,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                        [0U]),52);
            tracep->chgQData(oldp+1969,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                        [1U]),52);
            tracep->chgQData(oldp+1971,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                        [2U]),52);
            tracep->chgQData(oldp+1973,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                        [3U]),52);
            tracep->chgQData(oldp+1975,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                        [4U]),52);
            tracep->chgQData(oldp+1977,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                        [5U]),52);
            tracep->chgQData(oldp+1979,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                        [6U]),52);
            tracep->chgQData(oldp+1981,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                        [7U]),52);
            tracep->chgQData(oldp+1983,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                        [8U]),52);
            tracep->chgQData(oldp+1985,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_i
                                        [9U]),52);
            tracep->chgQData(oldp+1987,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                        [0U]),52);
            tracep->chgQData(oldp+1989,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                        [1U]),52);
            tracep->chgQData(oldp+1991,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                        [2U]),52);
            tracep->chgQData(oldp+1993,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                        [3U]),52);
            tracep->chgQData(oldp+1995,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                        [4U]),52);
            tracep->chgQData(oldp+1997,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                        [5U]),52);
            tracep->chgQData(oldp+1999,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                        [6U]),52);
            tracep->chgQData(oldp+2001,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                        [7U]),52);
            tracep->chgQData(oldp+2003,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                        [8U]),52);
            tracep->chgQData(oldp+2005,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                        [9U]),52);
            tracep->chgQData(oldp+2007,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                        [0xaU]),52);
            tracep->chgQData(oldp+2009,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                        [0xbU]),52);
            tracep->chgQData(oldp+2011,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                        [0xcU]),52);
            tracep->chgQData(oldp+2013,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i
                                        [0xdU]),52);
            tracep->chgQData(oldp+2015,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o),52);
            tracep->chgWData(oldp+2017,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg),246);
            tracep->chgIData(oldp+2025,(((vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[5U] 
                                          << 0xcU) 
                                         | (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[4U] 
                                            >> 0x14U))),32);
            tracep->chgSData(oldp+2026,((0x3ffU & (
                                                   (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[5U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[4U] 
                                                      >> 0xaU)))),10);
            tracep->chgSData(oldp+2027,((0xffffU & 
                                         ((vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[4U] 
                                           << 0x10U) 
                                          | (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[3U] 
                                             >> 0x10U)))),16);
            tracep->chgIData(oldp+2028,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[2U]),32);
            tracep->chgSData(oldp+2029,((0xffffU & 
                                         ((vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[2U] 
                                           << 0x10U) 
                                          | (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[1U] 
                                             >> 0x10U)))),16);
            tracep->chgSData(oldp+2030,((0xffffU & 
                                         vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[1U])),16);
            tracep->chgSData(oldp+2031,((0xffffU & 
                                         ((vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[1U] 
                                           << 0x10U) 
                                          | (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[0U] 
                                             >> 0x10U)))),16);
            tracep->chgSData(oldp+2032,((0xffffU & 
                                         vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[0U])),16);
            tracep->chgBit(oldp+2033,((1U & ((IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h 
                                                      >> 0x33U)) 
                                             & vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                             [6U][0U]))));
            tracep->chgBit(oldp+2034,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[6U] 
                                             >> 0x15U))));
            tracep->chgIData(oldp+2035,(((vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[7U] 
                                          << 0xaU) 
                                         | (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[6U] 
                                            >> 0x16U))),32);
            tracep->chgBit(oldp+2036,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__intr_state_we) 
                                             | (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[6U] 
                                                >> 0x15U)))));
            tracep->chgIData(oldp+2037,((((0x200000U 
                                           & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[6U])
                                           ? ((vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[7U] 
                                               << 0xaU) 
                                              | (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[6U] 
                                                 >> 0x16U))
                                           : vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_state__q) 
                                         & ((IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__intr_state_we)
                                             ? (~ (
                                                   (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                    [6U][1U] 
                                                    << 0x1fU) 
                                                   | (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d
                                                      [6U][0U] 
                                                      >> 1U)))
                                             : 0xffffffffU))),32);
            tracep->chgBit(oldp+2038,((1U & (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[5U] 
                                             >> 0x14U))));
            tracep->chgIData(oldp+2039,(((vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[6U] 
                                          << 0xbU) 
                                         | (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[5U] 
                                            >> 0x15U))),32);
            tracep->chgSData(oldp+2040,((0x3ffU & (
                                                   (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[5U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[4U] 
                                                      >> 0xaU)))),16);
            tracep->chgSData(oldp+2041,((0x3ffU & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[4U])),16);
            tracep->chgSData(oldp+2042,((0xffffU & 
                                         vlTOPp->azadi_soc_top__DOT__GPIO__DOT__hw2reg[3U])),16);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [5U]))) {
            tracep->chgBit(oldp+2043,(((((0U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                                         & (IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_brqlsu 
                                                    >> 0x33U))) 
                                        & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_or_pmp_err))) 
                                       & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q)))));
            tracep->chgBit(oldp+2044,((1U & (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                              >> 1U) 
                                             | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_valid))))));
            tracep->chgIData(oldp+2045,(((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
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
            tracep->chgIData(oldp+2046,(((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
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
            tracep->chgIData(oldp+2047,(((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
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
            tracep->chgBit(oldp+2048,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                             & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q))))));
            tracep->chgBit(oldp+2049,((1U & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 2U) 
                                             & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2050,((1U & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 3U) 
                                             & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 3U))))));
            tracep->chgBit(oldp+2051,((1U & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 4U) 
                                             & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 4U))))));
            tracep->chgBit(oldp+2052,((1U & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 5U) 
                                             & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 5U))))));
            tracep->chgBit(oldp+2053,((1U & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 6U) 
                                             & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 6U))))));
            tracep->chgBit(oldp+2054,((1U & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 7U) 
                                             & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 7U))))));
            tracep->chgBit(oldp+2055,((1U & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 8U) 
                                             & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 8U))))));
            tracep->chgBit(oldp+2056,((1U & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 9U) 
                                             & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 9U))))));
            tracep->chgBit(oldp+2057,((1U & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 0xaU) 
                                             & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 0xaU))))));
            tracep->chgBit(oldp+2058,((1U & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 0xbU) 
                                             & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+2059,((1U & ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 0xcU) 
                                             & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 0xcU))))));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [6U]))) {
            tracep->chgBit(oldp+2060,((1U & ((vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_d_o[2U] 
                                              >> 0x15U) 
                                             & (IData)(vlTOPp->azadi_soc_top__DOT__dccm_to_xbar)))));
            tracep->chgBit(oldp+2061,((((1U == (3U 
                                                & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                   >> 0xbU))) 
                                        & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                              >> 0xaU))) 
                                       & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack))));
            tracep->chgBit(oldp+2062,(((~ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                       & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack))));
            tracep->chgBit(oldp+2063,(((~ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                       & (((1U == (3U 
                                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                      >> 0xbU))) 
                                           & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                 >> 0xaU))) 
                                          & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__d_ack)))));
            tracep->chgBit(oldp+2064,((((1U == (3U 
                                                & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                   >> 0xbU))) 
                                        & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                              >> 0xaU))) 
                                       & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack))));
            tracep->chgBit(oldp+2065,((1U & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
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
            tracep->chgBit(oldp+2066,(((~ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                       & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack))));
            tracep->chgBit(oldp+2067,(((~ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)) 
                                       & (((1U == (3U 
                                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                      >> 0xbU))) 
                                           & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o) 
                                                 >> 0xaU))) 
                                          & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_ack)))));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [8U]))) {
            tracep->chgBit(oldp+2068,((1U & ((~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_id) 
                                                 | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id))) 
                                             | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)))));
            tracep->chgBit(oldp+2069,((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_we_raw) 
                                        & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing)) 
                                       & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__illegal_csr_insn_id)))));
            tracep->chgBit(oldp+2070,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_in_ready) 
                                       & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q)))));
            tracep->chgBit(oldp+2071,((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing) 
                                        & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec)) 
                                       & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__lsu_resp_valid)))));
            tracep->chgBit(oldp+2072,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv) 
                                       & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec))));
            tracep->chgBit(oldp+2073,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv) 
                                       & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec))));
            tracep->chgBit(oldp+2074,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                       & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) 
                                          | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__illegal_csr_insn_id)))));
            tracep->chgBit(oldp+2075,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                       & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec) 
                                          & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__lsu_resp_valid)) 
                                             | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_first_cycle))))));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [9U]))) {
            tracep->chgBit(oldp+2076,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req) 
                                       & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__gnt_or_pmp_err)))));
            tracep->chgCData(oldp+2077,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rvalid_or_pmp_err)
                                          ? (1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_n) 
                                                   >> 1U))
                                          : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_n))),2);
            tracep->chgBit(oldp+2078,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set) 
                                       | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_in_ready) 
                                          & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_raw)))));
            tracep->chgIData(oldp+2079,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0]),32);
            tracep->chgIData(oldp+2080,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1]),32);
            tracep->chgBit(oldp+2081,(((3U == (3U & 
                                               ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                                >> 0xaU))) 
                                       & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wreq))));
            tracep->chgWData(oldp+2082,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__tl_flash_ctrl_o),86);
            tracep->chgQData(oldp+2085,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_i
                                        [0U]),52);
            tracep->chgQData(oldp+2087,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_i
                                        [1U]),52);
            tracep->chgQData(oldp+2089,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_i
                                        [2U]),52);
            tracep->chgQData(oldp+2091,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_i
                                        [3U]),52);
            tracep->chgQData(oldp+2093,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                        [0U]),52);
            tracep->chgQData(oldp+2095,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                        [1U]),52);
            tracep->chgQData(oldp+2097,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                        [2U]),52);
            tracep->chgQData(oldp+2099,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                        [3U]),52);
            tracep->chgQData(oldp+2101,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                        [4U]),52);
            tracep->chgQData(oldp+2103,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                        [5U]),52);
            tracep->chgQData(oldp+2105,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                        [6U]),52);
            tracep->chgQData(oldp+2107,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                        [7U]),52);
            tracep->chgQData(oldp+2109,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                        [8U]),52);
            tracep->chgQData(oldp+2111,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_i
                                        [9U]),52);
            tracep->chgBit(oldp+2113,((1U & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                                              [0U][2U] 
                                              >> 0x15U) 
                                             & (IData)(vlTOPp->azadi_soc_top__DOT__iccm_to_xbar)))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+2114,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h),52);
            tracep->chgIData(oldp+2116,(vlTOPp->azadi_soc_top__DOT__gpio_intr),32);
            tracep->chgBit(oldp+2117,((0U != vlTOPp->azadi_soc_top__DOT__gpio_intr)));
            tracep->chgBit(oldp+2118,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q));
            tracep->chgBit(oldp+2119,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q));
            tracep->chgIData(oldp+2120,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mip),18);
            tracep->chgWData(oldp+2121,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg),1024);
            tracep->chgWData(oldp+2153,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q),992);
            __Vtemp1436[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [0U][0U];
            __Vtemp1436[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [0U][1U];
            __Vtemp1436[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [0U][2U];
            tracep->chgWData(oldp+2184,(__Vtemp1436),86);
            __Vtemp1437[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [1U][0U];
            __Vtemp1437[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [1U][1U];
            __Vtemp1437[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [1U][2U];
            tracep->chgWData(oldp+2187,(__Vtemp1437),86);
            __Vtemp1438[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [2U][0U];
            __Vtemp1438[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [2U][1U];
            __Vtemp1438[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [2U][2U];
            tracep->chgWData(oldp+2190,(__Vtemp1438),86);
            __Vtemp1439[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [3U][0U];
            __Vtemp1439[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [3U][1U];
            __Vtemp1439[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [3U][2U];
            tracep->chgWData(oldp+2193,(__Vtemp1439),86);
            __Vtemp1440[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [4U][0U];
            __Vtemp1440[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [4U][1U];
            __Vtemp1440[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [4U][2U];
            tracep->chgWData(oldp+2196,(__Vtemp1440),86);
            __Vtemp1441[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [5U][0U];
            __Vtemp1441[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [5U][1U];
            __Vtemp1441[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [5U][2U];
            tracep->chgWData(oldp+2199,(__Vtemp1441),86);
            __Vtemp1442[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [6U][0U];
            __Vtemp1442[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [6U][1U];
            __Vtemp1442[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [6U][2U];
            tracep->chgWData(oldp+2202,(__Vtemp1442),86);
            __Vtemp1443[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [7U][0U];
            __Vtemp1443[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [7U][1U];
            __Vtemp1443[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [7U][2U];
            tracep->chgWData(oldp+2205,(__Vtemp1443),86);
            __Vtemp1444[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [8U][0U];
            __Vtemp1444[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [8U][1U];
            __Vtemp1444[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h3_s1n_sm1
                [8U][2U];
            tracep->chgWData(oldp+2208,(__Vtemp1444),86);
            tracep->chgIData(oldp+2211,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__num_req_outstanding),17);
            tracep->chgCData(oldp+2212,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__dev_select_outstanding),2);
            tracep->chgCData(oldp+2213,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_opcode),3);
            tracep->chgCData(oldp+2214,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_source),8);
            tracep->chgCData(oldp+2215,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_size),2);
            tracep->chgBit(oldp+2216,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_req_pending));
            tracep->chgBit(oldp+2217,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_rsp_pending));
            tracep->chgIData(oldp+2218,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__num_req_outstanding),17);
            tracep->chgCData(oldp+2219,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__dev_select_outstanding),4);
            tracep->chgCData(oldp+2220,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_opcode),3);
            tracep->chgCData(oldp+2221,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_source),8);
            tracep->chgCData(oldp+2222,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_size),2);
            tracep->chgBit(oldp+2223,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_req_pending));
            tracep->chgBit(oldp+2224,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_rsp_pending));
            __Vtemp1445[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [0U][0U];
            __Vtemp1445[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [0U][1U];
            __Vtemp1445[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [0U][2U];
            tracep->chgWData(oldp+2225,(__Vtemp1445),86);
            __Vtemp1446[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [1U][0U];
            __Vtemp1446[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [1U][1U];
            __Vtemp1446[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [1U][2U];
            tracep->chgWData(oldp+2228,(__Vtemp1446),86);
            __Vtemp1447[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [2U][0U];
            __Vtemp1447[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [2U][1U];
            __Vtemp1447[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [2U][2U];
            tracep->chgWData(oldp+2231,(__Vtemp1447),86);
            __Vtemp1448[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [3U][0U];
            __Vtemp1448[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [3U][1U];
            __Vtemp1448[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [3U][2U];
            tracep->chgWData(oldp+2234,(__Vtemp1448),86);
            __Vtemp1449[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [4U][0U];
            __Vtemp1449[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [4U][1U];
            __Vtemp1449[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [4U][2U];
            tracep->chgWData(oldp+2237,(__Vtemp1449),86);
            __Vtemp1450[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [5U][0U];
            __Vtemp1450[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [5U][1U];
            __Vtemp1450[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [5U][2U];
            tracep->chgWData(oldp+2240,(__Vtemp1450),86);
            __Vtemp1451[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [6U][0U];
            __Vtemp1451[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [6U][1U];
            __Vtemp1451[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [6U][2U];
            tracep->chgWData(oldp+2243,(__Vtemp1451),86);
            __Vtemp1452[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [7U][0U];
            __Vtemp1452[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [7U][1U];
            __Vtemp1452[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [7U][2U];
            tracep->chgWData(oldp+2246,(__Vtemp1452),86);
            __Vtemp1453[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [8U][0U];
            __Vtemp1453[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [8U][1U];
            __Vtemp1453[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o
                [8U][2U];
            tracep->chgWData(oldp+2249,(__Vtemp1453),86);
            tracep->chgIData(oldp+2252,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__num_req_outstanding),17);
            tracep->chgCData(oldp+2253,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__dev_select_outstanding),4);
            tracep->chgBit(oldp+2254,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__hold_all_requests));
            __Vtemp1454[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [0U][0U];
            __Vtemp1454[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [0U][1U];
            __Vtemp1454[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [0U][2U];
            tracep->chgWData(oldp+2255,(__Vtemp1454),86);
            __Vtemp1455[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [1U][0U];
            __Vtemp1455[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [1U][1U];
            __Vtemp1455[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [1U][2U];
            tracep->chgWData(oldp+2258,(__Vtemp1455),86);
            __Vtemp1456[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [2U][0U];
            __Vtemp1456[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [2U][1U];
            __Vtemp1456[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [2U][2U];
            tracep->chgWData(oldp+2261,(__Vtemp1456),86);
            __Vtemp1457[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [3U][0U];
            __Vtemp1457[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [3U][1U];
            __Vtemp1457[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [3U][2U];
            tracep->chgWData(oldp+2264,(__Vtemp1457),86);
            __Vtemp1458[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [4U][0U];
            __Vtemp1458[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [4U][1U];
            __Vtemp1458[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [4U][2U];
            tracep->chgWData(oldp+2267,(__Vtemp1458),86);
            __Vtemp1459[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [5U][0U];
            __Vtemp1459[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [5U][1U];
            __Vtemp1459[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [5U][2U];
            tracep->chgWData(oldp+2270,(__Vtemp1459),86);
            __Vtemp1460[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [6U][0U];
            __Vtemp1460[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [6U][1U];
            __Vtemp1460[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [6U][2U];
            tracep->chgWData(oldp+2273,(__Vtemp1460),86);
            __Vtemp1461[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [7U][0U];
            __Vtemp1461[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [7U][1U];
            __Vtemp1461[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [7U][2U];
            tracep->chgWData(oldp+2276,(__Vtemp1461),86);
            __Vtemp1462[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [8U][0U];
            __Vtemp1462[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [8U][1U];
            __Vtemp1462[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [8U][2U];
            tracep->chgWData(oldp+2279,(__Vtemp1462),86);
            __Vtemp1463[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [9U][0U];
            __Vtemp1463[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [9U][1U];
            __Vtemp1463[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [9U][2U];
            tracep->chgWData(oldp+2282,(__Vtemp1463),86);
            __Vtemp1464[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [9U][0U];
            __Vtemp1464[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [9U][1U];
            __Vtemp1464[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [9U][2U];
            tracep->chgWData(oldp+2285,(__Vtemp1464),86);
            tracep->chgQData(oldp+2288,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o),52);
            tracep->chgCData(oldp+2290,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_opcode),3);
            tracep->chgCData(oldp+2291,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_source),8);
            tracep->chgCData(oldp+2292,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_size),2);
            tracep->chgBit(oldp+2293,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_req_pending));
            tracep->chgBit(oldp+2294,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_rsp_pending));
            tracep->chgCData(oldp+2295,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
            tracep->chgBit(oldp+2296,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                             >> 2U))));
            tracep->chgCData(oldp+2297,((3U & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
            tracep->chgCData(oldp+2298,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
            tracep->chgBit(oldp+2299,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                             >> 2U))));
            tracep->chgCData(oldp+2300,((3U & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
            tracep->chgCData(oldp+2301,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),3);
            tracep->chgBit(oldp+2302,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                             >> 2U))));
            tracep->chgCData(oldp+2303,((3U & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),2);
            tracep->chgCData(oldp+2304,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
            tracep->chgBit(oldp+2305,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+2306,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            tracep->chgCData(oldp+2307,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
            tracep->chgBit(oldp+2308,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+2309,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            tracep->chgCData(oldp+2310,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),2);
            tracep->chgBit(oldp+2311,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+2312,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            tracep->chgQData(oldp+2313,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                        [0U]),52);
            tracep->chgQData(oldp+2315,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                        [1U]),52);
            tracep->chgQData(oldp+2317,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                        [2U]),52);
            tracep->chgQData(oldp+2319,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                        [3U]),52);
            tracep->chgQData(oldp+2321,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                        [4U]),52);
            tracep->chgQData(oldp+2323,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                        [5U]),52);
            tracep->chgQData(oldp+2325,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                        [6U]),52);
            tracep->chgQData(oldp+2327,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                        [7U]),52);
            tracep->chgQData(oldp+2329,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                        [8U]),52);
            tracep->chgQData(oldp+2331,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                        [9U]),52);
            tracep->chgQData(oldp+2333,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                        [0xaU]),52);
            tracep->chgQData(oldp+2335,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                        [0xbU]),52);
            tracep->chgQData(oldp+2337,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h
                                        [0xcU]),52);
            tracep->chgQData(oldp+2339,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                        [0U]),52);
            tracep->chgQData(oldp+2341,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                        [1U]),52);
            tracep->chgQData(oldp+2343,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                        [2U]),52);
            tracep->chgQData(oldp+2345,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                        [3U]),52);
            tracep->chgQData(oldp+2347,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                        [4U]),52);
            tracep->chgQData(oldp+2349,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                        [5U]),52);
            tracep->chgQData(oldp+2351,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                        [6U]),52);
            tracep->chgQData(oldp+2353,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                        [7U]),52);
            tracep->chgQData(oldp+2355,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                        [8U]),52);
            tracep->chgQData(oldp+2357,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                        [9U]),52);
            tracep->chgQData(oldp+2359,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                        [0xaU]),52);
            tracep->chgQData(oldp+2361,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                        [0xbU]),52);
            tracep->chgQData(oldp+2363,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                        [0xcU]),52);
            tracep->chgIData(oldp+2365,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__num_req_outstanding),17);
            tracep->chgCData(oldp+2366,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__dev_select_outstanding),4);
            tracep->chgCData(oldp+2367,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_opcode),3);
            tracep->chgCData(oldp+2368,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_source),8);
            tracep->chgCData(oldp+2369,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_size),2);
            tracep->chgBit(oldp+2370,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_req_pending));
            tracep->chgBit(oldp+2371,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_rsp_pending));
            tracep->chgIData(oldp+2372,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__cio_gpio_q),32);
            tracep->chgIData(oldp+2373,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__cio_gpio_en_q),32);
            tracep->chgIData(oldp+2374,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_state__q),32);
            tracep->chgIData(oldp+2375,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_enable__q),32);
            tracep->chgIData(oldp+2376,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_data_in__DOT__q),32);
            tracep->chgIData(oldp+2377,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q),32);
            tracep->chgIData(oldp+2378,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q),32);
            tracep->chgIData(oldp+2379,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q),32);
            tracep->chgIData(oldp+2380,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q),32);
            tracep->chgIData(oldp+2381,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q),32);
            tracep->chgBit(oldp+2382,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__outstanding));
            tracep->chgIData(oldp+2383,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rdata),32);
            tracep->chgBit(oldp+2384,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__error));
            tracep->chgCData(oldp+2385,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__reqid),8);
            tracep->chgCData(oldp+2386,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__reqsz),2);
            tracep->chgCData(oldp+2387,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rspop),3);
            tracep->chgBit(oldp+2388,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_intr_state__DOT__qe));
            tracep->chgBit(oldp+2389,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_intr_enable__DOT__qe));
            tracep->chgBit(oldp+2390,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_data_in__DOT__qe));
            tracep->chgBit(oldp+2391,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_intr_ctrl_en_rising__DOT__qe));
            tracep->chgBit(oldp+2392,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_intr_ctrl_en_falling__DOT__qe));
            tracep->chgBit(oldp+2393,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_intr_ctrl_en_lvlhigh__DOT__qe));
            tracep->chgBit(oldp+2394,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_intr_ctrl_en_lvllow__DOT__qe));
            tracep->chgBit(oldp+2395,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__qe));
            tracep->chgCData(oldp+2396,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2397,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2398,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2399,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2400,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2401,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2402,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2403,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2404,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2405,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2406,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2407,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2408,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2409,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2410,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2411,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2412,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2413,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2414,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2415,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2416,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2417,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2418,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2419,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2420,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2421,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2422,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2423,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2424,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2425,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2426,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2427,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2428,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2429,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2430,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2431,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2432,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2433,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2434,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2435,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2436,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2437,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2438,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2439,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2440,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2441,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2442,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2443,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2444,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2445,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2446,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2447,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2448,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2449,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2450,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2451,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2452,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2453,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2454,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2455,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2456,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2457,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2458,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2459,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2460,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2461,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2462,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2463,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2464,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2465,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2466,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2467,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2468,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2469,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2470,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2471,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2472,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2473,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2474,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2475,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2476,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2477,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2478,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2479,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2480,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2481,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2482,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2483,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2484,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2485,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2486,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2487,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2488,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2489,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_q),4);
            tracep->chgBit(oldp+2490,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__filter_q));
            tracep->chgBit(oldp+2491,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q));
            tracep->chgCData(oldp+2492,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
            tracep->chgCData(oldp+2493,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
            tracep->chgCData(oldp+2494,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
            tracep->chgCData(oldp+2495,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
            tracep->chgCData(oldp+2496,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
            tracep->chgCData(oldp+2497,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
            tracep->chgCData(oldp+2498,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
            tracep->chgCData(oldp+2499,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
            tracep->chgCData(oldp+2500,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.__PVT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask),2);
            __Vtemp1465[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [0U][0U];
            __Vtemp1465[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [0U][1U];
            __Vtemp1465[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [0U][2U];
            tracep->chgWData(oldp+2501,(__Vtemp1465),86);
            tracep->chgWData(oldp+2504,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+2507,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [0U][2U] 
                                             >> 0x15U))));
            __Vtemp1471[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                               [0U][0U]);
            __Vtemp1471[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [0U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [0U][1U]));
            __Vtemp1471[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [0U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [0U][2U]));
            tracep->chgWData(oldp+2508,(__Vtemp1471),85);
            tracep->chgBit(oldp+2511,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [0U][0U])));
            __Vtemp1473[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [1U][0U];
            __Vtemp1473[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [1U][1U];
            __Vtemp1473[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [1U][2U];
            tracep->chgWData(oldp+2512,(__Vtemp1473),86);
            tracep->chgWData(oldp+2515,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+2518,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [1U][2U] 
                                             >> 0x15U))));
            __Vtemp1479[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                               [1U][0U]);
            __Vtemp1479[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [1U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [1U][1U]));
            __Vtemp1479[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [1U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [1U][2U]));
            tracep->chgWData(oldp+2519,(__Vtemp1479),85);
            tracep->chgBit(oldp+2522,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [1U][0U])));
            __Vtemp1481[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [2U][0U];
            __Vtemp1481[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [2U][1U];
            __Vtemp1481[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [2U][2U];
            tracep->chgWData(oldp+2523,(__Vtemp1481),86);
            tracep->chgWData(oldp+2526,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+2529,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [2U][2U] 
                                             >> 0x15U))));
            __Vtemp1487[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                               [2U][0U]);
            __Vtemp1487[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [2U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [2U][1U]));
            __Vtemp1487[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [2U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [2U][2U]));
            tracep->chgWData(oldp+2530,(__Vtemp1487),85);
            tracep->chgBit(oldp+2533,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [2U][0U])));
            __Vtemp1489[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [3U][0U];
            __Vtemp1489[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [3U][1U];
            __Vtemp1489[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [3U][2U];
            tracep->chgWData(oldp+2534,(__Vtemp1489),86);
            tracep->chgWData(oldp+2537,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+2540,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [3U][2U] 
                                             >> 0x15U))));
            __Vtemp1495[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                               [3U][0U]);
            __Vtemp1495[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [3U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [3U][1U]));
            __Vtemp1495[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [3U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [3U][2U]));
            tracep->chgWData(oldp+2541,(__Vtemp1495),85);
            tracep->chgBit(oldp+2544,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [3U][0U])));
            __Vtemp1497[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [4U][0U];
            __Vtemp1497[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [4U][1U];
            __Vtemp1497[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [4U][2U];
            tracep->chgWData(oldp+2545,(__Vtemp1497),86);
            tracep->chgWData(oldp+2548,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+2551,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [4U][2U] 
                                             >> 0x15U))));
            __Vtemp1503[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                               [4U][0U]);
            __Vtemp1503[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [4U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [4U][1U]));
            __Vtemp1503[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [4U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [4U][2U]));
            tracep->chgWData(oldp+2552,(__Vtemp1503),85);
            tracep->chgBit(oldp+2555,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [4U][0U])));
            __Vtemp1505[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [5U][0U];
            __Vtemp1505[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [5U][1U];
            __Vtemp1505[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [5U][2U];
            tracep->chgWData(oldp+2556,(__Vtemp1505),86);
            tracep->chgWData(oldp+2559,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+2562,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [5U][2U] 
                                             >> 0x15U))));
            __Vtemp1511[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                               [5U][0U]);
            __Vtemp1511[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [5U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [5U][1U]));
            __Vtemp1511[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [5U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [5U][2U]));
            tracep->chgWData(oldp+2563,(__Vtemp1511),85);
            tracep->chgBit(oldp+2566,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [5U][0U])));
            __Vtemp1513[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [6U][0U];
            __Vtemp1513[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [6U][1U];
            __Vtemp1513[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [6U][2U];
            tracep->chgWData(oldp+2567,(__Vtemp1513),86);
            tracep->chgWData(oldp+2570,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+2573,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [6U][2U] 
                                             >> 0x15U))));
            __Vtemp1519[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                               [6U][0U]);
            __Vtemp1519[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [6U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [6U][1U]));
            __Vtemp1519[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [6U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [6U][2U]));
            tracep->chgWData(oldp+2574,(__Vtemp1519),85);
            tracep->chgBit(oldp+2577,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [6U][0U])));
            __Vtemp1521[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [7U][0U];
            __Vtemp1521[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [7U][1U];
            __Vtemp1521[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [7U][2U];
            tracep->chgWData(oldp+2578,(__Vtemp1521),86);
            tracep->chgWData(oldp+2581,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+2584,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [7U][2U] 
                                             >> 0x15U))));
            __Vtemp1527[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                               [7U][0U]);
            __Vtemp1527[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [7U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [7U][1U]));
            __Vtemp1527[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [7U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [7U][2U]));
            tracep->chgWData(oldp+2585,(__Vtemp1527),85);
            tracep->chgBit(oldp+2588,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [7U][0U])));
            __Vtemp1529[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [8U][0U];
            __Vtemp1529[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [8U][1U];
            __Vtemp1529[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                [8U][2U];
            tracep->chgWData(oldp+2589,(__Vtemp1529),86);
            tracep->chgWData(oldp+2592,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+2595,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [8U][2U] 
                                             >> 0x15U))));
            __Vtemp1535[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                               [8U][0U]);
            __Vtemp1535[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [8U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [8U][1U]));
            __Vtemp1535[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                [8U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                             [8U][2U]));
            tracep->chgWData(oldp+2596,(__Vtemp1535),85);
            tracep->chgBit(oldp+2599,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_3__DOT__tl_u_o
                                       [8U][0U])));
            tracep->chgQData(oldp+2600,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+2602,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                        [0U]),52);
            tracep->chgBit(oldp+2604,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0U]))));
            tracep->chgBit(oldp+2605,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                     [0U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+2606,((((QData)((IData)(
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
            tracep->chgQData(oldp+2608,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+2610,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                        [1U]),52);
            tracep->chgBit(oldp+2612,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [1U]))));
            tracep->chgBit(oldp+2613,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                     [1U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+2614,((((QData)((IData)(
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
            tracep->chgQData(oldp+2616,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+2618,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                        [2U]),52);
            tracep->chgBit(oldp+2620,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [2U]))));
            tracep->chgBit(oldp+2621,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                     [2U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+2622,((((QData)((IData)(
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
            tracep->chgQData(oldp+2624,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+2626,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                        [3U]),52);
            tracep->chgBit(oldp+2628,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [3U]))));
            tracep->chgBit(oldp+2629,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                     [3U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+2630,((((QData)((IData)(
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
            tracep->chgQData(oldp+2632,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+2634,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                        [4U]),52);
            tracep->chgBit(oldp+2636,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [4U]))));
            tracep->chgBit(oldp+2637,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                     [4U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+2638,((((QData)((IData)(
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
            tracep->chgQData(oldp+2640,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+2642,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                        [5U]),52);
            tracep->chgBit(oldp+2644,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [5U]))));
            tracep->chgBit(oldp+2645,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                     [5U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+2646,((((QData)((IData)(
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
            tracep->chgQData(oldp+2648,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+2650,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                        [6U]),52);
            tracep->chgBit(oldp+2652,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [6U]))));
            tracep->chgBit(oldp+2653,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                     [6U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+2654,((((QData)((IData)(
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
            tracep->chgQData(oldp+2656,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+2658,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                        [7U]),52);
            tracep->chgBit(oldp+2660,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [7U]))));
            tracep->chgBit(oldp+2661,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                     [7U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+2662,((((QData)((IData)(
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
            tracep->chgQData(oldp+2664,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+2666,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                        [8U]),52);
            tracep->chgBit(oldp+2668,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [8U]))));
            tracep->chgBit(oldp+2669,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                     [8U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+2670,((((QData)((IData)(
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
            tracep->chgQData(oldp+2672,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+2674,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                        [9U]),52);
            tracep->chgBit(oldp+2676,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [9U]))));
            tracep->chgBit(oldp+2677,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                     [9U] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+2678,((((QData)((IData)(
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
            tracep->chgQData(oldp+2680,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+2682,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                        [0xaU]),52);
            tracep->chgBit(oldp+2684,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xaU]))));
            tracep->chgBit(oldp+2685,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                     [0xaU] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+2686,((((QData)((IData)(
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
            tracep->chgQData(oldp+2688,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+2690,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                        [0xbU]),52);
            tracep->chgBit(oldp+2692,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xbU]))));
            tracep->chgBit(oldp+2693,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                     [0xbU] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+2694,((((QData)((IData)(
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
            tracep->chgQData(oldp+2696,(vlSymsp->TOP__azadi_soc_top__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d.tl_h_o),52);
            tracep->chgQData(oldp+2698,(vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                        [0xcU]),52);
            tracep->chgBit(oldp+2700,((1U & (IData)(
                                                    vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                    [0xcU]))));
            tracep->chgBit(oldp+2701,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i
                                                     [0xcU] 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+2702,((((QData)((IData)(
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
                         [2U] | vlTOPp->__Vm_traceActivity
                         [3U]))) {
            tracep->chgSData(oldp+2704,(((0x33U >= 
                                          (0x3fU & 
                                           ((IData)(0xdU) 
                                            * (3U & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
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
            tracep->chgCData(oldp+2705,(((0x13U >= 
                                          (0x1fU & 
                                           ((IData)(5U) 
                                            * (3U & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                          ? (0x1fU 
                                             & (vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(5U) 
                                                    * 
                                                    (3U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                          : 0U)),5);
            tracep->chgQData(oldp+2706,(((0x83U >= 
                                          (0xffU & 
                                           ((IData)(0x21U) 
                                            * (3U & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
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
            tracep->chgSData(oldp+2708,(((0x19U >= 
                                          (0x1fU & 
                                           ((IData)(0xdU) 
                                            * (1U & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                          ? (0x1fffU 
                                             & (vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                          : 0U)),13);
            tracep->chgCData(oldp+2709,(((9U >= (0xfU 
                                                 & ((IData)(5U) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                          ? (0x1fU 
                                             & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage) 
                                                >> 
                                                (0xfU 
                                                 & ((IData)(5U) 
                                                    * 
                                                    (1U 
                                                     & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))
                                          : 0U)),5);
            tracep->chgQData(oldp+2710,(((0x41U >= 
                                          (0x7fU & 
                                           ((IData)(0x21U) 
                                            * (1U & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
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
                         [2U] | vlTOPp->__Vm_traceActivity
                         [6U]))) {
            tracep->chgCData(oldp+2712,(((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
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
            tracep->chgCData(oldp+2713,(((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
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
            tracep->chgCData(oldp+2714,(((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
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
            tracep->chgCData(oldp+2715,(((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)
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
            tracep->chgCData(oldp+2716,(((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)
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
            tracep->chgCData(oldp+2717,(((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)
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
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [2U] | vlTOPp->__Vm_traceActivity
                         [9U]))) {
            __Vtemp1537[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_0_i
                [0U][0U];
            __Vtemp1537[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_0_i
                [0U][1U];
            __Vtemp1537[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_0_i
                [0U][2U];
            tracep->chgWData(oldp+2718,(__Vtemp1537),86);
            __Vtemp1538[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_0_i
                [1U][0U];
            __Vtemp1538[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_0_i
                [1U][1U];
            __Vtemp1538[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_0_i
                [1U][2U];
            tracep->chgWData(oldp+2721,(__Vtemp1538),86);
            __Vtemp1539[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_1_i
                [0U][0U];
            __Vtemp1539[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_1_i
                [0U][1U];
            __Vtemp1539[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_1_i
                [0U][2U];
            tracep->chgWData(oldp+2724,(__Vtemp1539),86);
            __Vtemp1540[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_1_i
                [1U][0U];
            __Vtemp1540[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_1_i
                [1U][1U];
            __Vtemp1540[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_1_i
                [1U][2U];
            tracep->chgWData(oldp+2727,(__Vtemp1540),86);
            __Vtemp1541[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_2_i
                [0U][0U];
            __Vtemp1541[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_2_i
                [0U][1U];
            __Vtemp1541[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_2_i
                [0U][2U];
            tracep->chgWData(oldp+2730,(__Vtemp1541),86);
            __Vtemp1542[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_2_i
                [1U][0U];
            __Vtemp1542[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_2_i
                [1U][1U];
            __Vtemp1542[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_2_i
                [1U][2U];
            tracep->chgWData(oldp+2733,(__Vtemp1542),86);
            __Vtemp1543[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_3_i
                [0U][0U];
            __Vtemp1543[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_3_i
                [0U][1U];
            __Vtemp1543[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_3_i
                [0U][2U];
            tracep->chgWData(oldp+2736,(__Vtemp1543),86);
            __Vtemp1544[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_3_i
                [1U][0U];
            __Vtemp1544[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_3_i
                [1U][1U];
            __Vtemp1544[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_3_i
                [1U][2U];
            tracep->chgWData(oldp+2739,(__Vtemp1544),86);
            __Vtemp1545[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_4_i
                [0U][0U];
            __Vtemp1545[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_4_i
                [0U][1U];
            __Vtemp1545[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_4_i
                [0U][2U];
            tracep->chgWData(oldp+2742,(__Vtemp1545),86);
            __Vtemp1546[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_4_i
                [1U][0U];
            __Vtemp1546[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_4_i
                [1U][1U];
            __Vtemp1546[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_4_i
                [1U][2U];
            tracep->chgWData(oldp+2745,(__Vtemp1546),86);
            __Vtemp1547[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_5_i
                [0U][0U];
            __Vtemp1547[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_5_i
                [0U][1U];
            __Vtemp1547[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_5_i
                [0U][2U];
            tracep->chgWData(oldp+2748,(__Vtemp1547),86);
            __Vtemp1548[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_5_i
                [1U][0U];
            __Vtemp1548[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_5_i
                [1U][1U];
            __Vtemp1548[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_5_i
                [1U][2U];
            tracep->chgWData(oldp+2751,(__Vtemp1548),86);
            __Vtemp1549[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_6_i
                [0U][0U];
            __Vtemp1549[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_6_i
                [0U][1U];
            __Vtemp1549[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_6_i
                [0U][2U];
            tracep->chgWData(oldp+2754,(__Vtemp1549),86);
            __Vtemp1550[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_6_i
                [1U][0U];
            __Vtemp1550[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_6_i
                [1U][1U];
            __Vtemp1550[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_6_i
                [1U][2U];
            tracep->chgWData(oldp+2757,(__Vtemp1550),86);
            __Vtemp1551[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_7_i
                [0U][0U];
            __Vtemp1551[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_7_i
                [0U][1U];
            __Vtemp1551[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_7_i
                [0U][2U];
            tracep->chgWData(oldp+2760,(__Vtemp1551),86);
            __Vtemp1552[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_7_i
                [1U][0U];
            __Vtemp1552[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_7_i
                [1U][1U];
            __Vtemp1552[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_7_i
                [1U][2U];
            tracep->chgWData(oldp+2763,(__Vtemp1552),86);
            __Vtemp1553[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_8_i
                [0U][0U];
            __Vtemp1553[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_8_i
                [0U][1U];
            __Vtemp1553[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_8_i
                [0U][2U];
            tracep->chgWData(oldp+2766,(__Vtemp1553),86);
            __Vtemp1554[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_8_i
                [1U][0U];
            __Vtemp1554[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_8_i
                [1U][1U];
            __Vtemp1554[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__socket_m1_8_i
                [1U][2U];
            tracep->chgWData(oldp+2769,(__Vtemp1554),86);
            tracep->chgQData(oldp+2772,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o),52);
            tracep->chgQData(oldp+2774,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o),52);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgCData(oldp+2776,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk2__DOT__source_q),8);
            tracep->chgBit(oldp+2777,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__intr_interface__DOT__genblk2__DOT__source_q));
            tracep->chgCData(oldp+2778,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk2__DOT__source_q),8);
            tracep->chgBit(oldp+2779,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__data_interface__DOT__genblk2__DOT__source_q));
            tracep->chgBit(oldp+2780,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__rvalid_o));
            tracep->chgIData(oldp+2781,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__rdata_o),32);
            tracep->chgQData(oldp+2782,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage),52);
            tracep->chgIData(oldp+2784,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage),20);
            tracep->chgWData(oldp+2785,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage),132);
            tracep->chgIData(oldp+2790,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__rdata),32);
            tracep->chgBit(oldp+2791,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__rvalid));
            tracep->chgIData(oldp+2792,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage),26);
            tracep->chgSData(oldp+2793,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage),10);
            tracep->chgWData(oldp+2794,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage),66);
            tracep->chgIData(oldp+2797,(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_q),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgIData(oldp+2798,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id),32);
            tracep->chgIData(oldp+2799,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id),32);
            tracep->chgSData(oldp+2800,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_c_id),16);
            tracep->chgBit(oldp+2801,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id));
            tracep->chgBit(oldp+2802,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_fetch_err));
            tracep->chgBit(oldp+2803,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_fetch_err_plus2));
            tracep->chgBit(oldp+2804,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__illegal_c_insn_id));
            tracep->chgIData(oldp+2805,((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                         << 1U)),32);
            tracep->chgIData(oldp+2806,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_id),32);
            tracep->chgCData(oldp+2807,((0x1fU & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0xfU))),5);
            tracep->chgCData(oldp+2808,((0x1fU & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x14U))),5);
            tracep->chgCData(oldp+2809,((0x1fU & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 7U))),5);
            tracep->chgIData(oldp+2810,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__stored_addr_q),32);
            tracep->chgIData(oldp+2811,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fetch_addr_q),32);
            tracep->chgWData(oldp+2812,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q),96);
            tracep->chgCData(oldp+2815,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q),3);
            tracep->chgIData(oldp+2816,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q),31);
            tracep->chgIData(oldp+2817,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_i_type),32);
            tracep->chgIData(oldp+2818,(((0xfffff000U 
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
            tracep->chgIData(oldp+2819,(((0xffffe000U 
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
            tracep->chgIData(oldp+2820,((0xfffff000U 
                                         & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)),32);
            tracep->chgIData(oldp+2821,(((0xfff00000U 
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
            tracep->chgIData(oldp+2822,((0x1fU & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0xfU))),32);
            tracep->chgSData(oldp+2823,(((0x3e0U & 
                                          (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id 
                                           >> 0xaU)) 
                                         | (0x1fU & 
                                            (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id 
                                             >> 7U)))),10);
            tracep->chgCData(oldp+2824,((0x1fU & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                  >> 0x1bU))),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[5U])) {
            tracep->chgBit(oldp+2825,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_q));
            tracep->chgQData(oldp+2826,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__imd_val_q_ex[0]),34);
            tracep->chgQData(oldp+2828,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__imd_val_q_ex[1]),34);
            tracep->chgBit(oldp+2830,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                             >> 1U))));
            tracep->chgBit(oldp+2831,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                             >> 2U))));
            tracep->chgCData(oldp+2832,((7U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+2833,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q))));
            tracep->chgBit(oldp+2834,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__lsu_addr_incr_req));
            tracep->chgIData(oldp+2835,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__addr_last_q),32);
            tracep->chgBit(oldp+2836,((0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
            tracep->chgBit(oldp+2837,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q));
            tracep->chgBit(oldp+2838,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             >> 5U))));
            tracep->chgIData(oldp+2839,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+2840,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q),32);
            tracep->chgQData(oldp+2841,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[0]),34);
            tracep->chgQData(oldp+2843,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[1]),34);
            tracep->chgQData(oldp+2845,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[2]),34);
            tracep->chgQData(oldp+2847,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[3]),34);
            tracep->chgQData(oldp+2849,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[4]),34);
            tracep->chgQData(oldp+2851,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[5]),34);
            tracep->chgQData(oldp+2853,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[6]),34);
            tracep->chgQData(oldp+2855,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[7]),34);
            tracep->chgQData(oldp+2857,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[8]),34);
            tracep->chgQData(oldp+2859,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[9]),34);
            tracep->chgQData(oldp+2861,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[10]),34);
            tracep->chgQData(oldp+2863,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[11]),34);
            tracep->chgQData(oldp+2865,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[12]),34);
            tracep->chgQData(oldp+2867,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[13]),34);
            tracep->chgQData(oldp+2869,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[14]),34);
            tracep->chgQData(oldp+2871,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[15]),34);
            tracep->chgCData(oldp+2873,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [0U]),6);
            tracep->chgCData(oldp+2874,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [1U]),6);
            tracep->chgCData(oldp+2875,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [2U]),6);
            tracep->chgCData(oldp+2876,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [3U]),6);
            tracep->chgCData(oldp+2877,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [4U]),6);
            tracep->chgCData(oldp+2878,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [5U]),6);
            tracep->chgCData(oldp+2879,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [6U]),6);
            tracep->chgCData(oldp+2880,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [7U]),6);
            tracep->chgCData(oldp+2881,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [8U]),6);
            tracep->chgCData(oldp+2882,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [9U]),6);
            tracep->chgCData(oldp+2883,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [0xaU]),6);
            tracep->chgCData(oldp+2884,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [0xbU]),6);
            tracep->chgCData(oldp+2885,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [0xcU]),6);
            tracep->chgCData(oldp+2886,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [0xdU]),6);
            tracep->chgCData(oldp+2887,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [0xeU]),6);
            tracep->chgCData(oldp+2888,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg
                                        [0xfU]),6);
            tracep->chgIData(oldp+2889,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q),32);
            tracep->chgBit(oldp+2890,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))));
            tracep->chgCData(oldp+2891,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q),2);
            tracep->chgCData(oldp+2892,((3U & ((2U 
                                                & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))
                                                ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                   >> 2U)
                                                : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q)))),2);
            tracep->chgBit(oldp+2893,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q));
            tracep->chgBit(oldp+2894,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 2U))));
            tracep->chgBit(oldp+2895,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2896,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2897,((0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match))));
            tracep->chgCData(oldp+2898,((0xffU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)),8);
            tracep->chgBit(oldp+2899,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q));
            tracep->chgBit(oldp+2900,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__discard_req_q));
            tracep->chgCData(oldp+2901,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_q),2);
            tracep->chgCData(oldp+2902,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__branch_discard_q),2);
            tracep->chgCData(oldp+2903,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_q),2);
            tracep->chgCData(oldp+2904,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_rev),2);
            tracep->chgBit(oldp+2905,((1U & (~ (IData)(
                                                       (3U 
                                                        == 
                                                        (3U 
                                                         & (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                             >> 1U) 
                                                            | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_rev)))))))));
            tracep->chgCData(oldp+2906,((3U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                               >> 1U))),2);
            tracep->chgCData(oldp+2907,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q),3);
            tracep->chgCData(oldp+2908,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry),3);
            tracep->chgQData(oldp+2909,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o[0]),34);
            tracep->chgQData(oldp+2911,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o[1]),34);
            tracep->chgQData(oldp+2913,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[0]),34);
            tracep->chgQData(oldp+2915,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[1]),34);
            tracep->chgBit(oldp+2917,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q));
            tracep->chgBit(oldp+2918,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q));
            tracep->chgBit(oldp+2919,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q));
            tracep->chgBit(oldp+2920,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q));
            tracep->chgBit(oldp+2921,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q));
            tracep->chgBit(oldp+2922,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug));
            tracep->chgQData(oldp+2923,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__ex_block_i__imd_val_q_i[0]),34);
            tracep->chgQData(oldp+2925,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__ex_block_i__imd_val_q_i[1]),34);
            tracep->chgIData(oldp+2927,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[0]),32);
            tracep->chgIData(oldp+2928,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[1]),32);
            tracep->chgIData(oldp+2929,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i[0]),32);
            tracep->chgIData(oldp+2930,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i[1]),32);
            tracep->chgIData(oldp+2931,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[0]),32);
            tracep->chgIData(oldp+2932,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[1]),32);
            tracep->chgQData(oldp+2933,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i[0]),34);
            tracep->chgQData(oldp+2935,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i[1]),34);
            tracep->chgCData(oldp+2937,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q),3);
            tracep->chgQData(oldp+2938,((0x1ffffffffULL 
                                         & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i
                                         [0U])),33);
            tracep->chgBit(oldp+2940,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i
                                                     [0U] 
                                                     >> 0x21U)))));
            tracep->chgCData(oldp+2941,((3U & (IData)(
                                                      (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i
                                                       [1U] 
                                                       >> 0x20U)))),2);
            tracep->chgCData(oldp+2942,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_count_q),5);
            tracep->chgQData(oldp+2943,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_q),33);
            tracep->chgQData(oldp+2945,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_shift_q),33);
            tracep->chgQData(oldp+2947,((0x1ffffffffULL 
                                         & (1ULL << (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_count_q)))),33);
            tracep->chgQData(oldp+2949,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_bw_pp),33);
            tracep->chgQData(oldp+2951,((((QData)((IData)(
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
            tracep->chgIData(oldp+2953,((- (IData)(
                                                   (1U 
                                                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_q))))),32);
            tracep->chgIData(oldp+2954,((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i
                                                [1U])),32);
            tracep->chgBit(oldp+2955,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__div_by_zero_q));
            tracep->chgIData(oldp+2956,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q),24);
            tracep->chgCData(oldp+2957,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q),2);
            tracep->chgCData(oldp+2958,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_type_q),2);
            tracep->chgBit(oldp+2959,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q));
            tracep->chgBit(oldp+2960,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q));
            tracep->chgBit(oldp+2961,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_q));
            tracep->chgBit(oldp+2962,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q));
            tracep->chgBit(oldp+2963,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_q));
            tracep->chgCData(oldp+2964,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs),3);
            tracep->chgCData(oldp+2965,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [0U]),6);
            tracep->chgCData(oldp+2966,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [1U]),6);
            tracep->chgCData(oldp+2967,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [2U]),6);
            tracep->chgCData(oldp+2968,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [3U]),6);
            tracep->chgCData(oldp+2969,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [4U]),6);
            tracep->chgCData(oldp+2970,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [5U]),6);
            tracep->chgCData(oldp+2971,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [6U]),6);
            tracep->chgCData(oldp+2972,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [7U]),6);
            tracep->chgCData(oldp+2973,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [8U]),6);
            tracep->chgCData(oldp+2974,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [9U]),6);
            tracep->chgCData(oldp+2975,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [0xaU]),6);
            tracep->chgCData(oldp+2976,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [0xbU]),6);
            tracep->chgCData(oldp+2977,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [0xcU]),6);
            tracep->chgCData(oldp+2978,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [0xdU]),6);
            tracep->chgCData(oldp+2979,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [0xeU]),6);
            tracep->chgCData(oldp+2980,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o
                                        [0xfU]),6);
            tracep->chgQData(oldp+2981,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[0]),34);
            tracep->chgQData(oldp+2983,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[1]),34);
            tracep->chgQData(oldp+2985,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[2]),34);
            tracep->chgQData(oldp+2987,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[3]),34);
            tracep->chgQData(oldp+2989,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[4]),34);
            tracep->chgQData(oldp+2991,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[5]),34);
            tracep->chgQData(oldp+2993,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[6]),34);
            tracep->chgQData(oldp+2995,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[7]),34);
            tracep->chgQData(oldp+2997,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[8]),34);
            tracep->chgQData(oldp+2999,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[9]),34);
            tracep->chgQData(oldp+3001,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[10]),34);
            tracep->chgQData(oldp+3003,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[11]),34);
            tracep->chgQData(oldp+3005,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[12]),34);
            tracep->chgQData(oldp+3007,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[13]),34);
            tracep->chgQData(oldp+3009,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[14]),34);
            tracep->chgQData(oldp+3011,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[15]),34);
            tracep->chgCData(oldp+3013,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3014,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q),18);
            tracep->chgIData(oldp+3015,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3016,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3017,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+3018,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+3019,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+3020,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3021,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q),3);
            tracep->chgCData(oldp+3022,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_d),3);
            tracep->chgIData(oldp+3023,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3024,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3025,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0]),32);
            tracep->chgIData(oldp+3026,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[1]),32);
            tracep->chgIData(oldp+3027,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[2]),32);
            tracep->chgIData(oldp+3028,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[3]),32);
            tracep->chgIData(oldp+3029,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[4]),32);
            tracep->chgIData(oldp+3030,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[5]),32);
            tracep->chgIData(oldp+3031,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[6]),32);
            tracep->chgIData(oldp+3032,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[7]),32);
            tracep->chgIData(oldp+3033,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[8]),32);
            tracep->chgIData(oldp+3034,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[9]),32);
            tracep->chgIData(oldp+3035,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[10]),32);
            tracep->chgIData(oldp+3036,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[11]),32);
            tracep->chgIData(oldp+3037,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[12]),32);
            tracep->chgIData(oldp+3038,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[13]),32);
            tracep->chgIData(oldp+3039,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[14]),32);
            tracep->chgIData(oldp+3040,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[15]),32);
            tracep->chgCData(oldp+3041,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0]),8);
            tracep->chgCData(oldp+3042,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[1]),8);
            tracep->chgCData(oldp+3043,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[2]),8);
            tracep->chgCData(oldp+3044,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[3]),8);
            tracep->chgCData(oldp+3045,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[4]),8);
            tracep->chgCData(oldp+3046,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[5]),8);
            tracep->chgCData(oldp+3047,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[6]),8);
            tracep->chgCData(oldp+3048,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[7]),8);
            tracep->chgCData(oldp+3049,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[8]),8);
            tracep->chgCData(oldp+3050,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[9]),8);
            tracep->chgCData(oldp+3051,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[10]),8);
            tracep->chgCData(oldp+3052,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[11]),8);
            tracep->chgCData(oldp+3053,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[12]),8);
            tracep->chgCData(oldp+3054,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[13]),8);
            tracep->chgCData(oldp+3055,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[14]),8);
            tracep->chgCData(oldp+3056,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[15]),8);
            tracep->chgIData(oldp+3057,((0xffffe000U 
                                         | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),32);
            tracep->chgSData(oldp+3058,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q),13);
            tracep->chgQData(oldp+3059,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[0]),64);
            tracep->chgQData(oldp+3061,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[1]),64);
            tracep->chgQData(oldp+3063,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[2]),64);
            tracep->chgQData(oldp+3065,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[3]),64);
            tracep->chgQData(oldp+3067,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[4]),64);
            tracep->chgQData(oldp+3069,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[5]),64);
            tracep->chgQData(oldp+3071,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[6]),64);
            tracep->chgQData(oldp+3073,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[7]),64);
            tracep->chgQData(oldp+3075,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[8]),64);
            tracep->chgQData(oldp+3077,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[9]),64);
            tracep->chgQData(oldp+3079,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[10]),64);
            tracep->chgQData(oldp+3081,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[11]),64);
            tracep->chgQData(oldp+3083,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[12]),64);
            tracep->chgQData(oldp+3085,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[13]),64);
            tracep->chgQData(oldp+3087,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[14]),64);
            tracep->chgQData(oldp+3089,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[15]),64);
            tracep->chgQData(oldp+3091,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[16]),64);
            tracep->chgQData(oldp+3093,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[17]),64);
            tracep->chgQData(oldp+3095,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[18]),64);
            tracep->chgQData(oldp+3097,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[19]),64);
            tracep->chgQData(oldp+3099,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[20]),64);
            tracep->chgQData(oldp+3101,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[21]),64);
            tracep->chgQData(oldp+3103,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[22]),64);
            tracep->chgQData(oldp+3105,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[23]),64);
            tracep->chgQData(oldp+3107,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[24]),64);
            tracep->chgQData(oldp+3109,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[25]),64);
            tracep->chgQData(oldp+3111,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[26]),64);
            tracep->chgQData(oldp+3113,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[27]),64);
            tracep->chgQData(oldp+3115,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[28]),64);
            tracep->chgQData(oldp+3117,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[29]),64);
            tracep->chgQData(oldp+3119,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[30]),64);
            tracep->chgQData(oldp+3121,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[31]),64);
            tracep->chgIData(oldp+3123,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+3124,((0x28001048U 
                                         | (4U & (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q) 
                                                   >> (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)) 
                                                  << 2U)))),32);
            tracep->chgIData(oldp+3125,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q
                                        [vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q]),32);
            tracep->chgCData(oldp+3126,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q),6);
            tracep->chgCData(oldp+3127,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                        [0U]),6);
            tracep->chgCData(oldp+3128,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                        [1U]),6);
            tracep->chgCData(oldp+3129,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                        [2U]),6);
            tracep->chgCData(oldp+3130,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                        [3U]),6);
            tracep->chgCData(oldp+3131,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                        [4U]),6);
            tracep->chgCData(oldp+3132,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                        [5U]),6);
            tracep->chgCData(oldp+3133,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                        [6U]),6);
            tracep->chgCData(oldp+3134,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                        [7U]),6);
            tracep->chgCData(oldp+3135,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                        [8U]),6);
            tracep->chgCData(oldp+3136,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                        [9U]),6);
            tracep->chgCData(oldp+3137,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                        [0xaU]),6);
            tracep->chgCData(oldp+3138,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                        [0xbU]),6);
            tracep->chgCData(oldp+3139,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                        [0xcU]),6);
            tracep->chgCData(oldp+3140,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                        [0xdU]),6);
            tracep->chgCData(oldp+3141,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                        [0xeU]),6);
            tracep->chgCData(oldp+3142,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg
                                        [0xfU]),6);
            tracep->chgIData(oldp+3143,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[0]),32);
            tracep->chgIData(oldp+3144,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[1]),32);
            tracep->chgIData(oldp+3145,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[2]),32);
            tracep->chgIData(oldp+3146,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[3]),32);
            tracep->chgIData(oldp+3147,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[4]),32);
            tracep->chgIData(oldp+3148,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[5]),32);
            tracep->chgIData(oldp+3149,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[6]),32);
            tracep->chgIData(oldp+3150,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[7]),32);
            tracep->chgIData(oldp+3151,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[8]),32);
            tracep->chgIData(oldp+3152,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[9]),32);
            tracep->chgIData(oldp+3153,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[10]),32);
            tracep->chgIData(oldp+3154,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[11]),32);
            tracep->chgIData(oldp+3155,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[12]),32);
            tracep->chgIData(oldp+3156,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[13]),32);
            tracep->chgIData(oldp+3157,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[14]),32);
            tracep->chgIData(oldp+3158,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[15]),32);
            tracep->chgBit(oldp+3159,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q));
            tracep->chgCData(oldp+3160,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_q),2);
            tracep->chgIData(oldp+3161,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[0]),32);
            tracep->chgIData(oldp+3162,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[1]),32);
            tracep->chgCData(oldp+3163,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match),2);
            tracep->chgCData(oldp+3164,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_d),3);
            tracep->chgQData(oldp+3165,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q),64);
            tracep->chgQData(oldp+3167,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q),64);
            tracep->chgCData(oldp+3169,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3170,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3171,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3172,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3173,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3174,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3175,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3176,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3177,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3178,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3179,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3180,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3181,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3182,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3183,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3184,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3185,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3186,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3187,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3188,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3189,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3190,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3191,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3192,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3193,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3194,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3195,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3196,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3197,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3198,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3199,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+3200,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q),32);
            tracep->chgQData(oldp+3201,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter),64);
            tracep->chgIData(oldp+3203,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),32);
            tracep->chgQData(oldp+3204,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter),64);
            tracep->chgIData(oldp+3206,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),32);
            tracep->chgQData(oldp+3207,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter),64);
            tracep->chgIData(oldp+3209,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),32);
            tracep->chgQData(oldp+3210,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter),64);
            tracep->chgIData(oldp+3212,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),32);
            tracep->chgQData(oldp+3213,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter),64);
            tracep->chgIData(oldp+3215,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),32);
            tracep->chgQData(oldp+3216,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter),64);
            tracep->chgIData(oldp+3218,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),32);
            tracep->chgQData(oldp+3219,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter),64);
            tracep->chgIData(oldp+3221,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),32);
            tracep->chgQData(oldp+3222,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter),64);
            tracep->chgIData(oldp+3224,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),32);
            tracep->chgQData(oldp+3225,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter),64);
            tracep->chgIData(oldp+3227,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),32);
            tracep->chgQData(oldp+3228,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter),64);
            tracep->chgIData(oldp+3230,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q),32);
            tracep->chgBit(oldp+3231,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q));
            tracep->chgIData(oldp+3232,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q),32);
            tracep->chgBit(oldp+3233,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q));
            tracep->chgIData(oldp+3234,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+3235,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [0U]),6);
            tracep->chgCData(oldp+3236,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [1U]),6);
            tracep->chgCData(oldp+3237,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [2U]),6);
            tracep->chgCData(oldp+3238,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [3U]),6);
            tracep->chgCData(oldp+3239,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [4U]),6);
            tracep->chgCData(oldp+3240,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [5U]),6);
            tracep->chgCData(oldp+3241,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [6U]),6);
            tracep->chgCData(oldp+3242,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [7U]),6);
            tracep->chgCData(oldp+3243,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [8U]),6);
            tracep->chgCData(oldp+3244,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [9U]),6);
            tracep->chgCData(oldp+3245,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [0xaU]),6);
            tracep->chgCData(oldp+3246,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [0xbU]),6);
            tracep->chgCData(oldp+3247,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [0xcU]),6);
            tracep->chgCData(oldp+3248,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [0xdU]),6);
            tracep->chgCData(oldp+3249,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [0xeU]),6);
            tracep->chgCData(oldp+3250,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_cfg_i
                                        [0xfU]),6);
            tracep->chgQData(oldp+3251,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[0]),34);
            tracep->chgQData(oldp+3253,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[1]),34);
            tracep->chgQData(oldp+3255,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[2]),34);
            tracep->chgQData(oldp+3257,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[3]),34);
            tracep->chgQData(oldp+3259,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[4]),34);
            tracep->chgQData(oldp+3261,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[5]),34);
            tracep->chgQData(oldp+3263,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[6]),34);
            tracep->chgQData(oldp+3265,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[7]),34);
            tracep->chgQData(oldp+3267,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[8]),34);
            tracep->chgQData(oldp+3269,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[9]),34);
            tracep->chgQData(oldp+3271,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[10]),34);
            tracep->chgQData(oldp+3273,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[11]),34);
            tracep->chgQData(oldp+3275,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[12]),34);
            tracep->chgQData(oldp+3277,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[13]),34);
            tracep->chgQData(oldp+3279,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[14]),34);
            tracep->chgQData(oldp+3281,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__csr_pmp_addr_i[15]),34);
            tracep->chgQData(oldp+3283,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[0]),34);
            tracep->chgQData(oldp+3285,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[1]),34);
            tracep->chgQData(oldp+3287,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[2]),34);
            tracep->chgQData(oldp+3289,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[3]),34);
            tracep->chgQData(oldp+3291,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[4]),34);
            tracep->chgQData(oldp+3293,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[5]),34);
            tracep->chgQData(oldp+3295,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[6]),34);
            tracep->chgQData(oldp+3297,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[7]),34);
            tracep->chgQData(oldp+3299,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[8]),34);
            tracep->chgQData(oldp+3301,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[9]),34);
            tracep->chgQData(oldp+3303,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[10]),34);
            tracep->chgQData(oldp+3305,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[11]),34);
            tracep->chgQData(oldp+3307,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[12]),34);
            tracep->chgQData(oldp+3309,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[13]),34);
            tracep->chgQData(oldp+3311,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[14]),34);
            tracep->chgQData(oldp+3313,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_start_addr[15]),34);
            tracep->chgIData(oldp+3315,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0]),32);
            tracep->chgIData(oldp+3316,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1]),32);
            tracep->chgIData(oldp+3317,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2]),32);
            tracep->chgIData(oldp+3318,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3]),32);
            tracep->chgIData(oldp+3319,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4]),32);
            tracep->chgIData(oldp+3320,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5]),32);
            tracep->chgIData(oldp+3321,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6]),32);
            tracep->chgIData(oldp+3322,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7]),32);
            tracep->chgIData(oldp+3323,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8]),32);
            tracep->chgIData(oldp+3324,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9]),32);
            tracep->chgIData(oldp+3325,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[10]),32);
            tracep->chgIData(oldp+3326,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[11]),32);
            tracep->chgIData(oldp+3327,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[12]),32);
            tracep->chgIData(oldp+3328,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[13]),32);
            tracep->chgIData(oldp+3329,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[14]),32);
            tracep->chgIData(oldp+3330,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[15]),32);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [5U] | vlTOPp->__Vm_traceActivity
                         [9U]))) {
            tracep->chgBit(oldp+3331,(((0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                       | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req))));
            tracep->chgBit(oldp+3332,((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ctrl_busy) 
                                        | ((0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                           | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req))) 
                                       | (0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))));
            tracep->chgCData(oldp+3333,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_priv_lvl
                                        [0U]),2);
            tracep->chgCData(oldp+3334,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_priv_lvl
                                        [1U]),2);
            tracep->chgBit(oldp+3335,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set) 
                                       | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_new_req) 
                                          & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q))))));
            tracep->chgBit(oldp+3336,((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__sign_a) 
                                        ^ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__sign_b)) 
                                       & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__div_by_zero_q)))));
            tracep->chgBit(oldp+3337,(((3U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                              >> 8U)) 
                                       > (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[6U])) {
            tracep->chgQData(oldp+3338,(vlTOPp->azadi_soc_top__DOT__dccm_to_xbar),52);
            tracep->chgBit(oldp+3340,((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+3341,((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgSData(oldp+3342,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o),13);
            tracep->chgBit(oldp+3343,((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+3344,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid));
            tracep->chgCData(oldp+3345,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o),5);
            tracep->chgBit(oldp+3346,((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+3347,((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)))));
            tracep->chgQData(oldp+3348,(((QData)((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword)) 
                                         << 1U)),33);
            tracep->chgQData(oldp+3350,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o),33);
            tracep->chgBit(oldp+3352,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__d_valid));
            tracep->chgBit(oldp+3353,((1U & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
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
            tracep->chgIData(oldp+3354,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask),32);
            tracep->chgIData(oldp+3355,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rdata_tlword),32);
            tracep->chgCData(oldp+3356,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),3);
            tracep->chgBit(oldp+3357,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+3358,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+3359,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 2U))));
            tracep->chgCData(oldp+3360,((3U & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),2);
            tracep->chgBit(oldp+3361,((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgCData(oldp+3362,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),3);
            tracep->chgBit(oldp+3363,(((~ (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                       & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid))));
            tracep->chgBit(oldp+3364,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+3365,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+3366,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 2U))));
            tracep->chgCData(oldp+3367,((3U & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),2);
            tracep->chgCData(oldp+3368,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),3);
            tracep->chgBit(oldp+3369,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+3370,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+3371,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+3372,(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty));
            tracep->chgBit(oldp+3373,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 2U))));
            tracep->chgCData(oldp+3374,((3U & (IData)(vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),2);
            tracep->chgBit(oldp+3375,((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+3376,((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgSData(oldp+3377,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o),13);
            tracep->chgBit(oldp+3378,((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+3379,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid));
            tracep->chgCData(oldp+3380,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o),5);
            tracep->chgBit(oldp+3381,((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full)))));
            tracep->chgBit(oldp+3382,((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty)))));
            tracep->chgBit(oldp+3383,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__d_valid));
            tracep->chgIData(oldp+3384,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask),32);
            tracep->chgCData(oldp+3385,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
            tracep->chgBit(oldp+3386,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+3387,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+3388,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+3389,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            tracep->chgBit(oldp+3390,((1U & (~ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)))));
            tracep->chgCData(oldp+3391,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
            tracep->chgBit(oldp+3392,(((~ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
                                       & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rspfifo_wvalid))));
            tracep->chgBit(oldp+3393,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+3394,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+3395,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+3396,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            tracep->chgCData(oldp+3397,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),2);
            tracep->chgBit(oldp+3398,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+3399,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+3400,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgBit(oldp+3401,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty));
            tracep->chgBit(oldp+3402,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 1U))));
            tracep->chgBit(oldp+3403,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            tracep->chgQData(oldp+3404,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o),52);
            tracep->chgBit(oldp+3406,((1U & (IData)(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o))));
            tracep->chgCData(oldp+3407,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__hfifo_rspvalid),2);
            tracep->chgCData(oldp+3408,((0x7fU & (IData)(
                                                         (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.__PVT__drsp_fifo_o 
                                                          >> 0x24U)))),8);
            tracep->chgBit(oldp+3409,((1U & (IData)(vlTOPp->azadi_soc_top__DOT__dccm_to_xbar))));
            tracep->chgBit(oldp+3410,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__dccm_to_xbar 
                                                     >> 0x33U)))));
            tracep->chgQData(oldp+3411,((((QData)((IData)(
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
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[7U])) {
            tracep->chgIData(oldp+3413,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_a_ecc),32);
            tracep->chgIData(oldp+3414,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc),32);
            tracep->chgBit(oldp+3415,((0U != vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)));
            tracep->chgIData(oldp+3416,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs),18);
            tracep->chgBit(oldp+3417,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq));
            tracep->chgCData(oldp+3418,(((0x4000U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)
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
            tracep->chgBit(oldp+3419,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs 
                                             >> 0x10U))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[8U])) {
            tracep->chgBit(oldp+3420,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we));
            tracep->chgBit(oldp+3421,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q));
            tracep->chgCData(oldp+3422,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__imd_val_we_ex),2);
            tracep->chgBit(oldp+3423,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__icache_inval));
            tracep->chgBit(oldp+3424,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_first_cycle));
            tracep->chgCData(oldp+3425,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_mux_id),3);
            tracep->chgCData(oldp+3426,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id),2);
            tracep->chgBit(oldp+3427,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a));
            tracep->chgBit(oldp+3428,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b));
            tracep->chgCData(oldp+3429,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator),6);
            tracep->chgBit(oldp+3430,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing) 
                                       & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec))));
            tracep->chgBit(oldp+3431,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__div_en_id));
            tracep->chgBit(oldp+3432,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__mult_sel_ex));
            tracep->chgBit(oldp+3433,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__div_sel_ex));
            tracep->chgCData(oldp+3434,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator),2);
            tracep->chgCData(oldp+3435,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode),2);
            tracep->chgBit(oldp+3436,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_access));
            tracep->chgCData(oldp+3437,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_op),2);
            tracep->chgCData(oldp+3438,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type),2);
            tracep->chgBit(oldp+3439,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_sign_ext));
            tracep->chgBit(oldp+3440,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req));
            tracep->chgBit(oldp+3441,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_valid));
            tracep->chgBit(oldp+3442,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_req_int));
            tracep->chgBit(oldp+3443,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__data_req_out));
            tracep->chgBit(oldp+3444,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_id));
            tracep->chgBit(oldp+3445,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_restore_mret_id));
            tracep->chgBit(oldp+3446,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_restore_dret_id));
            tracep->chgIData(oldp+3447,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_mtval),32);
            tracep->chgCData(oldp+3448,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__debug_cause),3);
            tracep->chgBit(oldp+3449,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__debug_csr_save));
            tracep->chgBit(oldp+3450,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__perf_branch));
            tracep->chgBit(oldp+3451,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__perf_load));
            tracep->chgBit(oldp+3452,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__perf_store));
            tracep->chgCData(oldp+3453,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_req_type
                                        [0U]),2);
            tracep->chgCData(oldp+3454,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_req_type
                                        [1U]),2);
            tracep->chgBit(oldp+3455,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn));
            tracep->chgBit(oldp+3456,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn));
            tracep->chgBit(oldp+3457,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec));
            tracep->chgBit(oldp+3458,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec));
            tracep->chgBit(oldp+3459,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec));
            tracep->chgBit(oldp+3460,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec));
            tracep->chgBit(oldp+3461,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_in_dec));
            tracep->chgBit(oldp+3462,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_spec));
            tracep->chgBit(oldp+3463,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec));
            tracep->chgBit(oldp+3464,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set_dec));
            tracep->chgBit(oldp+3465,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set));
            tracep->chgBit(oldp+3466,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing));
            tracep->chgBit(oldp+3467,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_run));
            tracep->chgBit(oldp+3468,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id));
            tracep->chgBit(oldp+3469,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel));
            tracep->chgBit(oldp+3470,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we));
            tracep->chgBit(oldp+3471,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_we_raw));
            tracep->chgCData(oldp+3472,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel),2);
            tracep->chgCData(oldp+3473,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec),2);
            tracep->chgBit(oldp+3474,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec));
            tracep->chgCData(oldp+3475,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_a_mux_sel),2);
            tracep->chgCData(oldp+3476,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel),3);
            tracep->chgBit(oldp+3477,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel));
            tracep->chgCData(oldp+3478,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel),3);
            tracep->chgCData(oldp+3479,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec),3);
            tracep->chgBit(oldp+3480,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec));
            tracep->chgBit(oldp+3481,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec));
            tracep->chgBit(oldp+3482,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_en_dec));
            tracep->chgBit(oldp+3483,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec));
            tracep->chgBit(oldp+3484,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal));
            tracep->chgCData(oldp+3485,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op),2);
            tracep->chgCData(oldp+3486,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode),7);
            tracep->chgCData(oldp+3487,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu),7);
            tracep->chgCData(oldp+3488,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs),4);
            tracep->chgBit(oldp+3489,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d));
            tracep->chgBit(oldp+3490,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
            tracep->chgBit(oldp+3491,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio));
            tracep->chgBit(oldp+3492,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio));
            tracep->chgBit(oldp+3493,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio));
            tracep->chgBit(oldp+3494,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio));
            tracep->chgBit(oldp+3495,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio));
            tracep->chgBit(oldp+3496,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio));
            tracep->chgBit(oldp+3497,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req_branch));
            tracep->chgBit(oldp+3498,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode));
            tracep->chgBit(oldp+3499,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn));
            tracep->chgBit(oldp+3500,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn));
            tracep->chgBit(oldp+3501,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn));
            tracep->chgBit(oldp+3502,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn));
            tracep->chgBit(oldp+3503,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn));
            tracep->chgBit(oldp+3504,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err));
            tracep->chgQData(oldp+3505,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a),33);
            tracep->chgBit(oldp+3507,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel));
            tracep->chgCData(oldp+3508,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_we),2);
            tracep->chgBit(oldp+3509,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate));
            tracep->chgBit(oldp+3510,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed));
            tracep->chgBit(oldp+3511,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left));
            tracep->chgBit(oldp+3512,((8U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator))));
            tracep->chgBit(oldp+3513,(((3U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)) 
                                       | (6U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)))));
            tracep->chgBit(oldp+3514,(((4U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)) 
                                       | (7U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator)))));
            tracep->chgBit(oldp+3515,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_hold));
            tracep->chgBit(oldp+3516,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_en));
            tracep->chgCData(oldp+3517,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                        [0U]),2);
            tracep->chgCData(oldp+3518,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_type_i
                                        [1U]),2);
            tracep->chgIData(oldp+3519,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_perm_check),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[9U])) {
            tracep->chgWData(oldp+3520,(vlTOPp->azadi_soc_top__DOT__ifu_to_xbar),86);
            __Vtemp1555[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                [0U][0U];
            __Vtemp1555[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                [0U][1U];
            __Vtemp1555[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                [0U][2U];
            tracep->chgWData(oldp+3523,(__Vtemp1555),86);
            tracep->chgWData(oldp+3526,(vlTOPp->azadi_soc_top__DOT__lsu_to_xbar),86);
            tracep->chgBit(oldp+3529,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__instr_req));
            tracep->chgIData(oldp+3530,((0xfffffffcU 
                                         & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_addr)),32);
            tracep->chgBit(oldp+3531,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__data_req));
            tracep->chgCData(oldp+3532,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be),4);
            tracep->chgIData(oldp+3533,((0xfffffffcU 
                                         & ((IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                     >> 3U)) 
                                            << 2U))),32);
            tracep->chgQData(oldp+3534,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__imd_val_d_ex[0]),34);
            tracep->chgQData(oldp+3536,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__imd_val_d_ex[1]),34);
            tracep->chgBit(oldp+3538,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set));
            tracep->chgBit(oldp+3539,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set_spec));
            tracep->chgCData(oldp+3540,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_cause),6);
            tracep->chgIData(oldp+3541,((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__g_branch_target_alu__DOT__bt_alu_result)),32);
            tracep->chgBit(oldp+3542,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result));
            tracep->chgBit(oldp+3543,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ctrl_busy));
            tracep->chgIData(oldp+3544,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a),32);
            tracep->chgIData(oldp+3545,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b),32);
            tracep->chgIData(oldp+3546,((IData)((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                 >> 1U))),32);
            tracep->chgIData(oldp+3547,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__result_ex),32);
            tracep->chgSData(oldp+3548,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr),12);
            tracep->chgIData(oldp+3549,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int),32);
            tracep->chgBit(oldp+3550,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pmp_req_err[0]));
            tracep->chgBit(oldp+3551,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pmp_req_err[1]));
            tracep->chgBit(oldp+3552,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req));
            tracep->chgBit(oldp+3553,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_if));
            tracep->chgBit(oldp+3554,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_save_cause));
            tracep->chgBit(oldp+3555,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_mtvec_init));
            tracep->chgCData(oldp+3556,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_d),2);
            tracep->chgBit(oldp+3557,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__perf_jump));
            tracep->chgBit(oldp+3558,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__perf_tbranch));
            tracep->chgQData(oldp+3559,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_req_addr[0]),34);
            tracep->chgQData(oldp+3561,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_req_addr[1]),34);
            tracep->chgBit(oldp+3563,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pmp_req_err
                                      [0U]));
            tracep->chgIData(oldp+3564,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n),32);
            tracep->chgBit(oldp+3565,((1U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)));
            tracep->chgBit(oldp+3566,((1U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_cause) 
                                             >> 5U))));
            tracep->chgIData(oldp+3567,((0xfffffffeU 
                                         & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)),32);
            tracep->chgBit(oldp+3568,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set_spec) 
                                       & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set)))));
            tracep->chgBit(oldp+3569,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_new_req));
            tracep->chgBit(oldp+3570,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__discard_req_d));
            tracep->chgCData(oldp+3571,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_n),2);
            tracep->chgIData(oldp+3572,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_addr),32);
            tracep->chgIData(oldp+3573,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set)
                                          ? (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                          : 0U)),32);
            tracep->chgBit(oldp+3574,(0U));
            tracep->chgQData(oldp+3575,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i[0]),34);
            tracep->chgQData(oldp+3577,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i[1]),34);
            tracep->chgBit(oldp+3579,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_set_d));
            tracep->chgQData(oldp+3580,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__ex_block_i__imd_val_d_o[0]),34);
            tracep->chgQData(oldp+3582,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__ex_block_i__imd_val_d_o[1]),34);
            tracep->chgIData(oldp+3584,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_result),32);
            tracep->chgQData(oldp+3585,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext),34);
            tracep->chgBit(oldp+3587,((0U == (IData)(
                                                     (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                      >> 1U)))));
            tracep->chgQData(oldp+3588,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0]),34);
            tracep->chgQData(oldp+3590,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1]),34);
            tracep->chgQData(oldp+3592,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__g_branch_target_alu__DOT__bt_alu_result),33);
            tracep->chgBit(oldp+3594,((1U & (IData)(
                                                    (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__g_branch_target_alu__DOT__bt_alu_result 
                                                     >> 0x20U)))));
            tracep->chgIData(oldp+3595,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev),32);
            tracep->chgQData(oldp+3596,((0x1ffffffffULL 
                                         & (~ ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                               << 1U)))),33);
            tracep->chgQData(oldp+3598,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_in_b),33);
            tracep->chgCData(oldp+3600,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt),6);
            tracep->chgCData(oldp+3601,((0x3fU & ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)))),6);
            tracep->chgIData(oldp+3602,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand),32);
            tracep->chgQData(oldp+3603,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext),33);
            tracep->chgBit(oldp+3605,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext));
            tracep->chgIData(oldp+3606,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result),32);
            tracep->chgIData(oldp+3607,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev),32);
            tracep->chgCData(oldp+3608,(((0x10U & (
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
            tracep->chgCData(oldp+3609,((0x1fU & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b 
                                                  >> 0x10U))),5);
            tracep->chgIData(oldp+3610,((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                                         | vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgIData(oldp+3611,((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                                         & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgIData(oldp+3612,((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                                         ^ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgIData(oldp+3613,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result),32);
            tracep->chgBit(oldp+3614,((1U & (((IData)(0x20U) 
                                              - (0x1fU 
                                                 & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b)) 
                                             >> 5U))));
            tracep->chgQData(oldp+3615,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_slow__DOT__multdiv_i__imd_val_d_o[0]),34);
            tracep->chgQData(oldp+3617,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_slow__DOT__multdiv_i__imd_val_d_o[1]),34);
            tracep->chgCData(oldp+3619,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_d),3);
            tracep->chgQData(oldp+3620,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__accum_window_d),33);
            tracep->chgQData(oldp+3622,((0x1ffffffffULL 
                                         & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext)),33);
            tracep->chgQData(oldp+3624,((0x1ffffffffULL 
                                         & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                            >> 1U))),33);
            tracep->chgCData(oldp+3626,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__multdiv_count_d),5);
            tracep->chgQData(oldp+3627,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_shift_d),33);
            tracep->chgQData(oldp+3629,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_shift_d),33);
            tracep->chgQData(oldp+3631,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_a_ext),33);
            tracep->chgQData(oldp+3633,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_b_ext),33);
            tracep->chgBit(oldp+3635,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__sign_a));
            tracep->chgBit(oldp+3636,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__sign_b));
            tracep->chgQData(oldp+3637,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__next_quotient),33);
            tracep->chgIData(oldp+3639,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__next_remainder),32);
            tracep->chgIData(oldp+3640,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__op_numerator_d),32);
            tracep->chgBit(oldp+3641,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__is_greater_equal));
            tracep->chgBit(oldp+3642,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__div_by_zero_d));
            tracep->chgBit(oldp+3643,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pmp_req_err
                                      [1U]));
            tracep->chgCData(oldp+3644,((3U & (IData)(
                                                      (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                       >> 1U)))),2);
            tracep->chgBit(oldp+3645,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__split_misaligned_access));
            tracep->chgIData(oldp+3646,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__exception_pc),32);
            tracep->chgIData(oldp+3647,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_d),18);
            tracep->chgIData(oldp+3648,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_d),32);
            tracep->chgCData(oldp+3649,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_d),6);
            tracep->chgIData(oldp+3650,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtval_d),32);
            tracep->chgIData(oldp+3651,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_mtvec_init)
                                          ? 1U : (1U 
                                                  | (0xffffff00U 
                                                     & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)))),32);
            tracep->chgIData(oldp+3652,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__depc_d),32);
            tracep->chgBit(oldp+3653,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_en));
            tracep->chgCData(oldp+3654,((0x1fU & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr))),5);
            tracep->chgCData(oldp+3655,((0x3fU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)),6);
            tracep->chgIData(oldp+3656,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int),32);
            tracep->chgBit(oldp+3657,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr));
            tracep->chgCData(oldp+3658,((7U & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr) 
                                               >> 5U))),3);
            tracep->chgCData(oldp+3659,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [0U]),6);
            tracep->chgCData(oldp+3660,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [1U]),6);
            tracep->chgCData(oldp+3661,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [2U]),6);
            tracep->chgCData(oldp+3662,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [3U]),6);
            tracep->chgCData(oldp+3663,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [4U]),6);
            tracep->chgCData(oldp+3664,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [5U]),6);
            tracep->chgCData(oldp+3665,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [6U]),6);
            tracep->chgCData(oldp+3666,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [7U]),6);
            tracep->chgCData(oldp+3667,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [8U]),6);
            tracep->chgCData(oldp+3668,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [9U]),6);
            tracep->chgCData(oldp+3669,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [0xaU]),6);
            tracep->chgCData(oldp+3670,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [0xbU]),6);
            tracep->chgCData(oldp+3671,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [0xcU]),6);
            tracep->chgCData(oldp+3672,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [0xdU]),6);
            tracep->chgCData(oldp+3673,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [0xeU]),6);
            tracep->chgCData(oldp+3674,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [0xfU]),6);
            tracep->chgBit(oldp+3675,(((2U > vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                        ? (1U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                        : 1U)));
            tracep->chgBit(oldp+3676,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 2U))));
            tracep->chgBit(oldp+3677,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 1U))));
            tracep->chgBit(oldp+3678,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 2U))));
            tracep->chgCData(oldp+3679,((7U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 3U))),3);
            tracep->chgBit(oldp+3680,((1U & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
            tracep->chgIData(oldp+3681,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_d),18);
            tracep->chgCData(oldp+3682,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [0U]),6);
            tracep->chgCData(oldp+3683,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [1U]),6);
            tracep->chgCData(oldp+3684,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [2U]),6);
            tracep->chgCData(oldp+3685,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [3U]),6);
            tracep->chgCData(oldp+3686,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [4U]),6);
            tracep->chgCData(oldp+3687,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [5U]),6);
            tracep->chgCData(oldp+3688,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [6U]),6);
            tracep->chgCData(oldp+3689,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [7U]),6);
            tracep->chgCData(oldp+3690,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [8U]),6);
            tracep->chgCData(oldp+3691,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [9U]),6);
            tracep->chgCData(oldp+3692,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [0xaU]),6);
            tracep->chgCData(oldp+3693,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [0xbU]),6);
            tracep->chgCData(oldp+3694,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [0xcU]),6);
            tracep->chgCData(oldp+3695,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [0xdU]),6);
            tracep->chgCData(oldp+3696,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [0xeU]),6);
            tracep->chgCData(oldp+3697,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                                        [0xfU]),6);
            tracep->chgCData(oldp+3698,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                                        [0U]),2);
            tracep->chgCData(oldp+3699,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__priv_mode_i
                                        [1U]),2);
            tracep->chgQData(oldp+3700,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i[0]),34);
            tracep->chgQData(oldp+3702,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellinp__g_pmp__DOT__pmp_i__pmp_req_addr_i[1]),34);
            tracep->chgBit(oldp+3704,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__g_pmp__DOT__pmp_i__pmp_req_err_o[0]));
            tracep->chgBit(oldp+3705,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT____Vcellout__g_pmp__DOT__pmp_i__pmp_req_err_o[1]));
            tracep->chgIData(oldp+3706,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_gt),32);
            tracep->chgIData(oldp+3707,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_lt),32);
            tracep->chgIData(oldp+3708,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_eq),32);
            tracep->chgIData(oldp+3709,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__region_match_all),32);
            tracep->chgCData(oldp+3710,(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__g_pmp__DOT__pmp_i__DOT__access_fault),2);
            __Vtemp1556[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                [1U][0U];
            __Vtemp1556[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                [1U][1U];
            __Vtemp1556[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                [1U][2U];
            tracep->chgWData(oldp+3711,(__Vtemp1556),86);
            tracep->chgCData(oldp+3714,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__device_sel_h1),2);
            __Vtemp1557[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                [0U][0U];
            __Vtemp1557[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                [0U][1U];
            __Vtemp1557[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                [0U][2U];
            tracep->chgWData(oldp+3715,(__Vtemp1557),86);
            __Vtemp1558[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                [1U][0U];
            __Vtemp1558[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                [1U][1U];
            __Vtemp1558[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                [1U][2U];
            tracep->chgWData(oldp+3718,(__Vtemp1558),86);
            __Vtemp1559[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                [2U][0U];
            __Vtemp1559[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                [2U][1U];
            __Vtemp1559[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                [2U][2U];
            tracep->chgWData(oldp+3721,(__Vtemp1559),86);
            tracep->chgCData(oldp+3724,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__device_sel_h2),4);
            __Vtemp1560[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [0U][0U];
            __Vtemp1560[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [0U][1U];
            __Vtemp1560[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [0U][2U];
            tracep->chgWData(oldp+3725,(__Vtemp1560),86);
            __Vtemp1561[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [1U][0U];
            __Vtemp1561[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [1U][1U];
            __Vtemp1561[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [1U][2U];
            tracep->chgWData(oldp+3728,(__Vtemp1561),86);
            __Vtemp1562[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [2U][0U];
            __Vtemp1562[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [2U][1U];
            __Vtemp1562[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [2U][2U];
            tracep->chgWData(oldp+3731,(__Vtemp1562),86);
            __Vtemp1563[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [3U][0U];
            __Vtemp1563[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [3U][1U];
            __Vtemp1563[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [3U][2U];
            tracep->chgWData(oldp+3734,(__Vtemp1563),86);
            __Vtemp1564[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [4U][0U];
            __Vtemp1564[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [4U][1U];
            __Vtemp1564[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [4U][2U];
            tracep->chgWData(oldp+3737,(__Vtemp1564),86);
            __Vtemp1565[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [5U][0U];
            __Vtemp1565[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [5U][1U];
            __Vtemp1565[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [5U][2U];
            tracep->chgWData(oldp+3740,(__Vtemp1565),86);
            __Vtemp1566[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [6U][0U];
            __Vtemp1566[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [6U][1U];
            __Vtemp1566[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [6U][2U];
            tracep->chgWData(oldp+3743,(__Vtemp1566),86);
            __Vtemp1567[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [7U][0U];
            __Vtemp1567[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [7U][1U];
            __Vtemp1567[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [7U][2U];
            tracep->chgWData(oldp+3746,(__Vtemp1567),86);
            __Vtemp1568[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [8U][0U];
            __Vtemp1568[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [8U][1U];
            __Vtemp1568[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__h2_s1n_sm1
                [8U][2U];
            tracep->chgWData(oldp+3749,(__Vtemp1568),86);
            __Vtemp1569[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                [0U][0U];
            __Vtemp1569[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                [0U][1U];
            __Vtemp1569[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                [0U][2U];
            tracep->chgWData(oldp+3752,(__Vtemp1569),86);
            __Vtemp1570[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                [1U][0U];
            __Vtemp1570[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                [1U][1U];
            __Vtemp1570[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                [1U][2U];
            tracep->chgWData(oldp+3755,(__Vtemp1570),86);
            __Vtemp1571[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                [2U][0U];
            __Vtemp1571[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                [2U][1U];
            __Vtemp1571[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o
                [2U][2U];
            tracep->chgWData(oldp+3758,(__Vtemp1571),86);
            tracep->chgCData(oldp+3761,((3U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])),2);
            tracep->chgWData(oldp+3762,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_t_o),86);
            tracep->chgBit(oldp+3765,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__hold_all_requests));
            __Vtemp1572[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [0U][0U];
            __Vtemp1572[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [0U][1U];
            __Vtemp1572[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [0U][2U];
            tracep->chgWData(oldp+3766,(__Vtemp1572),86);
            __Vtemp1573[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [1U][0U];
            __Vtemp1573[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [1U][1U];
            __Vtemp1573[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [1U][2U];
            tracep->chgWData(oldp+3769,(__Vtemp1573),86);
            __Vtemp1574[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [2U][0U];
            __Vtemp1574[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [2U][1U];
            __Vtemp1574[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [2U][2U];
            tracep->chgWData(oldp+3772,(__Vtemp1574),86);
            __Vtemp1575[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [3U][0U];
            __Vtemp1575[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [3U][1U];
            __Vtemp1575[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [3U][2U];
            tracep->chgWData(oldp+3775,(__Vtemp1575),86);
            tracep->chgBit(oldp+3778,((1U & (vlTOPp->azadi_soc_top__DOT__ifu_to_xbar[2U] 
                                             >> 0x15U))));
            tracep->chgWData(oldp+3779,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i),86);
            tracep->chgBit(oldp+3782,((1U & vlTOPp->azadi_soc_top__DOT__ifu_to_xbar[0U])));
            __Vtemp1576[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [3U][0U];
            __Vtemp1576[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [3U][1U];
            __Vtemp1576[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [3U][2U];
            tracep->chgWData(oldp+3783,(__Vtemp1576),86);
            __Vtemp1577[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [0U][0U];
            __Vtemp1577[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [0U][1U];
            __Vtemp1577[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [0U][2U];
            tracep->chgWData(oldp+3786,(__Vtemp1577),86);
            __Vtemp1578[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [1U][0U];
            __Vtemp1578[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [1U][1U];
            __Vtemp1578[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [1U][2U];
            tracep->chgWData(oldp+3789,(__Vtemp1578),86);
            __Vtemp1579[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [2U][0U];
            __Vtemp1579[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [2U][1U];
            __Vtemp1579[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [2U][2U];
            tracep->chgWData(oldp+3792,(__Vtemp1579),86);
            __Vtemp1580[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [3U][0U];
            __Vtemp1580[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [3U][1U];
            __Vtemp1580[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [3U][2U];
            tracep->chgWData(oldp+3795,(__Vtemp1580),86);
            __Vtemp1581[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [4U][0U];
            __Vtemp1581[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [4U][1U];
            __Vtemp1581[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [4U][2U];
            tracep->chgWData(oldp+3798,(__Vtemp1581),86);
            __Vtemp1582[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [5U][0U];
            __Vtemp1582[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [5U][1U];
            __Vtemp1582[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [5U][2U];
            tracep->chgWData(oldp+3801,(__Vtemp1582),86);
            __Vtemp1583[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [6U][0U];
            __Vtemp1583[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [6U][1U];
            __Vtemp1583[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [6U][2U];
            tracep->chgWData(oldp+3804,(__Vtemp1583),86);
            __Vtemp1584[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [7U][0U];
            __Vtemp1584[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [7U][1U];
            __Vtemp1584[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [7U][2U];
            tracep->chgWData(oldp+3807,(__Vtemp1584),86);
            __Vtemp1585[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [8U][0U];
            __Vtemp1585[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [8U][1U];
            __Vtemp1585[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o
                [8U][2U];
            tracep->chgWData(oldp+3810,(__Vtemp1585),86);
            tracep->chgCData(oldp+3813,((0xfU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[0U])),4);
            tracep->chgWData(oldp+3814,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_t_o),86);
            tracep->chgBit(oldp+3817,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__hold_all_requests));
            __Vtemp1586[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [0U][0U];
            __Vtemp1586[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [0U][1U];
            __Vtemp1586[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [0U][2U];
            tracep->chgWData(oldp+3818,(__Vtemp1586),86);
            __Vtemp1587[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [1U][0U];
            __Vtemp1587[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [1U][1U];
            __Vtemp1587[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [1U][2U];
            tracep->chgWData(oldp+3821,(__Vtemp1587),86);
            __Vtemp1588[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [2U][0U];
            __Vtemp1588[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [2U][1U];
            __Vtemp1588[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [2U][2U];
            tracep->chgWData(oldp+3824,(__Vtemp1588),86);
            __Vtemp1589[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [3U][0U];
            __Vtemp1589[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [3U][1U];
            __Vtemp1589[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [3U][2U];
            tracep->chgWData(oldp+3827,(__Vtemp1589),86);
            __Vtemp1590[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [4U][0U];
            __Vtemp1590[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [4U][1U];
            __Vtemp1590[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [4U][2U];
            tracep->chgWData(oldp+3830,(__Vtemp1590),86);
            __Vtemp1591[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [5U][0U];
            __Vtemp1591[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [5U][1U];
            __Vtemp1591[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [5U][2U];
            tracep->chgWData(oldp+3833,(__Vtemp1591),86);
            __Vtemp1592[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [6U][0U];
            __Vtemp1592[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [6U][1U];
            __Vtemp1592[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [6U][2U];
            tracep->chgWData(oldp+3836,(__Vtemp1592),86);
            __Vtemp1593[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [7U][0U];
            __Vtemp1593[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [7U][1U];
            __Vtemp1593[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [7U][2U];
            tracep->chgWData(oldp+3839,(__Vtemp1593),86);
            __Vtemp1594[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [8U][0U];
            __Vtemp1594[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [8U][1U];
            __Vtemp1594[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [8U][2U];
            tracep->chgWData(oldp+3842,(__Vtemp1594),86);
            __Vtemp1595[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [9U][0U];
            __Vtemp1595[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [9U][1U];
            __Vtemp1595[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [9U][2U];
            tracep->chgWData(oldp+3845,(__Vtemp1595),86);
            tracep->chgBit(oldp+3848,((1U & (vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[2U] 
                                             >> 0x15U))));
            tracep->chgWData(oldp+3849,(vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i),88);
            tracep->chgBit(oldp+3852,((1U & vlTOPp->azadi_soc_top__DOT__lsu_to_xbar[0U])));
            __Vtemp1596[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [9U][0U];
            __Vtemp1596[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [9U][1U];
            __Vtemp1596[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [9U][2U];
            tracep->chgWData(oldp+3853,(__Vtemp1596),86);
            tracep->chgBit(oldp+3856,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__req));
            tracep->chgSData(oldp+3857,(((0x200000U 
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
            tracep->chgBit(oldp+3858,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o));
            tracep->chgIData(oldp+3859,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__wdata_int),32);
            tracep->chgIData(oldp+3860,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__wmask_int),32);
            tracep->chgSData(oldp+3861,(((((4U != (7U 
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
            tracep->chgBit(oldp+3862,(((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__req) 
                                       & (~ (IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__we_o)))));
            tracep->chgCData(oldp+3863,((0x1eU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                                         [0U][1U])),5);
            tracep->chgBit(oldp+3864,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__tlul_error));
            tracep->chgIData(oldp+3865,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__unnamedblk1__DOT__i),32);
            tracep->chgBit(oldp+3866,((((0U == (7U 
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
            tracep->chgBit(oldp+3867,((((IData)(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk) 
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
            tracep->chgBit(oldp+3868,((0U == (7U & 
                                              (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                                               [0U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+3869,((1U == (7U & 
                                              (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                                               [0U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+3870,((4U == (7U & 
                                              (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                                               [0U][2U] 
                                               >> 0x12U)))));
            tracep->chgBit(oldp+3871,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+3872,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+3873,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk));
            tracep->chgCData(oldp+3874,((0xfU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                                                      [0U][2U] 
                                                      << 0x1bU) 
                                                     | (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__s1n_to_dv
                                                        [0U][1U] 
                                                        >> 5U)))))),4);
            tracep->chgBit(oldp+3875,(vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            __Vtemp1611[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_h_i
                [0U][0U];
            __Vtemp1611[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_h_i
                [0U][1U];
            __Vtemp1611[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_h_i
                [0U][2U];
            tracep->chgWData(oldp+3876,(__Vtemp1611),86);
            __Vtemp1612[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_h_i
                [1U][0U];
            __Vtemp1612[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_h_i
                [1U][1U];
            __Vtemp1612[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_h_i
                [1U][2U];
            tracep->chgWData(oldp+3879,(__Vtemp1612),86);
            tracep->chgCData(oldp+3882,((0xfeU & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+3883,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgCData(oldp+3884,((1U | (0xfeU 
                                               & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+3885,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__DCCM.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            __Vtemp1617[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.tl_h_i
                [0U][0U];
            __Vtemp1617[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.tl_h_i
                [0U][1U];
            __Vtemp1617[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.tl_h_i
                [0U][2U];
            tracep->chgWData(oldp+3886,(__Vtemp1617),86);
            __Vtemp1618[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.tl_h_i
                [1U][0U];
            __Vtemp1618[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.tl_h_i
                [1U][1U];
            __Vtemp1618[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.tl_h_i
                [1U][2U];
            tracep->chgWData(oldp+3889,(__Vtemp1618),86);
            tracep->chgCData(oldp+3892,((0xfeU & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+3893,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgCData(oldp+3894,((1U | (0xfeU 
                                               & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+3895,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__FLASH_CTRL.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            __Vtemp1623[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.tl_h_i
                [0U][0U];
            __Vtemp1623[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.tl_h_i
                [0U][1U];
            __Vtemp1623[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.tl_h_i
                [0U][2U];
            tracep->chgWData(oldp+3896,(__Vtemp1623),86);
            __Vtemp1624[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.tl_h_i
                [1U][0U];
            __Vtemp1624[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.tl_h_i
                [1U][1U];
            __Vtemp1624[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.tl_h_i
                [1U][2U];
            tracep->chgWData(oldp+3899,(__Vtemp1624),86);
            tracep->chgCData(oldp+3902,((0xfeU & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+3903,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgCData(oldp+3904,((1U | (0xfeU 
                                               & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+3905,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_0.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            __Vtemp1629[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.tl_h_i
                [0U][0U];
            __Vtemp1629[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.tl_h_i
                [0U][1U];
            __Vtemp1629[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.tl_h_i
                [0U][2U];
            tracep->chgWData(oldp+3906,(__Vtemp1629),86);
            __Vtemp1630[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.tl_h_i
                [1U][0U];
            __Vtemp1630[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.tl_h_i
                [1U][1U];
            __Vtemp1630[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.tl_h_i
                [1U][2U];
            tracep->chgWData(oldp+3909,(__Vtemp1630),86);
            tracep->chgCData(oldp+3912,((0xfeU & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+3913,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgCData(oldp+3914,((1U | (0xfeU 
                                               & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+3915,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_1.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            __Vtemp1635[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.tl_h_i
                [0U][0U];
            __Vtemp1635[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.tl_h_i
                [0U][1U];
            __Vtemp1635[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.tl_h_i
                [0U][2U];
            tracep->chgWData(oldp+3916,(__Vtemp1635),86);
            __Vtemp1636[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.tl_h_i
                [1U][0U];
            __Vtemp1636[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.tl_h_i
                [1U][1U];
            __Vtemp1636[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.tl_h_i
                [1U][2U];
            tracep->chgWData(oldp+3919,(__Vtemp1636),86);
            tracep->chgCData(oldp+3922,((0xfeU & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+3923,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgCData(oldp+3924,((1U | (0xfeU 
                                               & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+3925,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_2.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            __Vtemp1641[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.tl_h_i
                [0U][0U];
            __Vtemp1641[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.tl_h_i
                [0U][1U];
            __Vtemp1641[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.tl_h_i
                [0U][2U];
            tracep->chgWData(oldp+3926,(__Vtemp1641),86);
            __Vtemp1642[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.tl_h_i
                [1U][0U];
            __Vtemp1642[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.tl_h_i
                [1U][1U];
            __Vtemp1642[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.tl_h_i
                [1U][2U];
            tracep->chgWData(oldp+3929,(__Vtemp1642),86);
            tracep->chgCData(oldp+3932,((0xfeU & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+3933,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgCData(oldp+3934,((1U | (0xfeU 
                                               & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+3935,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_3.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            __Vtemp1647[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.tl_h_i
                [0U][0U];
            __Vtemp1647[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.tl_h_i
                [0U][1U];
            __Vtemp1647[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.tl_h_i
                [0U][2U];
            tracep->chgWData(oldp+3936,(__Vtemp1647),86);
            __Vtemp1648[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.tl_h_i
                [1U][0U];
            __Vtemp1648[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.tl_h_i
                [1U][1U];
            __Vtemp1648[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.tl_h_i
                [1U][2U];
            tracep->chgWData(oldp+3939,(__Vtemp1648),86);
            tracep->chgCData(oldp+3942,((0xfeU & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+3943,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgCData(oldp+3944,((1U | (0xfeU 
                                               & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+3945,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__TIMER_4.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            __Vtemp1653[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.tl_h_i
                [0U][0U];
            __Vtemp1653[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.tl_h_i
                [0U][1U];
            __Vtemp1653[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.tl_h_i
                [0U][2U];
            tracep->chgWData(oldp+3946,(__Vtemp1653),86);
            __Vtemp1654[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.tl_h_i
                [1U][0U];
            __Vtemp1654[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.tl_h_i
                [1U][1U];
            __Vtemp1654[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.tl_h_i
                [1U][2U];
            tracep->chgWData(oldp+3949,(__Vtemp1654),86);
            tracep->chgCData(oldp+3952,((0xfeU & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+3953,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgCData(oldp+3954,((1U | (0xfeU 
                                               & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+3955,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__PLIC.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            __Vtemp1659[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                [0U][0U];
            __Vtemp1659[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                [0U][1U];
            __Vtemp1659[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                [0U][2U];
            tracep->chgWData(oldp+3956,(__Vtemp1659),86);
            __Vtemp1660[0U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                [1U][0U];
            __Vtemp1660[1U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                [1U][1U];
            __Vtemp1660[2U] = vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                [1U][2U];
            tracep->chgWData(oldp+3959,(__Vtemp1660),86);
            tracep->chgCData(oldp+3962,((0xfeU & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                                  [0U][2U] 
                                                  >> 4U))),8);
            tracep->chgBit(oldp+3963,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                             [0U][2U] 
                                             >> 0xcU))));
            tracep->chgCData(oldp+3964,((1U | (0xfeU 
                                               & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                                  [1U][2U] 
                                                  >> 4U)))),8);
            tracep->chgBit(oldp+3965,((1U & (vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__XBAR_PERI.tl_h_i
                                             [1U][2U] 
                                             >> 0xcU))));
            __Vtemp1665[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [0U][0U];
            __Vtemp1665[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [0U][1U];
            __Vtemp1665[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [0U][2U];
            tracep->chgWData(oldp+3966,(__Vtemp1665),86);
            tracep->chgWData(oldp+3969,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+3972,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [0U][2U] 
                                             >> 0x15U))));
            __Vtemp1671[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                               [0U][0U]);
            __Vtemp1671[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                [0U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [0U][1U]));
            __Vtemp1671[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                [0U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [0U][2U]));
            tracep->chgWData(oldp+3973,(__Vtemp1671),85);
            tracep->chgBit(oldp+3976,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                       [0U][0U])));
            __Vtemp1673[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [1U][0U];
            __Vtemp1673[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [1U][1U];
            __Vtemp1673[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [1U][2U];
            tracep->chgWData(oldp+3977,(__Vtemp1673),86);
            tracep->chgWData(oldp+3980,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+3983,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [1U][2U] 
                                             >> 0x15U))));
            __Vtemp1679[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                               [1U][0U]);
            __Vtemp1679[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                [1U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [1U][1U]));
            __Vtemp1679[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                [1U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [1U][2U]));
            tracep->chgWData(oldp+3984,(__Vtemp1679),85);
            tracep->chgBit(oldp+3987,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                       [1U][0U])));
            __Vtemp1681[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [2U][0U];
            __Vtemp1681[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [2U][1U];
            __Vtemp1681[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                [2U][2U];
            tracep->chgWData(oldp+3988,(__Vtemp1681),86);
            tracep->chgWData(oldp+3991,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+3994,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [2U][2U] 
                                             >> 0x15U))));
            __Vtemp1687[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                               [2U][0U]);
            __Vtemp1687[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                [2U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [2U][1U]));
            __Vtemp1687[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                [2U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                             [2U][2U]));
            tracep->chgWData(oldp+3995,(__Vtemp1687),85);
            tracep->chgBit(oldp+3998,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_1__DOT__tl_u_o
                                       [2U][0U])));
            __Vtemp1689[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [0U][0U];
            __Vtemp1689[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [0U][1U];
            __Vtemp1689[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [0U][2U];
            tracep->chgWData(oldp+3999,(__Vtemp1689),86);
            tracep->chgWData(oldp+4002,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+4005,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [0U][2U] 
                                             >> 0x15U))));
            __Vtemp1695[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                               [0U][0U]);
            __Vtemp1695[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [0U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [0U][1U]));
            __Vtemp1695[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [0U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [0U][2U]));
            tracep->chgWData(oldp+4006,(__Vtemp1695),85);
            tracep->chgBit(oldp+4009,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [0U][0U])));
            __Vtemp1697[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [1U][0U];
            __Vtemp1697[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [1U][1U];
            __Vtemp1697[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [1U][2U];
            tracep->chgWData(oldp+4010,(__Vtemp1697),86);
            tracep->chgWData(oldp+4013,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+4016,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [1U][2U] 
                                             >> 0x15U))));
            __Vtemp1703[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                               [1U][0U]);
            __Vtemp1703[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [1U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [1U][1U]));
            __Vtemp1703[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [1U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [1U][2U]));
            tracep->chgWData(oldp+4017,(__Vtemp1703),85);
            tracep->chgBit(oldp+4020,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [1U][0U])));
            __Vtemp1705[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [2U][0U];
            __Vtemp1705[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [2U][1U];
            __Vtemp1705[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [2U][2U];
            tracep->chgWData(oldp+4021,(__Vtemp1705),86);
            tracep->chgWData(oldp+4024,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+4027,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [2U][2U] 
                                             >> 0x15U))));
            __Vtemp1711[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                               [2U][0U]);
            __Vtemp1711[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [2U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [2U][1U]));
            __Vtemp1711[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [2U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [2U][2U]));
            tracep->chgWData(oldp+4028,(__Vtemp1711),85);
            tracep->chgBit(oldp+4031,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [2U][0U])));
            __Vtemp1713[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [3U][0U];
            __Vtemp1713[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [3U][1U];
            __Vtemp1713[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [3U][2U];
            tracep->chgWData(oldp+4032,(__Vtemp1713),86);
            tracep->chgWData(oldp+4035,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+4038,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [3U][2U] 
                                             >> 0x15U))));
            __Vtemp1719[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                               [3U][0U]);
            __Vtemp1719[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [3U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [3U][1U]));
            __Vtemp1719[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [3U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [3U][2U]));
            tracep->chgWData(oldp+4039,(__Vtemp1719),85);
            tracep->chgBit(oldp+4042,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [3U][0U])));
            __Vtemp1721[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [4U][0U];
            __Vtemp1721[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [4U][1U];
            __Vtemp1721[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [4U][2U];
            tracep->chgWData(oldp+4043,(__Vtemp1721),86);
            tracep->chgWData(oldp+4046,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+4049,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [4U][2U] 
                                             >> 0x15U))));
            __Vtemp1727[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                               [4U][0U]);
            __Vtemp1727[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [4U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [4U][1U]));
            __Vtemp1727[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [4U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [4U][2U]));
            tracep->chgWData(oldp+4050,(__Vtemp1727),85);
            tracep->chgBit(oldp+4053,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [4U][0U])));
            __Vtemp1729[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [5U][0U];
            __Vtemp1729[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [5U][1U];
            __Vtemp1729[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [5U][2U];
            tracep->chgWData(oldp+4054,(__Vtemp1729),86);
            tracep->chgWData(oldp+4057,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+4060,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [5U][2U] 
                                             >> 0x15U))));
            __Vtemp1735[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                               [5U][0U]);
            __Vtemp1735[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [5U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [5U][1U]));
            __Vtemp1735[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [5U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [5U][2U]));
            tracep->chgWData(oldp+4061,(__Vtemp1735),85);
            tracep->chgBit(oldp+4064,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [5U][0U])));
            __Vtemp1737[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [6U][0U];
            __Vtemp1737[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [6U][1U];
            __Vtemp1737[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [6U][2U];
            tracep->chgWData(oldp+4065,(__Vtemp1737),86);
            tracep->chgWData(oldp+4068,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+4071,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [6U][2U] 
                                             >> 0x15U))));
            __Vtemp1743[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                               [6U][0U]);
            __Vtemp1743[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [6U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [6U][1U]));
            __Vtemp1743[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [6U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [6U][2U]));
            tracep->chgWData(oldp+4072,(__Vtemp1743),85);
            tracep->chgBit(oldp+4075,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [6U][0U])));
            __Vtemp1745[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [7U][0U];
            __Vtemp1745[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [7U][1U];
            __Vtemp1745[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [7U][2U];
            tracep->chgWData(oldp+4076,(__Vtemp1745),86);
            tracep->chgWData(oldp+4079,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+4082,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [7U][2U] 
                                             >> 0x15U))));
            __Vtemp1751[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                               [7U][0U]);
            __Vtemp1751[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [7U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [7U][1U]));
            __Vtemp1751[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [7U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [7U][2U]));
            tracep->chgWData(oldp+4083,(__Vtemp1751),85);
            tracep->chgBit(oldp+4086,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [7U][0U])));
            __Vtemp1753[0U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [8U][0U];
            __Vtemp1753[1U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [8U][1U];
            __Vtemp1753[2U] = vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                [8U][2U];
            tracep->chgWData(oldp+4087,(__Vtemp1753),86);
            tracep->chgWData(oldp+4090,(vlSymsp->TOP__azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d.tl_d_o),86);
            tracep->chgBit(oldp+4093,((1U & (vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [8U][2U] 
                                             >> 0x15U))));
            __Vtemp1759[0U] = (0xfffffffeU & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                               [8U][0U]);
            __Vtemp1759[1U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [8U][1U]) | (0xfffffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [8U][1U]));
            __Vtemp1759[2U] = ((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                [8U][2U]) | (0x1ffffeU 
                                             & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                             [8U][2U]));
            tracep->chgWData(oldp+4094,(__Vtemp1759),85);
            tracep->chgBit(oldp+4097,((1U & vlTOPp->azadi_soc_top__DOT__main_swith__DOT__host_2__DOT__tl_u_o
                                       [8U][0U])));
        }
        tracep->chgBit(oldp+4098,(vlTOPp->clock));
        tracep->chgBit(oldp+4099,(vlTOPp->reset_ni));
        tracep->chgIData(oldp+4100,(vlTOPp->gpio_i),20);
        tracep->chgIData(oldp+4101,(vlTOPp->gpio_o),20);
        tracep->chgIData(oldp+4102,(vlTOPp->gpio_oe),20);
        tracep->chgBit(oldp+4103,((1U & (~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q) 
                                            & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q) 
                                               | (0U 
                                                  != vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)))))));
        tracep->chgIData(oldp+4104,(((1U & (IData)(
                                                   (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                    >> 2U)))
                                      ? ((1U & (IData)(
                                                       (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                        >> 1U)))
                                          ? ((0xff000000U 
                                              & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                 << 0x18U)) 
                                             | (0xffffffU 
                                                & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                   >> 8U)))
                                          : ((0xffff0000U 
                                              & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                 << 0x10U)) 
                                             | (0xffffU 
                                                & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                   >> 0x10U))))
                                      : ((1U & (IData)(
                                                       (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                        >> 1U)))
                                          ? ((0xffffff00U 
                                              & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc 
                                                   >> 0x18U)))
                                          : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc))),32);
        tracep->chgBit(oldp+4105,((1U & (((((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn)) 
                                            & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec))) 
                                           & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn))) 
                                          & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__illegal_csr_insn_id))) 
                                         & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_fetch_err))))));
        tracep->chgIData(oldp+4106,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                                      ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                                          ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int
                                          : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__result_ex)
                                      : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__result_ex)),32);
        tracep->chgIData(oldp+4107,(((0U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_a_mux_sel))
                                      ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_a_ecc
                                      : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_id)),32);
        tracep->chgIData(oldp+4108,(((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel))
                                      ? ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel))
                                          ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id)
                                              ? 2U : 4U)
                                          : ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel))
                                              ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id)
                                                  ? 2U
                                                  : 4U)
                                              : ((0xfff00000U 
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
                                          ? ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel))
                                              ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id)
                                                  ? 2U
                                                  : 4U)
                                              : ((0xffffe000U 
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
                                          : ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__bt_b_mux_sel))
                                              ? ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id)
                                                  ? 2U
                                                  : 4U)
                                              : vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_i_type)))),32);
        tracep->chgBit(oldp+4109,((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req) 
                                    | (0U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
                                   & (0U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_ns)))));
        tracep->chgBit(oldp+4110,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__perf_instr_ret_wb) 
                                   & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id))));
        tracep->chgBit(oldp+4111,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__fetch_enable_q) 
                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__core_busy_q) 
                                      | (0U != vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__irqs)))));
        tracep->chgBit(oldp+4112,(((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_raw) 
                                     & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_in_ready)) 
                                    & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set))) 
                                   | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                      & (~ ((~ ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_id) 
                                                | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id))) 
                                            | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)))))));
        tracep->chgBit(oldp+4113,((1U & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                         & ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                             ? (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                                 >> 1U) 
                                                & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))
                                             : (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                                 & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                                & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))))));
        tracep->chgIData(oldp+4114,(((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id))
                                      ? 0U : ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id))
                                               ? ((0xffffff00U 
                                                   & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q) 
                                                  | (0x7cU 
                                                     & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__exc_cause) 
                                                        << 2U)))
                                               : (0xffffff00U 
                                                  & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)))),32);
        tracep->chgBit(oldp+4115,((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_new_req) 
                                    & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q))) 
                                   & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__gnt_or_pmp_err)))));
        tracep->chgIData(oldp+4116,((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__pc_set)
                                       ? (0xfffffffeU 
                                          & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n)
                                       : (0xfffffffcU 
                                          & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fetch_addr_q)) 
                                     + (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_new_req) 
                                         & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q))) 
                                        << 2U))),32);
        tracep->chgIData(oldp+4117,((0xfffffffeU & 
                                     ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                       + ((2U & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                 << 1U)) 
                                          | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))) 
                                      << 1U))),32);
        tracep->chgIData(oldp+4118,(((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
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
        tracep->chgBit(oldp+4119,((1U & ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                          ? ((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                               >> 1U) 
                                              & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed))) 
                                             | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q))
                                          : (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                              & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                                             | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                                & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                                   | (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)))))))));
        tracep->chgBit(oldp+4120,((1U & ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                          ? (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                              >> 1U) 
                                             & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))
                                          : (((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_or_pmp_err) 
                                              & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                             & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))))));
        tracep->chgIData(oldp+4121,((0x7fffffffU & 
                                     (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                      + ((2U & ((~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                << 1U)) 
                                         | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))))),31);
        tracep->chgIData(oldp+4122,((0x7fffffffU & 
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
        tracep->chgIData(oldp+4123,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                                      ? 0U : (0x1fU 
                                              & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id 
                                                 >> 0xfU)))),32);
        tracep->chgIData(oldp+4124,(((4U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                      ? ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                          ? 4U : ((1U 
                                                   & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                                   ? 
                                                  ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id)
                                                    ? 2U
                                                    : 4U)
                                                   : 4U))
                                      : ((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                          ? ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                              ? (0xfffff000U 
                                                 & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__instr_rdata_id)
                                              : 4U)
                                          : ((1U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                              ? ((0xfffff000U 
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
        tracep->chgBit(oldp+4125,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__lsu_addr_incr_req) 
                                   | (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec))));
        tracep->chgBit(oldp+4126,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
                                   & (~ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))));
        tracep->chgBit(oldp+4127,(((3U != (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                   & ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                                      | ((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                         & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn))))));
        tracep->chgIData(oldp+4128,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__div_en_id)
                                      ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_slow__DOT__multdiv_i__imd_val_q_i
                                                [0U])
                                      : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext))),32);
        tracep->chgQData(oldp+4129,(((2U & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator))
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
                                                                     (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc))) 
                                                     << 1U)))
                                              : ((1U 
                                                  & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q))
                                                  ? 
                                                 (1ULL 
                                                  | ((QData)((IData)(
                                                                     (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_a_ecc))) 
                                                     << 1U))
                                                  : 
                                                 (1ULL 
                                                  | ((QData)((IData)(
                                                                     (~ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__rf_rdata_b_ecc))) 
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
        tracep->chgBit(oldp+4131,(((6U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q)) 
                                   | ((4U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_slow__DOT__multdiv_i__DOT__md_state_q)) 
                                      & ((0U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator)) 
                                         | (1U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator)))))));
        tracep->chgQData(oldp+4132,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel)
                                      ? vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                                      : (1ULL | ((QData)((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a)) 
                                                 << 1U)))),33);
        tracep->chgBit(oldp+4134,((1U & ((0x80000000U 
                                          & (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                                             ^ vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b))
                                          ? ((vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a 
                                              >> 0x1fU) 
                                             ^ (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                          : (~ (IData)(
                                                       (vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                        >> 0x20U)))))));
        tracep->chgSData(oldp+4135,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
                                      ? (0x1ffdU & vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                      : (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),13);
        tracep->chgBit(oldp+4136,((((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                    & (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                                   & (0x7a0U == (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__csr_addr)))));
        tracep->chgCData(oldp+4137,(((IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we)
                                      ? (IData)(vlTOPp->azadi_soc_top__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be)
                                      : 0xfU)),4);
        tracep->chgIData(oldp+4138,((vlTOPp->azadi_soc_top__DOT__dccm__DOT__rdata_o 
                                     & vlTOPp->azadi_soc_top__DOT__dccm__DOT__data_mem__DOT__rmask)),32);
        tracep->chgQData(oldp+4139,((0x1ffffffffULL 
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
        tracep->chgIData(oldp+4141,(((IData)(vlTOPp->reset_ni)
                                      ? vlTOPp->azadi_soc_top__DOT__iccm__DOT__rdata
                                      : 0U)),32);
        tracep->chgIData(oldp+4142,((((IData)(vlTOPp->reset_ni)
                                       ? vlTOPp->azadi_soc_top__DOT__iccm__DOT__rdata
                                       : 0U) & vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask)),32);
        tracep->chgIData(oldp+4143,((((IData)(vlTOPp->reset_ni)
                                       ? vlTOPp->azadi_soc_top__DOT__iccm__DOT__rdata
                                       : 0U) & vlTOPp->azadi_soc_top__DOT__iccm__DOT__inst_mem__DOT__rmask)),32);
        tracep->chgQData(oldp+4144,((0x1ffffffffULL 
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
        tracep->chgIData(oldp+4146,(vlTOPp->gpio_i),32);
        tracep->chgIData(oldp+4147,((((~ vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_q) 
                                      & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_d) 
                                     & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[4U])),32);
        tracep->chgIData(oldp+4148,(((vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_q 
                                      & (~ vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_d)) 
                                     & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[3U])),32);
        tracep->chgIData(oldp+4149,(((((((~ vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_q) 
                                         & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_d) 
                                        & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[4U]) 
                                       | ((vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_q 
                                           & (~ vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_d)) 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[3U])) 
                                      | ((~ vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_d) 
                                         & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[1U])) 
                                     | (vlTOPp->azadi_soc_top__DOT__GPIO__DOT__data_in_d 
                                        & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[2U]))),32);
        tracep->chgBit(oldp+4150,((1U & vlTOPp->gpio_i)));
        tracep->chgBit(oldp+4151,((1U & ((1U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q)
                                          : vlTOPp->gpio_i))));
        tracep->chgBit(oldp+4152,((1U & (vlTOPp->gpio_i 
                                         >> 1U))));
        tracep->chgBit(oldp+4153,((1U & ((2U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 1U)))));
        tracep->chgBit(oldp+4154,((1U & (vlTOPp->gpio_i 
                                         >> 2U))));
        tracep->chgBit(oldp+4155,((1U & ((4U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 2U)))));
        tracep->chgBit(oldp+4156,((1U & (vlTOPp->gpio_i 
                                         >> 3U))));
        tracep->chgBit(oldp+4157,((1U & ((8U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 3U)))));
        tracep->chgBit(oldp+4158,((1U & (vlTOPp->gpio_i 
                                         >> 4U))));
        tracep->chgBit(oldp+4159,((1U & ((0x10U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 4U)))));
        tracep->chgBit(oldp+4160,((1U & (vlTOPp->gpio_i 
                                         >> 5U))));
        tracep->chgBit(oldp+4161,((1U & ((0x20U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 5U)))));
        tracep->chgBit(oldp+4162,((1U & (vlTOPp->gpio_i 
                                         >> 6U))));
        tracep->chgBit(oldp+4163,((1U & ((0x40U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 6U)))));
        tracep->chgBit(oldp+4164,((1U & (vlTOPp->gpio_i 
                                         >> 7U))));
        tracep->chgBit(oldp+4165,((1U & ((0x80U & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 7U)))));
        tracep->chgBit(oldp+4166,((1U & (vlTOPp->gpio_i 
                                         >> 8U))));
        tracep->chgBit(oldp+4167,((1U & ((0x100U & 
                                          vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 8U)))));
        tracep->chgBit(oldp+4168,((1U & (vlTOPp->gpio_i 
                                         >> 9U))));
        tracep->chgBit(oldp+4169,((1U & ((0x200U & 
                                          vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 9U)))));
        tracep->chgBit(oldp+4170,((1U & (vlTOPp->gpio_i 
                                         >> 0xaU))));
        tracep->chgBit(oldp+4171,((1U & ((0x400U & 
                                          vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xaU)))));
        tracep->chgBit(oldp+4172,((1U & (vlTOPp->gpio_i 
                                         >> 0xbU))));
        tracep->chgBit(oldp+4173,((1U & ((0x800U & 
                                          vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xbU)))));
        tracep->chgBit(oldp+4174,((1U & (vlTOPp->gpio_i 
                                         >> 0xcU))));
        tracep->chgBit(oldp+4175,((1U & ((0x1000U & 
                                          vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xcU)))));
        tracep->chgBit(oldp+4176,((1U & (vlTOPp->gpio_i 
                                         >> 0xdU))));
        tracep->chgBit(oldp+4177,((1U & ((0x2000U & 
                                          vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xdU)))));
        tracep->chgBit(oldp+4178,((1U & (vlTOPp->gpio_i 
                                         >> 0xeU))));
        tracep->chgBit(oldp+4179,((1U & ((0x4000U & 
                                          vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xeU)))));
        tracep->chgBit(oldp+4180,((1U & (vlTOPp->gpio_i 
                                         >> 0xfU))));
        tracep->chgBit(oldp+4181,((1U & ((0x8000U & 
                                          vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0xfU)))));
        tracep->chgBit(oldp+4182,((1U & (vlTOPp->gpio_i 
                                         >> 0x10U))));
        tracep->chgBit(oldp+4183,((1U & ((0x10000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x10U)))));
        tracep->chgBit(oldp+4184,((1U & (vlTOPp->gpio_i 
                                         >> 0x11U))));
        tracep->chgBit(oldp+4185,((1U & ((0x20000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x11U)))));
        tracep->chgBit(oldp+4186,((1U & (vlTOPp->gpio_i 
                                         >> 0x12U))));
        tracep->chgBit(oldp+4187,((1U & ((0x40000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x12U)))));
        tracep->chgBit(oldp+4188,((1U & (vlTOPp->gpio_i 
                                         >> 0x13U))));
        tracep->chgBit(oldp+4189,((1U & ((0x80000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x13U)))));
        tracep->chgBit(oldp+4190,((1U & (vlTOPp->gpio_i 
                                         >> 0x14U))));
        tracep->chgBit(oldp+4191,((1U & ((0x100000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x14U)))));
        tracep->chgBit(oldp+4192,((1U & (vlTOPp->gpio_i 
                                         >> 0x15U))));
        tracep->chgBit(oldp+4193,((1U & ((0x200000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x15U)))));
        tracep->chgBit(oldp+4194,((1U & (vlTOPp->gpio_i 
                                         >> 0x16U))));
        tracep->chgBit(oldp+4195,((1U & ((0x400000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x16U)))));
        tracep->chgBit(oldp+4196,((1U & (vlTOPp->gpio_i 
                                         >> 0x17U))));
        tracep->chgBit(oldp+4197,((1U & ((0x800000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x17U)))));
        tracep->chgBit(oldp+4198,((1U & (vlTOPp->gpio_i 
                                         >> 0x18U))));
        tracep->chgBit(oldp+4199,((1U & ((0x1000000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x18U)))));
        tracep->chgBit(oldp+4200,((1U & (vlTOPp->gpio_i 
                                         >> 0x19U))));
        tracep->chgBit(oldp+4201,((1U & ((0x2000000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x19U)))));
        tracep->chgBit(oldp+4202,((1U & (vlTOPp->gpio_i 
                                         >> 0x1aU))));
        tracep->chgBit(oldp+4203,((1U & ((0x4000000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1aU)))));
        tracep->chgBit(oldp+4204,((1U & (vlTOPp->gpio_i 
                                         >> 0x1bU))));
        tracep->chgBit(oldp+4205,((1U & ((0x8000000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1bU)))));
        tracep->chgBit(oldp+4206,((1U & (vlTOPp->gpio_i 
                                         >> 0x1cU))));
        tracep->chgBit(oldp+4207,((1U & ((0x10000000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1cU)))));
        tracep->chgBit(oldp+4208,((1U & (vlTOPp->gpio_i 
                                         >> 0x1dU))));
        tracep->chgBit(oldp+4209,((1U & ((0x20000000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1dU)))));
        tracep->chgBit(oldp+4210,((1U & (vlTOPp->gpio_i 
                                         >> 0x1eU))));
        tracep->chgBit(oldp+4211,((1U & ((0x40000000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1eU)))));
        tracep->chgBit(oldp+4212,((1U & (vlTOPp->gpio_i 
                                         >> 0x1fU))));
        tracep->chgBit(oldp+4213,((1U & ((0x80000000U 
                                          & vlTOPp->azadi_soc_top__DOT__GPIO__DOT__reg2hw[0U])
                                          ? (IData)(vlTOPp->azadi_soc_top__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q)
                                          : (vlTOPp->gpio_i 
                                             >> 0x1fU)))));
    }
}
