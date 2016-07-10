#include "MultiLanguageStrings.h"
#include "SSD1306.h"

#pragma diag_suppress 870

const char SystemInit_EN[]= "System Init...";
const char SystemInit_TW[] = "系統初始化...";
const char SystemInit_CN[] = "系统初始化...";
const char SystemInit_JP[] = "システムの初期化...";
const char* const SystemInit_Str[] = { SystemInit_EN,SystemInit_TW,SystemInit_CN,SystemInit_JP };

const char Capacity_EN[] = "Capacity:%dMB";
const char Capacity_TW[] = "容量:%dMB";
const char Capacity_CN[] = "容量:%dMB";
const char Capacity_JP[] = "容量:%dMB";
const char* const Capacity_Str[] = { Capacity_EN,Capacity_TW,Capacity_CN,Capacity_JP };

const char NoSD_EN[] = "No SDCard";
const char NoSD_TW[] = "沒有記憶體";
const char NoSD_CN[] = "没有SD卡";
const char NoSD_JP[] = "いいえTFカード";
const char* const NoSD_Str[] = { NoSD_EN,NoSD_TW,NoSD_CN,NoSD_JP };

const char WaitingForEBD_EN[] = "Waiting for EBD...";
const char WaitingForEBD_TW[] = "等待設備...";
const char WaitingForEBD_CN[] = "等待设备...";
const char WaitingForEBD_JP[] = "接続します...";
const char* const WaitingForEBD_Str[] = { WaitingForEBD_EN,WaitingForEBD_TW,WaitingForEBD_CN,WaitingForEBD_JP };

const char EBDConnected_EN[] = "EBD Connected";
const char EBDConnected_TW[] = "設備已連接";
const char EBDConnected_CN[] = "设备已连接";
const char EBDConnected_JP[] = "接続すでに";
const char* const EBDConnected_Str[] = { EBDConnected_EN,EBDConnected_TW,EBDConnected_CN,EBDConnected_JP };

const char Confirmation_EN[] = "Confirmation";
const char Confirmation_TW[] = "確認";
const char Confirmation_CN[] = "确认";
const char Confirmation_JP[] = "確認します";
const char* const Confirmation_Str[] = { Confirmation_EN,Confirmation_TW,Confirmation_CN,Confirmation_JP };

const char ConfirmCancel_EN[] = "Cancel%Comfirm";
const char ConfirmCancel_TW[] = " 取消 % 確認 ";
const char ConfirmCancel_CN[] = " 取消 % 确认 " ;
const char ConfirmCancel_JP[] = " キャンセル % はい ";
const char* const ConfirmCancel_Str[] = { ConfirmCancel_EN,ConfirmCancel_TW,ConfirmCancel_CN,ConfirmCancel_JP };

const char RecordConfirm_EN[] = "Start Record?";
const char RecordConfirm_TW[] = "開始記錄曲線? ";
const char RecordConfirm_CN[] = "开始记录曲线?" ;
const char RecordConfirm_JP[] = "曲線レコード?";
const char* const RecordConfirm_Str[] = { RecordConfirm_EN,RecordConfirm_TW,RecordConfirm_CN,RecordConfirm_JP };

const char QCMTKConfirm_EN[] = "QC/MTK Trigger?";
const char QCMTKConfirm_TW[] = "QC/MTK觸發?";
const char QCMTKConfirm_CN[] = "QC/MTK触发?" ;
const char QCMTKConfirm_JP[] = "QC/MTKトリガー?";
const char* const QCMTKConfirm_Str[] = { QCMTKConfirm_EN,QCMTKConfirm_TW,QCMTKConfirm_CN,QCMTKConfirm_JP };

const char StepUpConfirm_EN[] ="Step-up Test?";
const char StepUpConfirm_TW[] ="開始步進測試?";
const char StepUpConfirm_CN[] ="开始步进测试?" ;
const char StepUpConfirm_JP[] ="StepUpテスト?";
const char* const StepUpConfirm_Str[] = { StepUpConfirm_EN,StepUpConfirm_TW,StepUpConfirm_CN,StepUpConfirm_JP };

