object Form1: TForm1
  Left = 236
  Top = 131
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Form1'
  ClientHeight = 500
  ClientWidth = 500
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnCreate = FormCreate
  OnKeyDown = FormKeyDown
  PixelsPerInch = 120
  TextHeight = 16
  object MainImg: TImage
    Left = 0
    Top = 0
    Width = 169
    Height = 177
  end
  object Timer: TTimer
    Interval = 20
    OnTimer = TimerTimer
    Left = 464
    Top = 464
  end
end
