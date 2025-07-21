    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 13;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (rtP)
        ;%
            section.nData     = 129;
            section.data(129)  = dumData; %prealloc

                    ;% rtP.DemoController_D
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.DemoController_DifferentiatorICPrevScaledInput
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.DemoController_LowerSaturationLimit
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.DemoController_P
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.DemoController_UpperSaturationLimit
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.CompareToConstant_const
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.CompareToConstant_const_au5floo22x
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.Calculateq_icrf2lvlh_mu
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.AttitudeProfileNadirPointing1_primaryAlignment
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.AttitudeProfileNadirPointing1_secondaryAlignment
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 11;

                    ;% rtP.AttitudeProfileNadirPointing1_secondaryConstraint
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 14;

                    ;% rtP.Constant_Value
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 17;

                    ;% rtP.Constant_Value_aihys3dv45
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 18;

                    ;% rtP.Constant_Value_dzq43sg5ph
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 19;

                    ;% rtP.Constant_Value_d0cr3edft5
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 20;

                    ;% rtP.SpacecraftDynamics_startDate
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 21;

                    ;% rtP.SpacecraftDynamics_mass
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 22;

                    ;% rtP.SpacecraftDynamics_emptyMass
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 23;

                    ;% rtP.SpacecraftDynamics_fullMass
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 24;

                    ;% rtP.SpacecraftDynamics_inertia
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 25;

                    ;% rtP.SpacecraftDynamics_emptyInertia
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 34;

                    ;% rtP.SpacecraftDynamics_fullInertia
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 43;

                    ;% rtP.SpacecraftDynamics_semiMajorAxis
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 52;

                    ;% rtP.SpacecraftDynamics_eccentricity
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 53;

                    ;% rtP.SpacecraftDynamics_inclination
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 54;

                    ;% rtP.SpacecraftDynamics_raan
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 55;

                    ;% rtP.SpacecraftDynamics_argPeriapsis
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 56;

                    ;% rtP.SpacecraftDynamics_trueAnomaly
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 57;

                    ;% rtP.SpacecraftDynamics_trueLon
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 58;

                    ;% rtP.SpacecraftDynamics_argLat
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 59;

                    ;% rtP.SpacecraftDynamics_lonPeriapsis
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 60;

                    ;% rtP.SpacecraftDynamics_inertialPosition
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 61;

                    ;% rtP.SpacecraftDynamics_inertialVelocity
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 64;

                    ;% rtP.SpacecraftDynamics_fixedPosition
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 67;

                    ;% rtP.SpacecraftDynamics_fixedVelocity
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 70;

                    ;% rtP.SpacecraftDynamics_attitude
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 73;

                    ;% rtP.SpacecraftDynamics_attitudeRate
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 76;

                    ;% rtP.SpacecraftDynamics_customR
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 79;

                    ;% rtP.SpacecraftDynamics_customF
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 80;

                    ;% rtP.SpacecraftDynamics_customMu
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 81;

                    ;% rtP.SpacecraftDynamics_customJ2
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 82;

                    ;% rtP.SpacecraftDynamics_customOmega
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 83;

                    ;% rtP.SpacecraftDynamics_cbRA
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 84;

                    ;% rtP.SpacecraftDynamics_cbRARate
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 85;

                    ;% rtP.SpacecraftDynamics_cbDec
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 86;

                    ;% rtP.SpacecraftDynamics_cbDecRate
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 87;

                    ;% rtP.SpacecraftDynamics_cbRotAngle
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 88;

                    ;% rtP.SpacecraftDynamics_cbRotRate
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 89;

                    ;% rtP.SpacecraftDynamics_F107ExtrapValue
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 90;

                    ;% rtP.SpacecraftDynamics_MagneticIndexExtrapValue
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 91;

                    ;% rtP.SpacecraftDynamics_fluxFlags
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 92;

                    ;% rtP.SpacecraftDynamics_dragCoeff
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 115;

                    ;% rtP.SpacecraftDynamics_dragArea
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 116;

                    ;% rtP.SpacecraftDynamics_customThirdBodyMu
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 117;

                    ;% rtP.SpacecraftDynamics_reflectivityCoeff
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 118;

                    ;% rtP.SpacecraftDynamics_srpArea
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 119;

                    ;% rtP.SpacecraftDynamics_fluxPressure
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 120;

                    ;% rtP.Gain_Gain
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 121;

                    ;% rtP.Gain_Gain_j3juhszkgk
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 122;

                    ;% rtP.u2_Gain
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 123;

                    ;% rtP.Gain2_Gain
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 124;

                    ;% rtP.Gain_Gain_pl5mkabq1s
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 125;

                    ;% rtP.Gain1_Gain
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 126;

                    ;% rtP.Gain_Gain_l3t3inrppx
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 127;

                    ;% rtP.Gain2_Gain_dysexq3k3a
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 128;

                    ;% rtP.Gain1_Gain_e2q2edneho
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 129;

                    ;% rtP.Gain_Gain_jjilyo3l5f
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 130;

                    ;% rtP.Gain1_Gain_dietotpkcc
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 131;

                    ;% rtP.Gain2_Gain_hrbuh22v1i
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 132;

                    ;% rtP.Bias_Bias
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 133;

                    ;% rtP.Bias1_Bias
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 134;

                    ;% rtP.n_j0_Threshold
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 135;

                    ;% rtP.e_k0_Threshold
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 136;

                    ;% rtP.rv0_Threshold
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 137;

                    ;% rtP.u2_Gain_puv2jr0l5x
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 138;

                    ;% rtP.Gain2_Gain_ktnym3b0kl
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 139;

                    ;% rtP.Gain_Gain_p3k0xxw3y5
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 140;

                    ;% rtP.Gain1_Gain_aw214blew1
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 141;

                    ;% rtP.Gain_Gain_lquzbnpq32
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 142;

                    ;% rtP.Gain2_Gain_e4t4j4tntk
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 143;

                    ;% rtP.Gain1_Gain_i50sgygmi4
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 144;

                    ;% rtP.Gain_Gain_m3g5po4cqr
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 145;

                    ;% rtP.Gain1_Gain_p0r0phdszy
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 146;

                    ;% rtP.Gain2_Gain_ojec3gtfvc
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 147;

                    ;% rtP.Bias_Bias_csfjfloua3
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 148;

                    ;% rtP.Bias1_Bias_ke3tqgzwra
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 149;

                    ;% rtP.Gain2_Gain_nxayugor4p
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 150;

                    ;% rtP.Gain_Gain_bnqid2pxje
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 151;

                    ;% rtP.Gain1_Gain_e5wrwogqcu
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 152;

                    ;% rtP.Gain_Gain_j5qvvnl2lq
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 153;

                    ;% rtP.Gain2_Gain_db4aqwjv3z
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 154;

                    ;% rtP.Gain1_Gain_esk0kbkf4p
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 155;

                    ;% rtP.Gain_Gain_iauu5nedpm
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 156;

                    ;% rtP.Gain1_Gain_apuoys51w1
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 157;

                    ;% rtP.Gain2_Gain_lpeiobb14p
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 158;

                    ;% rtP.Bias_Bias_cl02abfymb
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 159;

                    ;% rtP.Bias1_Bias_a24mpf5x4w
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 160;

                    ;% rtP.Tsamp_WtEt
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 161;

                    ;% rtP.Constant_Value_d3lw1laqzd
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 162;

                    ;% rtP.Constant_Value_lrjzwukvju
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 163;

                    ;% rtP.Constant_Value_kssr5ci3rk
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 164;

                    ;% rtP.Constant_Value_h0g1ugaqun
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 165;

                    ;% rtP.Constant1_Value
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 168;

                    ;% rtP.Constant3_Value
                    section.data(104).logicalSrcIdx = 103;
                    section.data(104).dtTransOffset = 169;

                    ;% rtP.Constant4_Value
                    section.data(105).logicalSrcIdx = 104;
                    section.data(105).dtTransOffset = 170;

                    ;% rtP.Constant_Value_axnwdlqcfs
                    section.data(106).logicalSrcIdx = 105;
                    section.data(106).dtTransOffset = 171;

                    ;% rtP.Constant1_Value_opnh0fk3y0
                    section.data(107).logicalSrcIdx = 106;
                    section.data(107).dtTransOffset = 172;

                    ;% rtP.Constant_Value_p3zoswxu1x
                    section.data(108).logicalSrcIdx = 107;
                    section.data(108).dtTransOffset = 173;

                    ;% rtP.Constant1_Value_hxwifwb0l1
                    section.data(109).logicalSrcIdx = 108;
                    section.data(109).dtTransOffset = 174;

                    ;% rtP.Constant_Value_oqtxeqjzx0
                    section.data(110).logicalSrcIdx = 109;
                    section.data(110).dtTransOffset = 175;

                    ;% rtP.Constant1_Value_n45i4rp0x0
                    section.data(111).logicalSrcIdx = 110;
                    section.data(111).dtTransOffset = 176;

                    ;% rtP.Constant_Value_i203pkjdz2
                    section.data(112).logicalSrcIdx = 111;
                    section.data(112).dtTransOffset = 177;

                    ;% rtP.Constant1_Value_gtzfwmc1c5
                    section.data(113).logicalSrcIdx = 112;
                    section.data(113).dtTransOffset = 178;

                    ;% rtP.Bias_Bias_gg4yfzwgb4
                    section.data(114).logicalSrcIdx = 113;
                    section.data(114).dtTransOffset = 179;

                    ;% rtP.Bias1_Bias_aeswfouakq
                    section.data(115).logicalSrcIdx = 114;
                    section.data(115).dtTransOffset = 180;

                    ;% rtP.Constant_Value_gb5zkazvg1
                    section.data(116).logicalSrcIdx = 115;
                    section.data(116).dtTransOffset = 181;

                    ;% rtP.Constant_Value_owfc2idssk
                    section.data(117).logicalSrcIdx = 116;
                    section.data(117).dtTransOffset = 182;

                    ;% rtP.Constant_Value_exc5ou3kny
                    section.data(118).logicalSrcIdx = 117;
                    section.data(118).dtTransOffset = 183;

                    ;% rtP.Gain_Gain_ob2tt5odxp
                    section.data(119).logicalSrcIdx = 118;
                    section.data(119).dtTransOffset = 184;

                    ;% rtP.Constant_Value_oaurfxrj3r
                    section.data(120).logicalSrcIdx = 119;
                    section.data(120).dtTransOffset = 185;

                    ;% rtP.Constant1_Value_e5gqrcfxog
                    section.data(121).logicalSrcIdx = 120;
                    section.data(121).dtTransOffset = 186;

                    ;% rtP.Gain2_Gain_ksbgbs1b1v
                    section.data(122).logicalSrcIdx = 121;
                    section.data(122).dtTransOffset = 187;

                    ;% rtP.Gain_Gain_fsr5v4y1tz
                    section.data(123).logicalSrcIdx = 122;
                    section.data(123).dtTransOffset = 188;

                    ;% rtP.Constant_Value_dxp2fjnpsn
                    section.data(124).logicalSrcIdx = 123;
                    section.data(124).dtTransOffset = 189;

                    ;% rtP.Constant1_Value_ovmiwvalqb
                    section.data(125).logicalSrcIdx = 124;
                    section.data(125).dtTransOffset = 190;

                    ;% rtP.Gain2_Gain_d3jllonf2i
                    section.data(126).logicalSrcIdx = 125;
                    section.data(126).dtTransOffset = 191;

                    ;% rtP.Constant_Value_e3re2oof5g
                    section.data(127).logicalSrcIdx = 126;
                    section.data(127).dtTransOffset = 192;

                    ;% rtP.Constant_Value_pximozwm1g
                    section.data(128).logicalSrcIdx = 127;
                    section.data(128).dtTransOffset = 193;

                    ;% rtP.Constant_Value_fezz4zcr33
                    section.data(129).logicalSrcIdx = 128;
                    section.data(129).dtTransOffset = 194;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.cpe1al53eg.Constant_Value
                    section.data(1).logicalSrcIdx = 129;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.havcl53rud.Constant_Value
                    section.data(1).logicalSrcIdx = 130;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.n2e0ukonil.Constant_Value
                    section.data(1).logicalSrcIdx = 131;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.odap4wkgft.Constant_Value
                    section.data(1).logicalSrcIdx = 132;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.awxtj45csr.Constant_Value
                    section.data(1).logicalSrcIdx = 133;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.jjvlsi3jdf.Constant_Value
                    section.data(1).logicalSrcIdx = 134;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(7) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.amx55shqxl.Constant_Value
                    section.data(1).logicalSrcIdx = 135;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.amyioh3yyl.Constant_Value
                    section.data(1).logicalSrcIdx = 136;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(9) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.fqsnbatx0dt.Constant_Value
                    section.data(1).logicalSrcIdx = 137;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(10) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.c140n5sl3j.Constant_Value
                    section.data(1).logicalSrcIdx = 138;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(11) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.nfbajjnpq3.Constant_Value
                    section.data(1).logicalSrcIdx = 139;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(12) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtP.ozfexalcpnk.Constant_Value
                    section.data(1).logicalSrcIdx = 140;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(13) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 2;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 376;
            section.data(376)  = dumData; %prealloc

                    ;% rtB.bed3ixhpn2
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.brmokcdrio
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 3;

                    ;% rtB.herymyrphl
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 6;

                    ;% rtB.d2mfefylik
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 9;

                    ;% rtB.hwvdsemzgc
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 12;

                    ;% rtB.lqsl4ymlvn
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 15;

                    ;% rtB.f3ikhtx2zg
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 18;

                    ;% rtB.ojdoa14qjo
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 19;

                    ;% rtB.hkytpsvogd
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 20;

                    ;% rtB.ckv24rpgvd
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 21;

                    ;% rtB.hxnxmxphze
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 22;

                    ;% rtB.lb2fr4utt0
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 23;

                    ;% rtB.lqd2nodifg
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 24;

                    ;% rtB.cflcgolrni
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 25;

                    ;% rtB.f0txzidtlg
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 26;

                    ;% rtB.p0tyelmcem
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 27;

                    ;% rtB.hhybgj4ij3
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 28;

                    ;% rtB.b2nvvrve1n
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 29;

                    ;% rtB.csq0ucwnp1
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 30;

                    ;% rtB.n2ym4a3gam
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 31;

                    ;% rtB.i0ktxf5xah
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 32;

                    ;% rtB.ekzgxwfzub
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 33;

                    ;% rtB.oetwa35hv4
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 34;

                    ;% rtB.dh3hx3m1f4
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 35;

                    ;% rtB.mbwwzd12s3
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 36;

                    ;% rtB.cjqhmv2ncl
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 37;

                    ;% rtB.bcvgvonzqc
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 38;

                    ;% rtB.dzes52hxg4
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 39;

                    ;% rtB.e3se1oublh
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 40;

                    ;% rtB.iin3omkh3m
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 41;

                    ;% rtB.eyggydhvdc
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 42;

                    ;% rtB.ketpxvax42
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 43;

                    ;% rtB.na5lj1lmmo
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 44;

                    ;% rtB.fty4ztxqgw
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 45;

                    ;% rtB.pw0jwl1nqw
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 46;

                    ;% rtB.a4kt4hvwzb
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 47;

                    ;% rtB.h5fl43crr2
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 48;

                    ;% rtB.mt5hkjamkd
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 49;

                    ;% rtB.pkwxa3bl1k
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 50;

                    ;% rtB.dfwizamt1u
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 51;

                    ;% rtB.kw2m0cjqpw
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 52;

                    ;% rtB.duhh5hsq31
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 53;

                    ;% rtB.kk2fkibzdi
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 54;

                    ;% rtB.acdxadew0d
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 55;

                    ;% rtB.igwzj1ytle
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 56;

                    ;% rtB.fwcurtmbmr
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 57;

                    ;% rtB.jfl00yvgrd
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 58;

                    ;% rtB.iw3jzuhofs
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 59;

                    ;% rtB.a4zmidwjrt
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 60;

                    ;% rtB.efq2gopxkt
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 61;

                    ;% rtB.dbs0rl525h
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 62;

                    ;% rtB.ecct0soimw
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 63;

                    ;% rtB.jnzytf21hw
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 64;

                    ;% rtB.c5ynwjufvx
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 65;

                    ;% rtB.ld1yr2qzq3
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 66;

                    ;% rtB.bg5rgepnwu
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 67;

                    ;% rtB.m4k3cvyusv
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 68;

                    ;% rtB.bohx2mqfib
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 69;

                    ;% rtB.hh3cewyuqs
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 70;

                    ;% rtB.f1u1kgizgs
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 71;

                    ;% rtB.atotr0yy2l
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 72;

                    ;% rtB.mmyxw41ii0
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 73;

                    ;% rtB.ftygp0douc
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 74;

                    ;% rtB.piggqo0f15
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 75;

                    ;% rtB.jzibn2jzkl
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 76;

                    ;% rtB.ab1acz5psy
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 77;

                    ;% rtB.dfo3iezo2w
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 78;

                    ;% rtB.gm214110mv
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 79;

                    ;% rtB.bsy1hfnklf
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 80;

                    ;% rtB.cluthxuo0o
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 81;

                    ;% rtB.niqqtb5bzt
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 82;

                    ;% rtB.ierptzclqz
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 83;

                    ;% rtB.o5lpk52ouo
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 84;

                    ;% rtB.inrhmp0val
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 87;

                    ;% rtB.ge0vukj2kn
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 88;

                    ;% rtB.ndp321ctrb
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 89;

                    ;% rtB.pniokh1pkw
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 90;

                    ;% rtB.njgq5t2dzn
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 93;

                    ;% rtB.iwhtxfftiy
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 94;

                    ;% rtB.hcpipystcv
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 95;

                    ;% rtB.praxrmtmoq
                    section.data(81).logicalSrcIdx = 80;
                    section.data(81).dtTransOffset = 96;

                    ;% rtB.dpwq1q4ydy
                    section.data(82).logicalSrcIdx = 81;
                    section.data(82).dtTransOffset = 97;

                    ;% rtB.lhmib3vmgu
                    section.data(83).logicalSrcIdx = 82;
                    section.data(83).dtTransOffset = 98;

                    ;% rtB.hbp5mjbisv
                    section.data(84).logicalSrcIdx = 83;
                    section.data(84).dtTransOffset = 99;

                    ;% rtB.izbke4jp12
                    section.data(85).logicalSrcIdx = 84;
                    section.data(85).dtTransOffset = 100;

                    ;% rtB.oyk0w0fyfa
                    section.data(86).logicalSrcIdx = 85;
                    section.data(86).dtTransOffset = 101;

                    ;% rtB.eap4w23agb
                    section.data(87).logicalSrcIdx = 86;
                    section.data(87).dtTransOffset = 102;

                    ;% rtB.f1p3uf2p0q
                    section.data(88).logicalSrcIdx = 87;
                    section.data(88).dtTransOffset = 103;

                    ;% rtB.mtfqfym4ld
                    section.data(89).logicalSrcIdx = 88;
                    section.data(89).dtTransOffset = 104;

                    ;% rtB.mjxomo31dc
                    section.data(90).logicalSrcIdx = 89;
                    section.data(90).dtTransOffset = 105;

                    ;% rtB.l4dlkfdzpp
                    section.data(91).logicalSrcIdx = 90;
                    section.data(91).dtTransOffset = 106;

                    ;% rtB.orxndfaxou
                    section.data(92).logicalSrcIdx = 91;
                    section.data(92).dtTransOffset = 107;

                    ;% rtB.p24hvpztu3
                    section.data(93).logicalSrcIdx = 92;
                    section.data(93).dtTransOffset = 108;

                    ;% rtB.je53ripatw
                    section.data(94).logicalSrcIdx = 93;
                    section.data(94).dtTransOffset = 109;

                    ;% rtB.dd4rgfnk0q
                    section.data(95).logicalSrcIdx = 94;
                    section.data(95).dtTransOffset = 110;

                    ;% rtB.lf4fzribbl
                    section.data(96).logicalSrcIdx = 95;
                    section.data(96).dtTransOffset = 111;

                    ;% rtB.bv5xz00y5v
                    section.data(97).logicalSrcIdx = 96;
                    section.data(97).dtTransOffset = 112;

                    ;% rtB.bxzfirxs33
                    section.data(98).logicalSrcIdx = 97;
                    section.data(98).dtTransOffset = 113;

                    ;% rtB.hwei01ojqx
                    section.data(99).logicalSrcIdx = 98;
                    section.data(99).dtTransOffset = 116;

                    ;% rtB.e0df3wvyzp
                    section.data(100).logicalSrcIdx = 99;
                    section.data(100).dtTransOffset = 117;

                    ;% rtB.fg1yxfafby
                    section.data(101).logicalSrcIdx = 100;
                    section.data(101).dtTransOffset = 118;

                    ;% rtB.f3jywshtiv
                    section.data(102).logicalSrcIdx = 101;
                    section.data(102).dtTransOffset = 119;

                    ;% rtB.njbhyed1uq
                    section.data(103).logicalSrcIdx = 102;
                    section.data(103).dtTransOffset = 120;

                    ;% rtB.dr2gkpvehl
                    section.data(104).logicalSrcIdx = 103;
                    section.data(104).dtTransOffset = 121;

                    ;% rtB.n5jg5w1v21
                    section.data(105).logicalSrcIdx = 104;
                    section.data(105).dtTransOffset = 122;

                    ;% rtB.m3lcv53etn
                    section.data(106).logicalSrcIdx = 105;
                    section.data(106).dtTransOffset = 125;

                    ;% rtB.ezyqhth244
                    section.data(107).logicalSrcIdx = 106;
                    section.data(107).dtTransOffset = 126;

                    ;% rtB.oz3dymucgg
                    section.data(108).logicalSrcIdx = 107;
                    section.data(108).dtTransOffset = 127;

                    ;% rtB.k20ttjcogc
                    section.data(109).logicalSrcIdx = 108;
                    section.data(109).dtTransOffset = 128;

                    ;% rtB.n4n4yi4qrh
                    section.data(110).logicalSrcIdx = 109;
                    section.data(110).dtTransOffset = 129;

                    ;% rtB.itowmjt5vu
                    section.data(111).logicalSrcIdx = 110;
                    section.data(111).dtTransOffset = 130;

                    ;% rtB.nyhifvxcsj
                    section.data(112).logicalSrcIdx = 111;
                    section.data(112).dtTransOffset = 131;

                    ;% rtB.ijzsdirxre
                    section.data(113).logicalSrcIdx = 112;
                    section.data(113).dtTransOffset = 132;

                    ;% rtB.ht3u45cdw1
                    section.data(114).logicalSrcIdx = 113;
                    section.data(114).dtTransOffset = 133;

                    ;% rtB.bxcprbam5i
                    section.data(115).logicalSrcIdx = 114;
                    section.data(115).dtTransOffset = 134;

                    ;% rtB.abdb21upk5
                    section.data(116).logicalSrcIdx = 115;
                    section.data(116).dtTransOffset = 135;

                    ;% rtB.k00d3yy20z
                    section.data(117).logicalSrcIdx = 116;
                    section.data(117).dtTransOffset = 136;

                    ;% rtB.fn2owe3gzu
                    section.data(118).logicalSrcIdx = 117;
                    section.data(118).dtTransOffset = 137;

                    ;% rtB.jzjp3vvn23
                    section.data(119).logicalSrcIdx = 118;
                    section.data(119).dtTransOffset = 138;

                    ;% rtB.fij5wo3gxn
                    section.data(120).logicalSrcIdx = 119;
                    section.data(120).dtTransOffset = 139;

                    ;% rtB.bvelrlu4dc
                    section.data(121).logicalSrcIdx = 120;
                    section.data(121).dtTransOffset = 142;

                    ;% rtB.b5gc2y1die
                    section.data(122).logicalSrcIdx = 121;
                    section.data(122).dtTransOffset = 145;

                    ;% rtB.dngeokumuv
                    section.data(123).logicalSrcIdx = 122;
                    section.data(123).dtTransOffset = 148;

                    ;% rtB.npgjijt1ny
                    section.data(124).logicalSrcIdx = 123;
                    section.data(124).dtTransOffset = 151;

                    ;% rtB.bp3ne4djuj
                    section.data(125).logicalSrcIdx = 124;
                    section.data(125).dtTransOffset = 152;

                    ;% rtB.a4shbdupzs
                    section.data(126).logicalSrcIdx = 125;
                    section.data(126).dtTransOffset = 153;

                    ;% rtB.lfsh4e3bwp
                    section.data(127).logicalSrcIdx = 126;
                    section.data(127).dtTransOffset = 154;

                    ;% rtB.hjqbjiq155
                    section.data(128).logicalSrcIdx = 127;
                    section.data(128).dtTransOffset = 155;

                    ;% rtB.ajc5xr2jf5
                    section.data(129).logicalSrcIdx = 128;
                    section.data(129).dtTransOffset = 156;

                    ;% rtB.kqes3b4oud
                    section.data(130).logicalSrcIdx = 129;
                    section.data(130).dtTransOffset = 157;

                    ;% rtB.c1hnstgmt4
                    section.data(131).logicalSrcIdx = 130;
                    section.data(131).dtTransOffset = 158;

                    ;% rtB.dtfbjff2jg
                    section.data(132).logicalSrcIdx = 131;
                    section.data(132).dtTransOffset = 159;

                    ;% rtB.e1mmow3csa
                    section.data(133).logicalSrcIdx = 132;
                    section.data(133).dtTransOffset = 160;

                    ;% rtB.eoq2m1oml5
                    section.data(134).logicalSrcIdx = 133;
                    section.data(134).dtTransOffset = 161;

                    ;% rtB.bop1clvc51
                    section.data(135).logicalSrcIdx = 134;
                    section.data(135).dtTransOffset = 162;

                    ;% rtB.b0puueye0x
                    section.data(136).logicalSrcIdx = 135;
                    section.data(136).dtTransOffset = 163;

                    ;% rtB.nquspmmxyg
                    section.data(137).logicalSrcIdx = 136;
                    section.data(137).dtTransOffset = 164;

                    ;% rtB.gee3rrk3ny
                    section.data(138).logicalSrcIdx = 137;
                    section.data(138).dtTransOffset = 165;

                    ;% rtB.hwt4tlqt1g
                    section.data(139).logicalSrcIdx = 138;
                    section.data(139).dtTransOffset = 168;

                    ;% rtB.kx4exscg2b
                    section.data(140).logicalSrcIdx = 139;
                    section.data(140).dtTransOffset = 169;

                    ;% rtB.oozpb1rzol
                    section.data(141).logicalSrcIdx = 140;
                    section.data(141).dtTransOffset = 170;

                    ;% rtB.e4g1jcha1z
                    section.data(142).logicalSrcIdx = 141;
                    section.data(142).dtTransOffset = 171;

                    ;% rtB.muoupl2fwn
                    section.data(143).logicalSrcIdx = 142;
                    section.data(143).dtTransOffset = 172;

                    ;% rtB.jwjq0rj5uw
                    section.data(144).logicalSrcIdx = 143;
                    section.data(144).dtTransOffset = 173;

                    ;% rtB.kfuuvpn0xn
                    section.data(145).logicalSrcIdx = 144;
                    section.data(145).dtTransOffset = 174;

                    ;% rtB.e330hnzury
                    section.data(146).logicalSrcIdx = 145;
                    section.data(146).dtTransOffset = 175;

                    ;% rtB.e1ed23zngo
                    section.data(147).logicalSrcIdx = 146;
                    section.data(147).dtTransOffset = 176;

                    ;% rtB.hzayfrfeh0
                    section.data(148).logicalSrcIdx = 147;
                    section.data(148).dtTransOffset = 177;

                    ;% rtB.cqduybqaka
                    section.data(149).logicalSrcIdx = 148;
                    section.data(149).dtTransOffset = 178;

                    ;% rtB.gfhi2chwy1
                    section.data(150).logicalSrcIdx = 149;
                    section.data(150).dtTransOffset = 179;

                    ;% rtB.c4udbivv0q
                    section.data(151).logicalSrcIdx = 150;
                    section.data(151).dtTransOffset = 180;

                    ;% rtB.g0s5armlux
                    section.data(152).logicalSrcIdx = 151;
                    section.data(152).dtTransOffset = 181;

                    ;% rtB.acyyfbsb4l
                    section.data(153).logicalSrcIdx = 152;
                    section.data(153).dtTransOffset = 182;

                    ;% rtB.louda2tysx
                    section.data(154).logicalSrcIdx = 153;
                    section.data(154).dtTransOffset = 183;

                    ;% rtB.icfk0dewms
                    section.data(155).logicalSrcIdx = 154;
                    section.data(155).dtTransOffset = 184;

                    ;% rtB.eac1hp1hzc
                    section.data(156).logicalSrcIdx = 155;
                    section.data(156).dtTransOffset = 185;

                    ;% rtB.o1cebdj0tr
                    section.data(157).logicalSrcIdx = 156;
                    section.data(157).dtTransOffset = 186;

                    ;% rtB.avn0fquoii
                    section.data(158).logicalSrcIdx = 157;
                    section.data(158).dtTransOffset = 187;

                    ;% rtB.pag5e2tm4x
                    section.data(159).logicalSrcIdx = 158;
                    section.data(159).dtTransOffset = 188;

                    ;% rtB.hqpe5h53ep
                    section.data(160).logicalSrcIdx = 159;
                    section.data(160).dtTransOffset = 189;

                    ;% rtB.o10khkekjf
                    section.data(161).logicalSrcIdx = 160;
                    section.data(161).dtTransOffset = 190;

                    ;% rtB.iwzvhi4mhy
                    section.data(162).logicalSrcIdx = 161;
                    section.data(162).dtTransOffset = 191;

                    ;% rtB.oip2gbnnci
                    section.data(163).logicalSrcIdx = 162;
                    section.data(163).dtTransOffset = 192;

                    ;% rtB.oyccwqf23y
                    section.data(164).logicalSrcIdx = 163;
                    section.data(164).dtTransOffset = 193;

                    ;% rtB.hxtdtqwl0b
                    section.data(165).logicalSrcIdx = 164;
                    section.data(165).dtTransOffset = 194;

                    ;% rtB.mlw0td2gji
                    section.data(166).logicalSrcIdx = 165;
                    section.data(166).dtTransOffset = 195;

                    ;% rtB.gz1ep0ich0
                    section.data(167).logicalSrcIdx = 166;
                    section.data(167).dtTransOffset = 196;

                    ;% rtB.mshwwxoxgx
                    section.data(168).logicalSrcIdx = 167;
                    section.data(168).dtTransOffset = 197;

                    ;% rtB.mvkvrxq2fp
                    section.data(169).logicalSrcIdx = 168;
                    section.data(169).dtTransOffset = 198;

                    ;% rtB.pdy5cram3a
                    section.data(170).logicalSrcIdx = 169;
                    section.data(170).dtTransOffset = 199;

                    ;% rtB.pvgpu45zl2
                    section.data(171).logicalSrcIdx = 170;
                    section.data(171).dtTransOffset = 200;

                    ;% rtB.jyiuecj0yv
                    section.data(172).logicalSrcIdx = 171;
                    section.data(172).dtTransOffset = 201;

                    ;% rtB.fawfd22i1u
                    section.data(173).logicalSrcIdx = 172;
                    section.data(173).dtTransOffset = 202;

                    ;% rtB.b5rji2itjr
                    section.data(174).logicalSrcIdx = 173;
                    section.data(174).dtTransOffset = 203;

                    ;% rtB.jfengqarom
                    section.data(175).logicalSrcIdx = 174;
                    section.data(175).dtTransOffset = 204;

                    ;% rtB.fmuzw3y2ay
                    section.data(176).logicalSrcIdx = 175;
                    section.data(176).dtTransOffset = 205;

                    ;% rtB.ieufwpzafa
                    section.data(177).logicalSrcIdx = 176;
                    section.data(177).dtTransOffset = 206;

                    ;% rtB.edjzmn0qwv
                    section.data(178).logicalSrcIdx = 177;
                    section.data(178).dtTransOffset = 207;

                    ;% rtB.ablbynsako
                    section.data(179).logicalSrcIdx = 178;
                    section.data(179).dtTransOffset = 208;

                    ;% rtB.i5wsbqbx3f
                    section.data(180).logicalSrcIdx = 179;
                    section.data(180).dtTransOffset = 209;

                    ;% rtB.hg5bv3vzuf
                    section.data(181).logicalSrcIdx = 180;
                    section.data(181).dtTransOffset = 210;

                    ;% rtB.bj12zrdsgl
                    section.data(182).logicalSrcIdx = 181;
                    section.data(182).dtTransOffset = 211;

                    ;% rtB.j2aun4xa5l
                    section.data(183).logicalSrcIdx = 182;
                    section.data(183).dtTransOffset = 212;

                    ;% rtB.lpbqrpu1jn
                    section.data(184).logicalSrcIdx = 183;
                    section.data(184).dtTransOffset = 213;

                    ;% rtB.daj0qzzfez
                    section.data(185).logicalSrcIdx = 184;
                    section.data(185).dtTransOffset = 214;

                    ;% rtB.opz0vchhvw
                    section.data(186).logicalSrcIdx = 185;
                    section.data(186).dtTransOffset = 215;

                    ;% rtB.bhkbayxccr
                    section.data(187).logicalSrcIdx = 186;
                    section.data(187).dtTransOffset = 216;

                    ;% rtB.ovufk02f52
                    section.data(188).logicalSrcIdx = 187;
                    section.data(188).dtTransOffset = 217;

                    ;% rtB.c3uoja0hs1
                    section.data(189).logicalSrcIdx = 188;
                    section.data(189).dtTransOffset = 218;

                    ;% rtB.lhu0itmrnu
                    section.data(190).logicalSrcIdx = 189;
                    section.data(190).dtTransOffset = 219;

                    ;% rtB.kixpmyuot5
                    section.data(191).logicalSrcIdx = 190;
                    section.data(191).dtTransOffset = 220;

                    ;% rtB.elffql50h0
                    section.data(192).logicalSrcIdx = 191;
                    section.data(192).dtTransOffset = 221;

                    ;% rtB.mc4pyvaaam
                    section.data(193).logicalSrcIdx = 192;
                    section.data(193).dtTransOffset = 222;

                    ;% rtB.p41cylkrvy
                    section.data(194).logicalSrcIdx = 193;
                    section.data(194).dtTransOffset = 223;

                    ;% rtB.kw0oysgnin
                    section.data(195).logicalSrcIdx = 194;
                    section.data(195).dtTransOffset = 224;

                    ;% rtB.aaymhmvzx3
                    section.data(196).logicalSrcIdx = 195;
                    section.data(196).dtTransOffset = 225;

                    ;% rtB.fpgntvbv2k
                    section.data(197).logicalSrcIdx = 196;
                    section.data(197).dtTransOffset = 226;

                    ;% rtB.b1mzkpk1k1
                    section.data(198).logicalSrcIdx = 197;
                    section.data(198).dtTransOffset = 227;

                    ;% rtB.dduvoybpbb
                    section.data(199).logicalSrcIdx = 198;
                    section.data(199).dtTransOffset = 228;

                    ;% rtB.mszceanoh4
                    section.data(200).logicalSrcIdx = 199;
                    section.data(200).dtTransOffset = 229;

                    ;% rtB.fqofrbtel3
                    section.data(201).logicalSrcIdx = 200;
                    section.data(201).dtTransOffset = 230;

                    ;% rtB.kujykg0wdo
                    section.data(202).logicalSrcIdx = 201;
                    section.data(202).dtTransOffset = 231;

                    ;% rtB.ptgv4cuezm
                    section.data(203).logicalSrcIdx = 202;
                    section.data(203).dtTransOffset = 232;

                    ;% rtB.b5e00e1031
                    section.data(204).logicalSrcIdx = 203;
                    section.data(204).dtTransOffset = 233;

                    ;% rtB.byrjgsv4bg
                    section.data(205).logicalSrcIdx = 204;
                    section.data(205).dtTransOffset = 234;

                    ;% rtB.dhbnc3d3gi
                    section.data(206).logicalSrcIdx = 205;
                    section.data(206).dtTransOffset = 235;

                    ;% rtB.hxz4i04vsk
                    section.data(207).logicalSrcIdx = 206;
                    section.data(207).dtTransOffset = 236;

                    ;% rtB.g2o4huhmci
                    section.data(208).logicalSrcIdx = 207;
                    section.data(208).dtTransOffset = 237;

                    ;% rtB.kkrjjbdr2e
                    section.data(209).logicalSrcIdx = 208;
                    section.data(209).dtTransOffset = 238;

                    ;% rtB.le5ag1nozi
                    section.data(210).logicalSrcIdx = 209;
                    section.data(210).dtTransOffset = 239;

                    ;% rtB.cj1l4yqqp3
                    section.data(211).logicalSrcIdx = 210;
                    section.data(211).dtTransOffset = 240;

                    ;% rtB.fwx1mmvj4u
                    section.data(212).logicalSrcIdx = 211;
                    section.data(212).dtTransOffset = 241;

                    ;% rtB.n4opippzuv
                    section.data(213).logicalSrcIdx = 212;
                    section.data(213).dtTransOffset = 242;

                    ;% rtB.i5z2ckf2gh
                    section.data(214).logicalSrcIdx = 213;
                    section.data(214).dtTransOffset = 243;

                    ;% rtB.pkyad212ak
                    section.data(215).logicalSrcIdx = 214;
                    section.data(215).dtTransOffset = 244;

                    ;% rtB.gemw0phi5b
                    section.data(216).logicalSrcIdx = 215;
                    section.data(216).dtTransOffset = 245;

                    ;% rtB.bxmigoh5ke
                    section.data(217).logicalSrcIdx = 216;
                    section.data(217).dtTransOffset = 246;

                    ;% rtB.esjtfx0bso
                    section.data(218).logicalSrcIdx = 217;
                    section.data(218).dtTransOffset = 247;

                    ;% rtB.maybar53im
                    section.data(219).logicalSrcIdx = 218;
                    section.data(219).dtTransOffset = 248;

                    ;% rtB.dkvr1dmakj
                    section.data(220).logicalSrcIdx = 219;
                    section.data(220).dtTransOffset = 249;

                    ;% rtB.ett2u0cxhv
                    section.data(221).logicalSrcIdx = 220;
                    section.data(221).dtTransOffset = 250;

                    ;% rtB.akcz5sweh0
                    section.data(222).logicalSrcIdx = 221;
                    section.data(222).dtTransOffset = 251;

                    ;% rtB.prspdmxwxa
                    section.data(223).logicalSrcIdx = 222;
                    section.data(223).dtTransOffset = 252;

                    ;% rtB.pq4sa5eyn1
                    section.data(224).logicalSrcIdx = 223;
                    section.data(224).dtTransOffset = 253;

                    ;% rtB.gf3qkc5xul
                    section.data(225).logicalSrcIdx = 224;
                    section.data(225).dtTransOffset = 254;

                    ;% rtB.ijiz1yqe3s
                    section.data(226).logicalSrcIdx = 225;
                    section.data(226).dtTransOffset = 255;

                    ;% rtB.d43tguid1w
                    section.data(227).logicalSrcIdx = 226;
                    section.data(227).dtTransOffset = 256;

                    ;% rtB.cyrfzlpwa0
                    section.data(228).logicalSrcIdx = 227;
                    section.data(228).dtTransOffset = 257;

                    ;% rtB.bvka4hwlc3
                    section.data(229).logicalSrcIdx = 228;
                    section.data(229).dtTransOffset = 258;

                    ;% rtB.fqcj42rwfv
                    section.data(230).logicalSrcIdx = 229;
                    section.data(230).dtTransOffset = 259;

                    ;% rtB.bjqr0rh325
                    section.data(231).logicalSrcIdx = 230;
                    section.data(231).dtTransOffset = 260;

                    ;% rtB.l15ioalnmc
                    section.data(232).logicalSrcIdx = 231;
                    section.data(232).dtTransOffset = 261;

                    ;% rtB.og4d53fo0x
                    section.data(233).logicalSrcIdx = 232;
                    section.data(233).dtTransOffset = 262;

                    ;% rtB.oybxotpt2x
                    section.data(234).logicalSrcIdx = 233;
                    section.data(234).dtTransOffset = 263;

                    ;% rtB.nybfuwghkb
                    section.data(235).logicalSrcIdx = 234;
                    section.data(235).dtTransOffset = 266;

                    ;% rtB.oxpegxaoc4
                    section.data(236).logicalSrcIdx = 235;
                    section.data(236).dtTransOffset = 267;

                    ;% rtB.dh2yw5ar5c
                    section.data(237).logicalSrcIdx = 236;
                    section.data(237).dtTransOffset = 268;

                    ;% rtB.lxihjdcvha
                    section.data(238).logicalSrcIdx = 237;
                    section.data(238).dtTransOffset = 269;

                    ;% rtB.hwv0eif3jm
                    section.data(239).logicalSrcIdx = 238;
                    section.data(239).dtTransOffset = 270;

                    ;% rtB.it3n0sxelh
                    section.data(240).logicalSrcIdx = 239;
                    section.data(240).dtTransOffset = 271;

                    ;% rtB.hdqct0fton
                    section.data(241).logicalSrcIdx = 240;
                    section.data(241).dtTransOffset = 272;

                    ;% rtB.obrvzvyul2
                    section.data(242).logicalSrcIdx = 241;
                    section.data(242).dtTransOffset = 275;

                    ;% rtB.gpeayd1kbb
                    section.data(243).logicalSrcIdx = 242;
                    section.data(243).dtTransOffset = 276;

                    ;% rtB.nuqgxraj4s
                    section.data(244).logicalSrcIdx = 243;
                    section.data(244).dtTransOffset = 277;

                    ;% rtB.kyjwocrtf1
                    section.data(245).logicalSrcIdx = 244;
                    section.data(245).dtTransOffset = 278;

                    ;% rtB.aroffri1di
                    section.data(246).logicalSrcIdx = 245;
                    section.data(246).dtTransOffset = 279;

                    ;% rtB.bp4ojgaew5
                    section.data(247).logicalSrcIdx = 246;
                    section.data(247).dtTransOffset = 280;

                    ;% rtB.n5nt33gmwp
                    section.data(248).logicalSrcIdx = 247;
                    section.data(248).dtTransOffset = 281;

                    ;% rtB.lavmxbrwhl
                    section.data(249).logicalSrcIdx = 248;
                    section.data(249).dtTransOffset = 282;

                    ;% rtB.oqowv51iqo
                    section.data(250).logicalSrcIdx = 249;
                    section.data(250).dtTransOffset = 283;

                    ;% rtB.c4xchekfkc
                    section.data(251).logicalSrcIdx = 250;
                    section.data(251).dtTransOffset = 284;

                    ;% rtB.ctn1jww2mq
                    section.data(252).logicalSrcIdx = 251;
                    section.data(252).dtTransOffset = 285;

                    ;% rtB.dijo1ltnx5
                    section.data(253).logicalSrcIdx = 252;
                    section.data(253).dtTransOffset = 286;

                    ;% rtB.hzydlu0jvp
                    section.data(254).logicalSrcIdx = 253;
                    section.data(254).dtTransOffset = 287;

                    ;% rtB.bzokzc5qh1
                    section.data(255).logicalSrcIdx = 254;
                    section.data(255).dtTransOffset = 288;

                    ;% rtB.dlxbfdbbhz
                    section.data(256).logicalSrcIdx = 255;
                    section.data(256).dtTransOffset = 289;

                    ;% rtB.a115lz3b0g
                    section.data(257).logicalSrcIdx = 256;
                    section.data(257).dtTransOffset = 290;

                    ;% rtB.jszz3xufuq
                    section.data(258).logicalSrcIdx = 257;
                    section.data(258).dtTransOffset = 291;

                    ;% rtB.iwql2lazhy
                    section.data(259).logicalSrcIdx = 258;
                    section.data(259).dtTransOffset = 292;

                    ;% rtB.onbg5nju1r
                    section.data(260).logicalSrcIdx = 259;
                    section.data(260).dtTransOffset = 293;

                    ;% rtB.if3121tfog
                    section.data(261).logicalSrcIdx = 260;
                    section.data(261).dtTransOffset = 294;

                    ;% rtB.pjcot0wxoj
                    section.data(262).logicalSrcIdx = 261;
                    section.data(262).dtTransOffset = 295;

                    ;% rtB.kxnj2p5qc3
                    section.data(263).logicalSrcIdx = 262;
                    section.data(263).dtTransOffset = 296;

                    ;% rtB.f10it011qx
                    section.data(264).logicalSrcIdx = 263;
                    section.data(264).dtTransOffset = 297;

                    ;% rtB.c41lldt1uy
                    section.data(265).logicalSrcIdx = 264;
                    section.data(265).dtTransOffset = 298;

                    ;% rtB.k5n3l1olcw
                    section.data(266).logicalSrcIdx = 265;
                    section.data(266).dtTransOffset = 299;

                    ;% rtB.hvasfjtmtc
                    section.data(267).logicalSrcIdx = 266;
                    section.data(267).dtTransOffset = 300;

                    ;% rtB.nhzzayoxkc
                    section.data(268).logicalSrcIdx = 267;
                    section.data(268).dtTransOffset = 301;

                    ;% rtB.cnsrwwetkr
                    section.data(269).logicalSrcIdx = 268;
                    section.data(269).dtTransOffset = 302;

                    ;% rtB.kzjjcawjf3
                    section.data(270).logicalSrcIdx = 269;
                    section.data(270).dtTransOffset = 303;

                    ;% rtB.f5mvlkzyar
                    section.data(271).logicalSrcIdx = 270;
                    section.data(271).dtTransOffset = 304;

                    ;% rtB.i22kdurnzj
                    section.data(272).logicalSrcIdx = 271;
                    section.data(272).dtTransOffset = 305;

                    ;% rtB.entwwicvr2
                    section.data(273).logicalSrcIdx = 272;
                    section.data(273).dtTransOffset = 306;

                    ;% rtB.eoepyahp11
                    section.data(274).logicalSrcIdx = 273;
                    section.data(274).dtTransOffset = 307;

                    ;% rtB.ikq14cwxg2
                    section.data(275).logicalSrcIdx = 274;
                    section.data(275).dtTransOffset = 308;

                    ;% rtB.fdk3z4o44v
                    section.data(276).logicalSrcIdx = 275;
                    section.data(276).dtTransOffset = 309;

                    ;% rtB.ftci2sn0gh
                    section.data(277).logicalSrcIdx = 276;
                    section.data(277).dtTransOffset = 310;

                    ;% rtB.fesfl02fja
                    section.data(278).logicalSrcIdx = 277;
                    section.data(278).dtTransOffset = 311;

                    ;% rtB.orxs2xiybl
                    section.data(279).logicalSrcIdx = 278;
                    section.data(279).dtTransOffset = 312;

                    ;% rtB.a5qjjtmad2
                    section.data(280).logicalSrcIdx = 279;
                    section.data(280).dtTransOffset = 313;

                    ;% rtB.cjme2x3k30
                    section.data(281).logicalSrcIdx = 280;
                    section.data(281).dtTransOffset = 314;

                    ;% rtB.erpig0ungk
                    section.data(282).logicalSrcIdx = 281;
                    section.data(282).dtTransOffset = 315;

                    ;% rtB.nooer5fjzq
                    section.data(283).logicalSrcIdx = 282;
                    section.data(283).dtTransOffset = 316;

                    ;% rtB.ko2buhzd1o
                    section.data(284).logicalSrcIdx = 283;
                    section.data(284).dtTransOffset = 317;

                    ;% rtB.haykyjejqw
                    section.data(285).logicalSrcIdx = 284;
                    section.data(285).dtTransOffset = 318;

                    ;% rtB.mmdmvrqh42
                    section.data(286).logicalSrcIdx = 285;
                    section.data(286).dtTransOffset = 319;

                    ;% rtB.mzsxqpvx05
                    section.data(287).logicalSrcIdx = 286;
                    section.data(287).dtTransOffset = 320;

                    ;% rtB.do4ccbjq5w
                    section.data(288).logicalSrcIdx = 287;
                    section.data(288).dtTransOffset = 321;

                    ;% rtB.gios4slamr
                    section.data(289).logicalSrcIdx = 288;
                    section.data(289).dtTransOffset = 322;

                    ;% rtB.mneqz4d2j1
                    section.data(290).logicalSrcIdx = 289;
                    section.data(290).dtTransOffset = 323;

                    ;% rtB.dzbuzkvkto
                    section.data(291).logicalSrcIdx = 290;
                    section.data(291).dtTransOffset = 324;

                    ;% rtB.jvuntmypcy
                    section.data(292).logicalSrcIdx = 291;
                    section.data(292).dtTransOffset = 325;

                    ;% rtB.lnaxsibe2v
                    section.data(293).logicalSrcIdx = 292;
                    section.data(293).dtTransOffset = 326;

                    ;% rtB.kbnlpovyfq
                    section.data(294).logicalSrcIdx = 293;
                    section.data(294).dtTransOffset = 327;

                    ;% rtB.ofncopprcn
                    section.data(295).logicalSrcIdx = 294;
                    section.data(295).dtTransOffset = 328;

                    ;% rtB.apufjvlgeh
                    section.data(296).logicalSrcIdx = 295;
                    section.data(296).dtTransOffset = 329;

                    ;% rtB.jkniny0x3x
                    section.data(297).logicalSrcIdx = 296;
                    section.data(297).dtTransOffset = 330;

                    ;% rtB.d4fceeetz5
                    section.data(298).logicalSrcIdx = 297;
                    section.data(298).dtTransOffset = 331;

                    ;% rtB.ecrb0ucuhk
                    section.data(299).logicalSrcIdx = 298;
                    section.data(299).dtTransOffset = 332;

                    ;% rtB.miii41y12z
                    section.data(300).logicalSrcIdx = 299;
                    section.data(300).dtTransOffset = 335;

                    ;% rtB.hrgutkce1r
                    section.data(301).logicalSrcIdx = 300;
                    section.data(301).dtTransOffset = 339;

                    ;% rtB.cts3truvxg
                    section.data(302).logicalSrcIdx = 301;
                    section.data(302).dtTransOffset = 340;

                    ;% rtB.fsw11hjmo0
                    section.data(303).logicalSrcIdx = 302;
                    section.data(303).dtTransOffset = 341;

                    ;% rtB.gymfvdo1n0
                    section.data(304).logicalSrcIdx = 303;
                    section.data(304).dtTransOffset = 342;

                    ;% rtB.b2iavgmalt
                    section.data(305).logicalSrcIdx = 304;
                    section.data(305).dtTransOffset = 343;

                    ;% rtB.lfck0pbfjx
                    section.data(306).logicalSrcIdx = 305;
                    section.data(306).dtTransOffset = 344;

                    ;% rtB.aeajq4je2s
                    section.data(307).logicalSrcIdx = 306;
                    section.data(307).dtTransOffset = 345;

                    ;% rtB.orhgartrih
                    section.data(308).logicalSrcIdx = 307;
                    section.data(308).dtTransOffset = 346;

                    ;% rtB.fpiyu35svk
                    section.data(309).logicalSrcIdx = 308;
                    section.data(309).dtTransOffset = 347;

                    ;% rtB.ew4u2f3xgf
                    section.data(310).logicalSrcIdx = 309;
                    section.data(310).dtTransOffset = 348;

                    ;% rtB.pzslztziz4
                    section.data(311).logicalSrcIdx = 310;
                    section.data(311).dtTransOffset = 349;

                    ;% rtB.fyyloj5ilz
                    section.data(312).logicalSrcIdx = 311;
                    section.data(312).dtTransOffset = 350;

                    ;% rtB.hg0stcakyi
                    section.data(313).logicalSrcIdx = 312;
                    section.data(313).dtTransOffset = 353;

                    ;% rtB.d0jo3xeu2b
                    section.data(314).logicalSrcIdx = 313;
                    section.data(314).dtTransOffset = 356;

                    ;% rtB.kumbe2lmbx
                    section.data(315).logicalSrcIdx = 314;
                    section.data(315).dtTransOffset = 359;

                    ;% rtB.g4mrmyycxt
                    section.data(316).logicalSrcIdx = 315;
                    section.data(316).dtTransOffset = 362;

                    ;% rtB.gcvocxch2a
                    section.data(317).logicalSrcIdx = 316;
                    section.data(317).dtTransOffset = 365;

                    ;% rtB.a5bomnic04
                    section.data(318).logicalSrcIdx = 317;
                    section.data(318).dtTransOffset = 368;

                    ;% rtB.el2psjjgtn
                    section.data(319).logicalSrcIdx = 318;
                    section.data(319).dtTransOffset = 371;

                    ;% rtB.goprgej0ya
                    section.data(320).logicalSrcIdx = 319;
                    section.data(320).dtTransOffset = 372;

                    ;% rtB.jiydleox4m
                    section.data(321).logicalSrcIdx = 320;
                    section.data(321).dtTransOffset = 373;

                    ;% rtB.mvm4zfrmra
                    section.data(322).logicalSrcIdx = 321;
                    section.data(322).dtTransOffset = 374;

                    ;% rtB.m05kzbej5m
                    section.data(323).logicalSrcIdx = 322;
                    section.data(323).dtTransOffset = 375;

                    ;% rtB.jsm2rnzwrw
                    section.data(324).logicalSrcIdx = 323;
                    section.data(324).dtTransOffset = 378;

                    ;% rtB.n1gwbtjrlj
                    section.data(325).logicalSrcIdx = 324;
                    section.data(325).dtTransOffset = 381;

                    ;% rtB.eqkrgoempo
                    section.data(326).logicalSrcIdx = 325;
                    section.data(326).dtTransOffset = 382;

                    ;% rtB.hm33c11q3p
                    section.data(327).logicalSrcIdx = 326;
                    section.data(327).dtTransOffset = 383;

                    ;% rtB.ipnq4eflyu
                    section.data(328).logicalSrcIdx = 327;
                    section.data(328).dtTransOffset = 386;

                    ;% rtB.a4u3vmkv1w
                    section.data(329).logicalSrcIdx = 328;
                    section.data(329).dtTransOffset = 389;

                    ;% rtB.amxqxfecuk
                    section.data(330).logicalSrcIdx = 329;
                    section.data(330).dtTransOffset = 390;

                    ;% rtB.jdx4vrnz3t
                    section.data(331).logicalSrcIdx = 330;
                    section.data(331).dtTransOffset = 391;

                    ;% rtB.miefe1av4y
                    section.data(332).logicalSrcIdx = 331;
                    section.data(332).dtTransOffset = 392;

                    ;% rtB.ijsckddbr2
                    section.data(333).logicalSrcIdx = 332;
                    section.data(333).dtTransOffset = 393;

                    ;% rtB.d20jyrs2j4
                    section.data(334).logicalSrcIdx = 333;
                    section.data(334).dtTransOffset = 394;

                    ;% rtB.bovhecluxz
                    section.data(335).logicalSrcIdx = 334;
                    section.data(335).dtTransOffset = 395;

                    ;% rtB.ahui5jqzex
                    section.data(336).logicalSrcIdx = 335;
                    section.data(336).dtTransOffset = 396;

                    ;% rtB.lnxlasbybi
                    section.data(337).logicalSrcIdx = 336;
                    section.data(337).dtTransOffset = 397;

                    ;% rtB.a11zte1cbo
                    section.data(338).logicalSrcIdx = 337;
                    section.data(338).dtTransOffset = 398;

                    ;% rtB.him5w05q10
                    section.data(339).logicalSrcIdx = 338;
                    section.data(339).dtTransOffset = 399;

                    ;% rtB.hbmqhb2rsq
                    section.data(340).logicalSrcIdx = 339;
                    section.data(340).dtTransOffset = 400;

                    ;% rtB.fg4tiogtys
                    section.data(341).logicalSrcIdx = 340;
                    section.data(341).dtTransOffset = 401;

                    ;% rtB.kijq0o3wpk
                    section.data(342).logicalSrcIdx = 341;
                    section.data(342).dtTransOffset = 402;

                    ;% rtB.mj0djwcgev
                    section.data(343).logicalSrcIdx = 342;
                    section.data(343).dtTransOffset = 403;

                    ;% rtB.avfpndwdvk
                    section.data(344).logicalSrcIdx = 343;
                    section.data(344).dtTransOffset = 404;

                    ;% rtB.i2ksjgg0bi
                    section.data(345).logicalSrcIdx = 344;
                    section.data(345).dtTransOffset = 405;

                    ;% rtB.k2guxky2xo
                    section.data(346).logicalSrcIdx = 345;
                    section.data(346).dtTransOffset = 406;

                    ;% rtB.lvhdsuleax
                    section.data(347).logicalSrcIdx = 346;
                    section.data(347).dtTransOffset = 407;

                    ;% rtB.ikilfbir3x
                    section.data(348).logicalSrcIdx = 347;
                    section.data(348).dtTransOffset = 408;

                    ;% rtB.dlenpi3qon
                    section.data(349).logicalSrcIdx = 348;
                    section.data(349).dtTransOffset = 409;

                    ;% rtB.ciunac3nmz
                    section.data(350).logicalSrcIdx = 349;
                    section.data(350).dtTransOffset = 410;

                    ;% rtB.f3jftuckz0
                    section.data(351).logicalSrcIdx = 350;
                    section.data(351).dtTransOffset = 411;

                    ;% rtB.ai4o3nv2mj
                    section.data(352).logicalSrcIdx = 351;
                    section.data(352).dtTransOffset = 412;

                    ;% rtB.oy4y1mzym1
                    section.data(353).logicalSrcIdx = 352;
                    section.data(353).dtTransOffset = 413;

                    ;% rtB.eicwtqqrpy
                    section.data(354).logicalSrcIdx = 353;
                    section.data(354).dtTransOffset = 414;

                    ;% rtB.pzo3ueaa5q
                    section.data(355).logicalSrcIdx = 354;
                    section.data(355).dtTransOffset = 415;

                    ;% rtB.gfekw3o5mf
                    section.data(356).logicalSrcIdx = 355;
                    section.data(356).dtTransOffset = 416;

                    ;% rtB.fwnnvyx5ds
                    section.data(357).logicalSrcIdx = 356;
                    section.data(357).dtTransOffset = 417;

                    ;% rtB.pm40ur0c0b
                    section.data(358).logicalSrcIdx = 357;
                    section.data(358).dtTransOffset = 418;

                    ;% rtB.ni4yziq03t
                    section.data(359).logicalSrcIdx = 358;
                    section.data(359).dtTransOffset = 419;

                    ;% rtB.a2pulvvhzw
                    section.data(360).logicalSrcIdx = 359;
                    section.data(360).dtTransOffset = 420;

                    ;% rtB.fjazjcxbf5
                    section.data(361).logicalSrcIdx = 360;
                    section.data(361).dtTransOffset = 421;

                    ;% rtB.lefacdg35l
                    section.data(362).logicalSrcIdx = 361;
                    section.data(362).dtTransOffset = 422;

                    ;% rtB.pchqff3gco
                    section.data(363).logicalSrcIdx = 362;
                    section.data(363).dtTransOffset = 423;

                    ;% rtB.dajhgezcca
                    section.data(364).logicalSrcIdx = 363;
                    section.data(364).dtTransOffset = 424;

                    ;% rtB.pog1dds4lo
                    section.data(365).logicalSrcIdx = 364;
                    section.data(365).dtTransOffset = 425;

                    ;% rtB.ilxvw50cxi
                    section.data(366).logicalSrcIdx = 365;
                    section.data(366).dtTransOffset = 426;

                    ;% rtB.pfzcqjbxuf
                    section.data(367).logicalSrcIdx = 366;
                    section.data(367).dtTransOffset = 429;

                    ;% rtB.erqxwptbzb
                    section.data(368).logicalSrcIdx = 367;
                    section.data(368).dtTransOffset = 430;

                    ;% rtB.apik5kwxlu
                    section.data(369).logicalSrcIdx = 368;
                    section.data(369).dtTransOffset = 431;

                    ;% rtB.dffmus0i5p
                    section.data(370).logicalSrcIdx = 369;
                    section.data(370).dtTransOffset = 432;

                    ;% rtB.miu333buq5
                    section.data(371).logicalSrcIdx = 370;
                    section.data(371).dtTransOffset = 433;

                    ;% rtB.pcj0tpwlak
                    section.data(372).logicalSrcIdx = 371;
                    section.data(372).dtTransOffset = 434;

                    ;% rtB.nhsbm3kkk4
                    section.data(373).logicalSrcIdx = 372;
                    section.data(373).dtTransOffset = 435;

                    ;% rtB.lw2a4emitu
                    section.data(374).logicalSrcIdx = 373;
                    section.data(374).dtTransOffset = 438;

                    ;% rtB.fokvzatosq
                    section.data(375).logicalSrcIdx = 374;
                    section.data(375).dtTransOffset = 439;

                    ;% rtB.os0k0xqvmv
                    section.data(376).logicalSrcIdx = 375;
                    section.data(376).dtTransOffset = 440;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtB.avhtac2tm0
                    section.data(1).logicalSrcIdx = 376;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.p5dijejcv0
                    section.data(2).logicalSrcIdx = 377;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.oav0cf1zil
                    section.data(3).logicalSrcIdx = 378;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 16;
        sectIdxOffset = 2;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (rtDW)
        ;%
            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.gxa01cw4ez
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.lbhssclhma
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 3;

                    ;% rtDW.h4uigt1muq
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 6;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 9;
            section.data(9)  = dumData; %prealloc

                    ;% rtDW.nvw1rackbr
                    section.data(1).logicalSrcIdx = 3;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.hzjvdf301t
                    section.data(2).logicalSrcIdx = 4;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.clt1jiigfo
                    section.data(3).logicalSrcIdx = 5;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.maytklvj30
                    section.data(4).logicalSrcIdx = 6;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.mrjiam5zpv
                    section.data(5).logicalSrcIdx = 7;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.cn1ryvrwar
                    section.data(6).logicalSrcIdx = 8;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.gnjprsvhi2
                    section.data(7).logicalSrcIdx = 9;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.mcjlv5p2ej
                    section.data(8).logicalSrcIdx = 10;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.nqjqxj2sjf
                    section.data(9).logicalSrcIdx = 11;
                    section.data(9).dtTransOffset = 8;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 27;
            section.data(27)  = dumData; %prealloc

                    ;% rtDW.e5nbfw4a4p
                    section.data(1).logicalSrcIdx = 12;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.fptevv5hk0
                    section.data(2).logicalSrcIdx = 13;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.anhv2qtbhf
                    section.data(3).logicalSrcIdx = 14;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.p3bm21x4qj
                    section.data(4).logicalSrcIdx = 15;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.czjvqa1fxk
                    section.data(5).logicalSrcIdx = 16;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.bv2svjvaho
                    section.data(6).logicalSrcIdx = 17;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.lia1gimu2t
                    section.data(7).logicalSrcIdx = 18;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.ddjfp2l0hu
                    section.data(8).logicalSrcIdx = 19;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.la2sefxwwn
                    section.data(9).logicalSrcIdx = 20;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.ctdyzkmvkd
                    section.data(10).logicalSrcIdx = 21;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.o5yhr1pvei
                    section.data(11).logicalSrcIdx = 22;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.flacp15aeo
                    section.data(12).logicalSrcIdx = 23;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.pl1c14wmdt
                    section.data(13).logicalSrcIdx = 24;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.m1bsgbbj4b
                    section.data(14).logicalSrcIdx = 25;
                    section.data(14).dtTransOffset = 13;

                    ;% rtDW.dfzdxefv1y
                    section.data(15).logicalSrcIdx = 26;
                    section.data(15).dtTransOffset = 14;

                    ;% rtDW.h4rizcb3xp
                    section.data(16).logicalSrcIdx = 27;
                    section.data(16).dtTransOffset = 15;

                    ;% rtDW.p1i4epuxdi
                    section.data(17).logicalSrcIdx = 28;
                    section.data(17).dtTransOffset = 16;

                    ;% rtDW.emocmh5pqt
                    section.data(18).logicalSrcIdx = 29;
                    section.data(18).dtTransOffset = 17;

                    ;% rtDW.os4rgxfmmj
                    section.data(19).logicalSrcIdx = 30;
                    section.data(19).dtTransOffset = 18;

                    ;% rtDW.du1bjdreox
                    section.data(20).logicalSrcIdx = 31;
                    section.data(20).dtTransOffset = 19;

                    ;% rtDW.ota3k35use
                    section.data(21).logicalSrcIdx = 32;
                    section.data(21).dtTransOffset = 20;

                    ;% rtDW.a3v3e5yixy
                    section.data(22).logicalSrcIdx = 33;
                    section.data(22).dtTransOffset = 21;

                    ;% rtDW.i0f43lz4kd
                    section.data(23).logicalSrcIdx = 34;
                    section.data(23).dtTransOffset = 22;

                    ;% rtDW.p3yrq5ikuo
                    section.data(24).logicalSrcIdx = 35;
                    section.data(24).dtTransOffset = 23;

                    ;% rtDW.kflylsjq2u
                    section.data(25).logicalSrcIdx = 36;
                    section.data(25).dtTransOffset = 24;

                    ;% rtDW.oq55atyygt
                    section.data(26).logicalSrcIdx = 37;
                    section.data(26).dtTransOffset = 25;

                    ;% rtDW.hnfmuk2fdt
                    section.data(27).logicalSrcIdx = 38;
                    section.data(27).dtTransOffset = 26;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% rtDW.ec0rqo4l2o
                    section.data(1).logicalSrcIdx = 39;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.meq0o2am0j
                    section.data(2).logicalSrcIdx = 40;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.ompzk5n22k
                    section.data(3).logicalSrcIdx = 41;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.bzplb0ymvc
                    section.data(4).logicalSrcIdx = 42;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.cpe1al53eg.jyslo0tvel
                    section.data(1).logicalSrcIdx = 43;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.havcl53rud.jyslo0tvel
                    section.data(1).logicalSrcIdx = 44;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.n2e0ukonil.jyslo0tvel
                    section.data(1).logicalSrcIdx = 45;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.odap4wkgft.jyslo0tvel
                    section.data(1).logicalSrcIdx = 46;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.awxtj45csr.jyslo0tvel
                    section.data(1).logicalSrcIdx = 47;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.jjvlsi3jdf.jyslo0tvel
                    section.data(1).logicalSrcIdx = 48;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.amx55shqxl.jyslo0tvel
                    section.data(1).logicalSrcIdx = 49;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(11) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.amyioh3yyl.jyslo0tvel
                    section.data(1).logicalSrcIdx = 50;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(12) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.fqsnbatx0dt.jyslo0tvel
                    section.data(1).logicalSrcIdx = 51;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(13) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.c140n5sl3j.higwcjlzpv
                    section.data(1).logicalSrcIdx = 52;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(14) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.nfbajjnpq3.higwcjlzpv
                    section.data(1).logicalSrcIdx = 53;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(15) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.ozfexalcpnk.higwcjlzpv
                    section.data(1).logicalSrcIdx = 54;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(16) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 3885569052;
    targMap.checksum1 = 18220534;
    targMap.checksum2 = 500054226;
    targMap.checksum3 = 3860037998;