const char LegacyTestConfirm_EN[] ="Legacy test?";
const char LegacyTestConfirm_TW[] ="開始一般測試?";
const char LegacyTestConfirm_CN[] ="开始一般测试?" ;
const char LegacyTestConfirm_JP[] ="一般的なテスト?";
const char* const LegacyTestConfirm_Str[] = { LegacyTestConfirm_EN,LegacyTestConfirm_TW,LegacyTestConfirm_CN,LegacyTestConfirm_JP };

const char Saved_EN[] = "Saved";
const char Saved_TW[] = "已保存";
const char Saved_CN[] = "已保存";
const char Saved_JP[] = "保存";
const char* const Saved_Str[] = { Saved_EN,Saved_TW,Saved_CN,Saved_JP };

const char Settings_EN[]="Unmount Disk%Clock Settings%Buzzer Settings%Language%Set Model%System Info";
const char Settings_TW[]="彈出SD卡%時間設置%警報設置%Language%型號設置%系統資訊";
const char Settings_CN[] = "安全弹出存储卡%时间设置%蜂鸣器设置%Language%型号设置%系统信息" ;
const char Settings_JP[] ="トメモリイジェク%時刻の設定%警告の設定%Language%タイプの設定%システム情報";
const char* const Settings_Str[] = { Settings_EN,Settings_TW,Settings_CN,Settings_JP };

const char SettingsNoDisk_EN[]="Mount Disk%Clock Settings%Buzzer Settings%Language%Set Model%System Info";
const char SettingsNoDisk_TW[]="掛載SD卡%時間設置%警報設置%Language%型號設置%系統資訊";
const char SettingsNoDisk_CN[] = "挂载存储卡%时间设置%蜂鸣器设置%Language%型号设置%系统信息" ;
const char SettingsNoDisk_JP[] ="トメモリマウント%時刻の設定%警告の設定%Language%タイプの設定%システム情報";
const char* const SettingsNoDisk_Str[] = { SettingsNoDisk_EN,SettingsNoDisk_TW,SettingsNoDisk_CN,SettingsNoDisk_JP };

const char SettingsUnmounted_EN[]="Unmounted";
const char SettingsUnmounted_TW[]="已彈出";
const char SettingsUnmounted_CN[] = "已弹出" ;
const char SettingsUnmounted_JP[] ="イジェクよし";
const char* const SettingsUnmounted_Str[] = { SettingsUnmounted_EN,SettingsUnmounted_TW,SettingsUnmounted_CN,SettingsUnmounted_JP };

const char SettingsUnmountFailed_EN[]="Unmount Failed";
const char SettingsUnmountFailed_TW[]="彈出失敗";
const char SettingsUnmountFailed_CN[] = "弹出失败" ;
const char SettingsUnmountFailed_JP[] ="失敗します";
const char* const SettingsUnmountFailed_Str[] = { SettingsUnmountFailed_EN,SettingsUnmountFailed_TW,SettingsUnmountFailed_CN,SettingsUnmountFailed_JP };

const char SettingsMounted_EN[]="Mounted:%dMB";
const char SettingsMounted_TW[]="已掛載:%dMB";
const char SettingsMounted_CN[] = "已挂载:%dMB" ;
const char SettingsMounted_JP[] ="よし:%dMB";
const char* const SettingsMounted_Str[] = { SettingsMounted_EN,SettingsMounted_TW,SettingsMounted_CN,SettingsMounted_JP };

const char SettingsMountFailed_EN[]="Mount Failed";
const char SettingsMountFailed_TW[]="掛載失敗";
const char SettingsMountFailed_CN[] = "挂载失败" ;
const char SettingsMountFailed_JP[] ="失敗します";
const char* const SettingsMountFailed_Str[] = { SettingsMountFailed_EN,SettingsMountFailed_TW,SettingsMountFailed_CN,SettingsMountFailed_JP };

const char SetYear_EN[]="Set year";
const char SetYear_TW[]="設置年份";
const char SetYear_CN[] = "设置年份" ;
const char SetYear_JP[] ="年の設定";
const char* const SetYear_Str[] = { SetYear_EN,SetYear_TW,SetYear_CN,SetYear_JP };

const char SetYearUnit_EN[] ="";
const char SetYearUnit_TW[] ="年";
const char SetYearUnit_CN[] ="年" ;
const char SetYearUnit_JP[] ="年";
const char* const SetYearUnit_Str[] = { SetYearUnit_EN,SetYearUnit_TW,SetYearUnit_CN,SetYearUnit_JP };

