import "ecere"

class Form1 : Window
{
   caption = $"Form1";
   background = formColor;
   borderStyle = sizable;
   hasMaximize = true;
   hasMinimize = true;
   hasClose = true;
   clientSize = { 320, 304 };

   EditBox editBox1
   {
      this, caption = $"editBox1", position = { 56, 120 };

      bool NotifyModified(EditBox editBox)
      {

         return true;
      }

      void NotifyUpdate(EditBox editBox)
      {
            editBox2.MakeActive();
      }
   };
   EditBox editBox2 { this, caption = $"editBox2", position = { 184, 112 } };
}

Form1 form1 {};
