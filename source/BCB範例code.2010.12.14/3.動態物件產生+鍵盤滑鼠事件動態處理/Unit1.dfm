object Form1: TForm1
  Left = 222
  Top = 173
  Width = 573
  Height = 447
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -14
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 120
  TextHeight = 16
  object Label1: TLabel
    Left = 36
    Top = 21
    Width = 202
    Height = 37
    Caption = 'I'#39'm static label'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -34
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Button1: TButton
    Left = 423
    Top = 337
    Width = 93
    Height = 31
    Caption = 'Test button'
    TabOrder = 0
    OnClick = Button1Click
    OnKeyDown = Button1KeyDown
  end
end