const char SetMonth_EN[]="Set month";
const char SetMonth_TW[]="設置月份";
const char SetMonth_CN[] = "设置月份" ;
const char SetMonth_JP[] ="月の設定";
const char* const SetMonth_Str[] = { SetMonth_EN,SetMonth_TW,SetMonth_CN,SetMonth_JP };

const char SetMonthUnit_EN[] ="";
const char SetMonthUnit_TW[] ="月";
const char SetMonthUnit_CN[] ="月" ;
const char SetMonthUnit_JP[] ="月";
const char* const SetMonthUnit_Str[] = { SetMonthUnit_EN,SetMonthUnit_TW,SetMonthUnit_CN,SetMonthUnit_JP };

const char SetDay_EN[]="Set day";
const char SetDay_TW[]="設置日期";
const char SetDay_CN[] = "设置日期" ;
const char SetDay_JP[] ="天の設定";
const char* const SetDay_Str[] = { SetDay_EN,SetDay_TW,SetDay_CN,SetDay_JP };

const char SetDayUnit_EN[] ="";
const char SetDayUnit_TW[] ="日";
const char SetDayUnit_CN[] ="日" ;
const char SetDayUnit_JP[] ="日";
const char* const SetDayUnit_Str[] = { SetDayUnit_EN,SetDayUnit_TW,SetDayUnit_CN,SetDayUnit_JP };

const char SetHour_EN[]="Set hour";
const char SetHour_TW[]="設置小時";
const char SetHour_CN[] = "设置小时" ;
const char SetHour_JP[] ="時間を設定します";
const char* const SetHour_Str[] = { SetHour_EN,SetHour_TW,SetHour_CN,SetHour_JP };

const char SetHourUnit_EN[] ="";
const char SetHourUnit_TW[] ="時";
const char SetHourUnit_CN[] ="时" ;
const char SetHourUnit_JP[] ="時間";
const char* const SetHourUnit_Str[] = { SetHourUnit_EN,SetHourUnit_TW,SetHourUnit_CN,SetHourUnit_JP };

const char SetMin_EN[]="Set min";
const char SetMin_TW[]="設置分";
const char SetMin_CN[] = "设置分" ;
const char SetMin_JP[] ="分を設定します";
const char* const SetMin_Str[] = { SetMin_EN,SetMin_TW,SetMin_CN,SetMin_JP };

const char SetMinUnit_EN[] ="";
const char SetMinUnit_TW[] ="分";
const char SetMinUnit_CN[] ="分" ;
const char SetMinUnit_JP[] ="分";
const char* const SetMinUnit_Str[] = { SetMinUnit_EN,SetMinUnit_TW,SetMinUnit_CN,SetMinUnit_JP };

const char SetSec_EN[]="Set sec";
const char SetSec_TW[]="設置秒";
const char SetSec_CN[] = "设置秒" ;
const char SetSec_JP[] ="秒を設定します";
const char* const SetSec_Str[] = { SetSec_EN,SetSec_TW,SetSec_CN,SetSec_JP };

const char SetSecUnit_EN[] ="";
const char SetSecUnit_TW[] ="分";
const char SetSecUnit_CN[] ="分" ;
const char SetSecUnit_JP[] ="秒";
const char* const SetSecUnit_Str[] = { SetSecUnit_EN,SetSecUnit_TW,SetSecUnit_CN,SetSecUnit_JP };
	
const char TimeSetting_EN[] ="Applied";
const char TimeSetting_TW[] ="已應用";
const char TimeSetting_CN[] ="已应用" ;
const char TimeSetting_JP[] ="適用されました";
const char* const TimeSetting_Str[] = { TimeSetting_EN,TimeSetting_TW,TimeSetting_CN,TimeSetting_JP };

const char StartCurrentGet_EN[] ="I.Start";
const char StartCurrentGet_TW[] ="起始電流";
const char StartCurrentGet_CN[] ="起始电流" ;
const char StartCurrentGet_JP[] ="初期電流";
const char* const StartCurrentGet_Str[] = { StartCurrentGet_EN,StartCurrentGet_TW,StartCurrentGet_CN,StartCurrentGet_JP };

