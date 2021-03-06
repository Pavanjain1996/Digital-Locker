# Generated by Django 2.1.5 on 2019-03-02 09:01

from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='Customer',
            fields=[
                ('id', models.AutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('name', models.CharField(max_length=30)),
                ('age', models.IntegerField()),
                ('gender', models.CharField(max_length=10)),
                ('email', models.EmailField(max_length=30)),
                ('mobile', models.CharField(max_length=15)),
                ('profile', models.FileField(upload_to='')),
                ('username', models.CharField(max_length=30)),
            ],
        ),
    ]
