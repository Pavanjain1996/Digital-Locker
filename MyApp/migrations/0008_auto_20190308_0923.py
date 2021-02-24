# Generated by Django 2.1.5 on 2019-03-08 03:53

import datetime
from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('MyApp', '0007_upload_date'),
    ]

    operations = [
        migrations.RemoveField(
            model_name='customer',
            name='memory_status',
        ),
        migrations.AddField(
            model_name='customer',
            name='total_memory',
            field=models.IntegerField(default=10485760),
        ),
        migrations.AlterField(
            model_name='upload',
            name='date',
            field=models.DateField(default=datetime.datetime(2019, 3, 8, 9, 23, 31, 445917)),
        ),
    ]