const char EndCurrentGet_EN[] ="I.End";
const char EndCurrentGet_TW[] ="終止電流";
const char EndCurrentGet_CN[] ="终止电流" ;
const char EndCurrentGet_JP[] ="終了電流";
const char* const EndCurrentGet_Str[] = { EndCurrentGet_EN,EndCurrentGet_TW,EndCurrentGet_CN,EndCurrentGet_JP };

const char StepCurrentGet_EN[] ="I.Step";
const char StepCurrentGet_TW[] ="步距";
const char StepCurrentGet_CN[] ="步距" ;
const char StepCurrentGet_JP[] ="ステップ";
const char* const StepCurrentGet_Str[] = { StepCurrentGet_EN,StepCurrentGet_TW,StepCurrentGet_CN,StepCurrentGet_JP };

const char TimeIntervalGet_EN[] ="T.Interval";
const char TimeIntervalGet_TW[] ="時間間隔";
const char TimeIntervalGet_CN[] ="时间间隔" ;
const char TimeIntervalGet_JP[] ="インターバル";
const char* const TimeIntervalGet_Str[] = { TimeIntervalGet_EN,TimeIntervalGet_TW,TimeIntervalGet_CN,TimeIntervalGet_JP };

const char ProtVoltageGet_EN[] ="V.Protect";
const char ProtVoltageGet_TW[] ="保護電壓";
const char ProtVoltageGet_CN[] ="保护电压" ;
const char ProtVoltageGet_JP[] ="電圧防護";
const char* const ProtVoltageGet_Str[] = { ProtVoltageGet_EN,ProtVoltageGet_TW,ProtVoltageGet_CN,ProtVoltageGet_JP };

const char RunTime_EN[] ="RunTime:";
const char RunTime_TW[] ="當前時間";
const char RunTime_CN[] ="当前时间" ;
const char RunTime_JP[] ="現在時刻";
const char* const RunTime_Str[] = { RunTime_EN,RunTime_TW,RunTime_CN,RunTime_JP };

const char CurrentVoltage_EN[] ="Voltage:";
const char CurrentVoltage_TW[] ="當前電壓";
const char CurrentVoltage_CN[] ="当前电压" ;
const char CurrentVoltage_JP[] ="現在電圧";
const char* const CurrentVoltage_Str[] = { CurrentVoltage_EN,CurrentVoltage_TW,CurrentVoltage_CN,CurrentVoltage_JP };

const char CurrentCurrent_EN[] ="Current:";
const char CurrentCurrent_TW[] ="當前電流";
const char CurrentCurrent_CN[] ="当前电流" ;
const char CurrentCurrent_JP[] ="現在電流";
const char* const CurrentCurrent_Str[] = { CurrentCurrent_EN,CurrentCurrent_TW,CurrentCurrent_CN,CurrentCurrent_JP };

const char StepUpTestRunning_EN[] ="Test Running...";
const char StepUpTestRunning_TW[] ="正在測試...";
const char StepUpTestRunning_CN[] ="正在测试..." ;
const char StepUpTestRunning_JP[] ="テスト運転中...";
const char* const StepUpTestRunning_Str[] = { StepUpTestRunning_EN,StepUpTestRunning_TW,StepUpTestRunning_CN,StepUpTestRunning_JP };

const char StepUpTestProtected_EN[] ="Protected";
const char StepUpTestProtected_TW[] ="已保護";
const char StepUpTestProtected_CN[] ="已保护" ;
const char StepUpTestProtected_JP[] ="保護されました";
const char* const StepUpTestProtected_Str[] = { StepUpTestProtected_EN,StepUpTestProtected_TW,StepUpTestProtected_CN,StepUpTestProtected_JP };

const char StepUpTestDone_EN[] ="Test Done";
const char StepUpTestDone_TW[] ="已完成測試";
const char StepUpTestDone_CN[] ="已完成测试" ;
const char StepUpTestDone_JP[] ="完成しました";
const char* const StepUpTestDone_Str[] = { StepUpTestDone_EN,StepUpTestDone_TW,StepUpTestDone_CN,StepUpTestDone_JP };

const char StepUpTestDialgram_EN[] ="Dialgram";
const char StepUpTestDialgram_TW[] ="圖像";
const char StepUpTestDialgram_CN[] ="图像" ;
const char StepUpTestDialgram_JP[] ="ダイアグラム";
const char* const StepUpTestDialgram_Str[] = { StepUpTestDialgram_EN,StepUpTestDialgram_TW,StepUpTestDialgram_CN,StepUpTestDialgram_JP };

const char StepUpTestList_EN[] ="ListView";
const char StepUpTestList_TW[] ="表格";
const char StepUpTestList_CN[] ="表格" ;
const char StepUpTestList_JP[] ="テーブル";
const char* const StepUpTestList_Str[] = { StepUpTestList_EN,StepUpTestList_TW,StepUpTestList_CN,StepUpTestList_JP };

const char StepUpTestDialgramTime_EN[] ="Time";
const char StepUpTestDialgramTime_TW[] ="時間";
const char StepUpTestDialgramTime_CN[] ="时间" ;
const char StepUpTestDialgramTime_JP[] ="時間";
const char* const StepUpTestDialgramTime_Str[] = { StepUpTestDialgramTime_EN,StepUpTestDialgramTime_TW,StepUpTestDialgramTime_CN,StepUpTestDialgramTime_JP };

const char StepUpTestDialgramCurrent_EN[] ="Current";
const char StepUpTestDialgramCurrent_TW[] ="電流";
const char StepUpTestDialgramCurrent_CN[] ="电流" ;
const char StepUpTestDialgramCurrent_JP[] ="電流";
const char* const StepUpTestDialgramCurrent_Str[] = { StepUpTestDialgramCurrent_EN,StepUpTestDialgramCurrent_TW,StepUpTestDialgramCurrent_CN,StepUpTestDialgramCurrent_JP };

const char StepUpTestDialgramVoltage_EN[] ="Voltage";
const char StepUpTestDialgramVoltage_TW[] ="電壓";
const char StepUpTestDialgramVoltage_CN[] ="电压" ;
const char StepUpTestDialgramVoltage_JP[] ="電圧";
const char* const StepUpTestDialgramVoltage_Str[] = { StepUpTestDialgramVoltage_EN,StepUpTestDialgramVoltage_TW,StepUpTestDialgramVoltage_CN,StepUpTestDialgramVoltage_JP };

const char StepUpTestExitBroswer_EN[] ="Exit Broswer?";
const char StepUpTestExitBroswer_TW[] ="退出瀏覽?";
const char StepUpTestExitBroswer_CN[] ="退出浏览?" ;
const char StepUpTestExitBroswer_JP[] ="ブラウザ終了?";
const char* const StepUpTestExitBroswer_Str[] = { StepUpTestExitBroswer_EN,StepUpTestExitBroswer_TW,StepUpTestExitBroswer_CN,StepUpTestExitBroswer_JP };

const char LegacyTestSetCurrent_EN[] ="I.Load";
const char LegacyTestSetCurrent_TW[] ="電流";
const char LegacyTestSetCurrent_CN[] ="电流";
const char LegacyTestSetCurrent_JP[] ="電流";
const char* const LegacyTestSetCurrent_Str[] = { LegacyTestSetCurrent_EN,LegacyTestSetCurrent_TW,LegacyTestSetCurrent_CN,LegacyTestSetCurrent_JP };

const char NoDiskConfirm_EN[] ="No SD,Continue?";
const char NoDiskConfirm_TW[] ="沒有SD卡,繼續?";
const char NoDiskConfirm_CN[] ="没有SD卡,继续?";
const char NoDiskConfirm_JP[] ="いいえSD,繼續?";
const char* const NoDiskConfirm_Str[] = { NoDiskConfirm_EN,NoDiskConfirm_TW,NoDiskConfirm_CN,NoDiskConfirm_JP };

const char FileCreated_EN[] ="File Created";
const char FileCreated_TW[] ="文件已創建";
const char FileCreated_CN[] ="文件已创建";
const char FileCreated_JP[] ="File Created";
const char* const FileCreated_Str[] = { FileCreated_EN,FileCreated_TW,FileCreated_CN,FileCreated_JP };

const char FileCreateFailed_EN[] ="Create Failed";
const char FileCreateFailed_TW[] ="文件創建失敗";
const char FileCreateFailed_CN[] ="文件创建失败";
const char FileCreateFailed_JP[] ="Create Failed";
const char* const FileCreateFailed_Str[] = { FileCreateFailed_EN,FileCreateFailed_TW,FileCreateFailed_CN,FileCreateFailed_JP };

const char Hint_EN[] ="Hint";
const char Hint_TW[] ="提示";
const char Hint_CN[] ="提示";
const char Hint_JP[] ="プロンプト";
const char* const Hint_Str[] = { Hint_EN,Hint_TW,Hint_CN,Hint_JP };

const char RecordIsRunningHint1_EN[] ="A record is";
const char RecordIsRunningHint1_TW[] ="記錄正在運行,";
const char RecordIsRunningHint1_CN[] ="记录正在运行,";
const char RecordIsRunningHint1_JP[] ="記録中,";
const char* const RecordIsRunningHint1_Str[] = { RecordIsRunningHint1_EN,RecordIsRunningHint1_TW,RecordIsRunningHint1_CN,RecordIsRunningHint1_JP };

const char RecordIsRunningHint2_EN[] ="runnning!!";
const char RecordIsRunningHint2_TW[] ="請先停止記錄!";
const char RecordIsRunningHint2_CN[] ="请先停止记录!";
const char RecordIsRunningHint2_JP[] ="停止どうぞ!";
const char* const RecordIsRunningHint2_Str[] = { RecordIsRunningHint2_EN,RecordIsRunningHint2_TW,RecordIsRunningHint2_CN,RecordIsRunningHint2_JP };

const char RecordStopConfirm_EN[] ="Stop record?";
const char RecordStopConfirm_TW[] ="停止記錄?";
const char RecordStopConfirm_CN[] ="停止记录?";
const char RecordStopConfirm_JP[] ="記錄停止?";
const char* const RecordStopConfirm_Str[] = { RecordStopConfirm_EN,RecordStopConfirm_TW,RecordStopConfirm_CN,RecordStopConfirm_JP };

const char RecordStarted_EN[] ="Record Started";
const char RecordStarted_TW[] ="記錄已開始";
const char RecordStarted_CN[] ="记录已开始";
const char RecordStarted_JP[] ="記錄始めます";
const char* const RecordStarted_Str[] = { RecordStarted_EN,RecordStarted_TW,RecordStarted_CN,RecordStarted_JP };

const char LegacyTestVoltLow_EN[] ="Volt too low";
const char LegacyTestVoltLow_TW[] ="電壓過低";
const char LegacyTestVoltLow_CN[] ="电压过低";
const char LegacyTestVoltLow_JP[] ="低電圧";
const char* const LegacyTestVoltLow_Str[] = { LegacyTestVoltLow_EN,LegacyTestVoltLow_TW,LegacyTestVoltLow_CN,LegacyTestVoltLow_JP };

const char LegacyTestStarted_EN[] ="Test Started";
const char LegacyTestStarted_TW[] ="一般測試已開始";
const char LegacyTestStarted_CN[] ="一般测试已开始";
const char LegacyTestStarted_JP[] ="テスト始めます";
const char* const LegacyTestStarted_Str[] = { LegacyTestStarted_EN,LegacyTestStarted_TW,LegacyTestStarted_CN,LegacyTestStarted_JP };

const char PleaseWait_EN[] ="Wait for seconds...";
const char PleaseWait_TW[] ="請稍後...";
const char PleaseWait_CN[] ="请稍后...";
const char PleaseWait_JP[] ="後ほど...";
const char* const PleaseWait_Str[] = { PleaseWait_EN,PleaseWait_TW,PleaseWait_CN,PleaseWait_JP };

const char SaveFailed_EN[] ="Save Failed";
const char SaveFailed_TW[] ="保存失敗";
const char SaveFailed_CN[] ="保存失败";
const char SaveFailed_JP[] ="保存失敗";
const char* const SaveFailed_Str[] = { SaveFailed_EN,SaveFailed_TW,SaveFailed_CN,SaveFailed_JP };

const char Summary_EN[] ="Summary";
const char Summary_TW[] ="測試統計信息";
const char Summary_CN[] ="测试统计信息";
const char Summary_JP[] ="テスト統計";
const char* const Summary_Str[] = { Summary_EN,Summary_TW,Summary_CN,Summary_JP };

const char SummaryCapacity_EN[] ="Capacity";
const char SummaryCapacity_TW[] ="容量";
const char SummaryCapacity_CN[] ="容量";
const char SummaryCapacity_JP[] ="容量";
const char* const SummaryCapacity_Str[] = { SummaryCapacity_EN,SummaryCapacity_TW,SummaryCapacity_CN,SummaryCapacity_JP };

const char SummaryWork_EN[] ="Work";
const char SummaryWork_TW[] ="功";
const char SummaryWork_CN[] ="功";
const char SummaryWork_JP[] ="パワー";
const char* const SummaryWork_Str[] = { SummaryWork_EN,SummaryWork_TW,SummaryWork_CN,SummaryWork_JP };

const char SummaryTime_EN[] ="Time";
const char SummaryTime_TW[] ="時間";
const char SummaryTime_CN[] ="时间";
const char SummaryTime_JP[] ="時間";
const char* const SummaryTime_Str[] = { SummaryTime_EN,SummaryTime_TW,SummaryTime_CN,SummaryTime_JP };

const char SummaryPlatVolt_EN[] ="Plat.Volt";
const char SummaryPlatVolt_TW[] ="平台電壓";
const char SummaryPlatVolt_CN[] ="平台电压";
const char SummaryPlatVolt_JP[] ="平均電圧";
const char* const SummaryPlatVolt_Str[] = { SummaryPlatVolt_EN,SummaryPlatVolt_TW,SummaryPlatVolt_CN,SummaryPlatVolt_JP };

const char USBMassStorage_EN[] ="USB MassStorage";
const char USBMassStorage_TW[] ="USB大容量存儲";
const char USBMassStorage_CN[] ="USB大容量存储";
const char USBMassStorage_JP[] ="マスストレージ";
const char* const USBMassStorage_Str[] = { USBMassStorage_EN,USBMassStorage_TW,USBMassStorage_CN,USBMassStorage_JP };

const char MountUSBMassStorageConfirm_EN[] ="Mount USB?";
const char MountUSBMassStorageConfirm_TW[] ="掛載USB存儲?";
const char MountUSBMassStorageConfirm_CN[] ="挂载USB存储?";
const char MountUSBMassStorageConfirm_JP[] ="マウントUSB?";
const char* const MountUSBMassStorageConfirm_Str[] = { MountUSBMassStorageConfirm_EN,MountUSBMassStorageConfirm_TW,MountUSBMassStorageConfirm_CN,MountUSBMassStorageConfirm_JP };

const char UnMountUSBMassStorage_EN[] ="Unmount";
const char UnMountUSBMassStorage_TW[] =" 彈出 ";
const char UnMountUSBMassStorage_CN[] =" 弹出 ";
const char UnMountUSBMassStorage_JP[] ="取り出し";
const char* const UnMountUSBMassStorage_Str[] = { UnMountUSBMassStorage_EN,UnMountUSBMassStorage_TW,UnMountUSBMassStorage_CN,UnMountUSBMassStorage_JP };

const char USBMassStorageStatus_EN[] ="Status:";
const char USBMassStorageStatus_TW[] ="狀態:";
const char USBMassStorageStatus_CN[] ="状态:";
const char USBMassStorageStatus_JP[] ="状態:";
const char* const USBMassStorageStatus_Str[] = { USBMassStorageStatus_EN,USBMassStorageStatus_TW,USBMassStorageStatus_CN,USBMassStorageStatus_JP };

const char USBMassStorageStatusReading_EN[] =" Reading";
const char USBMassStorageStatusReading_TW[] ="正在讀取";
const char USBMassStorageStatusReading_CN[] ="正在读取";
const char USBMassStorageStatusReading_JP[] ="読みます";
const char* const USBMassStorageStatusReading_Str[] = { USBMassStorageStatusReading_EN,USBMassStorageStatusReading_TW,USBMassStorageStatusReading_CN,USBMassStorageStatusReading_JP };

const char USBMassStorageStatusWriting_EN[] =" Writing";
const char USBMassStorageStatusWriting_TW[] ="正在寫入";
const char USBMassStorageStatusWriting_CN[] ="正在写入";
const char USBMassStorageStatusWriting_JP[] ="書きます";
const char* const USBMassStorageStatusWriting_Str[] = { USBMassStorageStatusWriting_EN,USBMassStorageStatusWriting_TW,USBMassStorageStatusWriting_CN,USBMassStorageStatusWriting_JP };

const char USBMassStorageStatusIdling_EN[] ="--Idle--";
const char USBMassStorageStatusIdling_TW[] ="--空閒--";
const char USBMassStorageStatusIdling_CN[] ="--空闲--";
const char USBMassStorageStatusIdling_JP[] ="アイドル";
const char* const USBMassStorageStatusIdling_Str[] = { USBMassStorageStatusIdling_EN,USBMassStorageStatusIdling_TW,USBMassStorageStatusIdling_CN,USBMassStorageStatusIdling_JP };

const char SelectLeagcyTestMode_EN[] ="Mode";
const char SelectLeagcyTestMode_TW[] ="模式";
const char SelectLeagcyTestMode_CN[] ="模式";
const char SelectLeagcyTestMode_JP[] ="モード";
const char* const SelectLeagcyTestMode_Str[] = { SelectLeagcyTestMode_EN,SelectLeagcyTestMode_TW,SelectLeagcyTestMode_CN,SelectLeagcyTestMode_JP };

const char SelectLeagcyTestModeSubString_EN[] ="Select Mode:";
const char SelectLeagcyTestModeSubString_TW[] ="選擇測試模式:";
const char SelectLeagcyTestModeSubString_CN[] ="选择测试模式:";
const char SelectLeagcyTestModeSubString_JP[] ="モード選択:";
const char* const SelectLeagcyTestModeSubString_Str[] = { SelectLeagcyTestModeSubString_EN,SelectLeagcyTestModeSubString_TW,SelectLeagcyTestModeSubString_CN,SelectLeagcyTestModeSubString_JP };

const char SelectLeagcyTestModeButtons_EN[] ="C.Current%C.Power";
const char SelectLeagcyTestModeButtons_TW[] =" 恆電流 % 恆功率 ";
const char SelectLeagcyTestModeButtons_CN[] =" 恒电流 % 恒功率 ";
const char SelectLeagcyTestModeButtons_JP[] =" 定電流 % 定電力 ";
const char* const SelectLeagcyTestModeButtons_Str[] = { SelectLeagcyTestModeButtons_EN,SelectLeagcyTestModeButtons_TW,SelectLeagcyTestModeButtons_CN,SelectLeagcyTestModeButtons_JP };

const char LegacyTestSetPower_EN[] ="Power";
const char LegacyTestSetPower_TW[] ="電功率";
const char LegacyTestSetPower_CN[] ="电功率";
const char LegacyTestSetPower_JP[] ="電力";
const char* const LegacyTestSetPower_Str[] = { LegacyTestSetPower_EN,LegacyTestSetPower_TW,LegacyTestSetPower_CN,LegacyTestSetPower_JP };

const char SetTimeHint_EN[] ="Set Time";
const char SetTimeHint_TW[] ="時間設置";
const char SetTimeHint_CN[] ="时间设置";
const char SetTimeHint_JP[] ="時刻の設定";
const char* const SetTimeHint_Str[] = { SetTimeHint_EN,SetTimeHint_TW,SetTimeHint_CN,SetTimeHint_JP };

const char SetModelHint_EN[] ="Set Model";
const char SetModelHint_TW[] ="型號設置";
const char SetModelHint_CN[] ="型号设置";
const char SetModelHint_JP[] ="タイプの設定";
const char* const SetModelHint_Str[] = { SetModelHint_EN,SetModelHint_TW,SetModelHint_CN,SetModelHint_JP };

const char SystemOverHeat_EN[] ="System OverHeat";
const char SystemOverHeat_TW[] ="系統過熱";
const char SystemOverHeat_CN[] ="系统过热";
const char SystemOverHeat_JP[] ="オーバーヒート";
const char* const SystemOverHeat_Str[] = { SystemOverHeat_EN,SystemOverHeat_TW,SystemOverHeat_CN,SystemOverHeat_JP };

const char TestPaused_EN[] ="Test paused";
const char TestPaused_TW[] ="測試已暫停";
const char TestPaused_CN[] ="测试已暂停";
const char TestPaused_JP[] ="テスト一時停止";
const char* const TestPaused_Str[] = { TestPaused_EN,TestPaused_TW,TestPaused_CN,TestPaused_JP };

const OLED_PositionStruct ComfirmationPositions[LanguageNum][2] =
{
{20,45,76,45},
{36,45,84,45},
{36,45,84,45},
{8 ,45,84,45}
};

const OLED_PositionStruct SelectLegacyTestModePositions[LanguageNum][2] =
{
{10,44,74,44},
{10,44,71,44},
{10,44,71,44},
{10,44,71,44}
};



